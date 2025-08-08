// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AICCS20191015_HPP_
#define ALIBABACLOUD_AICCS20191015_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Aiccs20191015Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Aiccs20191015.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 新增热线号码
       *
       * @param tmpReq AddHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddHotlineNumberResponse
       */
      Models::AddHotlineNumberResponse addHotlineNumberWithOptions(const Models::AddHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增热线号码
       *
       * @param request AddHotlineNumberRequest
       * @return AddHotlineNumberResponse
       */
      Models::AddHotlineNumberResponse addHotlineNumber(const Models::AddHotlineNumberRequest &request);

      /**
       * @param request AddOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOuterAccountResponse
       */
      Models::AddOuterAccountResponse addOuterAccountWithOptions(const Models::AddOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddOuterAccountRequest
       * @return AddOuterAccountResponse
       */
      Models::AddOuterAccountResponse addOuterAccount(const Models::AddOuterAccountRequest &request);

      /**
       * @param request AddSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSkillGroupResponse
       */
      Models::AddSkillGroupResponse addSkillGroupWithOptions(const Models::AddSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddSkillGroupRequest
       * @return AddSkillGroupResponse
       */
      Models::AddSkillGroupResponse addSkillGroup(const Models::AddSkillGroupRequest &request);

      /**
       * @param request AiccsSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiccsSmartCallResponse
       */
      Models::AiccsSmartCallResponse aiccsSmartCallWithOptions(const Models::AiccsSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AiccsSmartCallRequest
       * @return AiccsSmartCallResponse
       */
      Models::AiccsSmartCallResponse aiccsSmartCall(const Models::AiccsSmartCallRequest &request);

      /**
       * @param request AiccsSmartCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiccsSmartCallOperateResponse
       */
      Models::AiccsSmartCallOperateResponse aiccsSmartCallOperateWithOptions(const Models::AiccsSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AiccsSmartCallOperateRequest
       * @return AiccsSmartCallOperateResponse
       */
      Models::AiccsSmartCallOperateResponse aiccsSmartCallOperate(const Models::AiccsSmartCallOperateRequest &request);

      /**
       * @param request AnswerCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCallWithOptions(const Models::AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AnswerCallRequest
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCall(const Models::AnswerCallRequest &request);

      /**
       * @summary 追加任务明细
       *
       * @param request AttachTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachTaskResponse
       */
      Models::AttachTaskResponse attachTaskWithOptions(const Models::AttachTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 追加任务明细
       *
       * @param request AttachTaskRequest
       * @return AttachTaskResponse
       */
      Models::AttachTaskResponse attachTask(const Models::AttachTaskRequest &request);

      /**
       * @param request BatchCreateQualityProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateQualityProjectsResponse
       */
      Models::BatchCreateQualityProjectsResponse batchCreateQualityProjectsWithOptions(const Models::BatchCreateQualityProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchCreateQualityProjectsRequest
       * @return BatchCreateQualityProjectsResponse
       */
      Models::BatchCreateQualityProjectsResponse batchCreateQualityProjects(const Models::BatchCreateQualityProjectsRequest &request);

      /**
       * @summary 批量取消大模型解决方案Ai外呼明细任务
       *
       * @param tmpReq CancelAiCallDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAiCallDetailsResponse
       */
      Models::CancelAiCallDetailsResponse cancelAiCallDetailsWithOptions(const Models::CancelAiCallDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量取消大模型解决方案Ai外呼明细任务
       *
       * @param request CancelAiCallDetailsRequest
       * @return CancelAiCallDetailsResponse
       */
      Models::CancelAiCallDetailsResponse cancelAiCallDetails(const Models::CancelAiCallDetailsRequest &request);

      /**
       * @summary 删除智能外呼任务
       *
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能外呼任务
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary 修改在线客服状态
       *
       * @param request ChangeChatAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeChatAgentStatusResponse
       */
      Models::ChangeChatAgentStatusResponse changeChatAgentStatusWithOptions(const Models::ChangeChatAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改在线客服状态
       *
       * @param request ChangeChatAgentStatusRequest
       * @return ChangeChatAgentStatusResponse
       */
      Models::ChangeChatAgentStatusResponse changeChatAgentStatus(const Models::ChangeChatAgentStatusRequest &request);

      /**
       * @param request ChangeQualityProjectStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeQualityProjectStatusResponse
       */
      Models::ChangeQualityProjectStatusResponse changeQualityProjectStatusWithOptions(const Models::ChangeQualityProjectStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeQualityProjectStatusRequest
       * @return ChangeQualityProjectStatusResponse
       */
      Models::ChangeQualityProjectStatusResponse changeQualityProjectStatus(const Models::ChangeQualityProjectStatusRequest &request);

      /**
       * @param request CreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary 创建任务
       *
       * @param tmpReq CreateAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiCallTaskResponse
       */
      Models::CreateAiCallTaskResponse createAiCallTaskWithOptions(const Models::CreateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request CreateAiCallTaskRequest
       * @return CreateAiCallTaskResponse
       */
      Models::CreateAiCallTaskResponse createAiCallTask(const Models::CreateAiCallTaskRequest &request);

      /**
       * @summary 创建智能外呼任务（预测式外呼、自动外呼）
       *
       * @param tmpReq CreateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiOutboundTaskResponse
       */
      Models::CreateAiOutboundTaskResponse createAiOutboundTaskWithOptions(const Models::CreateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建智能外呼任务（预测式外呼、自动外呼）
       *
       * @param request CreateAiOutboundTaskRequest
       * @return CreateAiOutboundTaskResponse
       */
      Models::CreateAiOutboundTaskResponse createAiOutboundTask(const Models::CreateAiOutboundTaskRequest &request);

      /**
       * @summary 创建智能外呼任务批次
       *
       * @param request CreateAiOutboundTaskBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiOutboundTaskBatchResponse
       */
      Models::CreateAiOutboundTaskBatchResponse createAiOutboundTaskBatchWithOptions(const Models::CreateAiOutboundTaskBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建智能外呼任务批次
       *
       * @param request CreateAiOutboundTaskBatchRequest
       * @return CreateAiOutboundTaskBatchResponse
       */
      Models::CreateAiOutboundTaskBatchResponse createAiOutboundTaskBatch(const Models::CreateAiOutboundTaskBatchRequest &request);

      /**
       * @summary 创建部门信息
       *
       * @param request CreateDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDepartmentResponse
       */
      Models::CreateDepartmentResponse createDepartmentWithOptions(const Models::CreateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建部门信息
       *
       * @param request CreateDepartmentRequest
       * @return CreateDepartmentResponse
       */
      Models::CreateDepartmentResponse createDepartment(const Models::CreateDepartmentRequest &request);

      /**
       * @param request CreateOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOutboundTaskResponse
       */
      Models::CreateOutboundTaskResponse createOutboundTaskWithOptions(const Models::CreateOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateOutboundTaskRequest
       * @return CreateOutboundTaskResponse
       */
      Models::CreateOutboundTaskResponse createOutboundTask(const Models::CreateOutboundTaskRequest &request);

      /**
       * @param request CreateQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityProjectResponse
       */
      Models::CreateQualityProjectResponse createQualityProjectWithOptions(const Models::CreateQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateQualityProjectRequest
       * @return CreateQualityProjectResponse
       */
      Models::CreateQualityProjectResponse createQualityProject(const Models::CreateQualityProjectRequest &request);

      /**
       * @param request CreateQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRuleWithOptions(const Models::CreateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateQualityRuleRequest
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRule(const Models::CreateQualityRuleRequest &request);

      /**
       * @param request CreateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroupWithOptions(const Models::CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSkillGroupRequest
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroup(const Models::CreateSkillGroupRequest &request);

      /**
       * @summary 创建外呼任务
       *
       * @param request CreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建外呼任务
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary 创建坐席并开通sso登录能力
       *
       * @param request CreateThirdSsoAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThirdSsoAgentResponse
       */
      Models::CreateThirdSsoAgentResponse createThirdSsoAgentWithOptions(const Models::CreateThirdSsoAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建坐席并开通sso登录能力
       *
       * @param request CreateThirdSsoAgentRequest
       * @return CreateThirdSsoAgentResponse
       */
      Models::CreateThirdSsoAgentResponse createThirdSsoAgent(const Models::CreateThirdSsoAgentRequest &request);

      /**
       * @summary 删除坐席账号
       *
       * @param request DeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除坐席账号
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary 删除智能外呼任务
       *
       * @param request DeleteAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiOutboundTaskResponse
       */
      Models::DeleteAiOutboundTaskResponse deleteAiOutboundTaskWithOptions(const Models::DeleteAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能外呼任务
       *
       * @param request DeleteAiOutboundTaskRequest
       * @return DeleteAiOutboundTaskResponse
       */
      Models::DeleteAiOutboundTaskResponse deleteAiOutboundTask(const Models::DeleteAiOutboundTaskRequest &request);

      /**
       * @summary 删除部门信息
       *
       * @param request DeleteDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartmentWithOptions(const Models::DeleteDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除部门信息
       *
       * @param request DeleteDepartmentRequest
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartment(const Models::DeleteDepartmentRequest &request);

      /**
       * @summary 删除热线号码
       *
       * @param request DeleteHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotlineNumberResponse
       */
      Models::DeleteHotlineNumberResponse deleteHotlineNumberWithOptions(const Models::DeleteHotlineNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除热线号码
       *
       * @param request DeleteHotlineNumberRequest
       * @return DeleteHotlineNumberResponse
       */
      Models::DeleteHotlineNumberResponse deleteHotlineNumber(const Models::DeleteHotlineNumberRequest &request);

      /**
       * @param request DeleteOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOutboundTaskResponse
       */
      Models::DeleteOutboundTaskResponse deleteOutboundTaskWithOptions(const Models::DeleteOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteOutboundTaskRequest
       * @return DeleteOutboundTaskResponse
       */
      Models::DeleteOutboundTaskResponse deleteOutboundTask(const Models::DeleteOutboundTaskRequest &request);

      /**
       * @param request DeleteOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOuterAccountResponse
       */
      Models::DeleteOuterAccountResponse deleteOuterAccountWithOptions(const Models::DeleteOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteOuterAccountRequest
       * @return DeleteOuterAccountResponse
       */
      Models::DeleteOuterAccountResponse deleteOuterAccount(const Models::DeleteOuterAccountRequest &request);

      /**
       * @param request DeleteQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityProjectResponse
       */
      Models::DeleteQualityProjectResponse deleteQualityProjectWithOptions(const Models::DeleteQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQualityProjectRequest
       * @return DeleteQualityProjectResponse
       */
      Models::DeleteQualityProjectResponse deleteQualityProject(const Models::DeleteQualityProjectRequest &request);

      /**
       * @param request DeleteQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRuleWithOptions(const Models::DeleteQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQualityRuleRequest
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRule(const Models::DeleteQualityRuleRequest &request);

      /**
       * @param request DeleteSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroupWithOptions(const Models::DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSkillGroupRequest
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroup(const Models::DeleteSkillGroupRequest &request);

      /**
       * @param request DescribeRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordDataResponse
       */
      Models::DescribeRecordDataResponse describeRecordDataWithOptions(const Models::DescribeRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRecordDataRequest
       * @return DescribeRecordDataResponse
       */
      Models::DescribeRecordDataResponse describeRecordData(const Models::DescribeRecordDataRequest &request);

      /**
       * @param request EditQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityProjectResponse
       */
      Models::EditQualityProjectResponse editQualityProjectWithOptions(const Models::EditQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityProjectRequest
       * @return EditQualityProjectResponse
       */
      Models::EditQualityProjectResponse editQualityProject(const Models::EditQualityProjectRequest &request);

      /**
       * @param request EditQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityRuleResponse
       */
      Models::EditQualityRuleResponse editQualityRuleWithOptions(const Models::EditQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityRuleRequest
       * @return EditQualityRuleResponse
       */
      Models::EditQualityRuleResponse editQualityRule(const Models::EditQualityRuleRequest &request);

      /**
       * @param request EditQualityRuleTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityRuleTagResponse
       */
      Models::EditQualityRuleTagResponse editQualityRuleTagWithOptions(const Models::EditQualityRuleTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityRuleTagRequest
       * @return EditQualityRuleTagResponse
       */
      Models::EditQualityRuleTagResponse editQualityRuleTag(const Models::EditQualityRuleTagRequest &request);

      /**
       * @summary 热线号码加密
       *
       * @param request EncryptPhoneNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptPhoneNumResponse
       */
      Models::EncryptPhoneNumResponse encryptPhoneNumWithOptions(const Models::EncryptPhoneNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热线号码加密
       *
       * @param request EncryptPhoneNumRequest
       * @return EncryptPhoneNumResponse
       */
      Models::EncryptPhoneNumResponse encryptPhoneNum(const Models::EncryptPhoneNumRequest &request);

      /**
       * @param request FetchCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchCallResponse
       */
      Models::FetchCallResponse fetchCallWithOptions(const Models::FetchCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FetchCallRequest
       * @return FetchCallResponse
       */
      Models::FetchCallResponse fetchCall(const Models::FetchCallRequest &request);

      /**
       * @param request FinishHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishHotlineServiceResponse
       */
      Models::FinishHotlineServiceResponse finishHotlineServiceWithOptions(const Models::FinishHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FinishHotlineServiceRequest
       * @return FinishHotlineServiceResponse
       */
      Models::FinishHotlineServiceResponse finishHotlineService(const Models::FinishHotlineServiceRequest &request);

      /**
       * @param request GenerateWebSocketSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateWebSocketSignResponse
       */
      Models::GenerateWebSocketSignResponse generateWebSocketSignWithOptions(const Models::GenerateWebSocketSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateWebSocketSignRequest
       * @return GenerateWebSocketSignResponse
       */
      Models::GenerateWebSocketSignResponse generateWebSocketSign(const Models::GenerateWebSocketSignRequest &request);

      /**
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary 坐席纬度基础状态量
       *
       * @param tmpReq GetAgentBasisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentBasisStatusResponse
       */
      Models::GetAgentBasisStatusResponse getAgentBasisStatusWithOptions(const Models::GetAgentBasisStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席纬度基础状态量
       *
       * @param request GetAgentBasisStatusRequest
       * @return GetAgentBasisStatusResponse
       */
      Models::GetAgentBasisStatusResponse getAgentBasisStatus(const Models::GetAgentBasisStatusRequest &request);

      /**
       * @param request GetAgentByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentByIdResponse
       */
      Models::GetAgentByIdResponse getAgentByIdWithOptions(const Models::GetAgentByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentByIdRequest
       * @return GetAgentByIdResponse
       */
      Models::GetAgentByIdResponse getAgentById(const Models::GetAgentByIdRequest &request);

      /**
       * @summary 热线坐席纬度详情汇总
       *
       * @param tmpReq GetAgentDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentDetailReportResponse
       */
      Models::GetAgentDetailReportResponse getAgentDetailReportWithOptions(const Models::GetAgentDetailReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热线坐席纬度详情汇总
       *
       * @param request GetAgentDetailReportRequest
       * @return GetAgentDetailReportResponse
       */
      Models::GetAgentDetailReportResponse getAgentDetailReport(const Models::GetAgentDetailReportRequest &request);

      /**
       * @param request GetAgentIndexRealTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentIndexRealTimeResponse
       */
      Models::GetAgentIndexRealTimeResponse getAgentIndexRealTimeWithOptions(const Models::GetAgentIndexRealTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentIndexRealTimeRequest
       * @return GetAgentIndexRealTimeResponse
       */
      Models::GetAgentIndexRealTimeResponse getAgentIndexRealTime(const Models::GetAgentIndexRealTimeRequest &request);

      /**
       * @summary 坐席服务状态量
       *
       * @param tmpReq GetAgentServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentServiceStatusResponse
       */
      Models::GetAgentServiceStatusResponse getAgentServiceStatusWithOptions(const Models::GetAgentServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席服务状态量
       *
       * @param request GetAgentServiceStatusRequest
       * @return GetAgentServiceStatusResponse
       */
      Models::GetAgentServiceStatusResponse getAgentServiceStatus(const Models::GetAgentServiceStatusRequest &request);

      /**
       * @summary 坐席纬度统计量
       *
       * @param tmpReq GetAgentStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentStatisticsResponse
       */
      Models::GetAgentStatisticsResponse getAgentStatisticsWithOptions(const Models::GetAgentStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席纬度统计量
       *
       * @param request GetAgentStatisticsRequest
       * @return GetAgentStatisticsResponse
       */
      Models::GetAgentStatisticsResponse getAgentStatistics(const Models::GetAgentStatisticsRequest &request);

      /**
       * @summary 获取智能外呼任务业务自定义信息
       *
       * @param request GetAiOutboundTaskBizDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskBizDataResponse
       */
      Models::GetAiOutboundTaskBizDataResponse getAiOutboundTaskBizDataWithOptions(const Models::GetAiOutboundTaskBizDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取智能外呼任务业务自定义信息
       *
       * @param request GetAiOutboundTaskBizDataRequest
       * @return GetAiOutboundTaskBizDataResponse
       */
      Models::GetAiOutboundTaskBizDataResponse getAiOutboundTaskBizData(const Models::GetAiOutboundTaskBizDataRequest &request);

      /**
       * @summary 智能外呼任务配置详情查询
       *
       * @param request GetAiOutboundTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskDetailResponse
       */
      Models::GetAiOutboundTaskDetailResponse getAiOutboundTaskDetailWithOptions(const Models::GetAiOutboundTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能外呼任务配置详情查询
       *
       * @param request GetAiOutboundTaskDetailRequest
       * @return GetAiOutboundTaskDetailResponse
       */
      Models::GetAiOutboundTaskDetailResponse getAiOutboundTaskDetail(const Models::GetAiOutboundTaskDetailRequest &request);

      /**
       * @summary 智能外呼任务执行详情
       *
       * @param request GetAiOutboundTaskExecDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskExecDetailResponse
       */
      Models::GetAiOutboundTaskExecDetailResponse getAiOutboundTaskExecDetailWithOptions(const Models::GetAiOutboundTaskExecDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能外呼任务执行详情
       *
       * @param request GetAiOutboundTaskExecDetailRequest
       * @return GetAiOutboundTaskExecDetailResponse
       */
      Models::GetAiOutboundTaskExecDetailResponse getAiOutboundTaskExecDetail(const Models::GetAiOutboundTaskExecDetailRequest &request);

      /**
       * @summary 智能外呼任务列表查询
       *
       * @param request GetAiOutboundTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskListResponse
       */
      Models::GetAiOutboundTaskListResponse getAiOutboundTaskListWithOptions(const Models::GetAiOutboundTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能外呼任务列表查询
       *
       * @param request GetAiOutboundTaskListRequest
       * @return GetAiOutboundTaskListResponse
       */
      Models::GetAiOutboundTaskListResponse getAiOutboundTaskList(const Models::GetAiOutboundTaskListRequest &request);

      /**
       * @summary 智能外呼任务执行进度
       *
       * @param request GetAiOutboundTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskProgressResponse
       */
      Models::GetAiOutboundTaskProgressResponse getAiOutboundTaskProgressWithOptions(const Models::GetAiOutboundTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能外呼任务执行进度
       *
       * @param request GetAiOutboundTaskProgressRequest
       * @return GetAiOutboundTaskProgressResponse
       */
      Models::GetAiOutboundTaskProgressResponse getAiOutboundTaskProgress(const Models::GetAiOutboundTaskProgressRequest &request);

      /**
       * @summary getAllDepartment
       *
       * @param request GetAllDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllDepartmentResponse
       */
      Models::GetAllDepartmentResponse getAllDepartmentWithOptions(const Models::GetAllDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary getAllDepartment
       *
       * @param request GetAllDepartmentRequest
       * @return GetAllDepartmentResponse
       */
      Models::GetAllDepartmentResponse getAllDepartment(const Models::GetAllDepartmentRequest &request);

      /**
       * @summary 获取通话录音文件
       *
       * @param request GetCallSoundRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallSoundRecordResponse
       */
      Models::GetCallSoundRecordResponse getCallSoundRecordWithOptions(const Models::GetCallSoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取通话录音文件
       *
       * @param request GetCallSoundRecordRequest
       * @return GetCallSoundRecordResponse
       */
      Models::GetCallSoundRecordResponse getCallSoundRecord(const Models::GetCallSoundRecordRequest &request);

      /**
       * @summary 获取热线配置号码列表
       *
       * @param request GetConfigNumListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigNumListResponse
       */
      Models::GetConfigNumListResponse getConfigNumListWithOptions(const Models::GetConfigNumListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热线配置号码列表
       *
       * @param request GetConfigNumListRequest
       * @return GetConfigNumListResponse
       */
      Models::GetConfigNumListResponse getConfigNumList(const Models::GetConfigNumListRequest &request);

      /**
       * @summary 获取会员信息
       *
       * @param request GetCustomerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerInfoResponse
       */
      Models::GetCustomerInfoResponse getCustomerInfoWithOptions(const Models::GetCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会员信息
       *
       * @param request GetCustomerInfoRequest
       * @return GetCustomerInfoResponse
       */
      Models::GetCustomerInfoResponse getCustomerInfo(const Models::GetCustomerInfoRequest &request);

      /**
       * @summary 获取技能组分组
       *
       * @param request GetDepGroupTreeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDepGroupTreeDataResponse
       */
      Models::GetDepGroupTreeDataResponse getDepGroupTreeDataWithOptions(const Models::GetDepGroupTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取技能组分组
       *
       * @param request GetDepGroupTreeDataRequest
       * @return GetDepGroupTreeDataResponse
       */
      Models::GetDepGroupTreeDataResponse getDepGroupTreeData(const Models::GetDepGroupTreeDataRequest &request);

      /**
       * @summary 部门纬度坐席状态量
       *
       * @param tmpReq GetDepartmentalLatitudeAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDepartmentalLatitudeAgentStatusResponse
       */
      Models::GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatusWithOptions(const Models::GetDepartmentalLatitudeAgentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部门纬度坐席状态量
       *
       * @param request GetDepartmentalLatitudeAgentStatusRequest
       * @return GetDepartmentalLatitudeAgentStatusResponse
       */
      Models::GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatus(const Models::GetDepartmentalLatitudeAgentStatusRequest &request);

      /**
       * @param request GetHotlineAgentDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentDetailResponse
       */
      Models::GetHotlineAgentDetailResponse getHotlineAgentDetailWithOptions(const Models::GetHotlineAgentDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotlineAgentDetailRequest
       * @return GetHotlineAgentDetailResponse
       */
      Models::GetHotlineAgentDetailResponse getHotlineAgentDetail(const Models::GetHotlineAgentDetailRequest &request);

      /**
       * @param request GetHotlineAgentDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentDetailReportResponse
       */
      Models::GetHotlineAgentDetailReportResponse getHotlineAgentDetailReportWithOptions(const Models::GetHotlineAgentDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotlineAgentDetailReportRequest
       * @return GetHotlineAgentDetailReportResponse
       */
      Models::GetHotlineAgentDetailReportResponse getHotlineAgentDetailReport(const Models::GetHotlineAgentDetailReportRequest &request);

      /**
       * @param request GetHotlineAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentStatusResponse
       */
      Models::GetHotlineAgentStatusResponse getHotlineAgentStatusWithOptions(const Models::GetHotlineAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotlineAgentStatusRequest
       * @return GetHotlineAgentStatusResponse
       */
      Models::GetHotlineAgentStatusResponse getHotlineAgentStatus(const Models::GetHotlineAgentStatusRequest &request);

      /**
       * @summary 查询话务动作结果数据
       *
       * @param request GetHotlineCallActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineCallActionResponse
       */
      Models::GetHotlineCallActionResponse getHotlineCallActionWithOptions(const Models::GetHotlineCallActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询话务动作结果数据
       *
       * @param request GetHotlineCallActionRequest
       * @return GetHotlineCallActionResponse
       */
      Models::GetHotlineCallActionResponse getHotlineCallAction(const Models::GetHotlineCallActionRequest &request);

      /**
       * @param request GetHotlineGroupDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineGroupDetailReportResponse
       */
      Models::GetHotlineGroupDetailReportResponse getHotlineGroupDetailReportWithOptions(const Models::GetHotlineGroupDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotlineGroupDetailReportRequest
       * @return GetHotlineGroupDetailReportResponse
       */
      Models::GetHotlineGroupDetailReportResponse getHotlineGroupDetailReport(const Models::GetHotlineGroupDetailReportRequest &request);

      /**
       * @summary 获取热线聊天记录
       *
       * @param request GetHotlineMessageLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineMessageLogResponse
       */
      Models::GetHotlineMessageLogResponse getHotlineMessageLogWithOptions(const Models::GetHotlineMessageLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热线聊天记录
       *
       * @param request GetHotlineMessageLogRequest
       * @return GetHotlineMessageLogResponse
       */
      Models::GetHotlineMessageLogResponse getHotlineMessageLog(const Models::GetHotlineMessageLogRequest &request);

      /**
       * @summary 获取热线当前信息
       *
       * @param request GetHotlineRuntimeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineRuntimeInfoResponse
       */
      Models::GetHotlineRuntimeInfoResponse getHotlineRuntimeInfoWithOptions(const Models::GetHotlineRuntimeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热线当前信息
       *
       * @param request GetHotlineRuntimeInfoRequest
       * @return GetHotlineRuntimeInfoResponse
       */
      Models::GetHotlineRuntimeInfoResponse getHotlineRuntimeInfo(const Models::GetHotlineRuntimeInfoRequest &request);

      /**
       * @summary 服务统计量数据
       *
       * @param tmpReq GetHotlineServiceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineServiceStatisticsResponse
       */
      Models::GetHotlineServiceStatisticsResponse getHotlineServiceStatisticsWithOptions(const Models::GetHotlineServiceStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务统计量数据
       *
       * @param request GetHotlineServiceStatisticsRequest
       * @return GetHotlineServiceStatisticsResponse
       */
      Models::GetHotlineServiceStatisticsResponse getHotlineServiceStatistics(const Models::GetHotlineServiceStatisticsRequest &request);

      /**
       * @param request GetHotlineWaitingNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineWaitingNumberResponse
       */
      Models::GetHotlineWaitingNumberResponse getHotlineWaitingNumberWithOptions(const Models::GetHotlineWaitingNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotlineWaitingNumberRequest
       * @return GetHotlineWaitingNumberResponse
       */
      Models::GetHotlineWaitingNumberResponse getHotlineWaitingNumber(const Models::GetHotlineWaitingNumberRequest &request);

      /**
       * @param request GetIndexCurrentValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexCurrentValueResponse
       */
      Models::GetIndexCurrentValueResponse getIndexCurrentValueWithOptions(const Models::GetIndexCurrentValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetIndexCurrentValueRequest
       * @return GetIndexCurrentValueResponse
       */
      Models::GetIndexCurrentValueResponse getIndexCurrentValue(const Models::GetIndexCurrentValueRequest &request);

      /**
       * @param request GetInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceListWithOptions(const Models::GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetInstanceListRequest
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceList(const Models::GetInstanceListRequest &request);

      /**
       * @summary 热线检测获取mcu ip地址
       *
       * @param request GetMcuLvsIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcuLvsIpResponse
       */
      Models::GetMcuLvsIpResponse getMcuLvsIpWithOptions(const Models::GetMcuLvsIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热线检测获取mcu ip地址
       *
       * @param request GetMcuLvsIpRequest
       * @return GetMcuLvsIpResponse
       */
      Models::GetMcuLvsIpResponse getMcuLvsIp(const Models::GetMcuLvsIpRequest &request);

      /**
       * @param request GetNumLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumLocationResponse
       */
      Models::GetNumLocationResponse getNumLocationWithOptions(const Models::GetNumLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetNumLocationRequest
       * @return GetNumLocationResponse
       */
      Models::GetNumLocationResponse getNumLocation(const Models::GetNumLocationRequest &request);

      /**
       * @summary 在线坐席信息
       *
       * @param tmpReq GetOnlineSeatInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineSeatInformationResponse
       */
      Models::GetOnlineSeatInformationResponse getOnlineSeatInformationWithOptions(const Models::GetOnlineSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在线坐席信息
       *
       * @param request GetOnlineSeatInformationRequest
       * @return GetOnlineSeatInformationResponse
       */
      Models::GetOnlineSeatInformationResponse getOnlineSeatInformation(const Models::GetOnlineSeatInformationRequest &request);

      /**
       * @summary 在线服务总量
       *
       * @param tmpReq GetOnlineServiceVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineServiceVolumeResponse
       */
      Models::GetOnlineServiceVolumeResponse getOnlineServiceVolumeWithOptions(const Models::GetOnlineServiceVolumeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在线服务总量
       *
       * @param request GetOnlineServiceVolumeRequest
       * @return GetOnlineServiceVolumeResponse
       */
      Models::GetOnlineServiceVolumeResponse getOnlineServiceVolume(const Models::GetOnlineServiceVolumeRequest &request);

      /**
       * @param request GetOutbounNumListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOutbounNumListResponse
       */
      Models::GetOutbounNumListResponse getOutbounNumListWithOptions(const Models::GetOutbounNumListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOutbounNumListRequest
       * @return GetOutbounNumListResponse
       */
      Models::GetOutbounNumListResponse getOutbounNumList(const Models::GetOutbounNumListRequest &request);

      /**
       * @param request GetQualityProjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectDetailResponse
       */
      Models::GetQualityProjectDetailResponse getQualityProjectDetailWithOptions(const Models::GetQualityProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityProjectDetailRequest
       * @return GetQualityProjectDetailResponse
       */
      Models::GetQualityProjectDetailResponse getQualityProjectDetail(const Models::GetQualityProjectDetailRequest &request);

      /**
       * @param request GetQualityProjectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectListResponse
       */
      Models::GetQualityProjectListResponse getQualityProjectListWithOptions(const Models::GetQualityProjectListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityProjectListRequest
       * @return GetQualityProjectListResponse
       */
      Models::GetQualityProjectListResponse getQualityProjectList(const Models::GetQualityProjectListRequest &request);

      /**
       * @param request GetQualityProjectLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectLogResponse
       */
      Models::GetQualityProjectLogResponse getQualityProjectLogWithOptions(const Models::GetQualityProjectLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityProjectLogRequest
       * @return GetQualityProjectLogResponse
       */
      Models::GetQualityProjectLogResponse getQualityProjectLog(const Models::GetQualityProjectLogRequest &request);

      /**
       * @param request GetQualityResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityResultResponse
       */
      Models::GetQualityResultResponse getQualityResultWithOptions(const Models::GetQualityResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityResultRequest
       * @return GetQualityResultResponse
       */
      Models::GetQualityResultResponse getQualityResult(const Models::GetQualityResultRequest &request);

      /**
       * @param request GetQualityRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleDetailResponse
       */
      Models::GetQualityRuleDetailResponse getQualityRuleDetailWithOptions(const Models::GetQualityRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleDetailRequest
       * @return GetQualityRuleDetailResponse
       */
      Models::GetQualityRuleDetailResponse getQualityRuleDetail(const Models::GetQualityRuleDetailRequest &request);

      /**
       * @param request GetQualityRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleListResponse
       */
      Models::GetQualityRuleListResponse getQualityRuleListWithOptions(const Models::GetQualityRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleListRequest
       * @return GetQualityRuleListResponse
       */
      Models::GetQualityRuleListResponse getQualityRuleList(const Models::GetQualityRuleListRequest &request);

      /**
       * @param request GetQualityRuleTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTagListResponse
       */
      Models::GetQualityRuleTagListResponse getQualityRuleTagListWithOptions(const Models::GetQualityRuleTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleTagListRequest
       * @return GetQualityRuleTagListResponse
       */
      Models::GetQualityRuleTagListResponse getQualityRuleTagList(const Models::GetQualityRuleTagListRequest &request);

      /**
       * @summary 技能组纬度队列信息
       *
       * @param tmpReq GetQueueInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueInformationResponse
       */
      Models::GetQueueInformationResponse getQueueInformationWithOptions(const Models::GetQueueInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组纬度队列信息
       *
       * @param request GetQueueInformationRequest
       * @return GetQueueInformationResponse
       */
      Models::GetQueueInformationResponse getQueueInformation(const Models::GetQueueInformationRequest &request);

      /**
       * @param request GetRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordDataResponse
       */
      Models::GetRecordDataResponse getRecordDataWithOptions(const Models::GetRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRecordDataRequest
       * @return GetRecordDataResponse
       */
      Models::GetRecordDataResponse getRecordData(const Models::GetRecordDataRequest &request);

      /**
       * @summary 获取录音链接
       *
       * @param request GetRecordUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordUrlResponse
       */
      Models::GetRecordUrlResponse getRecordUrlWithOptions(const Models::GetRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取录音链接
       *
       * @param request GetRecordUrlRequest
       * @return GetRecordUrlResponse
       */
      Models::GetRecordUrlResponse getRecordUrl(const Models::GetRecordUrlRequest &request);

      /**
       * @summary 获取RtcToken
       *
       * @param request GetRtcTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRtcTokenResponse
       */
      Models::GetRtcTokenResponse getRtcTokenWithOptions(const Models::GetRtcTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RtcToken
       *
       * @param request GetRtcTokenRequest
       * @return GetRtcTokenResponse
       */
      Models::GetRtcTokenResponse getRtcToken(const Models::GetRtcTokenRequest &request);

      /**
       * @summary 部门纬度坐席信息数据
       *
       * @param tmpReq GetSeatInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSeatInformationResponse
       */
      Models::GetSeatInformationResponse getSeatInformationWithOptions(const Models::GetSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部门纬度坐席信息数据
       *
       * @param request GetSeatInformationRequest
       * @return GetSeatInformationResponse
       */
      Models::GetSeatInformationResponse getSeatInformation(const Models::GetSeatInformationRequest &request);

      /**
       * @summary 技能组坐席状态详情
       *
       * @param tmpReq GetSkillGroupAgentStatusDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupAgentStatusDetailsResponse
       */
      Models::GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetailsWithOptions(const Models::GetSkillGroupAgentStatusDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组坐席状态详情
       *
       * @param request GetSkillGroupAgentStatusDetailsRequest
       * @return GetSkillGroupAgentStatusDetailsResponse
       */
      Models::GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetails(const Models::GetSkillGroupAgentStatusDetailsRequest &request);

      /**
       * @summary 技能组坐席汇总状态量
       *
       * @param tmpReq GetSkillGroupAndAgentStatusSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupAndAgentStatusSummaryResponse
       */
      Models::GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummaryWithOptions(const Models::GetSkillGroupAndAgentStatusSummaryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组坐席汇总状态量
       *
       * @param request GetSkillGroupAndAgentStatusSummaryRequest
       * @return GetSkillGroupAndAgentStatusSummaryResponse
       */
      Models::GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummary(const Models::GetSkillGroupAndAgentStatusSummaryRequest &request);

      /**
       * @summary 技能组纬度状态量
       *
       * @param tmpReq GetSkillGroupLatitudeStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupLatitudeStateResponse
       */
      Models::GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeStateWithOptions(const Models::GetSkillGroupLatitudeStateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组纬度状态量
       *
       * @param request GetSkillGroupLatitudeStateRequest
       * @return GetSkillGroupLatitudeStateResponse
       */
      Models::GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeState(const Models::GetSkillGroupLatitudeStateRequest &request);

      /**
       * @summary 技能组纬度服务能力
       *
       * @param tmpReq GetSkillGroupServiceCapabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupServiceCapabilityResponse
       */
      Models::GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapabilityWithOptions(const Models::GetSkillGroupServiceCapabilityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组纬度服务能力
       *
       * @param request GetSkillGroupServiceCapabilityRequest
       * @return GetSkillGroupServiceCapabilityResponse
       */
      Models::GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapability(const Models::GetSkillGroupServiceCapabilityRequest &request);

      /**
       * @summary 技能组服务状态量
       *
       * @param tmpReq GetSkillGroupServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupServiceStatusResponse
       */
      Models::GetSkillGroupServiceStatusResponse getSkillGroupServiceStatusWithOptions(const Models::GetSkillGroupServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组服务状态量
       *
       * @param request GetSkillGroupServiceStatusRequest
       * @return GetSkillGroupServiceStatusResponse
       */
      Models::GetSkillGroupServiceStatusResponse getSkillGroupServiceStatus(const Models::GetSkillGroupServiceStatusRequest &request);

      /**
       * @summary 技能组状态总量
       *
       * @param tmpReq GetSkillGroupStatusTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupStatusTotalResponse
       */
      Models::GetSkillGroupStatusTotalResponse getSkillGroupStatusTotalWithOptions(const Models::GetSkillGroupStatusTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组状态总量
       *
       * @param request GetSkillGroupStatusTotalRequest
       * @return GetSkillGroupStatusTotalResponse
       */
      Models::GetSkillGroupStatusTotalResponse getSkillGroupStatusTotal(const Models::GetSkillGroupStatusTotalRequest &request);

      /**
       * @summary 移动端呼叫挂断
       *
       * @param request HangUpDoubleCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangUpDoubleCallResponse
       */
      Models::HangUpDoubleCallResponse hangUpDoubleCallWithOptions(const Models::HangUpDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动端呼叫挂断
       *
       * @param request HangUpDoubleCallRequest
       * @return HangUpDoubleCallResponse
       */
      Models::HangUpDoubleCallResponse hangUpDoubleCall(const Models::HangUpDoubleCallRequest &request);

      /**
       * @param request HangupCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupCallResponse
       */
      Models::HangupCallResponse hangupCallWithOptions(const Models::HangupCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HangupCallRequest
       * @return HangupCallResponse
       */
      Models::HangupCallResponse hangupCall(const Models::HangupCallRequest &request);

      /**
       * @summary 通信智能引擎中主动挂断通话
       *
       * @param request HangupOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupOperateResponse
       */
      Models::HangupOperateResponse hangupOperateWithOptions(const Models::HangupOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通信智能引擎中主动挂断通话
       *
       * @param request HangupOperateRequest
       * @return HangupOperateResponse
       */
      Models::HangupOperateResponse hangupOperate(const Models::HangupOperateRequest &request);

      /**
       * @param request HangupThirdCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupThirdCallResponse
       */
      Models::HangupThirdCallResponse hangupThirdCallWithOptions(const Models::HangupThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HangupThirdCallRequest
       * @return HangupThirdCallResponse
       */
      Models::HangupThirdCallResponse hangupThirdCall(const Models::HangupThirdCallRequest &request);

      /**
       * @param request HoldCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCallWithOptions(const Models::HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HoldCallRequest
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCall(const Models::HoldCallRequest &request);

      /**
       * @param request HotlineSessionQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotlineSessionQueryResponse
       */
      Models::HotlineSessionQueryResponse hotlineSessionQueryWithOptions(const Models::HotlineSessionQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HotlineSessionQueryRequest
       * @return HotlineSessionQueryResponse
       */
      Models::HotlineSessionQueryResponse hotlineSessionQuery(const Models::HotlineSessionQueryRequest &request);

      /**
       * @summary 导入任务号码数据
       *
       * @param tmpReq ImportTaskNumberDatasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportTaskNumberDatasResponse
       */
      Models::ImportTaskNumberDatasResponse importTaskNumberDatasWithOptions(const Models::ImportTaskNumberDatasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入任务号码数据
       *
       * @param request ImportTaskNumberDatasRequest
       * @return ImportTaskNumberDatasResponse
       */
      Models::ImportTaskNumberDatasResponse importTaskNumberDatas(const Models::ImportTaskNumberDatasRequest &request);

      /**
       * @summary 智能外呼任务导入号码
       *
       * @param tmpReq InsertAiOutboundPhoneNumsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertAiOutboundPhoneNumsResponse
       */
      Models::InsertAiOutboundPhoneNumsResponse insertAiOutboundPhoneNumsWithOptions(const Models::InsertAiOutboundPhoneNumsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能外呼任务导入号码
       *
       * @param request InsertAiOutboundPhoneNumsRequest
       * @return InsertAiOutboundPhoneNumsResponse
       */
      Models::InsertAiOutboundPhoneNumsResponse insertAiOutboundPhoneNums(const Models::InsertAiOutboundPhoneNumsRequest &request);

      /**
       * @param request InsertTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertTaskDetailResponse
       */
      Models::InsertTaskDetailResponse insertTaskDetailWithOptions(const Models::InsertTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InsertTaskDetailRequest
       * @return InsertTaskDetailResponse
       */
      Models::InsertTaskDetailResponse insertTaskDetail(const Models::InsertTaskDetailRequest &request);

      /**
       * @param request JoinThirdCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinThirdCallResponse
       */
      Models::JoinThirdCallResponse joinThirdCallWithOptions(const Models::JoinThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request JoinThirdCallRequest
       * @return JoinThirdCallResponse
       */
      Models::JoinThirdCallResponse joinThirdCall(const Models::JoinThirdCallRequest &request);

      /**
       * @param request ListAgentBySkillGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentBySkillGroupIdResponse
       */
      Models::ListAgentBySkillGroupIdResponse listAgentBySkillGroupIdWithOptions(const Models::ListAgentBySkillGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAgentBySkillGroupIdRequest
       * @return ListAgentBySkillGroupIdResponse
       */
      Models::ListAgentBySkillGroupIdResponse listAgentBySkillGroupId(const Models::ListAgentBySkillGroupIdRequest &request);

      /**
       * @summary 查询所有机器人列表
       *
       * @param request ListAiccsRobotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiccsRobotResponse
       */
      Models::ListAiccsRobotResponse listAiccsRobotWithOptions(const Models::ListAiccsRobotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有机器人列表
       *
       * @param request ListAiccsRobotRequest
       * @return ListAiccsRobotResponse
       */
      Models::ListAiccsRobotResponse listAiccsRobot(const Models::ListAiccsRobotRequest &request);

      /**
       * @summary 获取tts音色列表
       *
       * @param request ListAvailableTtsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableTtsResponse
       */
      Models::ListAvailableTtsResponse listAvailableTtsWithOptions(const Models::ListAvailableTtsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取tts音色列表
       *
       * @param request ListAvailableTtsRequest
       * @return ListAvailableTtsResponse
       */
      Models::ListAvailableTtsResponse listAvailableTts(const Models::ListAvailableTtsRequest &request);

      /**
       * @summary 根据时间段查询在线会话详情，包含会话内容，时间段范围最长不超过1天
       *
       * @param request ListChatRecordDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatRecordDetailResponse
       */
      Models::ListChatRecordDetailResponse listChatRecordDetailWithOptions(const Models::ListChatRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据时间段查询在线会话详情，包含会话内容，时间段范围最长不超过1天
       *
       * @param request ListChatRecordDetailRequest
       * @return ListChatRecordDetailResponse
       */
      Models::ListChatRecordDetailResponse listChatRecordDetail(const Models::ListChatRecordDetailRequest &request);

      /**
       * @summary 查看对话记录
       *
       * @param request ListDialogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialogResponse
       */
      Models::ListDialogResponse listDialogWithOptions(const Models::ListDialogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看对话记录
       *
       * @param request ListDialogRequest
       * @return ListDialogResponse
       */
      Models::ListDialogResponse listDialog(const Models::ListDialogRequest &request);

      /**
       * @param request ListHotlineRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotlineRecordResponse
       */
      Models::ListHotlineRecordResponse listHotlineRecordWithOptions(const Models::ListHotlineRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListHotlineRecordRequest
       * @return ListHotlineRecordResponse
       */
      Models::ListHotlineRecordResponse listHotlineRecord(const Models::ListHotlineRecordRequest &request);

      /**
       * @summary 根据时间段查询热线详情列表，包含热线通话信息，时间段范围最长不超过1天
       *
       * @param request ListHotlineRecordDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotlineRecordDetailResponse
       */
      Models::ListHotlineRecordDetailResponse listHotlineRecordDetailWithOptions(const Models::ListHotlineRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据时间段查询热线详情列表，包含热线通话信息，时间段范围最长不超过1天
       *
       * @param request ListHotlineRecordDetailRequest
       * @return ListHotlineRecordDetailResponse
       */
      Models::ListHotlineRecordDetailResponse listHotlineRecordDetail(const Models::ListHotlineRecordDetailRequest &request);

      /**
       * @param request ListOutboundPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundPhoneNumberResponse
       */
      Models::ListOutboundPhoneNumberResponse listOutboundPhoneNumberWithOptions(const Models::ListOutboundPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListOutboundPhoneNumberRequest
       * @return ListOutboundPhoneNumberResponse
       */
      Models::ListOutboundPhoneNumberResponse listOutboundPhoneNumber(const Models::ListOutboundPhoneNumberRequest &request);

      /**
       * @summary 查看对话记录
       *
       * @param request ListRobotCallDialogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotCallDialogResponse
       */
      Models::ListRobotCallDialogResponse listRobotCallDialogWithOptions(const Models::ListRobotCallDialogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看对话记录
       *
       * @param request ListRobotCallDialogRequest
       * @return ListRobotCallDialogResponse
       */
      Models::ListRobotCallDialogResponse listRobotCallDialog(const Models::ListRobotCallDialogRequest &request);

      /**
       * @summary 查询机器人输出列表
       *
       * @param request ListRobotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotNodeResponse
       */
      Models::ListRobotNodeResponse listRobotNodeWithOptions(const Models::ListRobotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机器人输出列表
       *
       * @param request ListRobotNodeRequest
       * @return ListRobotNodeResponse
       */
      Models::ListRobotNodeResponse listRobotNode(const Models::ListRobotNodeRequest &request);

      /**
       * @summary 查询参数列表
       *
       * @param request ListRobotParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotParamsResponse
       */
      Models::ListRobotParamsResponse listRobotParamsWithOptions(const Models::ListRobotParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询参数列表
       *
       * @param request ListRobotParamsRequest
       * @return ListRobotParamsResponse
       */
      Models::ListRobotParamsResponse listRobotParams(const Models::ListRobotParamsRequest &request);

      /**
       * @summary 获取租户下的所有角色
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取租户下的所有角色
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @param request ListSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupResponse
       */
      Models::ListSkillGroupResponse listSkillGroupWithOptions(const Models::ListSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSkillGroupRequest
       * @return ListSkillGroupResponse
       */
      Models::ListSkillGroupResponse listSkillGroup(const Models::ListSkillGroupRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request ListTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskResponse
       */
      Models::ListTaskResponse listTaskWithOptions(const Models::ListTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request ListTaskRequest
       * @return ListTaskResponse
       */
      Models::ListTaskResponse listTask(const Models::ListTaskRequest &request);

      /**
       * @summary 任务详情查看通话列表
       *
       * @param request ListTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskDetailResponse
       */
      Models::ListTaskDetailResponse listTaskDetailWithOptions(const Models::ListTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务详情查看通话列表
       *
       * @param request ListTaskDetailRequest
       * @return ListTaskDetailResponse
       */
      Models::ListTaskDetailResponse listTaskDetail(const Models::ListTaskDetailRequest &request);

      /**
       * @summary 基于大模型的智能外呼
       *
       * @param tmpReq LlmSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmSmartCallResponse
       */
      Models::LlmSmartCallResponse llmSmartCallWithOptions(const Models::LlmSmartCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 基于大模型的智能外呼
       *
       * @param request LlmSmartCallRequest
       * @return LlmSmartCallResponse
       */
      Models::LlmSmartCallResponse llmSmartCall(const Models::LlmSmartCallRequest &request);

      /**
       * @summary 大模型外呼加密号码接口
       *
       * @param tmpReq LlmSmartCallEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmSmartCallEncryptResponse
       */
      Models::LlmSmartCallEncryptResponse llmSmartCallEncryptWithOptions(const Models::LlmSmartCallEncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 大模型外呼加密号码接口
       *
       * @param request LlmSmartCallEncryptRequest
       * @return LlmSmartCallEncryptResponse
       */
      Models::LlmSmartCallEncryptResponse llmSmartCallEncrypt(const Models::LlmSmartCallEncryptRequest &request);

      /**
       * @param request MakeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCallWithOptions(const Models::MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MakeCallRequest
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCall(const Models::MakeCallRequest &request);

      /**
       * @summary 移动端发起呼叫
       *
       * @param request MakeDoubleCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeDoubleCallResponse
       */
      Models::MakeDoubleCallResponse makeDoubleCallWithOptions(const Models::MakeDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动端发起呼叫
       *
       * @param request MakeDoubleCallRequest
       * @return MakeDoubleCallResponse
       */
      Models::MakeDoubleCallResponse makeDoubleCall(const Models::MakeDoubleCallRequest &request);

      /**
       * @summary 查询明细记录
       *
       * @param request QueryAiCallDetailPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallDetailPageResponse
       */
      Models::QueryAiCallDetailPageResponse queryAiCallDetailPageWithOptions(const Models::QueryAiCallDetailPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询明细记录
       *
       * @param request QueryAiCallDetailPageRequest
       * @return QueryAiCallDetailPageResponse
       */
      Models::QueryAiCallDetailPageResponse queryAiCallDetailPage(const Models::QueryAiCallDetailPageRequest &request);

      /**
       * @summary 查询任务详情
       *
       * @param request QueryAiCallTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallTaskDetailResponse
       */
      Models::QueryAiCallTaskDetailResponse queryAiCallTaskDetailWithOptions(const Models::QueryAiCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务详情
       *
       * @param request QueryAiCallTaskDetailRequest
       * @return QueryAiCallTaskDetailResponse
       */
      Models::QueryAiCallTaskDetailResponse queryAiCallTaskDetail(const Models::QueryAiCallTaskDetailRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryAiCallTaskPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallTaskPageResponse
       */
      Models::QueryAiCallTaskPageResponse queryAiCallTaskPageWithOptions(const Models::QueryAiCallTaskPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryAiCallTaskPageRequest
       * @return QueryAiCallTaskPageResponse
       */
      Models::QueryAiCallTaskPageResponse queryAiCallTaskPage(const Models::QueryAiCallTaskPageRequest &request);

      /**
       * @summary 查询通话详情信息
       *
       * @param request QueryConversationDetailInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConversationDetailInfoResponse
       */
      Models::QueryConversationDetailInfoResponse queryConversationDetailInfoWithOptions(const Models::QueryConversationDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询通话详情信息
       *
       * @param request QueryConversationDetailInfoRequest
       * @return QueryConversationDetailInfoResponse
       */
      Models::QueryConversationDetailInfoResponse queryConversationDetailInfo(const Models::QueryConversationDetailInfoRequest &request);

      /**
       * @param request QueryHotlineInQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHotlineInQueueResponse
       */
      Models::QueryHotlineInQueueResponse queryHotlineInQueueWithOptions(const Models::QueryHotlineInQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryHotlineInQueueRequest
       * @return QueryHotlineInQueueResponse
       */
      Models::QueryHotlineInQueueResponse queryHotlineInQueue(const Models::QueryHotlineInQueueRequest &request);

      /**
       * @summary 查询热线号码配置
       *
       * @param tmpReq QueryHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHotlineNumberResponse
       */
      Models::QueryHotlineNumberResponse queryHotlineNumberWithOptions(const Models::QueryHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询热线号码配置
       *
       * @param request QueryHotlineNumberRequest
       * @return QueryHotlineNumberResponse
       */
      Models::QueryHotlineNumberResponse queryHotlineNumber(const Models::QueryHotlineNumberRequest &request);

      /**
       * @param request QueryOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOutboundTaskResponse
       */
      Models::QueryOutboundTaskResponse queryOutboundTaskWithOptions(const Models::QueryOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOutboundTaskRequest
       * @return QueryOutboundTaskResponse
       */
      Models::QueryOutboundTaskResponse queryOutboundTask(const Models::QueryOutboundTaskRequest &request);

      /**
       * @param request QuerySkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySkillGroupsResponse
       */
      Models::QuerySkillGroupsResponse querySkillGroupsWithOptions(const Models::QuerySkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySkillGroupsRequest
       * @return QuerySkillGroupsResponse
       */
      Models::QuerySkillGroupsResponse querySkillGroups(const Models::QuerySkillGroupsRequest &request);

      /**
       * @param request QueryTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailResponse
       */
      Models::QueryTaskDetailResponse queryTaskDetailWithOptions(const Models::QueryTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTaskDetailRequest
       * @return QueryTaskDetailResponse
       */
      Models::QueryTaskDetailResponse queryTaskDetail(const Models::QueryTaskDetailRequest &request);

      /**
       * @param tmpReq QueryTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTicketsResponse
       */
      Models::QueryTicketsResponse queryTicketsWithOptions(const Models::QueryTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTicketsRequest
       * @return QueryTicketsResponse
       */
      Models::QueryTicketsResponse queryTickets(const Models::QueryTicketsRequest &request);

      /**
       * @param request QueryTouchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTouchListResponse
       */
      Models::QueryTouchListResponse queryTouchListWithOptions(const Models::QueryTouchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTouchListRequest
       * @return QueryTouchListResponse
       */
      Models::QueryTouchListResponse queryTouchList(const Models::QueryTouchListRequest &request);

      /**
       * @summary 从技能组中移除坐席
       *
       * @param tmpReq RemoveAgentFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAgentFromSkillGroupResponse
       */
      Models::RemoveAgentFromSkillGroupResponse removeAgentFromSkillGroupWithOptions(const Models::RemoveAgentFromSkillGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从技能组中移除坐席
       *
       * @param request RemoveAgentFromSkillGroupRequest
       * @return RemoveAgentFromSkillGroupResponse
       */
      Models::RemoveAgentFromSkillGroupResponse removeAgentFromSkillGroup(const Models::RemoveAgentFromSkillGroupRequest &request);

      /**
       * @param request RemoveSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSkillGroupResponse
       */
      Models::RemoveSkillGroupResponse removeSkillGroupWithOptions(const Models::RemoveSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveSkillGroupRequest
       * @return RemoveSkillGroupResponse
       */
      Models::RemoveSkillGroupResponse removeSkillGroup(const Models::RemoveSkillGroupRequest &request);

      /**
       * @summary 重置热线号码
       *
       * @param tmpReq ResetHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetHotlineNumberResponse
       */
      Models::ResetHotlineNumberResponse resetHotlineNumberWithOptions(const Models::ResetHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置热线号码
       *
       * @param request ResetHotlineNumberRequest
       * @return ResetHotlineNumberResponse
       */
      Models::ResetHotlineNumberResponse resetHotlineNumber(const Models::ResetHotlineNumberRequest &request);

      /**
       * @param request RestartOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartOutboundTaskResponse
       */
      Models::RestartOutboundTaskResponse restartOutboundTaskWithOptions(const Models::RestartOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartOutboundTaskRequest
       * @return RestartOutboundTaskResponse
       */
      Models::RestartOutboundTaskResponse restartOutboundTask(const Models::RestartOutboundTaskRequest &request);

      /**
       * @param request RobotCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RobotCallResponse
       */
      Models::RobotCallResponse robotCallWithOptions(const Models::RobotCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RobotCallRequest
       * @return RobotCallResponse
       */
      Models::RobotCallResponse robotCall(const Models::RobotCallRequest &request);

      /**
       * @param request SendCcoSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCcoSmartCallResponse
       */
      Models::SendCcoSmartCallResponse sendCcoSmartCallWithOptions(const Models::SendCcoSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendCcoSmartCallRequest
       * @return SendCcoSmartCallResponse
       */
      Models::SendCcoSmartCallResponse sendCcoSmartCall(const Models::SendCcoSmartCallRequest &request);

      /**
       * @param request SendCcoSmartCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCcoSmartCallOperateResponse
       */
      Models::SendCcoSmartCallOperateResponse sendCcoSmartCallOperateWithOptions(const Models::SendCcoSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendCcoSmartCallOperateRequest
       * @return SendCcoSmartCallOperateResponse
       */
      Models::SendCcoSmartCallOperateResponse sendCcoSmartCallOperate(const Models::SendCcoSmartCallOperateRequest &request);

      /**
       * @param request SendHotlineHeartBeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendHotlineHeartBeatResponse
       */
      Models::SendHotlineHeartBeatResponse sendHotlineHeartBeatWithOptions(const Models::SendHotlineHeartBeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendHotlineHeartBeatRequest
       * @return SendHotlineHeartBeatResponse
       */
      Models::SendHotlineHeartBeatResponse sendHotlineHeartBeat(const Models::SendHotlineHeartBeatRequest &request);

      /**
       * @summary 启动任务
       *
       * @param request StartAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAiCallTaskResponse
       */
      Models::StartAiCallTaskResponse startAiCallTaskWithOptions(const Models::StartAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动任务
       *
       * @param request StartAiCallTaskRequest
       * @return StartAiCallTaskResponse
       */
      Models::StartAiCallTaskResponse startAiCallTask(const Models::StartAiCallTaskRequest &request);

      /**
       * @summary 启动智能外呼任务
       *
       * @param request StartAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAiOutboundTaskResponse
       */
      Models::StartAiOutboundTaskResponse startAiOutboundTaskWithOptions(const Models::StartAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动智能外呼任务
       *
       * @param request StartAiOutboundTaskRequest
       * @return StartAiOutboundTaskResponse
       */
      Models::StartAiOutboundTaskResponse startAiOutboundTask(const Models::StartAiOutboundTaskRequest &request);

      /**
       * @param request StartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCallResponse
       */
      Models::StartCallResponse startCallWithOptions(const Models::StartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartCallRequest
       * @return StartCallResponse
       */
      Models::StartCallResponse startCall(const Models::StartCallRequest &request);

      /**
       * @param request StartCallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCallV2Response
       */
      Models::StartCallV2Response startCallV2WithOptions(const Models::StartCallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartCallV2Request
       * @return StartCallV2Response
       */
      Models::StartCallV2Response startCallV2(const Models::StartCallV2Request &request);

      /**
       * @summary 修改在线客服为上班状态
       *
       * @param request StartChatWorkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartChatWorkResponse
       */
      Models::StartChatWorkResponse startChatWorkWithOptions(const Models::StartChatWorkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改在线客服为上班状态
       *
       * @param request StartChatWorkRequest
       * @return StartChatWorkResponse
       */
      Models::StartChatWorkResponse startChatWork(const Models::StartChatWorkRequest &request);

      /**
       * @param request StartHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartHotlineServiceResponse
       */
      Models::StartHotlineServiceResponse startHotlineServiceWithOptions(const Models::StartHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartHotlineServiceRequest
       * @return StartHotlineServiceResponse
       */
      Models::StartHotlineServiceResponse startHotlineService(const Models::StartHotlineServiceRequest &request);

      /**
       * @param request StartMicroOutboundRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMicroOutboundResponse
       */
      Models::StartMicroOutboundResponse startMicroOutboundWithOptions(const Models::StartMicroOutboundRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartMicroOutboundRequest
       * @return StartMicroOutboundResponse
       */
      Models::StartMicroOutboundResponse startMicroOutbound(const Models::StartMicroOutboundRequest &request);

      /**
       * @summary 立即或定时启动智能外呼任务
       *
       * @param request StartTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTaskWithOptions(const Models::StartTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 立即或定时启动智能外呼任务
       *
       * @param request StartTaskRequest
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTask(const Models::StartTaskRequest &request);

      /**
       * @summary 停止任务
       *
       * @param request StopAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAiCallTaskResponse
       */
      Models::StopAiCallTaskResponse stopAiCallTaskWithOptions(const Models::StopAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止任务
       *
       * @param request StopAiCallTaskRequest
       * @return StopAiCallTaskResponse
       */
      Models::StopAiCallTaskResponse stopAiCallTask(const Models::StopAiCallTaskRequest &request);

      /**
       * @summary 手动暂停智能外呼任务
       *
       * @param request StopAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAiOutboundTaskResponse
       */
      Models::StopAiOutboundTaskResponse stopAiOutboundTaskWithOptions(const Models::StopAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 手动暂停智能外呼任务
       *
       * @param request StopAiOutboundTaskRequest
       * @return StopAiOutboundTaskResponse
       */
      Models::StopAiOutboundTaskResponse stopAiOutboundTask(const Models::StopAiOutboundTaskRequest &request);

      /**
       * @summary 暂停外呼任务
       *
       * @param request StopTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTaskWithOptions(const Models::StopTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停外呼任务
       *
       * @param request StopTaskRequest
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTask(const Models::StopTaskRequest &request);

      /**
       * @param request SuspendHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendHotlineServiceResponse
       */
      Models::SuspendHotlineServiceResponse suspendHotlineServiceWithOptions(const Models::SuspendHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuspendHotlineServiceRequest
       * @return SuspendHotlineServiceResponse
       */
      Models::SuspendHotlineServiceResponse suspendHotlineService(const Models::SuspendHotlineServiceRequest &request);

      /**
       * @param request SuspendOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendOutboundTaskResponse
       */
      Models::SuspendOutboundTaskResponse suspendOutboundTaskWithOptions(const Models::SuspendOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuspendOutboundTaskRequest
       * @return SuspendOutboundTaskResponse
       */
      Models::SuspendOutboundTaskResponse suspendOutboundTask(const Models::SuspendOutboundTaskRequest &request);

      /**
       * @summary 终止智能外呼任务
       *
       * @param request TerminateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateAiOutboundTaskResponse
       */
      Models::TerminateAiOutboundTaskResponse terminateAiOutboundTaskWithOptions(const Models::TerminateAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止智能外呼任务
       *
       * @param request TerminateAiOutboundTaskRequest
       * @return TerminateAiOutboundTaskResponse
       */
      Models::TerminateAiOutboundTaskResponse terminateAiOutboundTask(const Models::TerminateAiOutboundTaskRequest &request);

      /**
       * @param request TransferCallToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferCallToSkillGroupResponse
       */
      Models::TransferCallToSkillGroupResponse transferCallToSkillGroupWithOptions(const Models::TransferCallToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferCallToSkillGroupRequest
       * @return TransferCallToSkillGroupResponse
       */
      Models::TransferCallToSkillGroupResponse transferCallToSkillGroup(const Models::TransferCallToSkillGroupRequest &request);

      /**
       * @param request UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @summary 更新AI外呼任务配置
       *
       * @param tmpReq UpdateAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiCallTaskResponse
       */
      Models::UpdateAiCallTaskResponse updateAiCallTaskWithOptions(const Models::UpdateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AI外呼任务配置
       *
       * @param request UpdateAiCallTaskRequest
       * @return UpdateAiCallTaskResponse
       */
      Models::UpdateAiCallTaskResponse updateAiCallTask(const Models::UpdateAiCallTaskRequest &request);

      /**
       * @summary 更新智能外呼任务（预测式外呼、自动外呼）
       *
       * @param tmpReq UpdateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiOutboundTaskResponse
       */
      Models::UpdateAiOutboundTaskResponse updateAiOutboundTaskWithOptions(const Models::UpdateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新智能外呼任务（预测式外呼、自动外呼）
       *
       * @param request UpdateAiOutboundTaskRequest
       * @return UpdateAiOutboundTaskResponse
       */
      Models::UpdateAiOutboundTaskResponse updateAiOutboundTask(const Models::UpdateAiOutboundTaskRequest &request);

      /**
       * @summary 更新部门信息
       *
       * @param request UpdateDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartmentWithOptions(const Models::UpdateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新部门信息
       *
       * @param request UpdateDepartmentRequest
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartment(const Models::UpdateDepartmentRequest &request);

      /**
       * @param request UpdateOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOuterAccountResponse
       */
      Models::UpdateOuterAccountResponse updateOuterAccountWithOptions(const Models::UpdateOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateOuterAccountRequest
       * @return UpdateOuterAccountResponse
       */
      Models::UpdateOuterAccountResponse updateOuterAccount(const Models::UpdateOuterAccountRequest &request);

      /**
       * @param request UpdateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillGroupResponse
       */
      Models::UpdateSkillGroupResponse updateSkillGroupWithOptions(const Models::UpdateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSkillGroupRequest
       * @return UpdateSkillGroupResponse
       */
      Models::UpdateSkillGroupResponse updateSkillGroup(const Models::UpdateSkillGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
