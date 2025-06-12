const std = @import("std");
const stdin = std.io.getStdIn().reader();
const stdout = std.io.getStdOut().writer();
const stderr = std.io.getStdErr().writer();

pub fn main() !void {
    _ = try stdout.write("This is the impl of assignment 1(a) in zig\nEnter the Temperature: ");
    // var temp =
    _ = try getfloatfromstdin();
}

pub fn getfloatfromstdin() !void {
    var buffer: [32]u8 = undefined;

    const result = try stdin.readUntilDelimiter(&buffer, '\n');
    try stdout.print("{s}", .{buffer[0..result.len]});
}
