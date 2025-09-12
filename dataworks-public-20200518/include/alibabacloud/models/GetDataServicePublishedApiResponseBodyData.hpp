// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEPUBLISHEDAPIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEPUBLISHEDAPIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataRegistrationDetails.hpp>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataScriptDetails.hpp>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataWizardDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServicePublishedApiResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServicePublishedApiResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiMode, apiMode_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_TO_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_TO_JSON(SqlMode, sqlMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_TO_JSON(WizardDetails, wizardDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServicePublishedApiResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiMode, apiMode_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_FROM_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_FROM_JSON(SqlMode, sqlMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_FROM_JSON(WizardDetails, wizardDetails_);
    };
    GetDataServicePublishedApiResponseBodyData() = default ;
    GetDataServicePublishedApiResponseBodyData(const GetDataServicePublishedApiResponseBodyData &) = default ;
    GetDataServicePublishedApiResponseBodyData(GetDataServicePublishedApiResponseBodyData &&) = default ;
    GetDataServicePublishedApiResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServicePublishedApiResponseBodyData() = default ;
    GetDataServicePublishedApiResponseBodyData& operator=(const GetDataServicePublishedApiResponseBodyData &) = default ;
    GetDataServicePublishedApiResponseBodyData& operator=(GetDataServicePublishedApiResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->apiMode_ != nullptr && this->apiName_ != nullptr && this->apiPath_ != nullptr && this->createdTime_ != nullptr && this->creatorId_ != nullptr
        && this->description_ != nullptr && this->groupId_ != nullptr && this->modifiedTime_ != nullptr && this->operatorId_ != nullptr && this->projectId_ != nullptr
        && this->protocols_ != nullptr && this->registrationDetails_ != nullptr && this->requestMethod_ != nullptr && this->responseContentType_ != nullptr && this->scriptDetails_ != nullptr
        && this->sqlMode_ != nullptr && this->status_ != nullptr && this->tenantId_ != nullptr && this->timeout_ != nullptr && this->visibleRange_ != nullptr
        && this->wizardDetails_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline GetDataServicePublishedApiResponseBodyData& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiMode Field Functions 
    bool hasApiMode() const { return this->apiMode_ != nullptr;};
    void deleteApiMode() { this->apiMode_ = nullptr;};
    inline int32_t apiMode() const { DARABONBA_PTR_GET_DEFAULT(apiMode_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setApiMode(int32_t apiMode) { DARABONBA_PTR_SET_VALUE(apiMode_, apiMode) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline GetDataServicePublishedApiResponseBodyData& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataServicePublishedApiResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<int32_t> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<int32_t>) };
    inline vector<int32_t> protocols() { DARABONBA_PTR_GET(protocols_, vector<int32_t>) };
    inline GetDataServicePublishedApiResponseBodyData& setProtocols(const vector<int32_t> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline GetDataServicePublishedApiResponseBodyData& setProtocols(vector<int32_t> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // registrationDetails Field Functions 
    bool hasRegistrationDetails() const { return this->registrationDetails_ != nullptr;};
    void deleteRegistrationDetails() { this->registrationDetails_ = nullptr;};
    inline const Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails & registrationDetails() const { DARABONBA_PTR_GET_CONST(registrationDetails_, Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails) };
    inline Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails registrationDetails() { DARABONBA_PTR_GET(registrationDetails_, Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setRegistrationDetails(const Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails & registrationDetails) { DARABONBA_PTR_SET_VALUE(registrationDetails_, registrationDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setRegistrationDetails(Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails && registrationDetails) { DARABONBA_PTR_SET_RVALUE(registrationDetails_, registrationDetails) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline int32_t requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // responseContentType Field Functions 
    bool hasResponseContentType() const { return this->responseContentType_ != nullptr;};
    void deleteResponseContentType() { this->responseContentType_ = nullptr;};
    inline int32_t responseContentType() const { DARABONBA_PTR_GET_DEFAULT(responseContentType_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setResponseContentType(int32_t responseContentType) { DARABONBA_PTR_SET_VALUE(responseContentType_, responseContentType) };


    // scriptDetails Field Functions 
    bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
    void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
    inline const Models::GetDataServicePublishedApiResponseBodyDataScriptDetails & scriptDetails() const { DARABONBA_PTR_GET_CONST(scriptDetails_, Models::GetDataServicePublishedApiResponseBodyDataScriptDetails) };
    inline Models::GetDataServicePublishedApiResponseBodyDataScriptDetails scriptDetails() { DARABONBA_PTR_GET(scriptDetails_, Models::GetDataServicePublishedApiResponseBodyDataScriptDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setScriptDetails(const Models::GetDataServicePublishedApiResponseBodyDataScriptDetails & scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setScriptDetails(Models::GetDataServicePublishedApiResponseBodyDataScriptDetails && scriptDetails) { DARABONBA_PTR_SET_RVALUE(scriptDetails_, scriptDetails) };


    // sqlMode Field Functions 
    bool hasSqlMode() const { return this->sqlMode_ != nullptr;};
    void deleteSqlMode() { this->sqlMode_ = nullptr;};
    inline int32_t sqlMode() const { DARABONBA_PTR_GET_DEFAULT(sqlMode_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setSqlMode(int32_t sqlMode) { DARABONBA_PTR_SET_VALUE(sqlMode_, sqlMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetDataServicePublishedApiResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // visibleRange Field Functions 
    bool hasVisibleRange() const { return this->visibleRange_ != nullptr;};
    void deleteVisibleRange() { this->visibleRange_ = nullptr;};
    inline int32_t visibleRange() const { DARABONBA_PTR_GET_DEFAULT(visibleRange_, 0) };
    inline GetDataServicePublishedApiResponseBodyData& setVisibleRange(int32_t visibleRange) { DARABONBA_PTR_SET_VALUE(visibleRange_, visibleRange) };


    // wizardDetails Field Functions 
    bool hasWizardDetails() const { return this->wizardDetails_ != nullptr;};
    void deleteWizardDetails() { this->wizardDetails_ = nullptr;};
    inline const Models::GetDataServicePublishedApiResponseBodyDataWizardDetails & wizardDetails() const { DARABONBA_PTR_GET_CONST(wizardDetails_, Models::GetDataServicePublishedApiResponseBodyDataWizardDetails) };
    inline Models::GetDataServicePublishedApiResponseBodyDataWizardDetails wizardDetails() { DARABONBA_PTR_GET(wizardDetails_, Models::GetDataServicePublishedApiResponseBodyDataWizardDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setWizardDetails(const Models::GetDataServicePublishedApiResponseBodyDataWizardDetails & wizardDetails) { DARABONBA_PTR_SET_VALUE(wizardDetails_, wizardDetails) };
    inline GetDataServicePublishedApiResponseBodyData& setWizardDetails(Models::GetDataServicePublishedApiResponseBodyDataWizardDetails && wizardDetails) { DARABONBA_PTR_SET_RVALUE(wizardDetails_, wizardDetails) };


  protected:
    // The ID of the DataService Studio API.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The type of the API. Valid values: 0, 1, and 2. The value 0 indicates that the API is generated in wizard mode. The value 1 indicates that the API is generated in script mode. The value 2 indicates that the API is generated by registration.
    std::shared_ptr<int32_t> apiMode_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The path of the API.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the creator of the API.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The time when the API was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who last modified the API.
    std::shared_ptr<string> operatorId_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The protocol used by the API. Valid values: 0 and 1. The value 0 indicates HTTP. The value 1 indicates HTTPS. Multiple protocols are presented in a list.
    std::shared_ptr<vector<int32_t>> protocols_ = nullptr;
    // The details of the API generated by registration. This parameter is returned only if the API is generated by registration.
    std::shared_ptr<Models::GetDataServicePublishedApiResponseBodyDataRegistrationDetails> registrationDetails_ = nullptr;
    // The request method of the API. Valid values: 0, 1, 2, and 3. The value 0 indicates the GET method, the value 1 indicates the POST method, the value 2 indicates the PUT method, and the value 3 indicates the DELETE method. APIs generated in wizard or script mode support the GET and POST methods. APIs generated by registration support the GET, POST, PUT, and DELETE methods.
    std::shared_ptr<int32_t> requestMethod_ = nullptr;
    // The format in which the response of the API request is returned. Valid values: 0 and 1. The value 0 indicates the JSON format. The value 1 indicates the XML format. APIs generated in wizard or script mode support the JSON format. APIs generated by registration support the JSON and XML formats.
    std::shared_ptr<int32_t> responseContentType_ = nullptr;
    // The details of the API generated in script mode. This parameter is returned only if the API is generated in script mode.
    std::shared_ptr<Models::GetDataServicePublishedApiResponseBodyDataScriptDetails> scriptDetails_ = nullptr;
    std::shared_ptr<int32_t> sqlMode_ = nullptr;
    // The status of the API. Valid values: 0 and 1. The value 0 indicates that the API is not published. The value 1 indicates that the API is published.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The timeout period of the API request. Unit: milliseconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The scope in which the API is visible. Valid values: 0 and 1. The value 0 indicates that the API is visible to the members in a specific workspace. The value 1 indicates that the API is visible only to the API creator.
    std::shared_ptr<int32_t> visibleRange_ = nullptr;
    // The details of the API generated in wizard mode. This parameter is returned only if the API is generated in wizard mode.
    std::shared_ptr<Models::GetDataServicePublishedApiResponseBodyDataWizardDetails> wizardDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
