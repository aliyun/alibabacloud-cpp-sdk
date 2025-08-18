// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataServiceApiRequestCreateCommandScriptDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGroupId, apiGroupId_);
      DARABONBA_PTR_TO_JSON(ApiGroupName, apiGroupName_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(BizProtocol, bizProtocol_);
      DARABONBA_PTR_TO_JSON(CacheTimeout, cacheTimeout_);
      DARABONBA_PTR_TO_JSON(CallMode, callMode_);
      DARABONBA_PTR_TO_JSON(CustomUpdateRate, customUpdateRate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionTimeout, executionTimeout_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestType, requestType_);
      DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGroupId, apiGroupId_);
      DARABONBA_PTR_FROM_JSON(ApiGroupName, apiGroupName_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(BizProtocol, bizProtocol_);
      DARABONBA_PTR_FROM_JSON(CacheTimeout, cacheTimeout_);
      DARABONBA_PTR_FROM_JSON(CallMode, callMode_);
      DARABONBA_PTR_FROM_JSON(CustomUpdateRate, customUpdateRate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionTimeout, executionTimeout_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestType, requestType_);
      DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateDataServiceApiRequestCreateCommand() = default ;
    CreateDataServiceApiRequestCreateCommand(const CreateDataServiceApiRequestCreateCommand &) = default ;
    CreateDataServiceApiRequestCreateCommand(CreateDataServiceApiRequestCreateCommand &&) = default ;
    CreateDataServiceApiRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequestCreateCommand() = default ;
    CreateDataServiceApiRequestCreateCommand& operator=(const CreateDataServiceApiRequestCreateCommand &) = default ;
    CreateDataServiceApiRequestCreateCommand& operator=(CreateDataServiceApiRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiGroupId_ != nullptr
        && this->apiGroupName_ != nullptr && this->apiName_ != nullptr && this->apiType_ != nullptr && this->bizProtocol_ != nullptr && this->cacheTimeout_ != nullptr
        && this->callMode_ != nullptr && this->customUpdateRate_ != nullptr && this->description_ != nullptr && this->executionTimeout_ != nullptr && this->mode_ != nullptr
        && this->projectId_ != nullptr && this->requestType_ != nullptr && this->scriptDetails_ != nullptr && this->timeout_ != nullptr && this->updateRate_ != nullptr
        && this->version_ != nullptr; };
    // apiGroupId Field Functions 
    bool hasApiGroupId() const { return this->apiGroupId_ != nullptr;};
    void deleteApiGroupId() { this->apiGroupId_ = nullptr;};
    inline int64_t apiGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGroupId_, 0L) };
    inline CreateDataServiceApiRequestCreateCommand& setApiGroupId(int64_t apiGroupId) { DARABONBA_PTR_SET_VALUE(apiGroupId_, apiGroupId) };


    // apiGroupName Field Functions 
    bool hasApiGroupName() const { return this->apiGroupName_ != nullptr;};
    void deleteApiGroupName() { this->apiGroupName_ = nullptr;};
    inline string apiGroupName() const { DARABONBA_PTR_GET_DEFAULT(apiGroupName_, "") };
    inline CreateDataServiceApiRequestCreateCommand& setApiGroupName(string apiGroupName) { DARABONBA_PTR_SET_VALUE(apiGroupName_, apiGroupName) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline CreateDataServiceApiRequestCreateCommand& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline int32_t apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setApiType(int32_t apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // bizProtocol Field Functions 
    bool hasBizProtocol() const { return this->bizProtocol_ != nullptr;};
    void deleteBizProtocol() { this->bizProtocol_ = nullptr;};
    inline const vector<int32_t> & bizProtocol() const { DARABONBA_PTR_GET_CONST(bizProtocol_, vector<int32_t>) };
    inline vector<int32_t> bizProtocol() { DARABONBA_PTR_GET(bizProtocol_, vector<int32_t>) };
    inline CreateDataServiceApiRequestCreateCommand& setBizProtocol(const vector<int32_t> & bizProtocol) { DARABONBA_PTR_SET_VALUE(bizProtocol_, bizProtocol) };
    inline CreateDataServiceApiRequestCreateCommand& setBizProtocol(vector<int32_t> && bizProtocol) { DARABONBA_PTR_SET_RVALUE(bizProtocol_, bizProtocol) };


    // cacheTimeout Field Functions 
    bool hasCacheTimeout() const { return this->cacheTimeout_ != nullptr;};
    void deleteCacheTimeout() { this->cacheTimeout_ = nullptr;};
    inline int32_t cacheTimeout() const { DARABONBA_PTR_GET_DEFAULT(cacheTimeout_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setCacheTimeout(int32_t cacheTimeout) { DARABONBA_PTR_SET_VALUE(cacheTimeout_, cacheTimeout) };


    // callMode Field Functions 
    bool hasCallMode() const { return this->callMode_ != nullptr;};
    void deleteCallMode() { this->callMode_ = nullptr;};
    inline int32_t callMode() const { DARABONBA_PTR_GET_DEFAULT(callMode_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setCallMode(int32_t callMode) { DARABONBA_PTR_SET_VALUE(callMode_, callMode) };


    // customUpdateRate Field Functions 
    bool hasCustomUpdateRate() const { return this->customUpdateRate_ != nullptr;};
    void deleteCustomUpdateRate() { this->customUpdateRate_ = nullptr;};
    inline string customUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(customUpdateRate_, "") };
    inline CreateDataServiceApiRequestCreateCommand& setCustomUpdateRate(string customUpdateRate) { DARABONBA_PTR_SET_VALUE(customUpdateRate_, customUpdateRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataServiceApiRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTimeout Field Functions 
    bool hasExecutionTimeout() const { return this->executionTimeout_ != nullptr;};
    void deleteExecutionTimeout() { this->executionTimeout_ = nullptr;};
    inline int32_t executionTimeout() const { DARABONBA_PTR_GET_DEFAULT(executionTimeout_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setExecutionTimeout(int32_t executionTimeout) { DARABONBA_PTR_SET_VALUE(executionTimeout_, executionTimeout) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataServiceApiRequestCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestType Field Functions 
    bool hasRequestType() const { return this->requestType_ != nullptr;};
    void deleteRequestType() { this->requestType_ = nullptr;};
    inline int32_t requestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setRequestType(int32_t requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


    // scriptDetails Field Functions 
    bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
    void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
    inline const Models::CreateDataServiceApiRequestCreateCommandScriptDetails & scriptDetails() const { DARABONBA_PTR_GET_CONST(scriptDetails_, Models::CreateDataServiceApiRequestCreateCommandScriptDetails) };
    inline Models::CreateDataServiceApiRequestCreateCommandScriptDetails scriptDetails() { DARABONBA_PTR_GET(scriptDetails_, Models::CreateDataServiceApiRequestCreateCommandScriptDetails) };
    inline CreateDataServiceApiRequestCreateCommand& setScriptDetails(const Models::CreateDataServiceApiRequestCreateCommandScriptDetails & scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };
    inline CreateDataServiceApiRequestCreateCommand& setScriptDetails(Models::CreateDataServiceApiRequestCreateCommandScriptDetails && scriptDetails) { DARABONBA_PTR_SET_RVALUE(scriptDetails_, scriptDetails) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateRate Field Functions 
    bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
    void deleteUpdateRate() { this->updateRate_ = nullptr;};
    inline int32_t updateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
    inline CreateDataServiceApiRequestCreateCommand& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateDataServiceApiRequestCreateCommand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> apiGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> apiGroupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> apiName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> apiType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> bizProtocol_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> cacheTimeout_ = nullptr;
    std::shared_ptr<int32_t> callMode_ = nullptr;
    std::shared_ptr<string> customUpdateRate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> executionTimeout_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> requestType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateDataServiceApiRequestCreateCommandScriptDetails> scriptDetails_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<int32_t> updateRate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
