// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDescription, apiDescription_);
      DARABONBA_PTR_TO_JSON(ApiMode, apiMode_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_TO_JSON(RequestContentType, requestContentType_);
      DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_TO_JSON(SqlMode, sqlMode_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_TO_JSON(WizardDetails, wizardDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDescription, apiDescription_);
      DARABONBA_PTR_FROM_JSON(ApiMode, apiMode_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_FROM_JSON(RequestContentType, requestContentType_);
      DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_FROM_JSON(SqlMode, sqlMode_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_FROM_JSON(WizardDetails, wizardDetails_);
    };
    CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest(CreateDataServiceApiRequest &&) = default ;
    CreateDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest& operator=(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest& operator=(CreateDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDescription_ != nullptr
        && this->apiMode_ != nullptr && this->apiName_ != nullptr && this->apiPath_ != nullptr && this->folderId_ != nullptr && this->groupId_ != nullptr
        && this->projectId_ != nullptr && this->protocols_ != nullptr && this->registrationDetails_ != nullptr && this->requestContentType_ != nullptr && this->requestMethod_ != nullptr
        && this->resourceGroupId_ != nullptr && this->responseContentType_ != nullptr && this->scriptDetails_ != nullptr && this->sqlMode_ != nullptr && this->tenantId_ != nullptr
        && this->timeout_ != nullptr && this->visibleRange_ != nullptr && this->wizardDetails_ != nullptr; };
    // apiDescription Field Functions 
    bool hasApiDescription() const { return this->apiDescription_ != nullptr;};
    void deleteApiDescription() { this->apiDescription_ = nullptr;};
    inline string apiDescription() const { DARABONBA_PTR_GET_DEFAULT(apiDescription_, "") };
    inline CreateDataServiceApiRequest& setApiDescription(string apiDescription) { DARABONBA_PTR_SET_VALUE(apiDescription_, apiDescription) };


    // apiMode Field Functions 
    bool hasApiMode() const { return this->apiMode_ != nullptr;};
    void deleteApiMode() { this->apiMode_ = nullptr;};
    inline int32_t apiMode() const { DARABONBA_PTR_GET_DEFAULT(apiMode_, 0) };
    inline CreateDataServiceApiRequest& setApiMode(int32_t apiMode) { DARABONBA_PTR_SET_VALUE(apiMode_, apiMode) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline CreateDataServiceApiRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline CreateDataServiceApiRequest& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline int64_t folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, 0L) };
    inline CreateDataServiceApiRequest& setFolderId(int64_t folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateDataServiceApiRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataServiceApiRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline string protocols() const { DARABONBA_PTR_GET_DEFAULT(protocols_, "") };
    inline CreateDataServiceApiRequest& setProtocols(string protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };


    // registrationDetails Field Functions 
    bool hasRegistrationDetails() const { return this->registrationDetails_ != nullptr;};
    void deleteRegistrationDetails() { this->registrationDetails_ = nullptr;};
    inline string registrationDetails() const { DARABONBA_PTR_GET_DEFAULT(registrationDetails_, "") };
    inline CreateDataServiceApiRequest& setRegistrationDetails(string registrationDetails) { DARABONBA_PTR_SET_VALUE(registrationDetails_, registrationDetails) };


    // requestContentType Field Functions 
    bool hasRequestContentType() const { return this->requestContentType_ != nullptr;};
    void deleteRequestContentType() { this->requestContentType_ = nullptr;};
    inline int32_t requestContentType() const { DARABONBA_PTR_GET_DEFAULT(requestContentType_, 0) };
    inline CreateDataServiceApiRequest& setRequestContentType(int32_t requestContentType) { DARABONBA_PTR_SET_VALUE(requestContentType_, requestContentType) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline int32_t requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
    inline CreateDataServiceApiRequest& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline CreateDataServiceApiRequest& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // responseContentType Field Functions 
    bool hasResponseContentType() const { return this->responseContentType_ != nullptr;};
    void deleteResponseContentType() { this->responseContentType_ = nullptr;};
    inline int32_t responseContentType() const { DARABONBA_PTR_GET_DEFAULT(responseContentType_, 0) };
    inline CreateDataServiceApiRequest& setResponseContentType(int32_t responseContentType) { DARABONBA_PTR_SET_VALUE(responseContentType_, responseContentType) };


    // scriptDetails Field Functions 
    bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
    void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
    inline string scriptDetails() const { DARABONBA_PTR_GET_DEFAULT(scriptDetails_, "") };
    inline CreateDataServiceApiRequest& setScriptDetails(string scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };


    // sqlMode Field Functions 
    bool hasSqlMode() const { return this->sqlMode_ != nullptr;};
    void deleteSqlMode() { this->sqlMode_ = nullptr;};
    inline int64_t sqlMode() const { DARABONBA_PTR_GET_DEFAULT(sqlMode_, 0L) };
    inline CreateDataServiceApiRequest& setSqlMode(int64_t sqlMode) { DARABONBA_PTR_SET_VALUE(sqlMode_, sqlMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CreateDataServiceApiRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateDataServiceApiRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // visibleRange Field Functions 
    bool hasVisibleRange() const { return this->visibleRange_ != nullptr;};
    void deleteVisibleRange() { this->visibleRange_ = nullptr;};
    inline int32_t visibleRange() const { DARABONBA_PTR_GET_DEFAULT(visibleRange_, 0) };
    inline CreateDataServiceApiRequest& setVisibleRange(int32_t visibleRange) { DARABONBA_PTR_SET_VALUE(visibleRange_, visibleRange) };


    // wizardDetails Field Functions 
    bool hasWizardDetails() const { return this->wizardDetails_ != nullptr;};
    void deleteWizardDetails() { this->wizardDetails_ = nullptr;};
    inline string wizardDetails() const { DARABONBA_PTR_GET_DEFAULT(wizardDetails_, "") };
    inline CreateDataServiceApiRequest& setWizardDetails(string wizardDetails) { DARABONBA_PTR_SET_VALUE(wizardDetails_, wizardDetails) };


  protected:
    // The description of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiDescription_ = nullptr;
    // The type of the API. Valid values: 0, 1, and 2. The value 0 indicates that the API is generated in wizard mode. The value 1 indicates that the API is generated in script mode. The value 2 indicates that the API is generated by registration.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> apiMode_ = nullptr;
    // The name of the API. The name must be 4 to 50 characters in length. The name can contain letters, digits, and underscores (_) and must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiName_ = nullptr;
    // The path of the API. The path cannot exceed 200 characters in length. The path can contain letters, digits, underscores (_), and hyphens (-) and must start with a forward slash (/).
    // 
    // This parameter is required.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The ID of the folder used to store the API. The ID of the root folder in a business process is 0. The ID of the folder created by a user must be greater than 0.
    std::shared_ptr<int64_t> folderId_ = nullptr;
    // The business process ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The protocol used by the API. Valid values: 0 and 1. The value 0 indicates HTTP. The value 1 indicates HTTPS. You can specify multiple protocols. Separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> protocols_ = nullptr;
    // The details of the API generated by registration. For more information, see the registrationDetails parameter returned by the [GetDataServiceApi](https://help.aliyun.com/document_detail/174013.html) operation.
    std::shared_ptr<string> registrationDetails_ = nullptr;
    // The format of the data to be requested. Valid values:
    // 
    // *   0: XML format
    // *   1: JSON format
    // *   2: form format
    std::shared_ptr<int32_t> requestContentType_ = nullptr;
    // The request method of the API. Valid values: 0, 1, 2, and 3. The value 0 indicates the GET method. The value 1 indicates the POST method. The value 2 indicates the PUT method. The value 3 indicates the DELETE method. APIs generated in wizard or script mode support the GET and POST methods. APIs generated by registration support the GET, POST, PUT, and DELETE methods.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> requestMethod_ = nullptr;
    // The ID of the exclusive resource group.
    std::shared_ptr<int64_t> resourceGroupId_ = nullptr;
    // The format in which the response of the API request is returned. Valid values: 0 and 1. The value 0 indicates the JSON format. The value 1 indicates the XML format. APIs generated in wizard or script mode support the JSON format. APIs generated by registration support the JSON and XML formats.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> responseContentType_ = nullptr;
    // The details of the API generated in script mode. For more information, see the scriptDetails parameter returned by the [GetDataServiceApi](https://help.aliyun.com/document_detail/174013.html) operation.
    std::shared_ptr<string> scriptDetails_ = nullptr;
    // *   The SQL mode. Valid values: 0: The basic mode is used.
    // *   1: Mybatis is used.
    std::shared_ptr<int64_t> sqlMode_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The timeout period of the API request. Unit: milliseconds. Valid values: (0,30000].
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The scope in which the API is visible. Valid values: 0 and 1. The value 0 indicates that the API is visible to all members in the workspace. The value 1 indicates that the API is visible only to its owner.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> visibleRange_ = nullptr;
    // The details of the API generated in wizard mode. For more information, see the WizardDetails parameter returned by the [GetDataServiceApi](https://help.aliyun.com/document_detail/174013.html) operation.
    std::shared_ptr<string> wizardDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
