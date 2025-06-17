const std = @import("std");

pub fn main() !void {
    const stdin = std.io.getStdIn().reader();
    var stdout = std.io.getStdOut().writer();
    var buf: [100]u8 = undefined;

    try stdout.print("Enter Temperature in C/F: ", .{});
    const line = try stdin.readUntilDelimiter(&buf, '\n');

    var tokens = std.mem.tokenizeAny(u8, line, " \t\r\n");
    const a = try std.fmt.parseInt(i32, tokens.next().?, 10);
    const b = try std.fmt.parseInt(i32, tokens.next().?, 10);

    try stdout.print("You entered: {} and {}\n", .{ a, b });
}
