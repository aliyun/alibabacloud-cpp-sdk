// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEMANTICJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSEMANTICJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSemanticJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSemanticJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSemanticJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSemanticJobDetailResponseBody() = default ;
    GetSemanticJobDetailResponseBody(const GetSemanticJobDetailResponseBody &) = default ;
    GetSemanticJobDetailResponseBody(GetSemanticJobDetailResponseBody &&) = default ;
    GetSemanticJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSemanticJobDetailResponseBody() = default ;
    GetSemanticJobDetailResponseBody& operator=(const GetSemanticJobDetailResponseBody &) = default ;
    GetSemanticJobDetailResponseBody& operator=(GetSemanticJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(AdvanceSettings, advanceSettings_);
        DARABONBA_PTR_TO_JSON(CodeParameters, codeParameters_);
        DARABONBA_PTR_TO_JSON(CurrentSqlIndex, currentSqlIndex_);
        DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
        DARABONBA_PTR_TO_JSON(Datasource, datasource_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ExecTypes, execTypes_);
        DARABONBA_PTR_TO_JSON(ExecutorJobId, executorJobId_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceUrls, resourceUrls_);
        DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(AdvanceSettings, advanceSettings_);
        DARABONBA_PTR_FROM_JSON(CodeParameters, codeParameters_);
        DARABONBA_PTR_FROM_JSON(CurrentSqlIndex, currentSqlIndex_);
        DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
        DARABONBA_PTR_FROM_JSON(Datasource, datasource_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ExecTypes, execTypes_);
        DARABONBA_PTR_FROM_JSON(ExecutorJobId, executorJobId_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceUrls, resourceUrls_);
        DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advanceSettings_ == nullptr
        && this->codeParameters_ == nullptr && this->currentSqlIndex_ == nullptr && this->customerName_ == nullptr && this->datasource_ == nullptr && this->env_ == nullptr
        && this->execTypes_ == nullptr && this->executorJobId_ == nullptr && this->fileType_ == nullptr && this->projectId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceUrls_ == nullptr && this->statuses_ == nullptr; };
      // advanceSettings Field Functions 
      bool hasAdvanceSettings() const { return this->advanceSettings_ != nullptr;};
      void deleteAdvanceSettings() { this->advanceSettings_ = nullptr;};
      inline       const Darabonba::Json & getAdvanceSettings() const { DARABONBA_GET(advanceSettings_) };
      Darabonba::Json & getAdvanceSettings() { DARABONBA_GET(advanceSettings_) };
      inline Data& setAdvanceSettings(const Darabonba::Json & advanceSettings) { DARABONBA_SET_VALUE(advanceSettings_, advanceSettings) };
      inline Data& setAdvanceSettings(Darabonba::Json && advanceSettings) { DARABONBA_SET_RVALUE(advanceSettings_, advanceSettings) };


      // codeParameters Field Functions 
      bool hasCodeParameters() const { return this->codeParameters_ != nullptr;};
      void deleteCodeParameters() { this->codeParameters_ = nullptr;};
      inline string getCodeParameters() const { DARABONBA_PTR_GET_DEFAULT(codeParameters_, "") };
      inline Data& setCodeParameters(string codeParameters) { DARABONBA_PTR_SET_VALUE(codeParameters_, codeParameters) };


      // currentSqlIndex Field Functions 
      bool hasCurrentSqlIndex() const { return this->currentSqlIndex_ != nullptr;};
      void deleteCurrentSqlIndex() { this->currentSqlIndex_ = nullptr;};
      inline int32_t getCurrentSqlIndex() const { DARABONBA_PTR_GET_DEFAULT(currentSqlIndex_, 0) };
      inline Data& setCurrentSqlIndex(int32_t currentSqlIndex) { DARABONBA_PTR_SET_VALUE(currentSqlIndex_, currentSqlIndex) };


      // customerName Field Functions 
      bool hasCustomerName() const { return this->customerName_ != nullptr;};
      void deleteCustomerName() { this->customerName_ = nullptr;};
      inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
      inline Data& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


      // datasource Field Functions 
      bool hasDatasource() const { return this->datasource_ != nullptr;};
      void deleteDatasource() { this->datasource_ = nullptr;};
      inline string getDatasource() const { DARABONBA_PTR_GET_DEFAULT(datasource_, "") };
      inline Data& setDatasource(string datasource) { DARABONBA_PTR_SET_VALUE(datasource_, datasource) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Data& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // execTypes Field Functions 
      bool hasExecTypes() const { return this->execTypes_ != nullptr;};
      void deleteExecTypes() { this->execTypes_ = nullptr;};
      inline const vector<int32_t> & getExecTypes() const { DARABONBA_PTR_GET_CONST(execTypes_, vector<int32_t>) };
      inline vector<int32_t> getExecTypes() { DARABONBA_PTR_GET(execTypes_, vector<int32_t>) };
      inline Data& setExecTypes(const vector<int32_t> & execTypes) { DARABONBA_PTR_SET_VALUE(execTypes_, execTypes) };
      inline Data& setExecTypes(vector<int32_t> && execTypes) { DARABONBA_PTR_SET_RVALUE(execTypes_, execTypes) };


      // executorJobId Field Functions 
      bool hasExecutorJobId() const { return this->executorJobId_ != nullptr;};
      void deleteExecutorJobId() { this->executorJobId_ = nullptr;};
      inline string getExecutorJobId() const { DARABONBA_PTR_GET_DEFAULT(executorJobId_, "") };
      inline Data& setExecutorJobId(string executorJobId) { DARABONBA_PTR_SET_VALUE(executorJobId_, executorJobId) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
      inline Data& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceUrls Field Functions 
      bool hasResourceUrls() const { return this->resourceUrls_ != nullptr;};
      void deleteResourceUrls() { this->resourceUrls_ = nullptr;};
      inline const vector<Darabonba::Json> & getResourceUrls() const { DARABONBA_PTR_GET_CONST(resourceUrls_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getResourceUrls() { DARABONBA_PTR_GET(resourceUrls_, vector<Darabonba::Json>) };
      inline Data& setResourceUrls(const vector<Darabonba::Json> & resourceUrls) { DARABONBA_PTR_SET_VALUE(resourceUrls_, resourceUrls) };
      inline Data& setResourceUrls(vector<Darabonba::Json> && resourceUrls) { DARABONBA_PTR_SET_RVALUE(resourceUrls_, resourceUrls) };


      // statuses Field Functions 
      bool hasStatuses() const { return this->statuses_ != nullptr;};
      void deleteStatuses() { this->statuses_ = nullptr;};
      inline const vector<int32_t> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<int32_t>) };
      inline vector<int32_t> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<int32_t>) };
      inline Data& setStatuses(const vector<int32_t> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
      inline Data& setStatuses(vector<int32_t> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    protected:
      // The advanced runtime settings returned by the executor.
      Darabonba::Json advanceSettings_ {};
      // The code parameter information returned by the executor. Used to troubleshoot the runtime configuration of this run.
      shared_ptr<string> codeParameters_ {};
      // The index of the SQL fragment currently being processed by the executor.
      shared_ptr<int32_t> currentSqlIndex_ {};
      // The customer identifier of the executor job.
      shared_ptr<string> customerName_ {};
      // The data source identifier used by the executor job.
      shared_ptr<string> datasource_ {};
      // The runtime environment identifier returned by the executor.
      shared_ptr<string> env_ {};
      // The list of execution type codes returned by the executor.
      shared_ptr<vector<int32_t>> execTypes_ {};
      // The executor job ID.
      shared_ptr<string> executorJobId_ {};
      // The node type code of the executor. Semantic jobs use Shell node code 6.
      shared_ptr<int32_t> fileType_ {};
      // The DataWorks workspace ID associated with the executor job.
      shared_ptr<int64_t> projectId_ {};
      // The ID of the resource group that actually executed the job.
      shared_ptr<string> resourceGroupId_ {};
      // The list of resource URLs associated with the executor job.
      shared_ptr<vector<Darabonba::Json>> resourceUrls_ {};
      // The list of status codes returned by the executor. Used to determine the current or final status of the job.
      shared_ptr<vector<int32_t>> statuses_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSemanticJobDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSemanticJobDetailResponseBody::Data) };
    inline GetSemanticJobDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSemanticJobDetailResponseBody::Data) };
    inline GetSemanticJobDetailResponseBody& setData(const GetSemanticJobDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSemanticJobDetailResponseBody& setData(GetSemanticJobDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSemanticJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSemanticJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The job details returned by the executor. Used to determine the run status and view the actual runtime configuration.
    shared_ptr<GetSemanticJobDetailResponseBody::Data> data_ {};
    // The request ID. Used for locating logs and troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
