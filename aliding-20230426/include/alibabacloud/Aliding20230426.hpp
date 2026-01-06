// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIDING20230426_HPP_
#define ALIBABACLOUD_ALIDING20230426_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Aliding20230426Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Aliding20230426.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加日程参与者
       *
       * @param tmpReq AddAttendeeRequest
       * @param tmpHeader AddAttendeeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAttendeeResponse
       */
      Models::AddAttendeeResponse addAttendeeWithOptions(const Models::AddAttendeeRequest &tmpReq, const Models::AddAttendeeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加日程参与者
       *
       * @param request AddAttendeeRequest
       * @return AddAttendeeResponse
       */
      Models::AddAttendeeResponse addAttendee(const Models::AddAttendeeRequest &request);

      /**
       * @summary 新建钉盘空间
       *
       * @param tmpReq AddDriveSpaceRequest
       * @param tmpHeader AddDriveSpaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDriveSpaceResponse
       */
      Models::AddDriveSpaceResponse addDriveSpaceWithOptions(const Models::AddDriveSpaceRequest &tmpReq, const Models::AddDriveSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建钉盘空间
       *
       * @param request AddDriveSpaceRequest
       * @return AddDriveSpaceResponse
       */
      Models::AddDriveSpaceResponse addDriveSpace(const Models::AddDriveSpaceRequest &request);

      /**
       * @summary 添加文件夹
       *
       * @param tmpReq AddFolderRequest
       * @param tmpHeader AddFolderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFolderResponse
       */
      Models::AddFolderResponse addFolderWithOptions(const Models::AddFolderRequest &tmpReq, const Models::AddFolderHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加文件夹
       *
       * @param request AddFolderRequest
       * @return AddFolderResponse
       */
      Models::AddFolderResponse addFolder(const Models::AddFolderRequest &request);

      /**
       * @summary 预定会议室
       *
       * @param tmpReq AddMeetingRoomsRequest
       * @param tmpHeader AddMeetingRoomsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMeetingRoomsResponse
       */
      Models::AddMeetingRoomsResponse addMeetingRoomsWithOptions(const Models::AddMeetingRoomsRequest &tmpReq, const Models::AddMeetingRoomsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预定会议室
       *
       * @param request AddMeetingRoomsRequest
       * @return AddMeetingRoomsResponse
       */
      Models::AddMeetingRoomsResponse addMeetingRooms(const Models::AddMeetingRoomsRequest &request);

      /**
       * @summary 新增数据表
       *
       * @param tmpReq AddMultiDimTableRequest
       * @param tmpHeader AddMultiDimTableHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMultiDimTableResponse
       */
      Models::AddMultiDimTableResponse addMultiDimTableWithOptions(const Models::AddMultiDimTableRequest &tmpReq, const Models::AddMultiDimTableHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增数据表
       *
       * @param request AddMultiDimTableRequest
       * @return AddMultiDimTableResponse
       */
      Models::AddMultiDimTableResponse addMultiDimTable(const Models::AddMultiDimTableRequest &request);

      /**
       * @summary 添加文件权限
       *
       * @param tmpReq AddPermissionRequest
       * @param tmpHeader AddPermissionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPermissionResponse
       */
      Models::AddPermissionResponse addPermissionWithOptions(const Models::AddPermissionRequest &tmpReq, const Models::AddPermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加文件权限
       *
       * @param request AddPermissionRequest
       * @return AddPermissionResponse
       */
      Models::AddPermissionResponse addPermission(const Models::AddPermissionRequest &request);

      /**
       * @summary 添加闪记权限
       *
       * @param tmpReq AddRecordPermissionRequest
       * @param tmpHeader AddRecordPermissionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecordPermissionResponse
       */
      Models::AddRecordPermissionResponse addRecordPermissionWithOptions(const Models::AddRecordPermissionRequest &tmpReq, const Models::AddRecordPermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加闪记权限
       *
       * @param request AddRecordPermissionRequest
       * @return AddRecordPermissionResponse
       */
      Models::AddRecordPermissionResponse addRecordPermission(const Models::AddRecordPermissionRequest &request);

      /**
       * @summary 新增群成员
       *
       * @param request AddScenegroupMemberRequest
       * @param tmpHeader AddScenegroupMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddScenegroupMemberResponse
       */
      Models::AddScenegroupMemberResponse addScenegroupMemberWithOptions(const Models::AddScenegroupMemberRequest &request, const Models::AddScenegroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增群成员
       *
       * @param request AddScenegroupMemberRequest
       * @return AddScenegroupMemberResponse
       */
      Models::AddScenegroupMemberResponse addScenegroupMember(const Models::AddScenegroupMemberRequest &request);

      /**
       * @summary 工单添加备注
       *
       * @param tmpReq AddTicketMemoRequest
       * @param tmpHeader AddTicketMemoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTicketMemoResponse
       */
      Models::AddTicketMemoResponse addTicketMemoWithOptions(const Models::AddTicketMemoRequest &tmpReq, const Models::AddTicketMemoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工单添加备注
       *
       * @param request AddTicketMemoRequest
       * @return AddTicketMemoResponse
       */
      Models::AddTicketMemoResponse addTicketMemo(const Models::AddTicketMemoRequest &request);

      /**
       * @summary 新建知识库
       *
       * @param tmpReq AddWorkspaceRequest
       * @param tmpHeader AddWorkspaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWorkspaceResponse
       */
      Models::AddWorkspaceResponse addWorkspaceWithOptions(const Models::AddWorkspaceRequest &tmpReq, const Models::AddWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建知识库
       *
       * @param request AddWorkspaceRequest
       * @return AddWorkspaceResponse
       */
      Models::AddWorkspaceResponse addWorkspace(const Models::AddWorkspaceRequest &request);

      /**
       * @summary 添加知识库文档成员
       *
       * @param tmpReq AddWorkspaceDocMembersRequest
       * @param tmpHeader AddWorkspaceDocMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWorkspaceDocMembersResponse
       */
      Models::AddWorkspaceDocMembersResponse addWorkspaceDocMembersWithOptions(const Models::AddWorkspaceDocMembersRequest &tmpReq, const Models::AddWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加知识库文档成员
       *
       * @param request AddWorkspaceDocMembersRequest
       * @return AddWorkspaceDocMembersResponse
       */
      Models::AddWorkspaceDocMembersResponse addWorkspaceDocMembers(const Models::AddWorkspaceDocMembersRequest &request);

      /**
       * @summary 添加知识库成员
       *
       * @param tmpReq AddWorkspaceMembersRequest
       * @param tmpHeader AddWorkspaceMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWorkspaceMembersResponse
       */
      Models::AddWorkspaceMembersResponse addWorkspaceMembersWithOptions(const Models::AddWorkspaceMembersRequest &tmpReq, const Models::AddWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加知识库成员
       *
       * @param request AddWorkspaceMembersRequest
       * @return AddWorkspaceMembersResponse
       */
      Models::AddWorkspaceMembersResponse addWorkspaceMembers(const Models::AddWorkspaceMembersRequest &request);

      /**
       * @summary 指派工单
       *
       * @param tmpReq AssignTicketRequest
       * @param tmpHeader AssignTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignTicketResponse
       */
      Models::AssignTicketResponse assignTicketWithOptions(const Models::AssignTicketRequest &tmpReq, const Models::AssignTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指派工单
       *
       * @param request AssignTicketRequest
       * @return AssignTicketResponse
       */
      Models::AssignTicketResponse assignTicket(const Models::AssignTicketRequest &request);

      /**
       * @summary 校验AI技能调用权限
       *
       * @param tmpReq AuthorizeSkillRequest
       * @param tmpHeader AuthorizeSkillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSkillResponse
       */
      Models::AuthorizeSkillResponse authorizeSkillWithOptions(const Models::AuthorizeSkillRequest &tmpReq, const Models::AuthorizeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验AI技能调用权限
       *
       * @param request AuthorizeSkillRequest
       * @return AuthorizeSkillResponse
       */
      Models::AuthorizeSkillResponse authorizeSkill(const Models::AuthorizeSkillRequest &request);

      /**
       * @summary 批量获取表单实例数据
       *
       * @param tmpReq BatchGetFormDataByIdListRequest
       * @param tmpHeader BatchGetFormDataByIdListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetFormDataByIdListResponse
       */
      Models::BatchGetFormDataByIdListResponse batchGetFormDataByIdListWithOptions(const Models::BatchGetFormDataByIdListRequest &tmpReq, const Models::BatchGetFormDataByIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取表单实例数据
       *
       * @param request BatchGetFormDataByIdListRequest
       * @return BatchGetFormDataByIdListResponse
       */
      Models::BatchGetFormDataByIdListResponse batchGetFormDataByIdList(const Models::BatchGetFormDataByIdListRequest &request);

      /**
       * @summary 批量删除表单实例
       *
       * @param tmpReq BatchRemovalByFormInstanceIdListRequest
       * @param tmpHeader BatchRemovalByFormInstanceIdListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRemovalByFormInstanceIdListResponse
       */
      Models::BatchRemovalByFormInstanceIdListResponse batchRemovalByFormInstanceIdListWithOptions(const Models::BatchRemovalByFormInstanceIdListRequest &tmpReq, const Models::BatchRemovalByFormInstanceIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除表单实例
       *
       * @param request BatchRemovalByFormInstanceIdListRequest
       * @return BatchRemovalByFormInstanceIdListResponse
       */
      Models::BatchRemovalByFormInstanceIdListResponse batchRemovalByFormInstanceIdList(const Models::BatchRemovalByFormInstanceIdListRequest &request);

      /**
       * @summary 批量创建表单实例
       *
       * @param tmpReq BatchSaveFormDataRequest
       * @param tmpHeader BatchSaveFormDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSaveFormDataResponse
       */
      Models::BatchSaveFormDataResponse batchSaveFormDataWithOptions(const Models::BatchSaveFormDataRequest &tmpReq, const Models::BatchSaveFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建表单实例
       *
       * @param request BatchSaveFormDataRequest
       * @return BatchSaveFormDataResponse
       */
      Models::BatchSaveFormDataResponse batchSaveFormData(const Models::BatchSaveFormDataRequest &request);

      /**
       * @summary 批量更新表单实例内的组件值
       *
       * @param tmpReq BatchUpdateFormDataByInstanceIdRequest
       * @param tmpHeader BatchUpdateFormDataByInstanceIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateFormDataByInstanceIdResponse
       */
      Models::BatchUpdateFormDataByInstanceIdResponse batchUpdateFormDataByInstanceIdWithOptions(const Models::BatchUpdateFormDataByInstanceIdRequest &tmpReq, const Models::BatchUpdateFormDataByInstanceIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新表单实例内的组件值
       *
       * @param request BatchUpdateFormDataByInstanceIdRequest
       * @return BatchUpdateFormDataByInstanceIdResponse
       */
      Models::BatchUpdateFormDataByInstanceIdResponse batchUpdateFormDataByInstanceId(const Models::BatchUpdateFormDataByInstanceIdRequest &request);

      /**
       * @summary 通过表单实例数据批量更新表单实例
       *
       * @param tmpReq BatchUpdateFormDataByInstanceMapRequest
       * @param tmpHeader BatchUpdateFormDataByInstanceMapHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateFormDataByInstanceMapResponse
       */
      Models::BatchUpdateFormDataByInstanceMapResponse batchUpdateFormDataByInstanceMapWithOptions(const Models::BatchUpdateFormDataByInstanceMapRequest &tmpReq, const Models::BatchUpdateFormDataByInstanceMapHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过表单实例数据批量更新表单实例
       *
       * @param request BatchUpdateFormDataByInstanceMapRequest
       * @return BatchUpdateFormDataByInstanceMapResponse
       */
      Models::BatchUpdateFormDataByInstanceMapResponse batchUpdateFormDataByInstanceMap(const Models::BatchUpdateFormDataByInstanceMapRequest &request);

      /**
       * @summary 取消预约会议
       *
       * @param tmpReq CancelScheduleConferenceRequest
       * @param tmpHeader CancelScheduleConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelScheduleConferenceResponse
       */
      Models::CancelScheduleConferenceResponse cancelScheduleConferenceWithOptions(const Models::CancelScheduleConferenceRequest &tmpReq, const Models::CancelScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消预约会议
       *
       * @param request CancelScheduleConferenceRequest
       * @return CancelScheduleConferenceResponse
       */
      Models::CancelScheduleConferenceResponse cancelScheduleConference(const Models::CancelScheduleConferenceRequest &request);

      /**
       * @summary 修改阿里钉号
       *
       * @param tmpReq ChangeDingTalkIdRequest
       * @param tmpHeader ChangeDingTalkIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDingTalkIdResponse
       */
      Models::ChangeDingTalkIdResponse changeDingTalkIdWithOptions(const Models::ChangeDingTalkIdRequest &tmpReq, const Models::ChangeDingTalkIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改阿里钉号
       *
       * @param request ChangeDingTalkIdRequest
       * @return ChangeDingTalkIdResponse
       */
      Models::ChangeDingTalkIdResponse changeDingTalkId(const Models::ChangeDingTalkIdRequest &request);

      /**
       * @summary 校验阿里员工
       *
       * @param tmpReq CheckAlibabaStaffRequest
       * @param tmpHeader CheckAlibabaStaffHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAlibabaStaffResponse
       */
      Models::CheckAlibabaStaffResponse checkAlibabaStaffWithOptions(const Models::CheckAlibabaStaffRequest &tmpReq, const Models::CheckAlibabaStaffHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验阿里员工
       *
       * @param request CheckAlibabaStaffRequest
       * @return CheckAlibabaStaffResponse
       */
      Models::CheckAlibabaStaffResponse checkAlibabaStaff(const Models::CheckAlibabaStaffRequest &request);

      /**
       * @summary 查询用户是否为企业内部群成员
       *
       * @param request CheckUserIsGroupMemberRequest
       * @param tmpHeader CheckUserIsGroupMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserIsGroupMemberResponse
       */
      Models::CheckUserIsGroupMemberResponse checkUserIsGroupMemberWithOptions(const Models::CheckUserIsGroupMemberRequest &request, const Models::CheckUserIsGroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户是否为企业内部群成员
       *
       * @param request CheckUserIsGroupMemberRequest
       * @return CheckUserIsGroupMemberResponse
       */
      Models::CheckUserIsGroupMemberResponse checkUserIsGroupMember(const Models::CheckUserIsGroupMemberRequest &request);

      /**
       * @summary 清除单元格所有内容
       *
       * @param tmpReq ClearRequest
       * @param tmpHeader ClearHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearResponse
       */
      Models::ClearResponse clearWithOptions(const Models::ClearRequest &tmpReq, const Models::ClearHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除单元格所有内容
       *
       * @param request ClearRequest
       * @return ClearResponse
       */
      Models::ClearResponse clear(const Models::ClearRequest &request);

      /**
       * @summary 清除单元格数据
       *
       * @param tmpReq ClearDataRequest
       * @param tmpHeader ClearDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearDataResponse
       */
      Models::ClearDataResponse clearDataWithOptions(const Models::ClearDataRequest &tmpReq, const Models::ClearDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除单元格数据
       *
       * @param request ClearDataRequest
       * @return ClearDataResponse
       */
      Models::ClearDataResponse clearData(const Models::ClearDataRequest &request);

      /**
       * @summary 关闭视频会议
       *
       * @param tmpReq CloseVideoConferenceRequest
       * @param tmpHeader CloseVideoConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseVideoConferenceResponse
       */
      Models::CloseVideoConferenceResponse closeVideoConferenceWithOptions(const Models::CloseVideoConferenceRequest &tmpReq, const Models::CloseVideoConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭视频会议
       *
       * @param request CloseVideoConferenceRequest
       * @return CloseVideoConferenceResponse
       */
      Models::CloseVideoConferenceResponse closeVideoConference(const Models::CloseVideoConferenceRequest &request);

      /**
       * @summary 获取日志评论列表
       *
       * @param tmpReq CommentListReportRequest
       * @param tmpHeader CommentListReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommentListReportResponse
       */
      Models::CommentListReportResponse commentListReportWithOptions(const Models::CommentListReportRequest &tmpReq, const Models::CommentListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志评论列表
       *
       * @param request CommentListReportRequest
       * @return CommentListReportResponse
       */
      Models::CommentListReportResponse commentListReport(const Models::CommentListReportRequest &request);

      /**
       * @summary 提交文件
       *
       * @param tmpReq CommitFileRequest
       * @param tmpHeader CommitFileHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitFileResponse
       */
      Models::CommitFileResponse commitFileWithOptions(const Models::CommitFileRequest &tmpReq, const Models::CommitFileHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交文件
       *
       * @param request CommitFileRequest
       * @return CommitFileResponse
       */
      Models::CommitFileResponse commitFile(const Models::CommitFileRequest &request);

      /**
       * @summary 创建知识库节点副本
       *
       * @param tmpReq CopyDentryRequest
       * @param tmpHeader CopyDentryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDentryResponse
       */
      Models::CopyDentryResponse copyDentryWithOptions(const Models::CopyDentryRequest &tmpReq, const Models::CopyDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库节点副本
       *
       * @param request CopyDentryRequest
       * @return CopyDentryResponse
       */
      Models::CopyDentryResponse copyDentry(const Models::CopyDentryRequest &request);

      /**
       * @summary 通过NodeId创建知识库节点副本
       *
       * @param tmpReq CopyDentryByNodeIdRequest
       * @param tmpHeader CopyDentryByNodeIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDentryByNodeIdResponse
       */
      Models::CopyDentryByNodeIdResponse copyDentryByNodeIdWithOptions(const Models::CopyDentryByNodeIdRequest &tmpReq, const Models::CopyDentryByNodeIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过NodeId创建知识库节点副本
       *
       * @param request CopyDentryByNodeIdRequest
       * @return CopyDentryByNodeIdResponse
       */
      Models::CopyDentryByNodeIdResponse copyDentryByNodeId(const Models::CopyDentryByNodeIdRequest &request);

      /**
       * @param tmpReq CreateAlidingAssistantRequest
       * @param tmpHeader CreateAlidingAssistantHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlidingAssistantResponse
       */
      Models::CreateAlidingAssistantResponse createAlidingAssistantWithOptions(const Models::CreateAlidingAssistantRequest &tmpReq, const Models::CreateAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAlidingAssistantRequest
       * @return CreateAlidingAssistantResponse
       */
      Models::CreateAlidingAssistantResponse createAlidingAssistant(const Models::CreateAlidingAssistantRequest &request);

      /**
       * @summary 发布钉钉投放活动
       *
       * @param tmpReq CreateDeliveryPlanRequest
       * @param tmpHeader CreateDeliveryPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeliveryPlanResponse
       */
      Models::CreateDeliveryPlanResponse createDeliveryPlanWithOptions(const Models::CreateDeliveryPlanRequest &tmpReq, const Models::CreateDeliveryPlanHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布钉钉投放活动
       *
       * @param request CreateDeliveryPlanRequest
       * @return CreateDeliveryPlanResponse
       */
      Models::CreateDeliveryPlanResponse createDeliveryPlan(const Models::CreateDeliveryPlanRequest &request);

      /**
       * @summary 委托权限创建钉钉个人待办
       *
       * @param tmpReq CreateDingtalkPersonalTodoTaskRequest
       * @param tmpHeader CreateDingtalkPersonalTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDingtalkPersonalTodoTaskResponse
       */
      Models::CreateDingtalkPersonalTodoTaskResponse createDingtalkPersonalTodoTaskWithOptions(const Models::CreateDingtalkPersonalTodoTaskRequest &tmpReq, const Models::CreateDingtalkPersonalTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 委托权限创建钉钉个人待办
       *
       * @param request CreateDingtalkPersonalTodoTaskRequest
       * @return CreateDingtalkPersonalTodoTaskResponse
       */
      Models::CreateDingtalkPersonalTodoTaskResponse createDingtalkPersonalTodoTask(const Models::CreateDingtalkPersonalTodoTaskRequest &request);

      /**
       * @summary 创建日程
       *
       * @param tmpReq CreateEventRequest
       * @param tmpHeader CreateEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventResponse
       */
      Models::CreateEventResponse createEventWithOptions(const Models::CreateEventRequest &tmpReq, const Models::CreateEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建日程
       *
       * @param request CreateEventRequest
       * @return CreateEventResponse
       */
      Models::CreateEventResponse createEvent(const Models::CreateEventRequest &request);

      /**
       * @summary 创建直播
       *
       * @param tmpReq CreateLiveRequest
       * @param tmpHeader CreateLiveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveResponse
       */
      Models::CreateLiveResponse createLiveWithOptions(const Models::CreateLiveRequest &tmpReq, const Models::CreateLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建直播
       *
       * @param request CreateLiveRequest
       * @return CreateLiveResponse
       */
      Models::CreateLiveResponse createLive(const Models::CreateLiveRequest &request);

      /**
       * @summary 创建会议室
       *
       * @param tmpReq CreateMeetingRoomRequest
       * @param tmpHeader CreateMeetingRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMeetingRoomResponse
       */
      Models::CreateMeetingRoomResponse createMeetingRoomWithOptions(const Models::CreateMeetingRoomRequest &tmpReq, const Models::CreateMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建会议室
       *
       * @param request CreateMeetingRoomRequest
       * @return CreateMeetingRoomResponse
       */
      Models::CreateMeetingRoomResponse createMeetingRoom(const Models::CreateMeetingRoomRequest &request);

      /**
       * @summary 创建会议室分组
       *
       * @param tmpReq CreateMeetingRoomGroupRequest
       * @param tmpHeader CreateMeetingRoomGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMeetingRoomGroupResponse
       */
      Models::CreateMeetingRoomGroupResponse createMeetingRoomGroupWithOptions(const Models::CreateMeetingRoomGroupRequest &tmpReq, const Models::CreateMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建会议室分组
       *
       * @param request CreateMeetingRoomGroupRequest
       * @return CreateMeetingRoomGroupResponse
       */
      Models::CreateMeetingRoomGroupResponse createMeetingRoomGroup(const Models::CreateMeetingRoomGroupRequest &request);

      /**
       * @summary 创建消息
       *
       * @param request CreateMessageRequest
       * @param headers CreateMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageResponse
       */
      Models::CreateMessageResponse createMessageWithOptions(const Models::CreateMessageRequest &request, const Models::CreateMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建消息
       *
       * @param request CreateMessageRequest
       * @return CreateMessageResponse
       */
      Models::CreateMessageResponse createMessage(const Models::CreateMessageRequest &request);

      /**
       * @summary 创建字段
       *
       * @param tmpReq CreateMultiDimTableFieldRequest
       * @param tmpHeader CreateMultiDimTableFieldHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiDimTableFieldResponse
       */
      Models::CreateMultiDimTableFieldResponse createMultiDimTableFieldWithOptions(const Models::CreateMultiDimTableFieldRequest &tmpReq, const Models::CreateMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建字段
       *
       * @param request CreateMultiDimTableFieldRequest
       * @return CreateMultiDimTableFieldResponse
       */
      Models::CreateMultiDimTableFieldResponse createMultiDimTableField(const Models::CreateMultiDimTableFieldRequest &request);

      /**
       * @summary 新增或更新表单实例
       *
       * @param request CreateOrUpdateFormDataRequest
       * @param tmpHeader CreateOrUpdateFormDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateFormDataResponse
       */
      Models::CreateOrUpdateFormDataResponse createOrUpdateFormDataWithOptions(const Models::CreateOrUpdateFormDataRequest &request, const Models::CreateOrUpdateFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增或更新表单实例
       *
       * @param request CreateOrUpdateFormDataRequest
       * @return CreateOrUpdateFormDataResponse
       */
      Models::CreateOrUpdateFormDataResponse createOrUpdateFormData(const Models::CreateOrUpdateFormDataRequest &request);

      /**
       * @summary 创建荣誉勋章模板
       *
       * @param tmpReq CreateOrgHonorTemplateRequest
       * @param tmpHeader CreateOrgHonorTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrgHonorTemplateResponse
       */
      Models::CreateOrgHonorTemplateResponse createOrgHonorTemplateWithOptions(const Models::CreateOrgHonorTemplateRequest &tmpReq, const Models::CreateOrgHonorTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建荣誉勋章模板
       *
       * @param request CreateOrgHonorTemplateRequest
       * @return CreateOrgHonorTemplateResponse
       */
      Models::CreateOrgHonorTemplateResponse createOrgHonorTemplate(const Models::CreateOrgHonorTemplateRequest &request);

      /**
       * @summary 创建钉钉个人待办任务
       *
       * @param tmpReq CreatePersonalTodoTaskRequest
       * @param tmpHeader CreatePersonalTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalTodoTaskResponse
       */
      Models::CreatePersonalTodoTaskResponse createPersonalTodoTaskWithOptions(const Models::CreatePersonalTodoTaskRequest &tmpReq, const Models::CreatePersonalTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建钉钉个人待办任务
       *
       * @param request CreatePersonalTodoTaskRequest
       * @return CreatePersonalTodoTaskResponse
       */
      Models::CreatePersonalTodoTaskResponse createPersonalTodoTask(const Models::CreatePersonalTodoTaskRequest &request);

      /**
       * @summary 创建日志
       *
       * @param tmpReq CreateReportRequest
       * @param tmpHeader CreateReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReportResponse
       */
      Models::CreateReportResponse createReportWithOptions(const Models::CreateReportRequest &tmpReq, const Models::CreateReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建日志
       *
       * @param request CreateReportRequest
       * @return CreateReportResponse
       */
      Models::CreateReportResponse createReport(const Models::CreateReportRequest &request);

      /**
       * @summary 创建运行
       *
       * @param request CreateRunRequest
       * @param headers CreateRunHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRunResponse
       */
      FutureGenerator<Models::CreateRunResponse> createRunWithSSE(const Models::CreateRunRequest &request, const Models::CreateRunHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建运行
       *
       * @param request CreateRunRequest
       * @param headers CreateRunHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRunResponse
       */
      Models::CreateRunResponse createRunWithOptions(const Models::CreateRunRequest &request, const Models::CreateRunHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建运行
       *
       * @param request CreateRunRequest
       * @return CreateRunResponse
       */
      Models::CreateRunResponse createRun(const Models::CreateRunRequest &request);

      /**
       * @summary 创建场景群
       *
       * @param request CreateScenegroupRequest
       * @param tmpHeader CreateScenegroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScenegroupResponse
       */
      Models::CreateScenegroupResponse createScenegroupWithOptions(const Models::CreateScenegroupRequest &request, const Models::CreateScenegroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建场景群
       *
       * @param request CreateScenegroupRequest
       * @return CreateScenegroupResponse
       */
      Models::CreateScenegroupResponse createScenegroup(const Models::CreateScenegroupRequest &request);

      /**
       * @summary 创建预约会议
       *
       * @param tmpReq CreateScheduleConferenceRequest
       * @param tmpHeader CreateScheduleConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduleConferenceResponse
       */
      Models::CreateScheduleConferenceResponse createScheduleConferenceWithOptions(const Models::CreateScheduleConferenceRequest &tmpReq, const Models::CreateScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建预约会议
       *
       * @param request CreateScheduleConferenceRequest
       * @return CreateScheduleConferenceResponse
       */
      Models::CreateScheduleConferenceResponse createScheduleConference(const Models::CreateScheduleConferenceRequest &request);

      /**
       * @summary 发布钉钉搜索穹顶
       *
       * @param tmpReq CreateSearchDomeRequest
       * @param tmpHeader CreateSearchDomeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchDomeResponse
       */
      Models::CreateSearchDomeResponse createSearchDomeWithOptions(const Models::CreateSearchDomeRequest &tmpReq, const Models::CreateSearchDomeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布钉钉搜索穹顶
       *
       * @param request CreateSearchDomeRequest
       * @return CreateSearchDomeResponse
       */
      Models::CreateSearchDomeResponse createSearchDome(const Models::CreateSearchDomeRequest &request);

      /**
       * @summary 发布钉钉搜索关键词
       *
       * @param tmpReq CreateSearchKeywordRequest
       * @param tmpHeader CreateSearchKeywordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchKeywordResponse
       */
      Models::CreateSearchKeywordResponse createSearchKeywordWithOptions(const Models::CreateSearchKeywordRequest &tmpReq, const Models::CreateSearchKeywordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布钉钉搜索关键词
       *
       * @param request CreateSearchKeywordRequest
       * @return CreateSearchKeywordResponse
       */
      Models::CreateSearchKeywordResponse createSearchKeyword(const Models::CreateSearchKeywordRequest &request);

      /**
       * @summary 创建工作表
       *
       * @param tmpReq CreateSheetRequest
       * @param tmpHeader CreateSheetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSheetResponse
       */
      Models::CreateSheetResponse createSheetWithOptions(const Models::CreateSheetRequest &tmpReq, const Models::CreateSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作表
       *
       * @param request CreateSheetRequest
       * @return CreateSheetResponse
       */
      Models::CreateSheetResponse createSheet(const Models::CreateSheetRequest &request);

      /**
       * @summary 创建订阅日历
       *
       * @param tmpReq CreateSubscribedCalendarRequest
       * @param tmpHeader CreateSubscribedCalendarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscribedCalendarResponse
       */
      Models::CreateSubscribedCalendarResponse createSubscribedCalendarWithOptions(const Models::CreateSubscribedCalendarRequest &tmpReq, const Models::CreateSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建订阅日历
       *
       * @param request CreateSubscribedCalendarRequest
       * @return CreateSubscribedCalendarResponse
       */
      Models::CreateSubscribedCalendarResponse createSubscribedCalendar(const Models::CreateSubscribedCalendarRequest &request);

      /**
       * @summary 创建线程
       *
       * @param request CreateThreadRequest
       * @param headers CreateThreadHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThreadWithOptions(const Models::CreateThreadRequest &request, const Models::CreateThreadHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建线程
       *
       * @param request CreateThreadRequest
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThread(const Models::CreateThreadRequest &request);

      /**
       * @summary 创建工单
       *
       * @param tmpReq CreateTicketRequest
       * @param tmpHeader CreateTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &tmpReq, const Models::CreateTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工单
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary 创建代办
       *
       * @param tmpReq CreateTodoTaskRequest
       * @param tmpHeader CreateTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTodoTaskResponse
       */
      Models::CreateTodoTaskResponse createTodoTaskWithOptions(const Models::CreateTodoTaskRequest &tmpReq, const Models::CreateTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代办
       *
       * @param request CreateTodoTaskRequest
       * @return CreateTodoTaskResponse
       */
      Models::CreateTodoTaskResponse createTodoTask(const Models::CreateTodoTaskRequest &request);

      /**
       * @summary 创建视频会议
       *
       * @param tmpReq CreateVideoConferenceRequest
       * @param tmpHeader CreateVideoConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoConferenceResponse
       */
      Models::CreateVideoConferenceResponse createVideoConferenceWithOptions(const Models::CreateVideoConferenceRequest &tmpReq, const Models::CreateVideoConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建视频会议
       *
       * @param request CreateVideoConferenceRequest
       * @return CreateVideoConferenceResponse
       */
      Models::CreateVideoConferenceResponse createVideoConference(const Models::CreateVideoConferenceRequest &request);

      /**
       * @summary 创建知识库
       *
       * @param tmpReq CreateWorkspaceRequest
       * @param tmpHeader CreateWorkspaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &tmpReq, const Models::CreateWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary 创建知识库文档
       *
       * @param tmpReq CreateWorkspaceDocRequest
       * @param tmpHeader CreateWorkspaceDocHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceDocResponse
       */
      Models::CreateWorkspaceDocResponse createWorkspaceDocWithOptions(const Models::CreateWorkspaceDocRequest &tmpReq, const Models::CreateWorkspaceDocHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库文档
       *
       * @param request CreateWorkspaceDocRequest
       * @return CreateWorkspaceDocResponse
       */
      Models::CreateWorkspaceDocResponse createWorkspaceDoc(const Models::CreateWorkspaceDocRequest &request);

      /**
       * @param tmpReq DeleteAlidingAssistantRequest
       * @param tmpHeader DeleteAlidingAssistantHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlidingAssistantResponse
       */
      Models::DeleteAlidingAssistantResponse deleteAlidingAssistantWithOptions(const Models::DeleteAlidingAssistantRequest &tmpReq, const Models::DeleteAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAlidingAssistantRequest
       * @return DeleteAlidingAssistantResponse
       */
      Models::DeleteAlidingAssistantResponse deleteAlidingAssistant(const Models::DeleteAlidingAssistantRequest &request);

      /**
       * @summary 删除指定列
       *
       * @param tmpReq DeleteColumnsRequest
       * @param tmpHeader DeleteColumnsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteColumnsResponse
       */
      Models::DeleteColumnsResponse deleteColumnsWithOptions(const Models::DeleteColumnsRequest &tmpReq, const Models::DeleteColumnsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定列
       *
       * @param request DeleteColumnsRequest
       * @return DeleteColumnsResponse
       */
      Models::DeleteColumnsResponse deleteColumns(const Models::DeleteColumnsRequest &request);

      /**
       * @summary 删除文件或文件夹
       *
       * @param tmpReq DeleteDentryRequest
       * @param tmpHeader DeleteDentryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDentryResponse
       */
      Models::DeleteDentryResponse deleteDentryWithOptions(const Models::DeleteDentryRequest &tmpReq, const Models::DeleteDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件或文件夹
       *
       * @param request DeleteDentryRequest
       * @return DeleteDentryResponse
       */
      Models::DeleteDentryResponse deleteDentry(const Models::DeleteDentryRequest &request);

      /**
       * @summary 删除钉盘空间
       *
       * @param tmpReq DeleteDriveSpaceRequest
       * @param tmpHeader DeleteDriveSpaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDriveSpaceResponse
       */
      Models::DeleteDriveSpaceResponse deleteDriveSpaceWithOptions(const Models::DeleteDriveSpaceRequest &tmpReq, const Models::DeleteDriveSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除钉盘空间
       *
       * @param request DeleteDriveSpaceRequest
       * @return DeleteDriveSpaceResponse
       */
      Models::DeleteDriveSpaceResponse deleteDriveSpace(const Models::DeleteDriveSpaceRequest &request);

      /**
       * @summary 删除日程
       *
       * @param request DeleteEventRequest
       * @param tmpHeader DeleteEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventResponse
       */
      Models::DeleteEventResponse deleteEventWithOptions(const Models::DeleteEventRequest &request, const Models::DeleteEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除日程
       *
       * @param request DeleteEventRequest
       * @return DeleteEventResponse
       */
      Models::DeleteEventResponse deleteEvent(const Models::DeleteEventRequest &request);

      /**
       * @summary 删除表单数据
       *
       * @param request DeleteFormDataRequest
       * @param tmpHeader DeleteFormDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFormDataResponse
       */
      Models::DeleteFormDataResponse deleteFormDataWithOptions(const Models::DeleteFormDataRequest &request, const Models::DeleteFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除表单数据
       *
       * @param request DeleteFormDataRequest
       * @return DeleteFormDataResponse
       */
      Models::DeleteFormDataResponse deleteFormData(const Models::DeleteFormDataRequest &request);

      /**
       * @param request DeleteInstanceRequest
       * @param tmpHeader DeleteInstanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Models::DeleteInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除直播
       *
       * @param tmpReq DeleteLiveRequest
       * @param tmpHeader DeleteLiveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveResponse
       */
      Models::DeleteLiveResponse deleteLiveWithOptions(const Models::DeleteLiveRequest &tmpReq, const Models::DeleteLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除直播
       *
       * @param request DeleteLiveRequest
       * @return DeleteLiveResponse
       */
      Models::DeleteLiveResponse deleteLive(const Models::DeleteLiveRequest &request);

      /**
       * @summary 删除会议室
       *
       * @param tmpReq DeleteMeetingRoomRequest
       * @param tmpHeader DeleteMeetingRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMeetingRoomResponse
       */
      Models::DeleteMeetingRoomResponse deleteMeetingRoomWithOptions(const Models::DeleteMeetingRoomRequest &tmpReq, const Models::DeleteMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除会议室
       *
       * @param request DeleteMeetingRoomRequest
       * @return DeleteMeetingRoomResponse
       */
      Models::DeleteMeetingRoomResponse deleteMeetingRoom(const Models::DeleteMeetingRoomRequest &request);

      /**
       * @summary 删除会议室分组
       *
       * @param tmpReq DeleteMeetingRoomGroupRequest
       * @param tmpHeader DeleteMeetingRoomGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMeetingRoomGroupResponse
       */
      Models::DeleteMeetingRoomGroupResponse deleteMeetingRoomGroupWithOptions(const Models::DeleteMeetingRoomGroupRequest &tmpReq, const Models::DeleteMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除会议室分组
       *
       * @param request DeleteMeetingRoomGroupRequest
       * @return DeleteMeetingRoomGroupResponse
       */
      Models::DeleteMeetingRoomGroupResponse deleteMeetingRoomGroup(const Models::DeleteMeetingRoomGroupRequest &request);

      /**
       * @summary 删除字段
       *
       * @param tmpReq DeleteMultiDimTableFieldRequest
       * @param tmpHeader DeleteMultiDimTableFieldHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultiDimTableFieldResponse
       */
      Models::DeleteMultiDimTableFieldResponse deleteMultiDimTableFieldWithOptions(const Models::DeleteMultiDimTableFieldRequest &tmpReq, const Models::DeleteMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除字段
       *
       * @param request DeleteMultiDimTableFieldRequest
       * @return DeleteMultiDimTableFieldResponse
       */
      Models::DeleteMultiDimTableFieldResponse deleteMultiDimTableField(const Models::DeleteMultiDimTableFieldRequest &request);

      /**
       * @summary 删除多行记录
       *
       * @param tmpReq DeleteMultiDimTableRecordsRequest
       * @param tmpHeader DeleteMultiDimTableRecordsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultiDimTableRecordsResponse
       */
      Models::DeleteMultiDimTableRecordsResponse deleteMultiDimTableRecordsWithOptions(const Models::DeleteMultiDimTableRecordsRequest &tmpReq, const Models::DeleteMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多行记录
       *
       * @param request DeleteMultiDimTableRecordsRequest
       * @return DeleteMultiDimTableRecordsResponse
       */
      Models::DeleteMultiDimTableRecordsResponse deleteMultiDimTableRecords(const Models::DeleteMultiDimTableRecordsRequest &request);

      /**
       * @summary 删除文件权限
       *
       * @param tmpReq DeletePermissionRequest
       * @param tmpHeader DeletePermissionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePermissionResponse
       */
      Models::DeletePermissionResponse deletePermissionWithOptions(const Models::DeletePermissionRequest &tmpReq, const Models::DeletePermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件权限
       *
       * @param request DeletePermissionRequest
       * @return DeletePermissionResponse
       */
      Models::DeletePermissionResponse deletePermission(const Models::DeletePermissionRequest &request);

      /**
       * @summary 删除指定行
       *
       * @param tmpReq DeleteRowsRequest
       * @param tmpHeader DeleteRowsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRowsResponse
       */
      Models::DeleteRowsResponse deleteRowsWithOptions(const Models::DeleteRowsRequest &tmpReq, const Models::DeleteRowsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定行
       *
       * @param request DeleteRowsRequest
       * @return DeleteRowsResponse
       */
      Models::DeleteRowsResponse deleteRows(const Models::DeleteRowsRequest &request);

      /**
       * @summary 删除群成员
       *
       * @param request DeleteScenegroupMemberRequest
       * @param tmpHeader DeleteScenegroupMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScenegroupMemberResponse
       */
      Models::DeleteScenegroupMemberResponse deleteScenegroupMemberWithOptions(const Models::DeleteScenegroupMemberRequest &request, const Models::DeleteScenegroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除群成员
       *
       * @param request DeleteScenegroupMemberRequest
       * @return DeleteScenegroupMemberResponse
       */
      Models::DeleteScenegroupMemberResponse deleteScenegroupMember(const Models::DeleteScenegroupMemberRequest &request);

      /**
       * @summary 删除一个工作表
       *
       * @param tmpReq DeleteSheetRequest
       * @param tmpHeader DeleteSheetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSheetResponse
       */
      Models::DeleteSheetResponse deleteSheetWithOptions(const Models::DeleteSheetRequest &tmpReq, const Models::DeleteSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个工作表
       *
       * @param request DeleteSheetRequest
       * @return DeleteSheetResponse
       */
      Models::DeleteSheetResponse deleteSheet(const Models::DeleteSheetRequest &request);

      /**
       * @summary 删除订阅日历
       *
       * @param request DeleteSubscribedCalendarRequest
       * @param tmpHeader DeleteSubscribedCalendarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubscribedCalendarResponse
       */
      Models::DeleteSubscribedCalendarResponse deleteSubscribedCalendarWithOptions(const Models::DeleteSubscribedCalendarRequest &request, const Models::DeleteSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除订阅日历
       *
       * @param request DeleteSubscribedCalendarRequest
       * @return DeleteSubscribedCalendarResponse
       */
      Models::DeleteSubscribedCalendarResponse deleteSubscribedCalendar(const Models::DeleteSubscribedCalendarRequest &request);

      /**
       * @summary 删除代办
       *
       * @param tmpReq DeleteTodoTaskRequest
       * @param tmpHeader DeleteTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTodoTaskResponse
       */
      Models::DeleteTodoTaskResponse deleteTodoTaskWithOptions(const Models::DeleteTodoTaskRequest &tmpReq, const Models::DeleteTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代办
       *
       * @param request DeleteTodoTaskRequest
       * @return DeleteTodoTaskResponse
       */
      Models::DeleteTodoTaskResponse deleteTodoTask(const Models::DeleteTodoTaskRequest &request);

      /**
       * @summary 删除知识库文档成员
       *
       * @param tmpReq DeleteWorkspaceDocMembersRequest
       * @param tmpHeader DeleteWorkspaceDocMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceDocMembersResponse
       */
      Models::DeleteWorkspaceDocMembersResponse deleteWorkspaceDocMembersWithOptions(const Models::DeleteWorkspaceDocMembersRequest &tmpReq, const Models::DeleteWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除知识库文档成员
       *
       * @param request DeleteWorkspaceDocMembersRequest
       * @return DeleteWorkspaceDocMembersResponse
       */
      Models::DeleteWorkspaceDocMembersResponse deleteWorkspaceDocMembers(const Models::DeleteWorkspaceDocMembersRequest &request);

      /**
       * @summary 删除知识库成员
       *
       * @param tmpReq DeleteWorkspaceMembersRequest
       * @param tmpHeader DeleteWorkspaceMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceMembersResponse
       */
      Models::DeleteWorkspaceMembersResponse deleteWorkspaceMembersWithOptions(const Models::DeleteWorkspaceMembersRequest &tmpReq, const Models::DeleteWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除知识库成员
       *
       * @param request DeleteWorkspaceMembersRequest
       * @return DeleteWorkspaceMembersResponse
       */
      Models::DeleteWorkspaceMembersResponse deleteWorkspaceMembers(const Models::DeleteWorkspaceMembersRequest &request);

      /**
       * @summary 删除块元素
       *
       * @param tmpReq DocBlocksDeleteRequest
       * @param tmpHeader DocBlocksDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocBlocksDeleteResponse
       */
      Models::DocBlocksDeleteResponse docBlocksDeleteWithOptions(const Models::DocBlocksDeleteRequest &tmpReq, const Models::DocBlocksDeleteHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除块元素
       *
       * @param request DocBlocksDeleteRequest
       * @return DocBlocksDeleteResponse
       */
      Models::DocBlocksDeleteResponse docBlocksDelete(const Models::DocBlocksDeleteRequest &request);

      /**
       * @summary 更新块元素
       *
       * @param tmpReq DocBlocksModifyRequest
       * @param tmpHeader DocBlocksModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocBlocksModifyResponse
       */
      Models::DocBlocksModifyResponse docBlocksModifyWithOptions(const Models::DocBlocksModifyRequest &tmpReq, const Models::DocBlocksModifyHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新块元素
       *
       * @param request DocBlocksModifyRequest
       * @return DocBlocksModifyResponse
       */
      Models::DocBlocksModifyResponse docBlocksModify(const Models::DocBlocksModifyRequest &request);

      /**
       * @summary 查询块元素
       *
       * @param tmpReq DocBlocksQueryRequest
       * @param tmpHeader DocBlocksQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocBlocksQueryResponse
       */
      Models::DocBlocksQueryResponse docBlocksQueryWithOptions(const Models::DocBlocksQueryRequest &tmpReq, const Models::DocBlocksQueryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询块元素
       *
       * @param request DocBlocksQueryRequest
       * @return DocBlocksQueryResponse
       */
      Models::DocBlocksQueryResponse docBlocksQuery(const Models::DocBlocksQueryRequest &request);

      /**
       * @summary 覆写文档
       *
       * @param tmpReq DocUpdateContentRequest
       * @param tmpHeader DocUpdateContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocUpdateContentResponse
       */
      Models::DocUpdateContentResponse docUpdateContentWithOptions(const Models::DocUpdateContentRequest &tmpReq, const Models::DocUpdateContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 覆写文档
       *
       * @param request DocUpdateContentRequest
       * @return DocUpdateContentResponse
       */
      Models::DocUpdateContentResponse docUpdateContent(const Models::DocUpdateContentRequest &request);

      /**
       * @summary 批量执行宜搭审批任务
       *
       * @param request ExecuteBatchTaskRequest
       * @param tmpHeader ExecuteBatchTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteBatchTaskResponse
       */
      Models::ExecuteBatchTaskResponse executeBatchTaskWithOptions(const Models::ExecuteBatchTaskRequest &request, const Models::ExecuteBatchTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量执行宜搭审批任务
       *
       * @param request ExecuteBatchTaskRequest
       * @return ExecuteBatchTaskResponse
       */
      Models::ExecuteBatchTaskResponse executeBatchTask(const Models::ExecuteBatchTaskRequest &request);

      /**
       * @summary 执行宜搭的审批任务
       *
       * @param request ExecutePlatformTaskRequest
       * @param tmpHeader ExecutePlatformTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecutePlatformTaskResponse
       */
      Models::ExecutePlatformTaskResponse executePlatformTaskWithOptions(const Models::ExecutePlatformTaskRequest &request, const Models::ExecutePlatformTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行宜搭的审批任务
       *
       * @param request ExecutePlatformTaskRequest
       * @return ExecutePlatformTaskResponse
       */
      Models::ExecutePlatformTaskResponse executePlatformTask(const Models::ExecutePlatformTaskRequest &request);

      /**
       * @summary 同意或拒绝宜搭审批任务(执行审批任务)
       *
       * @param request ExecuteTaskRequest
       * @param tmpHeader ExecuteTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTaskResponse
       */
      Models::ExecuteTaskResponse executeTaskWithOptions(const Models::ExecuteTaskRequest &request, const Models::ExecuteTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同意或拒绝宜搭审批任务(执行审批任务)
       *
       * @param request ExecuteTaskRequest
       * @return ExecuteTaskResponse
       */
      Models::ExecuteTaskResponse executeTask(const Models::ExecuteTaskRequest &request);

      /**
       * @summary 群扩容
       *
       * @param tmpReq ExpandGroupCapacityRequest
       * @param tmpHeader ExpandGroupCapacityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandGroupCapacityResponse
       */
      Models::ExpandGroupCapacityResponse expandGroupCapacityWithOptions(const Models::ExpandGroupCapacityRequest &tmpReq, const Models::ExpandGroupCapacityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 群扩容
       *
       * @param request ExpandGroupCapacityRequest
       * @return ExpandGroupCapacityResponse
       */
      Models::ExpandGroupCapacityResponse expandGroupCapacity(const Models::ExpandGroupCapacityRequest &request);

      /**
       * @summary 完结工单
       *
       * @param tmpReq FinishTicketRequest
       * @param tmpHeader FinishTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishTicketResponse
       */
      Models::FinishTicketResponse finishTicketWithOptions(const Models::FinishTicketRequest &tmpReq, const Models::FinishTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 完结工单
       *
       * @param request FinishTicketRequest
       * @return FinishTicketResponse
       */
      Models::FinishTicketResponse finishTicket(const Models::FinishTicketRequest &request);

      /**
       * @summary 获取流程设计的节点信息
       *
       * @param request GetActivityListRequest
       * @param tmpHeader GetActivityListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetActivityListResponse
       */
      Models::GetActivityListResponse getActivityListWithOptions(const Models::GetActivityListRequest &request, const Models::GetActivityListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程设计的节点信息
       *
       * @param request GetActivityListRequest
       * @return GetActivityListResponse
       */
      Models::GetActivityListResponse getActivityList(const Models::GetActivityListRequest &request);

      /**
       * @summary 获取阿里钉ai助理信息
       *
       * @param tmpReq GetAlidingAssistantInfoRequest
       * @param tmpHeader GetAlidingAssistantInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlidingAssistantInfoResponse
       */
      Models::GetAlidingAssistantInfoResponse getAlidingAssistantInfoWithOptions(const Models::GetAlidingAssistantInfoRequest &tmpReq, const Models::GetAlidingAssistantInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取阿里钉ai助理信息
       *
       * @param request GetAlidingAssistantInfoRequest
       * @return GetAlidingAssistantInfoResponse
       */
      Models::GetAlidingAssistantInfoResponse getAlidingAssistantInfo(const Models::GetAlidingAssistantInfoRequest &request);

      /**
       * @summary 获取所有工作表
       *
       * @param tmpReq GetAllSheetsRequest
       * @param tmpHeader GetAllSheetsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllSheetsResponse
       */
      Models::GetAllSheetsResponse getAllSheetsWithOptions(const Models::GetAllSheetsRequest &tmpReq, const Models::GetAllSheetsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有工作表
       *
       * @param request GetAllSheetsRequest
       * @return GetAllSheetsResponse
       */
      Models::GetAllSheetsResponse getAllSheets(const Models::GetAllSheetsRequest &request);

      /**
       * @summary 获取助理能力
       *
       * @param request GetAssistantCapabilityRequest
       * @param headers GetAssistantCapabilityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssistantCapabilityResponse
       */
      Models::GetAssistantCapabilityResponse getAssistantCapabilityWithOptions(const Models::GetAssistantCapabilityRequest &request, const Models::GetAssistantCapabilityHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取助理能力
       *
       * @param request GetAssistantCapabilityRequest
       * @return GetAssistantCapabilityResponse
       */
      Models::GetAssistantCapabilityResponse getAssistantCapability(const Models::GetAssistantCapabilityRequest &request);

      /**
       * @param tmpReq GetCardTemplateRequest
       * @param tmpHeader GetCardTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCardTemplateResponse
       */
      Models::GetCardTemplateResponse getCardTemplateWithOptions(const Models::GetCardTemplateRequest &tmpReq, const Models::GetCardTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCardTemplateRequest
       * @return GetCardTemplateResponse
       */
      Models::GetCardTemplateResponse getCardTemplate(const Models::GetCardTemplateRequest &request);

      /**
       * @summary 获取群存储空间信息
       *
       * @param tmpReq GetConversaionSpaceRequest
       * @param tmpHeader GetConversaionSpaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversaionSpaceResponse
       */
      Models::GetConversaionSpaceResponse getConversaionSpaceWithOptions(const Models::GetConversaionSpaceRequest &tmpReq, const Models::GetConversaionSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取群存储空间信息
       *
       * @param request GetConversaionSpaceRequest
       * @return GetConversaionSpaceResponse
       */
      Models::GetConversaionSpaceResponse getConversaionSpace(const Models::GetConversaionSpaceRequest &request);

      /**
       * @summary 获取组织内已完成的审批任务
       *
       * @param request GetCorpAccomplishmentTasksRequest
       * @param tmpHeader GetCorpAccomplishmentTasksHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCorpAccomplishmentTasksResponse
       */
      Models::GetCorpAccomplishmentTasksResponse getCorpAccomplishmentTasksWithOptions(const Models::GetCorpAccomplishmentTasksRequest &request, const Models::GetCorpAccomplishmentTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取组织内已完成的审批任务
       *
       * @param request GetCorpAccomplishmentTasksRequest
       * @return GetCorpAccomplishmentTasksResponse
       */
      Models::GetCorpAccomplishmentTasksResponse getCorpAccomplishmentTasks(const Models::GetCorpAccomplishmentTasksRequest &request);

      /**
       * @summary 获取任务列表（组织维度）
       *
       * @param request GetCorpTasksRequest
       * @param tmpHeader GetCorpTasksHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCorpTasksResponse
       */
      Models::GetCorpTasksResponse getCorpTasksWithOptions(const Models::GetCorpTasksRequest &request, const Models::GetCorpTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务列表（组织维度）
       *
       * @param request GetCorpTasksRequest
       * @return GetCorpTasksResponse
       */
      Models::GetCorpTasksResponse getCorpTasks(const Models::GetCorpTasksRequest &request);

      /**
       * @param tmpReq GetDeptNoRequest
       * @param tmpHeader GetDeptNoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeptNoResponse
       */
      Models::GetDeptNoResponse getDeptNoWithOptions(const Models::GetDeptNoRequest &tmpReq, const Models::GetDeptNoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDeptNoRequest
       * @return GetDeptNoResponse
       */
      Models::GetDeptNoResponse getDeptNo(const Models::GetDeptNoRequest &request);

      /**
       * @summary 获取钉钉会议信息
       *
       * @param tmpReq GetDingtalkMeetingInfoRequest
       * @param tmpHeader GetDingtalkMeetingInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkMeetingInfoResponse
       */
      Models::GetDingtalkMeetingInfoResponse getDingtalkMeetingInfoWithOptions(const Models::GetDingtalkMeetingInfoRequest &tmpReq, const Models::GetDingtalkMeetingInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉会议信息
       *
       * @param request GetDingtalkMeetingInfoRequest
       * @return GetDingtalkMeetingInfoResponse
       */
      Models::GetDingtalkMeetingInfoResponse getDingtalkMeetingInfo(const Models::GetDingtalkMeetingInfoRequest &request);

      /**
       * @summary 获取钉钉会议列表
       *
       * @param tmpReq GetDingtalkMeetingListRequest
       * @param tmpHeader GetDingtalkMeetingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkMeetingListResponse
       */
      Models::GetDingtalkMeetingListResponse getDingtalkMeetingListWithOptions(const Models::GetDingtalkMeetingListRequest &tmpReq, const Models::GetDingtalkMeetingListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉会议列表
       *
       * @param request GetDingtalkMeetingListRequest
       * @return GetDingtalkMeetingListResponse
       */
      Models::GetDingtalkMeetingListResponse getDingtalkMeetingList(const Models::GetDingtalkMeetingListRequest &request);

      /**
       * @summary 获取钉钉会议成员事件
       *
       * @param tmpReq GetDingtalkMeetingMemberEventRequest
       * @param tmpHeader GetDingtalkMeetingMemberEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkMeetingMemberEventResponse
       */
      Models::GetDingtalkMeetingMemberEventResponse getDingtalkMeetingMemberEventWithOptions(const Models::GetDingtalkMeetingMemberEventRequest &tmpReq, const Models::GetDingtalkMeetingMemberEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉会议成员事件
       *
       * @param request GetDingtalkMeetingMemberEventRequest
       * @return GetDingtalkMeetingMemberEventResponse
       */
      Models::GetDingtalkMeetingMemberEventResponse getDingtalkMeetingMemberEvent(const Models::GetDingtalkMeetingMemberEventRequest &request);

      /**
       * @summary 获取钉钉会议成员列表
       *
       * @param tmpReq GetDingtalkMeetingMemberListRequest
       * @param tmpHeader GetDingtalkMeetingMemberListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkMeetingMemberListResponse
       */
      Models::GetDingtalkMeetingMemberListResponse getDingtalkMeetingMemberListWithOptions(const Models::GetDingtalkMeetingMemberListRequest &tmpReq, const Models::GetDingtalkMeetingMemberListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉会议成员列表
       *
       * @param request GetDingtalkMeetingMemberListRequest
       * @return GetDingtalkMeetingMemberListResponse
       */
      Models::GetDingtalkMeetingMemberListResponse getDingtalkMeetingMemberList(const Models::GetDingtalkMeetingMemberListRequest &request);

      /**
       * @summary 获取会议指标数据
       *
       * @param tmpReq GetDingtalkMeetingMetricDataRequest
       * @param tmpHeader GetDingtalkMeetingMetricDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkMeetingMetricDataResponse
       */
      Models::GetDingtalkMeetingMetricDataResponse getDingtalkMeetingMetricDataWithOptions(const Models::GetDingtalkMeetingMetricDataRequest &tmpReq, const Models::GetDingtalkMeetingMetricDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会议指标数据
       *
       * @param request GetDingtalkMeetingMetricDataRequest
       * @return GetDingtalkMeetingMetricDataResponse
       */
      Models::GetDingtalkMeetingMetricDataResponse getDingtalkMeetingMetricData(const Models::GetDingtalkMeetingMetricDataRequest &request);

      /**
       * @summary 获取钉钉投屏信息
       *
       * @param tmpReq GetDingtalkProjectionInfoRequest
       * @param tmpHeader GetDingtalkProjectionInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkProjectionInfoResponse
       */
      Models::GetDingtalkProjectionInfoResponse getDingtalkProjectionInfoWithOptions(const Models::GetDingtalkProjectionInfoRequest &tmpReq, const Models::GetDingtalkProjectionInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉投屏信息
       *
       * @param request GetDingtalkProjectionInfoRequest
       * @return GetDingtalkProjectionInfoResponse
       */
      Models::GetDingtalkProjectionInfoResponse getDingtalkProjectionInfo(const Models::GetDingtalkProjectionInfoRequest &request);

      /**
       * @summary 获取钉钉投屏列表
       *
       * @param tmpReq GetDingtalkProjectionListRequest
       * @param tmpHeader GetDingtalkProjectionListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingtalkProjectionListResponse
       */
      Models::GetDingtalkProjectionListResponse getDingtalkProjectionListWithOptions(const Models::GetDingtalkProjectionListRequest &tmpReq, const Models::GetDingtalkProjectionListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉投屏列表
       *
       * @param request GetDingtalkProjectionListRequest
       * @return GetDingtalkProjectionListResponse
       */
      Models::GetDingtalkProjectionListResponse getDingtalkProjectionList(const Models::GetDingtalkProjectionListRequest &request);

      /**
       * @summary 委托权限获取文档内容
       *
       * @param tmpReq GetDocContentRequest
       * @param tmpHeader GetDocContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocContentResponse
       */
      Models::GetDocContentResponse getDocContentWithOptions(const Models::GetDocContentRequest &tmpReq, const Models::GetDocContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 委托权限获取文档内容
       *
       * @param request GetDocContentRequest
       * @return GetDocContentResponse
       */
      Models::GetDocContentResponse getDocContent(const Models::GetDocContentRequest &request);

      /**
       * @summary 委托权限获取文档内容taskId
       *
       * @param tmpReq GetDocContentTakIdRequest
       * @param tmpHeader GetDocContentTakIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocContentTakIdResponse
       */
      Models::GetDocContentTakIdResponse getDocContentTakIdWithOptions(const Models::GetDocContentTakIdRequest &tmpReq, const Models::GetDocContentTakIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 委托权限获取文档内容taskId
       *
       * @param request GetDocContentTakIdRequest
       * @return GetDocContentTakIdResponse
       */
      Models::GetDocContentTakIdResponse getDocContentTakId(const Models::GetDocContentTakIdRequest &request);

      /**
       * @summary 查询单个日程详情
       *
       * @param request GetEventRequest
       * @param tmpHeader GetEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventResponse
       */
      Models::GetEventResponse getEventWithOptions(const Models::GetEventRequest &request, const Models::GetEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个日程详情
       *
       * @param request GetEventRequest
       * @return GetEventResponse
       */
      Models::GetEventResponse getEvent(const Models::GetEventRequest &request);

      /**
       * @summary 获取表单内的组件信息
       *
       * @param request GetFieldDefByUuidRequest
       * @param tmpHeader GetFieldDefByUuidHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFieldDefByUuidResponse
       */
      Models::GetFieldDefByUuidResponse getFieldDefByUuidWithOptions(const Models::GetFieldDefByUuidRequest &request, const Models::GetFieldDefByUuidHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表单内的组件信息
       *
       * @param request GetFieldDefByUuidRequest
       * @return GetFieldDefByUuidResponse
       */
      Models::GetFieldDefByUuidResponse getFieldDefByUuid(const Models::GetFieldDefByUuidRequest &request);

      /**
       * @summary 获取文件下载信息
       *
       * @param tmpReq GetFileDownloadInfoRequest
       * @param tmpHeader GetFileDownloadInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDownloadInfoResponse
       */
      Models::GetFileDownloadInfoResponse getFileDownloadInfoWithOptions(const Models::GetFileDownloadInfoRequest &tmpReq, const Models::GetFileDownloadInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件下载信息
       *
       * @param request GetFileDownloadInfoRequest
       * @return GetFileDownloadInfoResponse
       */
      Models::GetFileDownloadInfoResponse getFileDownloadInfo(const Models::GetFileDownloadInfoRequest &request);

      /**
       * @summary 获取文件上传信息
       *
       * @param tmpReq GetFileUploadInfoRequest
       * @param tmpHeader GetFileUploadInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileUploadInfoResponse
       */
      Models::GetFileUploadInfoResponse getFileUploadInfoWithOptions(const Models::GetFileUploadInfoRequest &tmpReq, const Models::GetFileUploadInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件上传信息
       *
       * @param request GetFileUploadInfoRequest
       * @return GetFileUploadInfoResponse
       */
      Models::GetFileUploadInfoResponse getFileUploadInfo(const Models::GetFileUploadInfoRequest &request);

      /**
       * @summary 获取表单组件定义列表
       *
       * @param request GetFormComponentDefinitionListRequest
       * @param tmpHeader GetFormComponentDefinitionListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFormComponentDefinitionListResponse
       */
      Models::GetFormComponentDefinitionListResponse getFormComponentDefinitionListWithOptions(const Models::GetFormComponentDefinitionListRequest &request, const Models::GetFormComponentDefinitionListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表单组件定义列表
       *
       * @param request GetFormComponentDefinitionListRequest
       * @return GetFormComponentDefinitionListResponse
       */
      Models::GetFormComponentDefinitionListResponse getFormComponentDefinitionList(const Models::GetFormComponentDefinitionListRequest &request);

      /**
       * @summary 查询表单数据
       *
       * @param request GetFormDataByIDRequest
       * @param tmpHeader GetFormDataByIDHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFormDataByIDResponse
       */
      Models::GetFormDataByIDResponse getFormDataByIDWithOptions(const Models::GetFormDataByIDRequest &request, const Models::GetFormDataByIDHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表单数据
       *
       * @param request GetFormDataByIDRequest
       * @return GetFormDataByIDResponse
       */
      Models::GetFormDataByIDResponse getFormDataByID(const Models::GetFormDataByIDRequest &request);

      /**
       * @summary 获取指定应用下的表单列表
       *
       * @param request GetFormListInAppRequest
       * @param tmpHeader GetFormListInAppHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFormListInAppResponse
       */
      Models::GetFormListInAppResponse getFormListInAppWithOptions(const Models::GetFormListInAppRequest &request, const Models::GetFormListInAppHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定应用下的表单列表
       *
       * @param request GetFormListInAppRequest
       * @return GetFormListInAppResponse
       */
      Models::GetFormListInAppResponse getFormListInApp(const Models::GetFormListInAppRequest &request);

      /**
       * @summary 查询群内直播信息(最早支持2024年01月数据)
       *
       * @param tmpReq GetGroupLiveListRequest
       * @param tmpHeader GetGroupLiveListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupLiveListResponse
       */
      Models::GetGroupLiveListResponse getGroupLiveListWithOptions(const Models::GetGroupLiveListRequest &tmpReq, const Models::GetGroupLiveListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询群内直播信息(最早支持2024年01月数据)
       *
       * @param request GetGroupLiveListRequest
       * @return GetGroupLiveListResponse
       */
      Models::GetGroupLiveListResponse getGroupLiveList(const Models::GetGroupLiveListRequest &request);

      /**
       * @summary 查询企业内部群成员
       *
       * @param request GetInnerGroupMembersRequest
       * @param tmpHeader GetInnerGroupMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInnerGroupMembersResponse
       */
      Models::GetInnerGroupMembersResponse getInnerGroupMembersWithOptions(const Models::GetInnerGroupMembersRequest &request, const Models::GetInnerGroupMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业内部群成员
       *
       * @param request GetInnerGroupMembersRequest
       * @return GetInnerGroupMembersResponse
       */
      Models::GetInnerGroupMembersResponse getInnerGroupMembers(const Models::GetInnerGroupMembersRequest &request);

      /**
       * @summary 根据流程实例ID获取流程实例
       *
       * @param request GetInstanceByIdRequest
       * @param tmpHeader GetInstanceByIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceByIdResponse
       */
      Models::GetInstanceByIdResponse getInstanceByIdWithOptions(const Models::GetInstanceByIdRequest &request, const Models::GetInstanceByIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据流程实例ID获取流程实例
       *
       * @param request GetInstanceByIdRequest
       * @return GetInstanceByIdResponse
       */
      Models::GetInstanceByIdResponse getInstanceById(const Models::GetInstanceByIdRequest &request);

      /**
       * @summary 获取实例ID列表
       *
       * @param request GetInstanceIdListRequest
       * @param tmpHeader GetInstanceIdListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceIdListResponse
       */
      Models::GetInstanceIdListResponse getInstanceIdListWithOptions(const Models::GetInstanceIdListRequest &request, const Models::GetInstanceIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例ID列表
       *
       * @param request GetInstanceIdListRequest
       * @return GetInstanceIdListResponse
       */
      Models::GetInstanceIdListResponse getInstanceIdList(const Models::GetInstanceIdListRequest &request);

      /**
       * @summary 获取流程实例
       *
       * @param request GetInstancesRequest
       * @param tmpHeader GetInstancesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancesResponse
       */
      Models::GetInstancesResponse getInstancesWithOptions(const Models::GetInstancesRequest &request, const Models::GetInstancesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程实例
       *
       * @param request GetInstancesRequest
       * @return GetInstancesResponse
       */
      Models::GetInstancesResponse getInstances(const Models::GetInstancesRequest &request);

      /**
       * @summary 根据实例 ID 列表批量获取流程实例详情(批量获取流程实例列表)
       *
       * @param request GetInstancesByIdListRequest
       * @param tmpHeader GetInstancesByIdListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancesByIdListResponse
       */
      Models::GetInstancesByIdListResponse getInstancesByIdListWithOptions(const Models::GetInstancesByIdListRequest &request, const Models::GetInstancesByIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据实例 ID 列表批量获取流程实例详情(批量获取流程实例列表)
       *
       * @param request GetInstancesByIdListRequest
       * @return GetInstancesByIdListResponse
       */
      Models::GetInstancesByIdListResponse getInstancesByIdList(const Models::GetInstancesByIdListRequest &request);

      /**
       * @summary 获取直播的可下载回放地址
       *
       * @param tmpReq GetLiveReplayUrlRequest
       * @param tmpHeader GetLiveReplayUrlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveReplayUrlResponse
       */
      Models::GetLiveReplayUrlResponse getLiveReplayUrlWithOptions(const Models::GetLiveReplayUrlRequest &tmpReq, const Models::GetLiveReplayUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取直播的可下载回放地址
       *
       * @param request GetLiveReplayUrlRequest
       * @return GetLiveReplayUrlResponse
       */
      Models::GetLiveReplayUrlResponse getLiveReplayUrl(const Models::GetLiveReplayUrlRequest &request);

      /**
       * @summary 获取组织内某人提交的任务
       *
       * @param request GetMeCorpSubmissionRequest
       * @param tmpHeader GetMeCorpSubmissionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMeCorpSubmissionResponse
       */
      Models::GetMeCorpSubmissionResponse getMeCorpSubmissionWithOptions(const Models::GetMeCorpSubmissionRequest &request, const Models::GetMeCorpSubmissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取组织内某人提交的任务
       *
       * @param request GetMeCorpSubmissionRequest
       * @return GetMeCorpSubmissionResponse
       */
      Models::GetMeCorpSubmissionResponse getMeCorpSubmission(const Models::GetMeCorpSubmissionRequest &request);

      /**
       * @summary 获取会议室忙闲信息
       *
       * @param tmpReq GetMeetingRoomsScheduleRequest
       * @param tmpHeader GetMeetingRoomsScheduleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMeetingRoomsScheduleResponse
       */
      Models::GetMeetingRoomsScheduleResponse getMeetingRoomsScheduleWithOptions(const Models::GetMeetingRoomsScheduleRequest &tmpReq, const Models::GetMeetingRoomsScheduleHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会议室忙闲信息
       *
       * @param request GetMeetingRoomsScheduleRequest
       * @return GetMeetingRoomsScheduleResponse
       */
      Models::GetMeetingRoomsScheduleResponse getMeetingRoomsSchedule(const Models::GetMeetingRoomsScheduleRequest &request);

      /**
       * @summary 获取我的文档知识库信息
       *
       * @param tmpReq GetMineWorkspaceRequest
       * @param tmpHeader GetMineWorkspaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMineWorkspaceResponse
       */
      Models::GetMineWorkspaceResponse getMineWorkspaceWithOptions(const Models::GetMineWorkspaceRequest &tmpReq, const Models::GetMineWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取我的文档知识库信息
       *
       * @param request GetMineWorkspaceRequest
       * @return GetMineWorkspaceResponse
       */
      Models::GetMineWorkspaceResponse getMineWorkspace(const Models::GetMineWorkspaceRequest &request);

      /**
       * @summary 获取所有字段
       *
       * @param tmpReq GetMultiDimTableAllFieldsRequest
       * @param tmpHeader GetMultiDimTableAllFieldsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiDimTableAllFieldsResponse
       */
      Models::GetMultiDimTableAllFieldsResponse getMultiDimTableAllFieldsWithOptions(const Models::GetMultiDimTableAllFieldsRequest &tmpReq, const Models::GetMultiDimTableAllFieldsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有字段
       *
       * @param request GetMultiDimTableAllFieldsRequest
       * @return GetMultiDimTableAllFieldsResponse
       */
      Models::GetMultiDimTableAllFieldsResponse getMultiDimTableAllFields(const Models::GetMultiDimTableAllFieldsRequest &request);

      /**
       * @summary 获取所有数据表
       *
       * @param tmpReq GetMultiDimTableAllSheetsRequest
       * @param tmpHeader GetMultiDimTableAllSheetsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiDimTableAllSheetsResponse
       */
      Models::GetMultiDimTableAllSheetsResponse getMultiDimTableAllSheetsWithOptions(const Models::GetMultiDimTableAllSheetsRequest &tmpReq, const Models::GetMultiDimTableAllSheetsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有数据表
       *
       * @param request GetMultiDimTableAllSheetsRequest
       * @return GetMultiDimTableAllSheetsResponse
       */
      Models::GetMultiDimTableAllSheetsResponse getMultiDimTableAllSheets(const Models::GetMultiDimTableAllSheetsRequest &request);

      /**
       * @summary 获取记录
       *
       * @param tmpReq GetMultiDimTableRecordRequest
       * @param tmpHeader GetMultiDimTableRecordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiDimTableRecordResponse
       */
      Models::GetMultiDimTableRecordResponse getMultiDimTableRecordWithOptions(const Models::GetMultiDimTableRecordRequest &tmpReq, const Models::GetMultiDimTableRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取记录
       *
       * @param request GetMultiDimTableRecordRequest
       * @return GetMultiDimTableRecordResponse
       */
      Models::GetMultiDimTableRecordResponse getMultiDimTableRecord(const Models::GetMultiDimTableRecordRequest &request);

      /**
       * @summary 获取数据表
       *
       * @param tmpReq GetMultiDimTableSheetRequest
       * @param tmpHeader GetMultiDimTableSheetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiDimTableSheetResponse
       */
      Models::GetMultiDimTableSheetResponse getMultiDimTableSheetWithOptions(const Models::GetMultiDimTableSheetRequest &tmpReq, const Models::GetMultiDimTableSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据表
       *
       * @param request GetMultiDimTableSheetRequest
       * @return GetMultiDimTableSheetResponse
       */
      Models::GetMultiDimTableSheetResponse getMultiDimTableSheet(const Models::GetMultiDimTableSheetRequest &request);

      /**
       * @summary 获取文件分片上传信息
       *
       * @param tmpReq GetMultipartFileUploadInfosRequest
       * @param tmpHeader GetMultipartFileUploadInfosHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultipartFileUploadInfosResponse
       */
      Models::GetMultipartFileUploadInfosResponse getMultipartFileUploadInfosWithOptions(const Models::GetMultipartFileUploadInfosRequest &tmpReq, const Models::GetMultipartFileUploadInfosHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件分片上传信息
       *
       * @param request GetMultipartFileUploadInfosRequest
       * @return GetMultipartFileUploadInfosResponse
       */
      Models::GetMultipartFileUploadInfosResponse getMultipartFileUploadInfos(const Models::GetMultipartFileUploadInfosRequest &request);

      /**
       * @summary 查询最近活跃的企业内部群列表
       *
       * @param tmpReq GetNewestInnerGroupsRequest
       * @param tmpHeader GetNewestInnerGroupsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNewestInnerGroupsResponse
       */
      Models::GetNewestInnerGroupsResponse getNewestInnerGroupsWithOptions(const Models::GetNewestInnerGroupsRequest &tmpReq, const Models::GetNewestInnerGroupsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询最近活跃的企业内部群列表
       *
       * @param request GetNewestInnerGroupsRequest
       * @return GetNewestInnerGroupsResponse
       */
      Models::GetNewestInnerGroupsResponse getNewestInnerGroups(const Models::GetNewestInnerGroupsRequest &request);

      /**
       * @summary 获取节点
       *
       * @param tmpReq GetNodeRequest
       * @param tmpHeader GetNodeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNodeWithOptions(const Models::GetNodeRequest &tmpReq, const Models::GetNodeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节点
       *
       * @param request GetNodeRequest
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNode(const Models::GetNodeRequest &request);

      /**
       * @summary 通过链接获取节点
       *
       * @param tmpReq GetNodeByUrlRequest
       * @param tmpHeader GetNodeByUrlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeByUrlResponse
       */
      Models::GetNodeByUrlResponse getNodeByUrlWithOptions(const Models::GetNodeByUrlRequest &tmpReq, const Models::GetNodeByUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过链接获取节点
       *
       * @param request GetNodeByUrlRequest
       * @return GetNodeByUrlResponse
       */
      Models::GetNodeByUrlResponse getNodeByUrl(const Models::GetNodeByUrlRequest &request);

      /**
       * @summary 批量获取节点
       *
       * @param tmpReq GetNodesRequest
       * @param tmpHeader GetNodesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodesResponse
       */
      Models::GetNodesResponse getNodesWithOptions(const Models::GetNodesRequest &tmpReq, const Models::GetNodesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取节点
       *
       * @param request GetNodesRequest
       * @return GetNodesResponse
       */
      Models::GetNodesResponse getNodes(const Models::GetNodesRequest &request);

      /**
       * @summary 获取发送给用户的通知
       *
       * @param request GetNotifyMeRequest
       * @param tmpHeader GetNotifyMeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotifyMeResponse
       */
      Models::GetNotifyMeResponse getNotifyMeWithOptions(const Models::GetNotifyMeRequest &request, const Models::GetNotifyMeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取发送给用户的通知
       *
       * @param request GetNotifyMeRequest
       * @return GetNotifyMeResponse
       */
      Models::GetNotifyMeResponse getNotifyMe(const Models::GetNotifyMeRequest &request);

      /**
       * @summary 获取宜搭附件临时免登地址
       *
       * @param request GetOpenUrlRequest
       * @param tmpHeader GetOpenUrlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenUrlResponse
       */
      Models::GetOpenUrlResponse getOpenUrlWithOptions(const Models::GetOpenUrlRequest &request, const Models::GetOpenUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取宜搭附件临时免登地址
       *
       * @param request GetOpenUrlRequest
       * @return GetOpenUrlResponse
       */
      Models::GetOpenUrlResponse getOpenUrl(const Models::GetOpenUrlRequest &request);

      /**
       * @summary 获取审批记录
       *
       * @param request GetOperationRecordsRequest
       * @param tmpHeader GetOperationRecordsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationRecordsResponse
       */
      Models::GetOperationRecordsResponse getOperationRecordsWithOptions(const Models::GetOperationRecordsRequest &request, const Models::GetOperationRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取审批记录
       *
       * @param request GetOperationRecordsRequest
       * @return GetOperationRecordsResponse
       */
      Models::GetOperationRecordsResponse getOperationRecords(const Models::GetOperationRecordsRequest &request);

      /**
       * @param tmpReq GetOrgLiveListRequest
       * @param tmpHeader GetOrgLiveListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrgLiveListResponse
       */
      Models::GetOrgLiveListResponse getOrgLiveListWithOptions(const Models::GetOrgLiveListRequest &tmpReq, const Models::GetOrgLiveListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOrgLiveListRequest
       * @return GetOrgLiveListResponse
       */
      Models::GetOrgLiveListResponse getOrgLiveList(const Models::GetOrgLiveListRequest &request);

      /**
       * @summary 委托权限获取组织或者互联网公开文档内容taskId
       *
       * @param tmpReq GetOrgOrWebOpenDocContentTaskIdRequest
       * @param tmpHeader GetOrgOrWebOpenDocContentTaskIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrgOrWebOpenDocContentTaskIdResponse
       */
      Models::GetOrgOrWebOpenDocContentTaskIdResponse getOrgOrWebOpenDocContentTaskIdWithOptions(const Models::GetOrgOrWebOpenDocContentTaskIdRequest &tmpReq, const Models::GetOrgOrWebOpenDocContentTaskIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 委托权限获取组织或者互联网公开文档内容taskId
       *
       * @param request GetOrgOrWebOpenDocContentTaskIdRequest
       * @return GetOrgOrWebOpenDocContentTaskIdResponse
       */
      Models::GetOrgOrWebOpenDocContentTaskIdResponse getOrgOrWebOpenDocContentTaskId(const Models::GetOrgOrWebOpenDocContentTaskIdRequest &request);

      /**
       * @summary 获取流程定义
       *
       * @param request GetProcessDefinitionRequest
       * @param tmpHeader GetProcessDefinitionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProcessDefinitionResponse
       */
      Models::GetProcessDefinitionResponse getProcessDefinitionWithOptions(const Models::GetProcessDefinitionRequest &request, const Models::GetProcessDefinitionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程定义
       *
       * @param request GetProcessDefinitionRequest
       * @return GetProcessDefinitionResponse
       */
      Models::GetProcessDefinitionResponse getProcessDefinition(const Models::GetProcessDefinitionRequest &request);

      /**
       * @summary 获取单元格区域
       *
       * @param tmpReq GetRangeRequest
       * @param tmpHeader GetRangeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRangeResponse
       */
      Models::GetRangeResponse getRangeWithOptions(const Models::GetRangeRequest &tmpReq, const Models::GetRangeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单元格区域
       *
       * @param request GetRangeRequest
       * @return GetRangeResponse
       */
      Models::GetRangeResponse getRange(const Models::GetRangeRequest &request);

      /**
       * @summary 查询用户有权限的知识库列表(旧)
       *
       * @param tmpReq GetRelatedWorkspacesRequest
       * @param tmpHeader GetRelatedWorkspacesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRelatedWorkspacesResponse
       */
      Models::GetRelatedWorkspacesResponse getRelatedWorkspacesWithOptions(const Models::GetRelatedWorkspacesRequest &tmpReq, const Models::GetRelatedWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户有权限的知识库列表(旧)
       *
       * @param request GetRelatedWorkspacesRequest
       * @return GetRelatedWorkspacesResponse
       */
      Models::GetRelatedWorkspacesResponse getRelatedWorkspaces(const Models::GetRelatedWorkspacesRequest &request);

      /**
       * @summary 获取模板详情
       *
       * @param tmpReq GetReportTemplateByNameRequest
       * @param tmpHeader GetReportTemplateByNameHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportTemplateByNameResponse
       */
      Models::GetReportTemplateByNameResponse getReportTemplateByNameWithOptions(const Models::GetReportTemplateByNameRequest &tmpReq, const Models::GetReportTemplateByNameHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模板详情
       *
       * @param request GetReportTemplateByNameRequest
       * @return GetReportTemplateByNameResponse
       */
      Models::GetReportTemplateByNameResponse getReportTemplateByName(const Models::GetReportTemplateByNameRequest &request);

      /**
       * @summary 获取员工有多少数量的日志（一个月内）是未读状态
       *
       * @param tmpReq GetReportUnReadCountRequest
       * @param tmpHeader GetReportUnReadCountHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportUnReadCountResponse
       */
      Models::GetReportUnReadCountResponse getReportUnReadCountWithOptions(const Models::GetReportUnReadCountRequest &tmpReq, const Models::GetReportUnReadCountHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取员工有多少数量的日志（一个月内）是未读状态
       *
       * @param request GetReportUnReadCountRequest
       * @return GetReportUnReadCountResponse
       */
      Models::GetReportUnReadCountResponse getReportUnReadCount(const Models::GetReportUnReadCountRequest &request);

      /**
       * @summary 查询流程运行任务（VPC）
       *
       * @param request GetRunningTasksRequest
       * @param tmpHeader GetRunningTasksHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunningTasksResponse
       */
      Models::GetRunningTasksResponse getRunningTasksWithOptions(const Models::GetRunningTasksRequest &request, const Models::GetRunningTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流程运行任务（VPC）
       *
       * @param request GetRunningTasksRequest
       * @return GetRunningTasksResponse
       */
      Models::GetRunningTasksResponse getRunningTasks(const Models::GetRunningTasksRequest &request);

      /**
       * @summary 获取用户忙闲信息
       *
       * @param tmpReq GetScheduleRequest
       * @param tmpHeader GetScheduleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduleResponse
       */
      Models::GetScheduleResponse getScheduleWithOptions(const Models::GetScheduleRequest &tmpReq, const Models::GetScheduleHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户忙闲信息
       *
       * @param request GetScheduleRequest
       * @return GetScheduleResponse
       */
      Models::GetScheduleResponse getSchedule(const Models::GetScheduleRequest &request);

      /**
       * @summary 获取工作表
       *
       * @param tmpReq GetSheetRequest
       * @param tmpHeader GetSheetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSheetResponse
       */
      Models::GetSheetResponse getSheetWithOptions(const Models::GetSheetRequest &tmpReq, const Models::GetSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作表
       *
       * @param request GetSheetRequest
       * @return GetSheetResponse
       */
      Models::GetSheetResponse getSheet(const Models::GetSheetRequest &request);

      /**
       * @summary 获取表格文档内容jobId
       *
       * @param tmpReq GetSheetContentJobIdRequest
       * @param tmpHeader GetSheetContentJobIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSheetContentJobIdResponse
       */
      Models::GetSheetContentJobIdResponse getSheetContentJobIdWithOptions(const Models::GetSheetContentJobIdRequest &tmpReq, const Models::GetSheetContentJobIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表格文档内容jobId
       *
       * @param request GetSheetContentJobIdRequest
       * @return GetSheetContentJobIdResponse
       */
      Models::GetSheetContentJobIdResponse getSheetContentJobId(const Models::GetSheetContentJobIdRequest &request);

      /**
       * @summary 查询知识库下的目录结构
       *
       * @param tmpReq GetSpaceDirectoriesRequest
       * @param tmpHeader GetSpaceDirectoriesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpaceDirectoriesResponse
       */
      Models::GetSpaceDirectoriesResponse getSpaceDirectoriesWithOptions(const Models::GetSpaceDirectoriesRequest &tmpReq, const Models::GetSpaceDirectoriesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询知识库下的目录结构
       *
       * @param request GetSpaceDirectoriesRequest
       * @return GetSpaceDirectoriesResponse
       */
      Models::GetSpaceDirectoriesResponse getSpaceDirectories(const Models::GetSpaceDirectoriesRequest &request);

      /**
       * @summary 查询单个订阅日历详情
       *
       * @param request GetSubscribedCalendarRequest
       * @param tmpHeader GetSubscribedCalendarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscribedCalendarResponse
       */
      Models::GetSubscribedCalendarResponse getSubscribedCalendarWithOptions(const Models::GetSubscribedCalendarRequest &request, const Models::GetSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个订阅日历详情
       *
       * @param request GetSubscribedCalendarRequest
       * @return GetSubscribedCalendarResponse
       */
      Models::GetSubscribedCalendarResponse getSubscribedCalendar(const Models::GetSubscribedCalendarRequest &request);

      /**
       * @summary 查询抄送我的任务列表（应用维度）
       *
       * @param request GetTaskCopiesRequest
       * @param tmpHeader GetTaskCopiesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskCopiesResponse
       */
      Models::GetTaskCopiesResponse getTaskCopiesWithOptions(const Models::GetTaskCopiesRequest &request, const Models::GetTaskCopiesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询抄送我的任务列表（应用维度）
       *
       * @param request GetTaskCopiesRequest
       * @return GetTaskCopiesResponse
       */
      Models::GetTaskCopiesResponse getTaskCopies(const Models::GetTaskCopiesRequest &request);

      /**
       * @summary 获取用户可见的日志模板
       *
       * @param tmpReq GetTemplateListByUserIdRequest
       * @param tmpHeader GetTemplateListByUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateListByUserIdResponse
       */
      Models::GetTemplateListByUserIdResponse getTemplateListByUserIdWithOptions(const Models::GetTemplateListByUserIdRequest &tmpReq, const Models::GetTemplateListByUserIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户可见的日志模板
       *
       * @param request GetTemplateListByUserIdRequest
       * @return GetTemplateListByUserIdResponse
       */
      Models::GetTemplateListByUserIdResponse getTemplateListByUserId(const Models::GetTemplateListByUserIdRequest &request);

      /**
       * @summary 获取指定工单详情
       *
       * @param tmpReq GetTicketRequest
       * @param tmpHeader GetTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicketWithOptions(const Models::GetTicketRequest &tmpReq, const Models::GetTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定工单详情
       *
       * @param request GetTicketRequest
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicket(const Models::GetTicketRequest &request);

      /**
       * @summary 获取钉钉待办任务详情
       *
       * @param tmpReq GetTodoTaskRequest
       * @param tmpHeader GetTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTodoTaskResponse
       */
      Models::GetTodoTaskResponse getTodoTaskWithOptions(const Models::GetTodoTaskRequest &tmpReq, const Models::GetTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉钉待办任务详情
       *
       * @param request GetTodoTaskRequest
       * @return GetTodoTaskResponse
       */
      Models::GetTodoTaskResponse getTodoTask(const Models::GetTodoTaskRequest &request);

      /**
       * @summary 获取专属账号信息
       *
       * @param tmpReq GetUserRequest
       * @param tmpHeader GetUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &tmpReq, const Models::GetUserHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专属账号信息
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 根据unionId获取用户userId
       *
       * @param tmpReq GetUserIdRequest
       * @param tmpHeader GetUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdResponse
       */
      Models::GetUserIdResponse getUserIdWithOptions(const Models::GetUserIdRequest &tmpReq, const Models::GetUserIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据unionId获取用户userId
       *
       * @param request GetUserIdRequest
       * @return GetUserIdResponse
       */
      Models::GetUserIdResponse getUserId(const Models::GetUserIdRequest &request);

      /**
       * @summary 根据orgId和staffId获取用户userId
       *
       * @param tmpReq GetUserIdByOrgIdAndStaffIdRequest
       * @param tmpHeader GetUserIdByOrgIdAndStaffIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByOrgIdAndStaffIdResponse
       */
      Models::GetUserIdByOrgIdAndStaffIdResponse getUserIdByOrgIdAndStaffIdWithOptions(const Models::GetUserIdByOrgIdAndStaffIdRequest &tmpReq, const Models::GetUserIdByOrgIdAndStaffIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据orgId和staffId获取用户userId
       *
       * @param request GetUserIdByOrgIdAndStaffIdRequest
       * @return GetUserIdByOrgIdAndStaffIdResponse
       */
      Models::GetUserIdByOrgIdAndStaffIdResponse getUserIdByOrgIdAndStaffId(const Models::GetUserIdByOrgIdAndStaffIdRequest &request);

      /**
       * @summary 获取用户最新的有效的专属账号迁移方案
       *
       * @param tmpReq GetUserLatestPlanRequest
       * @param tmpHeader GetUserLatestPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserLatestPlanResponse
       */
      Models::GetUserLatestPlanResponse getUserLatestPlanWithOptions(const Models::GetUserLatestPlanRequest &tmpReq, const Models::GetUserLatestPlanHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户最新的有效的专属账号迁移方案
       *
       * @param request GetUserLatestPlanRequest
       * @return GetUserLatestPlanResponse
       */
      Models::GetUserLatestPlanResponse getUserLatestPlan(const Models::GetUserLatestPlanRequest &request);

      /**
       * @summary 获取知识库
       *
       * @param tmpReq GetWorkspaceRequest
       * @param tmpHeader GetWorkspaceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const Models::GetWorkspaceRequest &tmpReq, const Models::GetWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const Models::GetWorkspaceRequest &request);

      /**
       * @summary 批量获取知识库
       *
       * @param tmpReq GetWorkspacesRequest
       * @param tmpHeader GetWorkspacesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspacesResponse
       */
      Models::GetWorkspacesResponse getWorkspacesWithOptions(const Models::GetWorkspacesRequest &tmpReq, const Models::GetWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取知识库
       *
       * @param request GetWorkspacesRequest
       * @return GetWorkspacesResponse
       */
      Models::GetWorkspacesResponse getWorkspaces(const Models::GetWorkspacesRequest &request);

      /**
       * @summary 授予勋章
       *
       * @param tmpReq GrantHonorRequest
       * @param tmpHeader GrantHonorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantHonorResponse
       */
      Models::GrantHonorResponse grantHonorWithOptions(const Models::GrantHonorRequest &tmpReq, const Models::GrantHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授予勋章
       *
       * @param request GrantHonorRequest
       * @return GrantHonorResponse
       */
      Models::GrantHonorResponse grantHonor(const Models::GrantHonorRequest &request);

      /**
       * @summary 初始化文件分片上传
       *
       * @param tmpReq InitMultipartFileUploadRequest
       * @param tmpHeader InitMultipartFileUploadHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitMultipartFileUploadResponse
       */
      Models::InitMultipartFileUploadResponse initMultipartFileUploadWithOptions(const Models::InitMultipartFileUploadRequest &tmpReq, const Models::InitMultipartFileUploadHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 初始化文件分片上传
       *
       * @param request InitMultipartFileUploadRequest
       * @return InitMultipartFileUploadResponse
       */
      Models::InitMultipartFileUploadResponse initMultipartFileUpload(const Models::InitMultipartFileUploadRequest &request);

      /**
       * @summary 在指定列左侧插入若干列
       *
       * @param tmpReq InsertColumnsBeforeRequest
       * @param tmpHeader InsertColumnsBeforeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertColumnsBeforeResponse
       */
      Models::InsertColumnsBeforeResponse insertColumnsBeforeWithOptions(const Models::InsertColumnsBeforeRequest &tmpReq, const Models::InsertColumnsBeforeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在指定列左侧插入若干列
       *
       * @param request InsertColumnsBeforeRequest
       * @return InsertColumnsBeforeResponse
       */
      Models::InsertColumnsBeforeResponse insertColumnsBefore(const Models::InsertColumnsBeforeRequest &request);

      /**
       * @summary 文档中插入内容
       *
       * @param tmpReq InsertContentWithOptionsRequest
       * @param tmpHeader InsertContentWithOptionsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertContentWithOptionsResponse
       */
      Models::InsertContentWithOptionsResponse insertContentWithOptionsWithOptions(const Models::InsertContentWithOptionsRequest &tmpReq, const Models::InsertContentWithOptionsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档中插入内容
       *
       * @param request InsertContentWithOptionsRequest
       * @return InsertContentWithOptionsResponse
       */
      Models::InsertContentWithOptionsResponse insertContentWithOptions(const Models::InsertContentWithOptionsRequest &request);

      /**
       * @summary 插入下拉列表
       *
       * @param tmpReq InsertDropDownListRequest
       * @param tmpHeader InsertDropDownListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertDropDownListResponse
       */
      Models::InsertDropDownListResponse insertDropDownListWithOptions(const Models::InsertDropDownListRequest &tmpReq, const Models::InsertDropDownListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 插入下拉列表
       *
       * @param request InsertDropDownListRequest
       * @return InsertDropDownListResponse
       */
      Models::InsertDropDownListResponse insertDropDownList(const Models::InsertDropDownListRequest &request);

      /**
       * @summary 新增记录
       *
       * @param tmpReq InsertMultiDimTableRecordRequest
       * @param tmpHeader InsertMultiDimTableRecordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertMultiDimTableRecordResponse
       */
      Models::InsertMultiDimTableRecordResponse insertMultiDimTableRecordWithOptions(const Models::InsertMultiDimTableRecordRequest &tmpReq, const Models::InsertMultiDimTableRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增记录
       *
       * @param request InsertMultiDimTableRecordRequest
       * @return InsertMultiDimTableRecordResponse
       */
      Models::InsertMultiDimTableRecordResponse insertMultiDimTableRecord(const Models::InsertMultiDimTableRecordRequest &request);

      /**
       * @summary 在指定行上方插入若干行
       *
       * @param tmpReq InsertRowsBeforeRequest
       * @param tmpHeader InsertRowsBeforeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertRowsBeforeResponse
       */
      Models::InsertRowsBeforeResponse insertRowsBeforeWithOptions(const Models::InsertRowsBeforeRequest &tmpReq, const Models::InsertRowsBeforeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在指定行上方插入若干行
       *
       * @param request InsertRowsBeforeRequest
       * @return InsertRowsBeforeResponse
       */
      Models::InsertRowsBeforeResponse insertRowsBefore(const Models::InsertRowsBeforeRequest &request);

      /**
       * @summary 邀请用户入会
       *
       * @param tmpReq InviteUsersRequest
       * @param tmpHeader InviteUsersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteUsersResponse
       */
      Models::InviteUsersResponse inviteUsersWithOptions(const Models::InviteUsersRequest &tmpReq, const Models::InviteUsersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 邀请用户入会
       *
       * @param request InviteUsersRequest
       * @return InviteUsersResponse
       */
      Models::InviteUsersResponse inviteUsers(const Models::InviteUsersRequest &request);

      /**
       * @summary 调用助理
       *
       * @param request InvokeAssistantRequest
       * @param headers InvokeAssistantHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAssistantResponse
       */
      FutureGenerator<Models::InvokeAssistantResponse> invokeAssistantWithSSE(const Models::InvokeAssistantRequest &request, const Models::InvokeAssistantHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用助理
       *
       * @param request InvokeAssistantRequest
       * @param headers InvokeAssistantHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAssistantResponse
       */
      Models::InvokeAssistantResponse invokeAssistantWithOptions(const Models::InvokeAssistantRequest &request, const Models::InvokeAssistantHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用助理
       *
       * @param request InvokeAssistantRequest
       * @return InvokeAssistantResponse
       */
      Models::InvokeAssistantResponse invokeAssistant(const Models::InvokeAssistantRequest &request);

      /**
       * @summary 调用AI技能
       *
       * @param tmpReq InvokeSkillRequest
       * @param tmpHeader InvokeSkillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeSkillResponse
       */
      FutureGenerator<Models::InvokeSkillResponse> invokeSkillWithSSE(const Models::InvokeSkillRequest &tmpReq, const Models::InvokeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用AI技能
       *
       * @param tmpReq InvokeSkillRequest
       * @param tmpHeader InvokeSkillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeSkillResponse
       */
      Models::InvokeSkillResponse invokeSkillWithOptions(const Models::InvokeSkillRequest &tmpReq, const Models::InvokeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用AI技能
       *
       * @param request InvokeSkillRequest
       * @return InvokeSkillResponse
       */
      Models::InvokeSkillResponse invokeSkill(const Models::InvokeSkillRequest &request);

      /**
       * @summary 查询宜搭应用列表
       *
       * @param request ListApplicationRequest
       * @param tmpHeader ListApplicationHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplicationWithOptions(const Models::ListApplicationRequest &request, const Models::ListApplicationHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询宜搭应用列表
       *
       * @param request ListApplicationRequest
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplication(const Models::ListApplicationRequest &request);

      /**
       * @summary 查询日历
       *
       * @param tmpReq ListCalendarsRequest
       * @param tmpHeader ListCalendarsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalendarsResponse
       */
      Models::ListCalendarsResponse listCalendarsWithOptions(const Models::ListCalendarsRequest &tmpReq, const Models::ListCalendarsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日历
       *
       * @param request ListCalendarsRequest
       * @return ListCalendarsResponse
       */
      Models::ListCalendarsResponse listCalendars(const Models::ListCalendarsRequest &request);

      /**
       * @summary 获取文件或文件夹列表
       *
       * @param tmpReq ListDentriesRequest
       * @param tmpHeader ListDentriesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDentriesResponse
       */
      Models::ListDentriesResponse listDentriesWithOptions(const Models::ListDentriesRequest &tmpReq, const Models::ListDentriesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件或文件夹列表
       *
       * @param request ListDentriesRequest
       * @return ListDentriesResponse
       */
      Models::ListDentriesResponse listDentries(const Models::ListDentriesRequest &request);

      /**
       * @summary 获取钉盘空间列表
       *
       * @param tmpReq ListDriveSpacesRequest
       * @param tmpHeader ListDriveSpacesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDriveSpacesResponse
       */
      Models::ListDriveSpacesResponse listDriveSpacesWithOptions(const Models::ListDriveSpacesRequest &tmpReq, const Models::ListDriveSpacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取钉盘空间列表
       *
       * @param request ListDriveSpacesRequest
       * @return ListDriveSpacesResponse
       */
      Models::ListDriveSpacesResponse listDriveSpaces(const Models::ListDriveSpacesRequest &request);

      /**
       * @summary 查询日程列表
       *
       * @param request ListEventsRequest
       * @param tmpHeader ListEventsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventsResponse
       */
      Models::ListEventsResponse listEventsWithOptions(const Models::ListEventsRequest &request, const Models::ListEventsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日程列表
       *
       * @param request ListEventsRequest
       * @return ListEventsResponse
       */
      Models::ListEventsResponse listEvents(const Models::ListEventsRequest &request);

      /**
       * @summary 查询日程视图
       *
       * @param request ListEventsViewRequest
       * @param tmpHeader ListEventsViewHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventsViewResponse
       */
      Models::ListEventsViewResponse listEventsViewWithOptions(const Models::ListEventsViewRequest &request, const Models::ListEventsViewHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日程视图
       *
       * @param request ListEventsViewRequest
       * @return ListEventsViewResponse
       */
      Models::ListEventsViewResponse listEventsView(const Models::ListEventsViewRequest &request);

      /**
       * @summary 批量查询宜搭表单实例的评论
       *
       * @param tmpReq ListFormRemarksRequest
       * @param tmpHeader ListFormRemarksHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFormRemarksResponse
       */
      Models::ListFormRemarksResponse listFormRemarksWithOptions(const Models::ListFormRemarksRequest &tmpReq, const Models::ListFormRemarksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询宜搭表单实例的评论
       *
       * @param request ListFormRemarksRequest
       * @return ListFormRemarksResponse
       */
      Models::ListFormRemarksResponse listFormRemarks(const Models::ListFormRemarksRequest &request);

      /**
       * @summary 查询消息
       *
       * @param request ListMessageRequest
       * @param headers ListMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessageWithOptions(const Models::ListMessageRequest &request, const Models::ListMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询消息
       *
       * @param request ListMessageRequest
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessage(const Models::ListMessageRequest &request);

      /**
       * @summary 列出多行记录
       *
       * @param tmpReq ListMultiDimTableRecordsRequest
       * @param tmpHeader ListMultiDimTableRecordsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiDimTableRecordsResponse
       */
      Models::ListMultiDimTableRecordsResponse listMultiDimTableRecordsWithOptions(const Models::ListMultiDimTableRecordsRequest &tmpReq, const Models::ListMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出多行记录
       *
       * @param request ListMultiDimTableRecordsRequest
       * @return ListMultiDimTableRecordsResponse
       */
      Models::ListMultiDimTableRecordsResponse listMultiDimTableRecords(const Models::ListMultiDimTableRecordsRequest &request);

      /**
       * @summary 获取应用下的页面列表
       *
       * @param request ListNavigationByFormTypeRequest
       * @param tmpHeader ListNavigationByFormTypeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNavigationByFormTypeResponse
       */
      Models::ListNavigationByFormTypeResponse listNavigationByFormTypeWithOptions(const Models::ListNavigationByFormTypeRequest &request, const Models::ListNavigationByFormTypeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用下的页面列表
       *
       * @param request ListNavigationByFormTypeRequest
       * @return ListNavigationByFormTypeResponse
       */
      Models::ListNavigationByFormTypeResponse listNavigationByFormType(const Models::ListNavigationByFormTypeRequest &request);

      /**
       * @summary 获取节点列表
       *
       * @param tmpReq ListNodesRequest
       * @param tmpHeader ListNodesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const Models::ListNodesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节点列表
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary 获取文件权限列表
       *
       * @param tmpReq ListPermissionsRequest
       * @param tmpHeader ListPermissionsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const Models::ListPermissionsRequest &tmpReq, const Models::ListPermissionsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件权限列表
       *
       * @param request ListPermissionsRequest
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const Models::ListPermissionsRequest &request);

      /**
       * @summary 获取用户发出的日志列表
       *
       * @param tmpReq ListReportRequest
       * @param tmpHeader ListReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportResponse
       */
      Models::ListReportResponse listReportWithOptions(const Models::ListReportRequest &tmpReq, const Models::ListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户发出的日志列表
       *
       * @param request ListReportRequest
       * @return ListReportResponse
       */
      Models::ListReportResponse listReport(const Models::ListReportRequest &request);

      /**
       * @summary 列出AI技能
       *
       * @param request ListSkillRequest
       * @param tmpHeader ListSkillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkillWithOptions(const Models::ListSkillRequest &request, const Models::ListSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出AI技能
       *
       * @param request ListSkillRequest
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkill(const Models::ListSkillRequest &request);

      /**
       * @summary 获取子表组件数据
       *
       * @param request ListTableDataByFormInstanceIdTableIdRequest
       * @param tmpHeader ListTableDataByFormInstanceIdTableIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableDataByFormInstanceIdTableIdResponse
       */
      Models::ListTableDataByFormInstanceIdTableIdResponse listTableDataByFormInstanceIdTableIdWithOptions(const Models::ListTableDataByFormInstanceIdTableIdRequest &request, const Models::ListTableDataByFormInstanceIdTableIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取子表组件数据
       *
       * @param request ListTableDataByFormInstanceIdTableIdRequest
       * @return ListTableDataByFormInstanceIdTableIdResponse
       */
      Models::ListTableDataByFormInstanceIdTableIdResponse listTableDataByFormInstanceIdTableId(const Models::ListTableDataByFormInstanceIdTableIdRequest &request);

      /**
       * @summary 获取知识小组列表
       *
       * @param tmpReq ListTeamsRequest
       * @param tmpHeader ListTeamsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const Models::ListTeamsRequest &tmpReq, const Models::ListTeamsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识小组列表
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const Models::ListTeamsRequest &request);

      /**
       * @summary 查询文档模板
       *
       * @param tmpReq ListTemplateRequest
       * @param tmpHeader ListTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplateWithOptions(const Models::ListTemplateRequest &tmpReq, const Models::ListTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文档模板
       *
       * @param request ListTemplateRequest
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplate(const Models::ListTemplateRequest &request);

      /**
       * @summary 查询工单操作记录
       *
       * @param tmpReq ListTicketOperateRecordRequest
       * @param tmpHeader ListTicketOperateRecordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketOperateRecordResponse
       */
      Models::ListTicketOperateRecordResponse listTicketOperateRecordWithOptions(const Models::ListTicketOperateRecordRequest &tmpReq, const Models::ListTicketOperateRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工单操作记录
       *
       * @param request ListTicketOperateRecordRequest
       * @return ListTicketOperateRecordResponse
       */
      Models::ListTicketOperateRecordResponse listTicketOperateRecord(const Models::ListTicketOperateRecordRequest &request);

      /**
       * @summary 获取知识库列表
       *
       * @param tmpReq ListWorkspacesRequest
       * @param tmpHeader ListWorkspacesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const Models::ListWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库列表
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 修改日程
       *
       * @param tmpReq PatchEventRequest
       * @param tmpHeader PatchEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchEventResponse
       */
      Models::PatchEventResponse patchEventWithOptions(const Models::PatchEventRequest &tmpReq, const Models::PatchEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改日程
       *
       * @param request PatchEventRequest
       * @return PatchEventResponse
       */
      Models::PatchEventResponse patchEvent(const Models::PatchEventRequest &request);

      /**
       * @summary 查询会议录制中的文本信息
       *
       * @param tmpReq QueryCloudRecordTextRequest
       * @param tmpHeader QueryCloudRecordTextHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCloudRecordTextResponse
       */
      Models::QueryCloudRecordTextResponse queryCloudRecordTextWithOptions(const Models::QueryCloudRecordTextRequest &tmpReq, const Models::QueryCloudRecordTextHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议录制中的文本信息
       *
       * @param request QueryCloudRecordTextRequest
       * @return QueryCloudRecordTextResponse
       */
      Models::QueryCloudRecordTextResponse queryCloudRecordText(const Models::QueryCloudRecordTextRequest &request);

      /**
       * @summary 查询会议录制的详情信息
       *
       * @param tmpReq QueryCloudRecordVideoRequest
       * @param tmpHeader QueryCloudRecordVideoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCloudRecordVideoResponse
       */
      Models::QueryCloudRecordVideoResponse queryCloudRecordVideoWithOptions(const Models::QueryCloudRecordVideoRequest &tmpReq, const Models::QueryCloudRecordVideoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议录制的详情信息
       *
       * @param request QueryCloudRecordVideoRequest
       * @return QueryCloudRecordVideoResponse
       */
      Models::QueryCloudRecordVideoResponse queryCloudRecordVideo(const Models::QueryCloudRecordVideoRequest &request);

      /**
       * @summary 查询会议录制中的视频信息
       *
       * @param tmpReq QueryCloudRecordVideoPlayInfoRequest
       * @param tmpHeader QueryCloudRecordVideoPlayInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCloudRecordVideoPlayInfoResponse
       */
      Models::QueryCloudRecordVideoPlayInfoResponse queryCloudRecordVideoPlayInfoWithOptions(const Models::QueryCloudRecordVideoPlayInfoRequest &tmpReq, const Models::QueryCloudRecordVideoPlayInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议录制中的视频信息
       *
       * @param request QueryCloudRecordVideoPlayInfoRequest
       * @return QueryCloudRecordVideoPlayInfoResponse
       */
      Models::QueryCloudRecordVideoPlayInfoResponse queryCloudRecordVideoPlayInfo(const Models::QueryCloudRecordVideoPlayInfoRequest &request);

      /**
       * @summary 查询视频会议信息
       *
       * @param request QueryConferenceInfoRequest
       * @param tmpHeader QueryConferenceInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConferenceInfoResponse
       */
      Models::QueryConferenceInfoResponse queryConferenceInfoWithOptions(const Models::QueryConferenceInfoRequest &request, const Models::QueryConferenceInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频会议信息
       *
       * @param request QueryConferenceInfoRequest
       * @return QueryConferenceInfoResponse
       */
      Models::QueryConferenceInfoResponse queryConferenceInfo(const Models::QueryConferenceInfoRequest &request);

      /**
       * @summary 根据会议码查询视频会议信息
       *
       * @param tmpReq QueryConferenceInfoByRoomCodeRequest
       * @param tmpHeader QueryConferenceInfoByRoomCodeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConferenceInfoByRoomCodeResponse
       */
      Models::QueryConferenceInfoByRoomCodeResponse queryConferenceInfoByRoomCodeWithOptions(const Models::QueryConferenceInfoByRoomCodeRequest &tmpReq, const Models::QueryConferenceInfoByRoomCodeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据会议码查询视频会议信息
       *
       * @param request QueryConferenceInfoByRoomCodeRequest
       * @return QueryConferenceInfoByRoomCodeResponse
       */
      Models::QueryConferenceInfoByRoomCodeResponse queryConferenceInfoByRoomCode(const Models::QueryConferenceInfoByRoomCodeRequest &request);

      /**
       * @summary 查询视频会议成员
       *
       * @param tmpReq QueryConferenceMembersRequest
       * @param tmpHeader QueryConferenceMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConferenceMembersResponse
       */
      Models::QueryConferenceMembersResponse queryConferenceMembersWithOptions(const Models::QueryConferenceMembersRequest &tmpReq, const Models::QueryConferenceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频会议成员
       *
       * @param request QueryConferenceMembersRequest
       * @return QueryConferenceMembersResponse
       */
      Models::QueryConferenceMembersResponse queryConferenceMembers(const Models::QueryConferenceMembersRequest &request);

      /**
       * @summary 获取文件或文件夹信息
       *
       * @param tmpReq QueryDentriesInfoRequest
       * @param tmpHeader QueryDentriesInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDentriesInfoResponse
       */
      Models::QueryDentriesInfoResponse queryDentriesInfoWithOptions(const Models::QueryDentriesInfoRequest &tmpReq, const Models::QueryDentriesInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件或文件夹信息
       *
       * @param request QueryDentriesInfoRequest
       * @return QueryDentriesInfoResponse
       */
      Models::QueryDentriesInfoResponse queryDentriesInfo(const Models::QueryDentriesInfoRequest &request);

      /**
       * @summary 查询知识库节点信息
       *
       * @param tmpReq QueryDentryRequest
       * @param tmpHeader QueryDentryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDentryResponse
       */
      Models::QueryDentryResponse queryDentryWithOptions(const Models::QueryDentryRequest &tmpReq, const Models::QueryDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询知识库节点信息
       *
       * @param request QueryDentryRequest
       * @return QueryDentryResponse
       */
      Models::QueryDentryResponse queryDentry(const Models::QueryDentryRequest &request);

      /**
       * @summary 查询群直播详情
       *
       * @param tmpReq QueryGroupLiveInfoRequest
       * @param tmpHeader QueryGroupLiveInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGroupLiveInfoResponse
       */
      Models::QueryGroupLiveInfoResponse queryGroupLiveInfoWithOptions(const Models::QueryGroupLiveInfoRequest &tmpReq, const Models::QueryGroupLiveInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询群直播详情
       *
       * @param request QueryGroupLiveInfoRequest
       * @return QueryGroupLiveInfoResponse
       */
      Models::QueryGroupLiveInfoResponse queryGroupLiveInfo(const Models::QueryGroupLiveInfoRequest &request);

      /**
       * @summary 查询直播信息
       *
       * @param tmpReq QueryLiveInfoRequest
       * @param tmpHeader QueryLiveInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveInfoResponse
       */
      Models::QueryLiveInfoResponse queryLiveInfoWithOptions(const Models::QueryLiveInfoRequest &tmpReq, const Models::QueryLiveInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询直播信息
       *
       * @param request QueryLiveInfoRequest
       * @return QueryLiveInfoResponse
       */
      Models::QueryLiveInfoResponse queryLiveInfo(const Models::QueryLiveInfoRequest &request);

      /**
       * @summary 查询直播的观看数据
       *
       * @param tmpReq QueryLiveWatchDetailRequest
       * @param tmpHeader QueryLiveWatchDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveWatchDetailResponse
       */
      Models::QueryLiveWatchDetailResponse queryLiveWatchDetailWithOptions(const Models::QueryLiveWatchDetailRequest &tmpReq, const Models::QueryLiveWatchDetailHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询直播的观看数据
       *
       * @param request QueryLiveWatchDetailRequest
       * @return QueryLiveWatchDetailResponse
       */
      Models::QueryLiveWatchDetailResponse queryLiveWatchDetail(const Models::QueryLiveWatchDetailRequest &request);

      /**
       * @summary 查询直播观看人员信息
       *
       * @param tmpReq QueryLiveWatchUserListRequest
       * @param tmpHeader QueryLiveWatchUserListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveWatchUserListResponse
       */
      Models::QueryLiveWatchUserListResponse queryLiveWatchUserListWithOptions(const Models::QueryLiveWatchUserListRequest &tmpReq, const Models::QueryLiveWatchUserListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询直播观看人员信息
       *
       * @param request QueryLiveWatchUserListRequest
       * @return QueryLiveWatchUserListResponse
       */
      Models::QueryLiveWatchUserListResponse queryLiveWatchUserList(const Models::QueryLiveWatchUserListRequest &request);

      /**
       * @summary 查询会议室详情
       *
       * @param tmpReq QueryMeetingRoomRequest
       * @param tmpHeader QueryMeetingRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMeetingRoomResponse
       */
      Models::QueryMeetingRoomResponse queryMeetingRoomWithOptions(const Models::QueryMeetingRoomRequest &tmpReq, const Models::QueryMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议室详情
       *
       * @param request QueryMeetingRoomRequest
       * @return QueryMeetingRoomResponse
       */
      Models::QueryMeetingRoomResponse queryMeetingRoom(const Models::QueryMeetingRoomRequest &request);

      /**
       * @summary 查询会议室分组信息
       *
       * @param tmpReq QueryMeetingRoomGroupRequest
       * @param tmpHeader QueryMeetingRoomGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMeetingRoomGroupResponse
       */
      Models::QueryMeetingRoomGroupResponse queryMeetingRoomGroupWithOptions(const Models::QueryMeetingRoomGroupRequest &tmpReq, const Models::QueryMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议室分组信息
       *
       * @param request QueryMeetingRoomGroupRequest
       * @return QueryMeetingRoomGroupResponse
       */
      Models::QueryMeetingRoomGroupResponse queryMeetingRoomGroup(const Models::QueryMeetingRoomGroupRequest &request);

      /**
       * @summary 查询会议室分组列表
       *
       * @param tmpReq QueryMeetingRoomGroupListRequest
       * @param tmpHeader QueryMeetingRoomGroupListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMeetingRoomGroupListResponse
       */
      Models::QueryMeetingRoomGroupListResponse queryMeetingRoomGroupListWithOptions(const Models::QueryMeetingRoomGroupListRequest &tmpReq, const Models::QueryMeetingRoomGroupListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议室分组列表
       *
       * @param request QueryMeetingRoomGroupListRequest
       * @return QueryMeetingRoomGroupListResponse
       */
      Models::QueryMeetingRoomGroupListResponse queryMeetingRoomGroupList(const Models::QueryMeetingRoomGroupListRequest &request);

      /**
       * @summary 查询会议室列表
       *
       * @param tmpReq QueryMeetingRoomListRequest
       * @param tmpHeader QueryMeetingRoomListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMeetingRoomListResponse
       */
      Models::QueryMeetingRoomListResponse queryMeetingRoomListWithOptions(const Models::QueryMeetingRoomListRequest &tmpReq, const Models::QueryMeetingRoomListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议室列表
       *
       * @param request QueryMeetingRoomListRequest
       * @return QueryMeetingRoomListResponse
       */
      Models::QueryMeetingRoomListResponse queryMeetingRoomList(const Models::QueryMeetingRoomListRequest &request);

      /**
       * @summary 查询闪记录音
       *
       * @param tmpReq QueryMinutesRequest
       * @param tmpHeader QueryMinutesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMinutesResponse
       */
      Models::QueryMinutesResponse queryMinutesWithOptions(const Models::QueryMinutesRequest &tmpReq, const Models::QueryMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询闪记录音
       *
       * @param request QueryMinutesRequest
       * @return QueryMinutesResponse
       */
      Models::QueryMinutesResponse queryMinutes(const Models::QueryMinutesRequest &request);

      /**
       * @summary 查询会议闪记智能纪要
       *
       * @param tmpReq QueryMinutesSummaryRequest
       * @param tmpHeader QueryMinutesSummaryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMinutesSummaryResponse
       */
      Models::QueryMinutesSummaryResponse queryMinutesSummaryWithOptions(const Models::QueryMinutesSummaryRequest &tmpReq, const Models::QueryMinutesSummaryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议闪记智能纪要
       *
       * @param request QueryMinutesSummaryRequest
       * @return QueryMinutesSummaryResponse
       */
      Models::QueryMinutesSummaryResponse queryMinutesSummary(const Models::QueryMinutesSummaryRequest &request);

      /**
       * @summary 查询会议闪记的文本信息
       *
       * @param tmpReq QueryMinutesTextRequest
       * @param tmpHeader QueryMinutesTextHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMinutesTextResponse
       */
      Models::QueryMinutesTextResponse queryMinutesTextWithOptions(const Models::QueryMinutesTextRequest &tmpReq, const Models::QueryMinutesTextHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会议闪记的文本信息
       *
       * @param request QueryMinutesTextRequest
       * @return QueryMinutesTextResponse
       */
      Models::QueryMinutesTextResponse queryMinutesText(const Models::QueryMinutesTextRequest &request);

      /**
       * @summary 查询企业荣誉
       *
       * @param tmpReq QueryOrgHonorsRequest
       * @param tmpHeader QueryOrgHonorsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrgHonorsResponse
       */
      Models::QueryOrgHonorsResponse queryOrgHonorsWithOptions(const Models::QueryOrgHonorsRequest &tmpReq, const Models::QueryOrgHonorsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业荣誉
       *
       * @param request QueryOrgHonorsRequest
       * @return QueryOrgHonorsResponse
       */
      Models::QueryOrgHonorsResponse queryOrgHonors(const Models::QueryOrgHonorsRequest &request);

      /**
       * @summary 查询企业代办
       *
       * @param tmpReq QueryOrgTodoTasksRequest
       * @param tmpHeader QueryOrgTodoTasksHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrgTodoTasksResponse
       */
      Models::QueryOrgTodoTasksResponse queryOrgTodoTasksWithOptions(const Models::QueryOrgTodoTasksRequest &tmpReq, const Models::QueryOrgTodoTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业代办
       *
       * @param request QueryOrgTodoTasksRequest
       * @return QueryOrgTodoTasksResponse
       */
      Models::QueryOrgTodoTasksResponse queryOrgTodoTasks(const Models::QueryOrgTodoTasksRequest &request);

      /**
       * @summary 查询闪记的链接，可通过链接查看闪记内容
       *
       * @param tmpReq QueryRecordMinutesUrlRequest
       * @param tmpHeader QueryRecordMinutesUrlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordMinutesUrlResponse
       */
      Models::QueryRecordMinutesUrlResponse queryRecordMinutesUrlWithOptions(const Models::QueryRecordMinutesUrlRequest &tmpReq, const Models::QueryRecordMinutesUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询闪记的链接，可通过链接查看闪记内容
       *
       * @param request QueryRecordMinutesUrlRequest
       * @return QueryRecordMinutesUrlResponse
       */
      Models::QueryRecordMinutesUrlResponse queryRecordMinutesUrl(const Models::QueryRecordMinutesUrlRequest &request);

      /**
       * @summary 获取日志详情
       *
       * @param tmpReq QueryReportDetailRequest
       * @param tmpHeader QueryReportDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReportDetailResponse
       */
      Models::QueryReportDetailResponse queryReportDetailWithOptions(const Models::QueryReportDetailRequest &tmpReq, const Models::QueryReportDetailHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志详情
       *
       * @param request QueryReportDetailRequest
       * @return QueryReportDetailResponse
       */
      Models::QueryReportDetailResponse queryReportDetail(const Models::QueryReportDetailRequest &request);

      /**
       * @summary 分页查询钉钉机器人退订工号
       *
       * @param request QueryRobotUnsubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotUnsubscriptionResponse
       */
      Models::QueryRobotUnsubscriptionResponse queryRobotUnsubscriptionWithOptions(const Models::QueryRobotUnsubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询钉钉机器人退订工号
       *
       * @param request QueryRobotUnsubscriptionRequest
       * @return QueryRobotUnsubscriptionResponse
       */
      Models::QueryRobotUnsubscriptionResponse queryRobotUnsubscription(const Models::QueryRobotUnsubscriptionRequest &request);

      /**
       * @summary 查询预约会议
       *
       * @param tmpReq QueryScheduleConferenceRequest
       * @param tmpHeader QueryScheduleConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScheduleConferenceResponse
       */
      Models::QueryScheduleConferenceResponse queryScheduleConferenceWithOptions(const Models::QueryScheduleConferenceRequest &tmpReq, const Models::QueryScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预约会议
       *
       * @param request QueryScheduleConferenceRequest
       * @return QueryScheduleConferenceResponse
       */
      Models::QueryScheduleConferenceResponse queryScheduleConference(const Models::QueryScheduleConferenceRequest &request);

      /**
       * @summary 查询预约会议历史会议信息
       *
       * @param tmpReq QueryScheduleConferenceInfoRequest
       * @param tmpHeader QueryScheduleConferenceInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScheduleConferenceInfoResponse
       */
      Models::QueryScheduleConferenceInfoResponse queryScheduleConferenceInfoWithOptions(const Models::QueryScheduleConferenceInfoRequest &tmpReq, const Models::QueryScheduleConferenceInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预约会议历史会议信息
       *
       * @param request QueryScheduleConferenceInfoRequest
       * @return QueryScheduleConferenceInfoResponse
       */
      Models::QueryScheduleConferenceInfoResponse queryScheduleConferenceInfo(const Models::QueryScheduleConferenceInfoRequest &request);

      /**
       * @summary 查询员工勋章列表
       *
       * @param tmpReq QueryUserHonorsRequest
       * @param tmpHeader QueryUserHonorsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserHonorsResponse
       */
      Models::QueryUserHonorsResponse queryUserHonorsWithOptions(const Models::QueryUserHonorsRequest &tmpReq, const Models::QueryUserHonorsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询员工勋章列表
       *
       * @param request QueryUserHonorsRequest
       * @return QueryUserHonorsResponse
       */
      Models::QueryUserHonorsResponse queryUserHonors(const Models::QueryUserHonorsRequest &request);

      /**
       * @summary 收回勋章
       *
       * @param tmpReq RecallHonorRequest
       * @param tmpHeader RecallHonorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecallHonorResponse
       */
      Models::RecallHonorResponse recallHonorWithOptions(const Models::RecallHonorRequest &tmpReq, const Models::RecallHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 收回勋章
       *
       * @param request RecallHonorRequest
       * @return RecallHonorResponse
       */
      Models::RecallHonorResponse recallHonor(const Models::RecallHonorRequest &request);

      /**
       * @summary 获取日志接收人员列表
       *
       * @param tmpReq ReceiverListReportRequest
       * @param tmpHeader ReceiverListReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReceiverListReportResponse
       */
      Models::ReceiverListReportResponse receiverListReportWithOptions(const Models::ReceiverListReportRequest &tmpReq, const Models::ReceiverListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志接收人员列表
       *
       * @param request ReceiverListReportRequest
       * @return ReceiverListReportResponse
       */
      Models::ReceiverListReportResponse receiverListReport(const Models::ReceiverListReportRequest &request);

      /**
       * @summary 转交任务
       *
       * @param request RedirectTaskRequest
       * @param tmpHeader RedirectTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedirectTaskResponse
       */
      Models::RedirectTaskResponse redirectTaskWithOptions(const Models::RedirectTaskRequest &request, const Models::RedirectTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转交任务
       *
       * @param request RedirectTaskRequest
       * @return RedirectTaskResponse
       */
      Models::RedirectTaskResponse redirectTask(const Models::RedirectTaskRequest &request);

      /**
       * @summary 删除日程参与者
       *
       * @param tmpReq RemoveAttendeeRequest
       * @param tmpHeader RemoveAttendeeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAttendeeResponse
       */
      Models::RemoveAttendeeResponse removeAttendeeWithOptions(const Models::RemoveAttendeeRequest &tmpReq, const Models::RemoveAttendeeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除日程参与者
       *
       * @param request RemoveAttendeeRequest
       * @return RemoveAttendeeResponse
       */
      Models::RemoveAttendeeResponse removeAttendee(const Models::RemoveAttendeeRequest &request);

      /**
       * @summary 取消预定会议室
       *
       * @param tmpReq RemoveMeetingRoomsRequest
       * @param tmpHeader RemoveMeetingRoomsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveMeetingRoomsResponse
       */
      Models::RemoveMeetingRoomsResponse removeMeetingRoomsWithOptions(const Models::RemoveMeetingRoomsRequest &tmpReq, const Models::RemoveMeetingRoomsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消预定会议室
       *
       * @param request RemoveMeetingRoomsRequest
       * @return RemoveMeetingRoomsResponse
       */
      Models::RemoveMeetingRoomsResponse removeMeetingRooms(const Models::RemoveMeetingRoomsRequest &request);

      /**
       * @summary 设置日程响应邀请状态
       *
       * @param tmpReq RespondEventRequest
       * @param tmpHeader RespondEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RespondEventResponse
       */
      Models::RespondEventResponse respondEventWithOptions(const Models::RespondEventRequest &tmpReq, const Models::RespondEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置日程响应邀请状态
       *
       * @param request RespondEventRequest
       * @return RespondEventResponse
       */
      Models::RespondEventResponse respondEvent(const Models::RespondEventRequest &request);

      /**
       * @summary 查询运行
       *
       * @param request RetrieveRunRequest
       * @param headers RetrieveRunHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveRunResponse
       */
      Models::RetrieveRunResponse retrieveRunWithOptions(const Models::RetrieveRunRequest &request, const Models::RetrieveRunHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询运行
       *
       * @param request RetrieveRunRequest
       * @return RetrieveRunResponse
       */
      Models::RetrieveRunResponse retrieveRun(const Models::RetrieveRunRequest &request);

      /**
       * @summary 保存日志内容
       *
       * @param tmpReq SaveContentRequest
       * @param tmpHeader SaveContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContentResponse
       */
      Models::SaveContentResponse saveContentWithOptions(const Models::SaveContentRequest &tmpReq, const Models::SaveContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存日志内容
       *
       * @param request SaveContentRequest
       * @return SaveContentResponse
       */
      Models::SaveContentResponse saveContent(const Models::SaveContentRequest &request);

      /**
       * @summary 保存表单数据
       *
       * @param request SaveFormDataRequest
       * @param tmpHeader SaveFormDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveFormDataResponse
       */
      Models::SaveFormDataResponse saveFormDataWithOptions(const Models::SaveFormDataRequest &request, const Models::SaveFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存表单数据
       *
       * @param request SaveFormDataRequest
       * @return SaveFormDataResponse
       */
      Models::SaveFormDataResponse saveFormData(const Models::SaveFormDataRequest &request);

      /**
       * @summary 提交表单或流程实例下的评论
       *
       * @param request SaveFormRemarkRequest
       * @param tmpHeader SaveFormRemarkHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveFormRemarkResponse
       */
      Models::SaveFormRemarkResponse saveFormRemarkWithOptions(const Models::SaveFormRemarkRequest &request, const Models::SaveFormRemarkHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交表单或流程实例下的评论
       *
       * @param request SaveFormRemarkRequest
       * @return SaveFormRemarkResponse
       */
      Models::SaveFormRemarkResponse saveFormRemark(const Models::SaveFormRemarkRequest &request);

      /**
       * @summary 获取员工组件的值
       *
       * @param request SearchEmployeeFieldValuesRequest
       * @param tmpHeader SearchEmployeeFieldValuesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEmployeeFieldValuesResponse
       */
      Models::SearchEmployeeFieldValuesResponse searchEmployeeFieldValuesWithOptions(const Models::SearchEmployeeFieldValuesRequest &request, const Models::SearchEmployeeFieldValuesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取员工组件的值
       *
       * @param request SearchEmployeeFieldValuesRequest
       * @return SearchEmployeeFieldValuesResponse
       */
      Models::SearchEmployeeFieldValuesResponse searchEmployeeFieldValues(const Models::SearchEmployeeFieldValuesRequest &request);

      /**
       * @summary 获取多个表单实例ID
       *
       * @param request SearchFormDataIdListRequest
       * @param tmpHeader SearchFormDataIdListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFormDataIdListResponse
       */
      Models::SearchFormDataIdListResponse searchFormDataIdListWithOptions(const Models::SearchFormDataIdListRequest &request, const Models::SearchFormDataIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取多个表单实例ID
       *
       * @param request SearchFormDataIdListRequest
       * @return SearchFormDataIdListResponse
       */
      Models::SearchFormDataIdListResponse searchFormDataIdList(const Models::SearchFormDataIdListRequest &request);

      /**
       * @summary 通过高级查询条件获取表单实例数据（包括子表单组件数据）
       *
       * @param request SearchFormDataSecondGenerationRequest
       * @param tmpHeader SearchFormDataSecondGenerationHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFormDataSecondGenerationResponse
       */
      Models::SearchFormDataSecondGenerationResponse searchFormDataSecondGenerationWithOptions(const Models::SearchFormDataSecondGenerationRequest &request, const Models::SearchFormDataSecondGenerationHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过高级查询条件获取表单实例数据（包括子表单组件数据）
       *
       * @param request SearchFormDataSecondGenerationRequest
       * @return SearchFormDataSecondGenerationResponse
       */
      Models::SearchFormDataSecondGenerationResponse searchFormDataSecondGeneration(const Models::SearchFormDataSecondGenerationRequest &request);

      /**
       * @summary 通过高级查询条件获取表单实例数据（不包括子表单组件数据）
       *
       * @param request SearchFormDataSecondGenerationNoTableFieldRequest
       * @param tmpHeader SearchFormDataSecondGenerationNoTableFieldHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFormDataSecondGenerationNoTableFieldResponse
       */
      Models::SearchFormDataSecondGenerationNoTableFieldResponse searchFormDataSecondGenerationNoTableFieldWithOptions(const Models::SearchFormDataSecondGenerationNoTableFieldRequest &request, const Models::SearchFormDataSecondGenerationNoTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过高级查询条件获取表单实例数据（不包括子表单组件数据）
       *
       * @param request SearchFormDataSecondGenerationNoTableFieldRequest
       * @return SearchFormDataSecondGenerationNoTableFieldResponse
       */
      Models::SearchFormDataSecondGenerationNoTableFieldResponse searchFormDataSecondGenerationNoTableField(const Models::SearchFormDataSecondGenerationNoTableFieldRequest &request);

      /**
       * @summary 查询表单实例数据
       *
       * @param request SearchFormDatasRequest
       * @param tmpHeader SearchFormDatasHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFormDatasResponse
       */
      Models::SearchFormDatasResponse searchFormDatasWithOptions(const Models::SearchFormDatasRequest &request, const Models::SearchFormDatasHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表单实例数据
       *
       * @param request SearchFormDatasRequest
       * @return SearchFormDatasResponse
       */
      Models::SearchFormDatasResponse searchFormDatas(const Models::SearchFormDatasRequest &request);

      /**
       * @summary 根据关键词搜索企业内部群
       *
       * @param request SearchInnerGroupsRequest
       * @param tmpHeader SearchInnerGroupsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchInnerGroupsResponse
       */
      Models::SearchInnerGroupsResponse searchInnerGroupsWithOptions(const Models::SearchInnerGroupsRequest &request, const Models::SearchInnerGroupsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据关键词搜索企业内部群
       *
       * @param request SearchInnerGroupsRequest
       * @return SearchInnerGroupsResponse
       */
      Models::SearchInnerGroupsResponse searchInnerGroups(const Models::SearchInnerGroupsRequest &request);

      /**
       * @summary 发送钉钉Banner通知
       *
       * @param tmpReq SendBannerRequest
       * @param tmpHeader SendBannerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendBannerResponse
       */
      Models::SendBannerResponse sendBannerWithOptions(const Models::SendBannerRequest &tmpReq, const Models::SendBannerHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送钉钉Banner通知
       *
       * @param request SendBannerRequest
       * @return SendBannerResponse
       */
      Models::SendBannerResponse sendBanner(const Models::SendBannerRequest &request);

      /**
       * @summary 发送钉钉封屏弹窗
       *
       * @param tmpReq SendPopupRequest
       * @param tmpHeader SendPopupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendPopupResponse
       */
      Models::SendPopupResponse sendPopupWithOptions(const Models::SendPopupRequest &tmpReq, const Models::SendPopupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送钉钉封屏弹窗
       *
       * @param request SendPopupRequest
       * @return SendPopupResponse
       */
      Models::SendPopupResponse sendPopup(const Models::SendPopupRequest &request);

      /**
       * @summary 发送钉钉搜索底纹
       *
       * @param tmpReq SendSearchShadeRequest
       * @param tmpHeader SendSearchShadeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSearchShadeResponse
       */
      Models::SendSearchShadeResponse sendSearchShadeWithOptions(const Models::SendSearchShadeRequest &tmpReq, const Models::SendSearchShadeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送钉钉搜索底纹
       *
       * @param request SendSearchShadeRequest
       * @return SendSearchShadeResponse
       */
      Models::SendSearchShadeResponse sendSearchShade(const Models::SendSearchShadeRequest &request);

      /**
       * @summary 指定列隐藏
       *
       * @param tmpReq SetColumnsVisibilityRequest
       * @param tmpHeader SetColumnsVisibilityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetColumnsVisibilityResponse
       */
      Models::SetColumnsVisibilityResponse setColumnsVisibilityWithOptions(const Models::SetColumnsVisibilityRequest &tmpReq, const Models::SetColumnsVisibilityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定列隐藏
       *
       * @param request SetColumnsVisibilityRequest
       * @return SetColumnsVisibilityResponse
       */
      Models::SetColumnsVisibilityResponse setColumnsVisibility(const Models::SetColumnsVisibilityRequest &request);

      /**
       * @summary 设置联席主持人
       *
       * @param tmpReq SetConferenceHostsRequest
       * @param tmpHeader SetConferenceHostsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetConferenceHostsResponse
       */
      Models::SetConferenceHostsResponse setConferenceHostsWithOptions(const Models::SetConferenceHostsRequest &tmpReq, const Models::SetConferenceHostsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置联席主持人
       *
       * @param request SetConferenceHostsRequest
       * @return SetConferenceHostsResponse
       */
      Models::SetConferenceHostsResponse setConferenceHosts(const Models::SetConferenceHostsRequest &request);

      /**
       * @summary 指定行隐藏
       *
       * @param tmpReq SetRowsVisibilityRequest
       * @param tmpHeader SetRowsVisibilityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRowsVisibilityResponse
       */
      Models::SetRowsVisibilityResponse setRowsVisibilityWithOptions(const Models::SetRowsVisibilityRequest &tmpReq, const Models::SetRowsVisibilityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定行隐藏
       *
       * @param request SetRowsVisibilityRequest
       * @return SetRowsVisibilityResponse
       */
      Models::SetRowsVisibilityResponse setRowsVisibility(const Models::SetRowsVisibilityRequest &request);

      /**
       * @summary 获取用户发送日志的概要信息
       *
       * @param tmpReq SimpleListReportRequest
       * @param tmpHeader SimpleListReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SimpleListReportResponse
       */
      Models::SimpleListReportResponse simpleListReportWithOptions(const Models::SimpleListReportRequest &tmpReq, const Models::SimpleListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户发送日志的概要信息
       *
       * @param request SimpleListReportRequest
       * @return SimpleListReportResponse
       */
      Models::SimpleListReportResponse simpleListReport(const Models::SimpleListReportRequest &request);

      /**
       * @summary 开启视频会议云录制
       *
       * @param tmpReq StartCloudRecordRequest
       * @param tmpHeader StartCloudRecordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecordWithOptions(const Models::StartCloudRecordRequest &tmpReq, const Models::StartCloudRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启视频会议云录制
       *
       * @param request StartCloudRecordRequest
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecord(const Models::StartCloudRecordRequest &request);

      /**
       * @summary 发起宜搭审批流程
       *
       * @param request StartInstanceRequest
       * @param tmpHeader StartInstanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Models::StartInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起宜搭审批流程
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary 开启闪记
       *
       * @param tmpReq StartMinutesRequest
       * @param tmpHeader StartMinutesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMinutesResponse
       */
      Models::StartMinutesResponse startMinutesWithOptions(const Models::StartMinutesRequest &tmpReq, const Models::StartMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启闪记
       *
       * @param request StartMinutesRequest
       * @return StartMinutesResponse
       */
      Models::StartMinutesResponse startMinutes(const Models::StartMinutesRequest &request);

      /**
       * @summary 获取日志相关人员列表
       *
       * @param tmpReq StatisticsListByTypeReportRequest
       * @param tmpHeader StatisticsListByTypeReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StatisticsListByTypeReportResponse
       */
      Models::StatisticsListByTypeReportResponse statisticsListByTypeReportWithOptions(const Models::StatisticsListByTypeReportRequest &tmpReq, const Models::StatisticsListByTypeReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志相关人员列表
       *
       * @param request StatisticsListByTypeReportRequest
       * @return StatisticsListByTypeReportResponse
       */
      Models::StatisticsListByTypeReportResponse statisticsListByTypeReport(const Models::StatisticsListByTypeReportRequest &request);

      /**
       * @summary 获取日志统计数据
       *
       * @param tmpReq StatisticsReportRequest
       * @param tmpHeader StatisticsReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StatisticsReportResponse
       */
      Models::StatisticsReportResponse statisticsReportWithOptions(const Models::StatisticsReportRequest &tmpReq, const Models::StatisticsReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志统计数据
       *
       * @param request StatisticsReportRequest
       * @return StatisticsReportResponse
       */
      Models::StatisticsReportResponse statisticsReport(const Models::StatisticsReportRequest &request);

      /**
       * @summary 停止视频会议云录制
       *
       * @param tmpReq StopCloudRecordRequest
       * @param tmpHeader StopCloudRecordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecordWithOptions(const Models::StopCloudRecordRequest &tmpReq, const Models::StopCloudRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止视频会议云录制
       *
       * @param request StopCloudRecordRequest
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecord(const Models::StopCloudRecordRequest &request);

      /**
       * @summary 暂停闪记
       *
       * @param tmpReq StopMinutesRequest
       * @param tmpHeader StopMinutesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMinutesResponse
       */
      Models::StopMinutesResponse stopMinutesWithOptions(const Models::StopMinutesRequest &tmpReq, const Models::StopMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停闪记
       *
       * @param request StopMinutesRequest
       * @return StopMinutesResponse
       */
      Models::StopMinutesResponse stopMinutes(const Models::StopMinutesRequest &request);

      /**
       * @summary 订阅公共日历
       *
       * @param request SubscribeCalendarRequest
       * @param tmpHeader SubscribeCalendarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeCalendarResponse
       */
      Models::SubscribeCalendarResponse subscribeCalendarWithOptions(const Models::SubscribeCalendarRequest &request, const Models::SubscribeCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅公共日历
       *
       * @param request SubscribeCalendarRequest
       * @return SubscribeCalendarResponse
       */
      Models::SubscribeCalendarResponse subscribeCalendar(const Models::SubscribeCalendarRequest &request);

      /**
       * @summary 订阅文件变更事件
       *
       * @param tmpReq SubscribeEventRequest
       * @param tmpHeader SubscribeEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeEventResponse
       */
      Models::SubscribeEventResponse subscribeEventWithOptions(const Models::SubscribeEventRequest &tmpReq, const Models::SubscribeEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅文件变更事件
       *
       * @param request SubscribeEventRequest
       * @return SubscribeEventResponse
       */
      Models::SubscribeEventResponse subscribeEvent(const Models::SubscribeEventRequest &request);

      /**
       * @param tmpReq SwitchMainOrgRequest
       * @param tmpHeader SwitchMainOrgHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchMainOrgResponse
       */
      Models::SwitchMainOrgResponse switchMainOrgWithOptions(const Models::SwitchMainOrgRequest &tmpReq, const Models::SwitchMainOrgHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SwitchMainOrgRequest
       * @return SwitchMainOrgResponse
       */
      Models::SwitchMainOrgResponse switchMainOrg(const Models::SwitchMainOrgRequest &request);

      /**
       * @summary 同步钉钉账号类型
       *
       * @param tmpReq SyncDingTypeRequest
       * @param tmpHeader SyncDingTypeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDingTypeResponse
       */
      Models::SyncDingTypeResponse syncDingTypeWithOptions(const Models::SyncDingTypeRequest &tmpReq, const Models::SyncDingTypeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步钉钉账号类型
       *
       * @param request SyncDingTypeRequest
       * @return SyncDingTypeResponse
       */
      Models::SyncDingTypeResponse syncDingType(const Models::SyncDingTypeRequest &request);

      /**
       * @summary 终止流程实例
       *
       * @param request TerminateInstanceRequest
       * @param tmpHeader TerminateInstanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateInstanceResponse
       */
      Models::TerminateInstanceResponse terminateInstanceWithOptions(const Models::TerminateInstanceRequest &request, const Models::TerminateInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止流程实例
       *
       * @param request TerminateInstanceRequest
       * @return TerminateInstanceResponse
       */
      Models::TerminateInstanceResponse terminateInstance(const Models::TerminateInstanceRequest &request);

      /**
       * @summary 转交工单
       *
       * @param tmpReq TransferTicketRequest
       * @param tmpHeader TransferTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferTicketResponse
       */
      Models::TransferTicketResponse transferTicketWithOptions(const Models::TransferTicketRequest &tmpReq, const Models::TransferTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转交工单
       *
       * @param request TransferTicketRequest
       * @return TransferTicketResponse
       */
      Models::TransferTicketResponse transferTicket(const Models::TransferTicketRequest &request);

      /**
       * @summary 取消订阅公共日历
       *
       * @param request UnsubscribeCalendarRequest
       * @param tmpHeader UnsubscribeCalendarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeCalendarResponse
       */
      Models::UnsubscribeCalendarResponse unsubscribeCalendarWithOptions(const Models::UnsubscribeCalendarRequest &request, const Models::UnsubscribeCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消订阅公共日历
       *
       * @param request UnsubscribeCalendarRequest
       * @return UnsubscribeCalendarResponse
       */
      Models::UnsubscribeCalendarResponse unsubscribeCalendar(const Models::UnsubscribeCalendarRequest &request);

      /**
       * @summary 取消订阅文件变更事件
       *
       * @param tmpReq UnsubscribeEventRequest
       * @param tmpHeader UnsubscribeEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeEventResponse
       */
      Models::UnsubscribeEventResponse unsubscribeEventWithOptions(const Models::UnsubscribeEventRequest &tmpReq, const Models::UnsubscribeEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消订阅文件变更事件
       *
       * @param request UnsubscribeEventRequest
       * @return UnsubscribeEventResponse
       */
      Models::UnsubscribeEventResponse unsubscribeEvent(const Models::UnsubscribeEventRequest &request);

      /**
       * @param tmpReq UpdateAlidingAssistantRequest
       * @param tmpHeader UpdateAlidingAssistantHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlidingAssistantResponse
       */
      Models::UpdateAlidingAssistantResponse updateAlidingAssistantWithOptions(const Models::UpdateAlidingAssistantRequest &tmpReq, const Models::UpdateAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAlidingAssistantRequest
       * @return UpdateAlidingAssistantResponse
       */
      Models::UpdateAlidingAssistantResponse updateAlidingAssistant(const Models::UpdateAlidingAssistantRequest &request);

      /**
       * @param tmpReq UpdateConvExtensionRequest
       * @param tmpHeader UpdateConvExtensionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConvExtensionResponse
       */
      Models::UpdateConvExtensionResponse updateConvExtensionWithOptions(const Models::UpdateConvExtensionRequest &tmpReq, const Models::UpdateConvExtensionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateConvExtensionRequest
       * @return UpdateConvExtensionResponse
       */
      Models::UpdateConvExtensionResponse updateConvExtension(const Models::UpdateConvExtensionRequest &request);

      /**
       * @summary 更新表单数据
       *
       * @param request UpdateFormDataRequest
       * @param tmpHeader UpdateFormDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFormDataResponse
       */
      Models::UpdateFormDataResponse updateFormDataWithOptions(const Models::UpdateFormDataRequest &request, const Models::UpdateFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新表单数据
       *
       * @param request UpdateFormDataRequest
       * @return UpdateFormDataResponse
       */
      Models::UpdateFormDataResponse updateFormData(const Models::UpdateFormDataRequest &request);

      /**
       * @summary 更新流程实例
       *
       * @param request UpdateInstanceRequest
       * @param tmpHeader UpdateInstanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Models::UpdateInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流程实例
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary 修改直播属性信息
       *
       * @param tmpReq UpdateLiveRequest
       * @param tmpHeader UpdateLiveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveResponse
       */
      Models::UpdateLiveResponse updateLiveWithOptions(const Models::UpdateLiveRequest &tmpReq, const Models::UpdateLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改直播属性信息
       *
       * @param request UpdateLiveRequest
       * @return UpdateLiveResponse
       */
      Models::UpdateLiveResponse updateLive(const Models::UpdateLiveRequest &request);

      /**
       * @summary 更新会议室信息
       *
       * @param tmpReq UpdateMeetingRoomRequest
       * @param tmpHeader UpdateMeetingRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMeetingRoomResponse
       */
      Models::UpdateMeetingRoomResponse updateMeetingRoomWithOptions(const Models::UpdateMeetingRoomRequest &tmpReq, const Models::UpdateMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新会议室信息
       *
       * @param request UpdateMeetingRoomRequest
       * @return UpdateMeetingRoomResponse
       */
      Models::UpdateMeetingRoomResponse updateMeetingRoom(const Models::UpdateMeetingRoomRequest &request);

      /**
       * @summary 更新会议室分组信息
       *
       * @param tmpReq UpdateMeetingRoomGroupRequest
       * @param tmpHeader UpdateMeetingRoomGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMeetingRoomGroupResponse
       */
      Models::UpdateMeetingRoomGroupResponse updateMeetingRoomGroupWithOptions(const Models::UpdateMeetingRoomGroupRequest &tmpReq, const Models::UpdateMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新会议室分组信息
       *
       * @param request UpdateMeetingRoomGroupRequest
       * @return UpdateMeetingRoomGroupResponse
       */
      Models::UpdateMeetingRoomGroupResponse updateMeetingRoomGroup(const Models::UpdateMeetingRoomGroupRequest &request);

      /**
       * @summary 更新数据表
       *
       * @param tmpReq UpdateMultiDimTableRequest
       * @param tmpHeader UpdateMultiDimTableHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultiDimTableResponse
       */
      Models::UpdateMultiDimTableResponse updateMultiDimTableWithOptions(const Models::UpdateMultiDimTableRequest &tmpReq, const Models::UpdateMultiDimTableHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据表
       *
       * @param request UpdateMultiDimTableRequest
       * @return UpdateMultiDimTableResponse
       */
      Models::UpdateMultiDimTableResponse updateMultiDimTable(const Models::UpdateMultiDimTableRequest &request);

      /**
       * @summary 更新字段
       *
       * @param tmpReq UpdateMultiDimTableFieldRequest
       * @param tmpHeader UpdateMultiDimTableFieldHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultiDimTableFieldResponse
       */
      Models::UpdateMultiDimTableFieldResponse updateMultiDimTableFieldWithOptions(const Models::UpdateMultiDimTableFieldRequest &tmpReq, const Models::UpdateMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新字段
       *
       * @param request UpdateMultiDimTableFieldRequest
       * @return UpdateMultiDimTableFieldResponse
       */
      Models::UpdateMultiDimTableFieldResponse updateMultiDimTableField(const Models::UpdateMultiDimTableFieldRequest &request);

      /**
       * @summary 更新多行记录
       *
       * @param tmpReq UpdateMultiDimTableRecordsRequest
       * @param tmpHeader UpdateMultiDimTableRecordsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultiDimTableRecordsResponse
       */
      Models::UpdateMultiDimTableRecordsResponse updateMultiDimTableRecordsWithOptions(const Models::UpdateMultiDimTableRecordsRequest &tmpReq, const Models::UpdateMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新多行记录
       *
       * @param request UpdateMultiDimTableRecordsRequest
       * @return UpdateMultiDimTableRecordsResponse
       */
      Models::UpdateMultiDimTableRecordsResponse updateMultiDimTableRecords(const Models::UpdateMultiDimTableRecordsRequest &request);

      /**
       * @summary 更新文件权限
       *
       * @param tmpReq UpdatePermissionRequest
       * @param tmpHeader UpdatePermissionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePermissionResponse
       */
      Models::UpdatePermissionResponse updatePermissionWithOptions(const Models::UpdatePermissionRequest &tmpReq, const Models::UpdatePermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文件权限
       *
       * @param request UpdatePermissionRequest
       * @return UpdatePermissionResponse
       */
      Models::UpdatePermissionResponse updatePermission(const Models::UpdatePermissionRequest &request);

      /**
       * @summary 更新单元格区域
       *
       * @param tmpReq UpdateRangeRequest
       * @param tmpHeader UpdateRangeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRangeResponse
       */
      Models::UpdateRangeResponse updateRangeWithOptions(const Models::UpdateRangeRequest &tmpReq, const Models::UpdateRangeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新单元格区域
       *
       * @param request UpdateRangeRequest
       * @return UpdateRangeResponse
       */
      Models::UpdateRangeResponse updateRange(const Models::UpdateRangeRequest &request);

      /**
       * @summary 更新预约会议设置
       *
       * @param tmpReq UpdateScheduleConfSettingsRequest
       * @param tmpHeader UpdateScheduleConfSettingsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduleConfSettingsResponse
       */
      Models::UpdateScheduleConfSettingsResponse updateScheduleConfSettingsWithOptions(const Models::UpdateScheduleConfSettingsRequest &tmpReq, const Models::UpdateScheduleConfSettingsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新预约会议设置
       *
       * @param request UpdateScheduleConfSettingsRequest
       * @return UpdateScheduleConfSettingsResponse
       */
      Models::UpdateScheduleConfSettingsResponse updateScheduleConfSettings(const Models::UpdateScheduleConfSettingsRequest &request);

      /**
       * @summary 更新预约会议
       *
       * @param tmpReq UpdateScheduleConferenceRequest
       * @param tmpHeader UpdateScheduleConferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduleConferenceResponse
       */
      Models::UpdateScheduleConferenceResponse updateScheduleConferenceWithOptions(const Models::UpdateScheduleConferenceRequest &tmpReq, const Models::UpdateScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新预约会议
       *
       * @param request UpdateScheduleConferenceRequest
       * @return UpdateScheduleConferenceResponse
       */
      Models::UpdateScheduleConferenceResponse updateScheduleConference(const Models::UpdateScheduleConferenceRequest &request);

      /**
       * @summary 更新状态
       *
       * @param tmpReq UpdateStatusRequest
       * @param tmpHeader UpdateStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStatusResponse
       */
      Models::UpdateStatusResponse updateStatusWithOptions(const Models::UpdateStatusRequest &tmpReq, const Models::UpdateStatusHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新状态
       *
       * @param request UpdateStatusRequest
       * @return UpdateStatusResponse
       */
      Models::UpdateStatusResponse updateStatus(const Models::UpdateStatusRequest &request);

      /**
       * @summary 更新订阅日历
       *
       * @param tmpReq UpdateSubscribedCalendarsRequest
       * @param tmpHeader UpdateSubscribedCalendarsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscribedCalendarsResponse
       */
      Models::UpdateSubscribedCalendarsResponse updateSubscribedCalendarsWithOptions(const Models::UpdateSubscribedCalendarsRequest &tmpReq, const Models::UpdateSubscribedCalendarsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新订阅日历
       *
       * @param request UpdateSubscribedCalendarsRequest
       * @return UpdateSubscribedCalendarsResponse
       */
      Models::UpdateSubscribedCalendarsResponse updateSubscribedCalendars(const Models::UpdateSubscribedCalendarsRequest &request);

      /**
       * @summary 更新代办
       *
       * @param tmpReq UpdateTodoTaskRequest
       * @param tmpHeader UpdateTodoTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTodoTaskResponse
       */
      Models::UpdateTodoTaskResponse updateTodoTaskWithOptions(const Models::UpdateTodoTaskRequest &tmpReq, const Models::UpdateTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代办
       *
       * @param request UpdateTodoTaskRequest
       * @return UpdateTodoTaskResponse
       */
      Models::UpdateTodoTaskResponse updateTodoTask(const Models::UpdateTodoTaskRequest &request);

      /**
       * @summary 更新代办执行者状态
       *
       * @param tmpReq UpdateTodoTaskExecutorStatusRequest
       * @param tmpHeader UpdateTodoTaskExecutorStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTodoTaskExecutorStatusResponse
       */
      Models::UpdateTodoTaskExecutorStatusResponse updateTodoTaskExecutorStatusWithOptions(const Models::UpdateTodoTaskExecutorStatusRequest &tmpReq, const Models::UpdateTodoTaskExecutorStatusHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代办执行者状态
       *
       * @param request UpdateTodoTaskExecutorStatusRequest
       * @return UpdateTodoTaskExecutorStatusResponse
       */
      Models::UpdateTodoTaskExecutorStatusResponse updateTodoTaskExecutorStatus(const Models::UpdateTodoTaskExecutorStatusRequest &request);

      /**
       * @summary 更新企业账号用户头像
       *
       * @param request UpdateUserAvatarRequest
       * @param tmpHeader UpdateUserAvatarHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserAvatarResponse
       */
      Models::UpdateUserAvatarResponse updateUserAvatarWithOptions(const Models::UpdateUserAvatarRequest &request, const Models::UpdateUserAvatarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新企业账号用户头像
       *
       * @param request UpdateUserAvatarRequest
       * @return UpdateUserAvatarResponse
       */
      Models::UpdateUserAvatarResponse updateUserAvatar(const Models::UpdateUserAvatarRequest &request);

      /**
       * @summary 设置正在进行中的视频会议属性
       *
       * @param tmpReq UpdateVideoConferenceSettingRequest
       * @param tmpHeader UpdateVideoConferenceSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoConferenceSettingResponse
       */
      Models::UpdateVideoConferenceSettingResponse updateVideoConferenceSettingWithOptions(const Models::UpdateVideoConferenceSettingRequest &tmpReq, const Models::UpdateVideoConferenceSettingHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置正在进行中的视频会议属性
       *
       * @param request UpdateVideoConferenceSettingRequest
       * @return UpdateVideoConferenceSettingResponse
       */
      Models::UpdateVideoConferenceSettingResponse updateVideoConferenceSetting(const Models::UpdateVideoConferenceSettingRequest &request);

      /**
       * @summary 修改知识库文档成员权限
       *
       * @param tmpReq UpdateWorkspaceDocMembersRequest
       * @param tmpHeader UpdateWorkspaceDocMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceDocMembersResponse
       */
      Models::UpdateWorkspaceDocMembersResponse updateWorkspaceDocMembersWithOptions(const Models::UpdateWorkspaceDocMembersRequest &tmpReq, const Models::UpdateWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改知识库文档成员权限
       *
       * @param request UpdateWorkspaceDocMembersRequest
       * @return UpdateWorkspaceDocMembersResponse
       */
      Models::UpdateWorkspaceDocMembersResponse updateWorkspaceDocMembers(const Models::UpdateWorkspaceDocMembersRequest &request);

      /**
       * @summary 更新知识库成员权限
       *
       * @param tmpReq UpdateWorkspaceMembersRequest
       * @param tmpHeader UpdateWorkspaceMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceMembersResponse
       */
      Models::UpdateWorkspaceMembersResponse updateWorkspaceMembersWithOptions(const Models::UpdateWorkspaceMembersRequest &tmpReq, const Models::UpdateWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新知识库成员权限
       *
       * @param request UpdateWorkspaceMembersRequest
       * @return UpdateWorkspaceMembersResponse
       */
      Models::UpdateWorkspaceMembersResponse updateWorkspaceMembers(const Models::UpdateWorkspaceMembersRequest &request);

      /**
       * @summary 上传媒体<br/>
       *
       * @param tmpReq UploadMediaRequest
       * @param tmpHeader UploadMediaHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMediaResponse
       */
      Models::UploadMediaResponse uploadMediaWithOptions(const Models::UploadMediaRequest &tmpReq, const Models::UploadMediaHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传媒体<br/>
       *
       * @param request UploadMediaRequest
       * @return UploadMediaResponse
       */
      Models::UploadMediaResponse uploadMedia(const Models::UploadMediaRequest &request);

      /**
       * @summary 穿戴勋章
       *
       * @param tmpReq WearOrgHonorRequest
       * @param tmpHeader WearOrgHonorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return WearOrgHonorResponse
       */
      Models::WearOrgHonorResponse wearOrgHonorWithOptions(const Models::WearOrgHonorRequest &tmpReq, const Models::WearOrgHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 穿戴勋章
       *
       * @param request WearOrgHonorRequest
       * @return WearOrgHonorResponse
       */
      Models::WearOrgHonorResponse wearOrgHonor(const Models::WearOrgHonorRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
