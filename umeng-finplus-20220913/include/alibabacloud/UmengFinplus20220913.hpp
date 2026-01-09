// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_UMENGFINPLUS20220913_HPP_
#define ALIBABACLOUD_UMENGFINPLUS20220913_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/UmengFinplus20220913Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/UmengFinplus20220913.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request BuildStsAKRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuildStsAKResponse
       */
      Models::BuildStsAKResponse buildStsAKWithOptions(const Models::BuildStsAKRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request BuildStsAKRequest
       * @return BuildStsAKResponse
       */
      Models::BuildStsAKResponse buildStsAK(const Models::BuildStsAKRequest &request);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request BuildStsAK2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuildStsAK2Response
       */
      Models::BuildStsAK2Response buildStsAK2WithOptions(const Models::BuildStsAK2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request BuildStsAK2Request
       * @return BuildStsAK2Response
       */
      Models::BuildStsAK2Response buildStsAK2(const Models::BuildStsAK2Request &request);

      /**
       * @summary 取消批量计算任务
       *
       * @param request CancelTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消批量计算任务
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary 取消批量计算任务
       *
       * @param request CancelTask2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTask2Response
       */
      Models::CancelTask2Response cancelTask2WithOptions(const Models::CancelTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消批量计算任务
       *
       * @param request CancelTask2Request
       * @return CancelTask2Response
       */
      Models::CancelTask2Response cancelTask2(const Models::CancelTask2Request &request);

      /**
       * @summary 创建批量计算任务
       *
       * @param request CreateComputeTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeTaskResponse
       */
      Models::CreateComputeTaskResponse createComputeTaskWithOptions(const Models::CreateComputeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建批量计算任务
       *
       * @param request CreateComputeTaskRequest
       * @return CreateComputeTaskResponse
       */
      Models::CreateComputeTaskResponse createComputeTask(const Models::CreateComputeTaskRequest &request);

      /**
       * @summary 创建批量计算任务
       *
       * @param request CreateComputeTask2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeTask2Response
       */
      Models::CreateComputeTask2Response createComputeTask2WithOptions(const Models::CreateComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建批量计算任务
       *
       * @param request CreateComputeTask2Request
       * @return CreateComputeTask2Response
       */
      Models::CreateComputeTask2Response createComputeTask2(const Models::CreateComputeTask2Request &request);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSetWithOptions(const Models::CreateDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSetRequest
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSet(const Models::CreateDataSetRequest &request);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSet2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSet2Response
       */
      Models::CreateDataSet2Response createDataSet2WithOptions(const Models::CreateDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSet2Request
       * @return CreateDataSet2Response
       */
      Models::CreateDataSet2Response createDataSet2(const Models::CreateDataSet2Request &request);

      /**
       * @summary 创建友准达实例任务
       *
       * @param request CreateInstanceTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceTaskResponse
       */
      Models::CreateInstanceTaskResponse createInstanceTaskWithOptions(const Models::CreateInstanceTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建友准达实例任务
       *
       * @param request CreateInstanceTaskRequest
       * @return CreateInstanceTaskResponse
       */
      Models::CreateInstanceTaskResponse createInstanceTask(const Models::CreateInstanceTaskRequest &request);

      /**
       * @summary 友准达-创建知识库
       *
       * @param tmpReq CreateKnowLedgeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowLedgeResponse
       */
      Models::CreateKnowLedgeResponse createKnowLedgeWithOptions(const Models::CreateKnowLedgeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 友准达-创建知识库
       *
       * @param request CreateKnowLedgeRequest
       * @return CreateKnowLedgeResponse
       */
      Models::CreateKnowLedgeResponse createKnowLedge(const Models::CreateKnowLedgeRequest &request);

      /**
       * @summary 加密调用OpenAPI
       *
       * @param request EncryptInvokeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptInvokeResponse
       */
      Models::EncryptInvokeResponse encryptInvokeWithOptions(const Models::EncryptInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 加密调用OpenAPI
       *
       * @param request EncryptInvokeRequest
       * @return EncryptInvokeResponse
       */
      Models::EncryptInvokeResponse encryptInvoke(const Models::EncryptInvokeRequest &request);

      /**
       * @summary 获取人群集信息
       *
       * @param tmpReq GetCrowdDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCrowdDatasetResponse
       */
      Models::GetCrowdDatasetResponse getCrowdDatasetWithOptions(const Models::GetCrowdDatasetRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取人群集信息
       *
       * @param request GetCrowdDatasetRequest
       * @return GetCrowdDatasetResponse
       */
      Models::GetCrowdDatasetResponse getCrowdDataset(const Models::GetCrowdDatasetRequest &request);

      /**
       * @summary  获取知识库数据数据
       *
       * @param tmpReq GetKnowledgeDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeDataResponse
       */
      Models::GetKnowledgeDataResponse getKnowledgeDataWithOptions(const Models::GetKnowledgeDataRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  获取知识库数据数据
       *
       * @param request GetKnowledgeDataRequest
       * @return GetKnowledgeDataResponse
       */
      Models::GetKnowledgeDataResponse getKnowledgeData(const Models::GetKnowledgeDataRequest &request);

      /**
       * @summary 获取实例结果
       *
       * @param tmpReq GetYzdInstanceTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYzdInstanceTaskResultResponse
       */
      Models::GetYzdInstanceTaskResultResponse getYzdInstanceTaskResultWithOptions(const Models::GetYzdInstanceTaskResultRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例结果
       *
       * @param request GetYzdInstanceTaskResultRequest
       * @return GetYzdInstanceTaskResultResponse
       */
      Models::GetYzdInstanceTaskResultResponse getYzdInstanceTaskResult(const Models::GetYzdInstanceTaskResultRequest &request);

      /**
       * @summary 友准达知识库获取上传OSS数据文件的TOKEN
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYzdStsAKResponse
       */
      Models::GetYzdStsAKResponse getYzdStsAKWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 友准达知识库获取上传OSS数据文件的TOKEN
       *
       * @return GetYzdStsAKResponse
       */
      Models::GetYzdStsAKResponse getYzdStsAK();

      /**
       * @summary 查询单个批量任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeTaskResponse
       */
      Models::ListComputeTaskResponse listComputeTaskWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个批量任务
       *
       * @return ListComputeTaskResponse
       */
      Models::ListComputeTaskResponse listComputeTask();

      /**
       * @summary 查询单个批量任务
       *
       * @param request ListComputeTask2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeTask2Response
       */
      Models::ListComputeTask2Response listComputeTask2WithOptions(const Models::ListComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个批量任务
       *
       * @param request ListComputeTask2Request
       * @return ListComputeTask2Response
       */
      Models::ListComputeTask2Response listComputeTask2(const Models::ListComputeTask2Request &request);

      /**
       * @summary 查询单个数据集
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSetWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个数据集
       *
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSet();

      /**
       * @summary 查询单个数据集
       *
       * @param request ListDataSet2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSet2Response
       */
      Models::ListDataSet2Response listDataSet2WithOptions(const Models::ListDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个数据集
       *
       * @param request ListDataSet2Request
       * @return ListDataSet2Response
       */
      Models::ListDataSet2Response listDataSet2(const Models::ListDataSet2Request &request);

      /**
       * @summary 删除数据集
       *
       * @param request RemoveDataSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataSetResponse
       */
      Models::RemoveDataSetResponse removeDataSetWithOptions(const Models::RemoveDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集
       *
       * @param request RemoveDataSetRequest
       * @return RemoveDataSetResponse
       */
      Models::RemoveDataSetResponse removeDataSet(const Models::RemoveDataSetRequest &request);

      /**
       * @summary 删除数据集
       *
       * @param request RemoveDataSet2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataSet2Response
       */
      Models::RemoveDataSet2Response removeDataSet2WithOptions(const Models::RemoveDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集
       *
       * @param request RemoveDataSet2Request
       * @return RemoveDataSet2Response
       */
      Models::RemoveDataSet2Response removeDataSet2(const Models::RemoveDataSet2Request &request);

      /**
       * @summary 创建人群集并绑定数据集
       *
       * @param tmpReq SaveCrowdDatasetAndBindingDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCrowdDatasetAndBindingDatasetResponse
       */
      Models::SaveCrowdDatasetAndBindingDatasetResponse saveCrowdDatasetAndBindingDatasetWithOptions(const Models::SaveCrowdDatasetAndBindingDatasetRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建人群集并绑定数据集
       *
       * @param request SaveCrowdDatasetAndBindingDatasetRequest
       * @return SaveCrowdDatasetAndBindingDatasetResponse
       */
      Models::SaveCrowdDatasetAndBindingDatasetResponse saveCrowdDatasetAndBindingDataset(const Models::SaveCrowdDatasetAndBindingDatasetRequest &request);

      /**
       * @summary 查询单个批量任务
       *
       * @param request SelectComputeTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectComputeTaskResponse
       */
      Models::SelectComputeTaskResponse selectComputeTaskWithOptions(const Models::SelectComputeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个批量任务
       *
       * @param request SelectComputeTaskRequest
       * @return SelectComputeTaskResponse
       */
      Models::SelectComputeTaskResponse selectComputeTask(const Models::SelectComputeTaskRequest &request);

      /**
       * @summary 查询单个批量任务
       *
       * @param request SelectComputeTask2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectComputeTask2Response
       */
      Models::SelectComputeTask2Response selectComputeTask2WithOptions(const Models::SelectComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个批量任务
       *
       * @param request SelectComputeTask2Request
       * @return SelectComputeTask2Response
       */
      Models::SelectComputeTask2Response selectComputeTask2(const Models::SelectComputeTask2Request &request);

      /**
       * @summary 查询单个数据集
       *
       * @param request SelectDataSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectDataSetResponse
       */
      Models::SelectDataSetResponse selectDataSetWithOptions(const Models::SelectDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个数据集
       *
       * @param request SelectDataSetRequest
       * @return SelectDataSetResponse
       */
      Models::SelectDataSetResponse selectDataSet(const Models::SelectDataSetRequest &request);

      /**
       * @summary 查询单个数据集
       *
       * @param request SelectDataSet2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectDataSet2Response
       */
      Models::SelectDataSet2Response selectDataSet2WithOptions(const Models::SelectDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个数据集
       *
       * @param request SelectDataSet2Request
       * @return SelectDataSet2Response
       */
      Models::SelectDataSet2Response selectDataSet2(const Models::SelectDataSet2Request &request);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request SubmitDataSetTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDataSetTaskResponse
       */
      Models::SubmitDataSetTaskResponse submitDataSetTaskWithOptions(const Models::SubmitDataSetTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request SubmitDataSetTaskRequest
       * @return SubmitDataSetTaskResponse
       */
      Models::SubmitDataSetTaskResponse submitDataSetTask(const Models::SubmitDataSetTaskRequest &request);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request SubmitDataSetTask2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDataSetTask2Response
       */
      Models::SubmitDataSetTask2Response submitDataSetTask2WithOptions(const Models::SubmitDataSetTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交数据集任务，校验数据集
       *
       * @param request SubmitDataSetTask2Request
       * @return SubmitDataSetTask2Response
       */
      Models::SubmitDataSetTask2Response submitDataSetTask2(const Models::SubmitDataSetTask2Request &request);

      /**
       * @summary 提交知识库校验任务
       *
       * @param tmpReq ValidateKnowLedgeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateKnowLedgeResponse
       */
      Models::ValidateKnowLedgeResponse validateKnowLedgeWithOptions(const Models::ValidateKnowLedgeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交知识库校验任务
       *
       * @param request ValidateKnowLedgeRequest
       * @return ValidateKnowLedgeResponse
       */
      Models::ValidateKnowLedgeResponse validateKnowLedge(const Models::ValidateKnowLedgeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
