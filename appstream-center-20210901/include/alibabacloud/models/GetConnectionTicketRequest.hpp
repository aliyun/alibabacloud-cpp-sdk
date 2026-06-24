// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetConnectionTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIdList, appInstanceGroupIdList_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(AppStartParam, appStartParam_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EnvironmentConfig, environmentConfig_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIdList, appInstanceGroupIdList_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(AppStartParam, appStartParam_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentConfig, environmentConfig_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetConnectionTicketRequest() = default ;
    GetConnectionTicketRequest(const GetConnectionTicketRequest &) = default ;
    GetConnectionTicketRequest(GetConnectionTicketRequest &&) = default ;
    GetConnectionTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketRequest() = default ;
    GetConnectionTicketRequest& operator=(const GetConnectionTicketRequest &) = default ;
    GetConnectionTicketRequest& operator=(GetConnectionTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->appId_ == nullptr && this->appInstanceGroupIdList_ == nullptr && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->appPolicyId_ == nullptr
        && this->appStartParam_ == nullptr && this->appVersion_ == nullptr && this->bizRegionId_ == nullptr && this->endUserId_ == nullptr && this->environmentConfig_ == nullptr
        && this->productType_ == nullptr && this->taskId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetConnectionTicketRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetConnectionTicketRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupIdList Field Functions 
    bool hasAppInstanceGroupIdList() const { return this->appInstanceGroupIdList_ != nullptr;};
    void deleteAppInstanceGroupIdList() { this->appInstanceGroupIdList_ = nullptr;};
    inline const vector<string> & getAppInstanceGroupIdList() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIdList_, vector<string>) };
    inline vector<string> getAppInstanceGroupIdList() { DARABONBA_PTR_GET(appInstanceGroupIdList_, vector<string>) };
    inline GetConnectionTicketRequest& setAppInstanceGroupIdList(const vector<string> & appInstanceGroupIdList) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };
    inline GetConnectionTicketRequest& setAppInstanceGroupIdList(vector<string> && appInstanceGroupIdList) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetConnectionTicketRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline GetConnectionTicketRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline GetConnectionTicketRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // appStartParam Field Functions 
    bool hasAppStartParam() const { return this->appStartParam_ != nullptr;};
    void deleteAppStartParam() { this->appStartParam_ = nullptr;};
    inline string getAppStartParam() const { DARABONBA_PTR_GET_DEFAULT(appStartParam_, "") };
    inline GetConnectionTicketRequest& setAppStartParam(string appStartParam) { DARABONBA_PTR_SET_VALUE(appStartParam_, appStartParam) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetConnectionTicketRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetConnectionTicketRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetConnectionTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // environmentConfig Field Functions 
    bool hasEnvironmentConfig() const { return this->environmentConfig_ != nullptr;};
    void deleteEnvironmentConfig() { this->environmentConfig_ = nullptr;};
    inline string getEnvironmentConfig() const { DARABONBA_PTR_GET_DEFAULT(environmentConfig_, "") };
    inline GetConnectionTicketRequest& setEnvironmentConfig(string environmentConfig) { DARABONBA_PTR_SET_VALUE(environmentConfig_, environmentConfig) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetConnectionTicketRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The access type. If you do not specify this parameter, both types are displayed. Valid values:
    // - INTERNET: Internet access.
    // - VPC: Express Connect access.
    shared_ptr<string> accessType_ {};
    // The application ID.
    // 
    // > This parameter is required for the initial call and optional for subsequent calls.
    shared_ptr<string> appId_ {};
    // The list of delivery groups.
    // 
    // > - If you specify this parameter, application instances are allocated only from the specified authorized delivery groups.
    // > - If you specify the `AppInstanceId` or `AppInstancePersistentId` parameter, this parameter is required.
    shared_ptr<vector<string>> appInstanceGroupIdList_ {};
    // The application instance ID.
    // 
    // > 
    // > - If you specify this parameter, only the specified application instance is allocated.
    // > - If you specify this parameter, you must also specify the `AppInstanceGroupIdList` parameter, and the number of delivery group IDs in `AppInstanceGroupIdList` must be 1.
    shared_ptr<string> appInstanceId_ {};
    // The persistent session ID.
    shared_ptr<string> appInstancePersistentId_ {};
    shared_ptr<string> appPolicyId_ {};
    // The application startup parameter. For information about how to obtain startup parameters, see [How to obtain application installation and startup parameters](https://help.aliyun.com/document_detail/426045.html).
    shared_ptr<string> appStartParam_ {};
    // The application version. If you specify this parameter, only the specified version of the application is opened. If you do not specify this parameter, any authorized version of the application is opened.
    shared_ptr<string> appVersion_ {};
    // The region ID.
    // 
    // > If you specify this parameter, application instances are allocated only from delivery groups in the specified region.
    shared_ptr<string> bizRegionId_ {};
    // The username.
    // 
    // This parameter is required.
    shared_ptr<string> endUserId_ {};
    // The environment configuration.
    shared_ptr<string> environmentConfig_ {};
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The task ID.
    // 
    // > This request parameter is required for non-initial invokes. Use this parameter to check the task status and connection credentials.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
