// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDescription, apiDescription_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_TO_JSON(WizardDetails, wizardDetails_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDescription, apiDescription_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RegistrationDetails, registrationDetails_);
      DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResponseContentType, responseContentType_);
      DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(VisibleRange, visibleRange_);
      DARABONBA_PTR_FROM_JSON(WizardDetails, wizardDetails_);
    };
    UpdateDataServiceApiRequest() = default ;
    UpdateDataServiceApiRequest(const UpdateDataServiceApiRequest &) = default ;
    UpdateDataServiceApiRequest(UpdateDataServiceApiRequest &&) = default ;
    UpdateDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataServiceApiRequest() = default ;
    UpdateDataServiceApiRequest& operator=(const UpdateDataServiceApiRequest &) = default ;
    UpdateDataServiceApiRequest& operator=(UpdateDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDescription_ != nullptr
        && this->apiId_ != nullptr && this->apiPath_ != nullptr && this->projectId_ != nullptr && this->protocols_ != nullptr && this->registrationDetails_ != nullptr
        && this->requestMethod_ != nullptr && this->resourceGroupId_ != nullptr && this->responseContentType_ != nullptr && this->scriptDetails_ != nullptr && this->tenantId_ != nullptr
        && this->timeout_ != nullptr && this->visibleRange_ != nullptr && this->wizardDetails_ != nullptr; };
    // apiDescription Field Functions 
    bool hasApiDescription() const { return this->apiDescription_ != nullptr;};
    void deleteApiDescription() { this->apiDescription_ = nullptr;};
    inline string apiDescription() const { DARABONBA_PTR_GET_DEFAULT(apiDescription_, "") };
    inline UpdateDataServiceApiRequest& setApiDescription(string apiDescription) { DARABONBA_PTR_SET_VALUE(apiDescription_, apiDescription) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline UpdateDataServiceApiRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline UpdateDataServiceApiRequest& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataServiceApiRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline string protocols() const { DARABONBA_PTR_GET_DEFAULT(protocols_, "") };
    inline UpdateDataServiceApiRequest& setProtocols(string protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };


    // registrationDetails Field Functions 
    bool hasRegistrationDetails() const { return this->registrationDetails_ != nullptr;};
    void deleteRegistrationDetails() { this->registrationDetails_ = nullptr;};
    inline string registrationDetails() const { DARABONBA_PTR_GET_DEFAULT(registrationDetails_, "") };
    inline UpdateDataServiceApiRequest& setRegistrationDetails(string registrationDetails) { DARABONBA_PTR_SET_VALUE(registrationDetails_, registrationDetails) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline int32_t requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
    inline UpdateDataServiceApiRequest& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline UpdateDataServiceApiRequest& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // responseContentType Field Functions 
    bool hasResponseContentType() const { return this->responseContentType_ != nullptr;};
    void deleteResponseContentType() { this->responseContentType_ = nullptr;};
    inline int32_t responseContentType() const { DARABONBA_PTR_GET_DEFAULT(responseContentType_, 0) };
    inline UpdateDataServiceApiRequest& setResponseContentType(int32_t responseContentType) { DARABONBA_PTR_SET_VALUE(responseContentType_, responseContentType) };


    // scriptDetails Field Functions 
    bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
    void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
    inline string scriptDetails() const { DARABONBA_PTR_GET_DEFAULT(scriptDetails_, "") };
    inline UpdateDataServiceApiRequest& setScriptDetails(string scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline UpdateDataServiceApiRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateDataServiceApiRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // visibleRange Field Functions 
    bool hasVisibleRange() const { return this->visibleRange_ != nullptr;};
    void deleteVisibleRange() { this->visibleRange_ = nullptr;};
    inline int32_t visibleRange() const { DARABONBA_PTR_GET_DEFAULT(visibleRange_, 0) };
    inline UpdateDataServiceApiRequest& setVisibleRange(int32_t visibleRange) { DARABONBA_PTR_SET_VALUE(visibleRange_, visibleRange) };


    // wizardDetails Field Functions 
    bool hasWizardDetails() const { return this->wizardDetails_ != nullptr;};
    void deleteWizardDetails() { this->wizardDetails_ = nullptr;};
    inline string wizardDetails() const { DARABONBA_PTR_GET_DEFAULT(wizardDetails_, "") };
    inline UpdateDataServiceApiRequest& setWizardDetails(string wizardDetails) { DARABONBA_PTR_SET_VALUE(wizardDetails_, wizardDetails) };


  protected:
    // The description of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiDescription_ = nullptr;
    // The ID of the API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The path of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The protocol used by the API. Valid values: 0 and 1. The value 0 indicates HTTP. The value 1 indicates HTTPS. You can specify multiple protocols. Separate multiple protocols with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> protocols_ = nullptr;
    // The details of the API generated by registration. For more information, see the RegistrationDetails parameter returned by the [GetDataServiceApi](https://help.aliyun.com/document_detail/174013.html) operation.
    std::shared_ptr<string> registrationDetails_ = nullptr;
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
    // The details of the API generated in script mode. For more information, see the ScriptDetails parameter returned by the [GetDataServiceApi](https://help.aliyun.com/document_detail/174013.html) operation.
    std::shared_ptr<string> scriptDetails_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the username for the logon in the upper-right corner and click User Info in the Menu section.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The timeout period of the API request. Unit: milliseconds. Valid values: (0,30000].
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The scope in which the API is visible. Valid values: 0 and 1. The value 0 indicates that the API is visible within the workspace. The value 1 indicates that the API is visible only to its owner.
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
