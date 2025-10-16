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
        && return this->appId_ == nullptr && return this->appInstanceGroupIdList_ == nullptr && return this->appInstanceId_ == nullptr && return this->appInstancePersistentId_ == nullptr && return this->appPolicyId_ == nullptr
        && return this->appStartParam_ == nullptr && return this->appVersion_ == nullptr && return this->bizRegionId_ == nullptr && return this->endUserId_ == nullptr && return this->productType_ == nullptr
        && return this->taskId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetConnectionTicketRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetConnectionTicketRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupIdList Field Functions 
    bool hasAppInstanceGroupIdList() const { return this->appInstanceGroupIdList_ != nullptr;};
    void deleteAppInstanceGroupIdList() { this->appInstanceGroupIdList_ = nullptr;};
    inline const vector<string> & appInstanceGroupIdList() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIdList_, vector<string>) };
    inline vector<string> appInstanceGroupIdList() { DARABONBA_PTR_GET(appInstanceGroupIdList_, vector<string>) };
    inline GetConnectionTicketRequest& setAppInstanceGroupIdList(const vector<string> & appInstanceGroupIdList) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };
    inline GetConnectionTicketRequest& setAppInstanceGroupIdList(vector<string> && appInstanceGroupIdList) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetConnectionTicketRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string appInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline GetConnectionTicketRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline GetConnectionTicketRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // appStartParam Field Functions 
    bool hasAppStartParam() const { return this->appStartParam_ != nullptr;};
    void deleteAppStartParam() { this->appStartParam_ = nullptr;};
    inline string appStartParam() const { DARABONBA_PTR_GET_DEFAULT(appStartParam_, "") };
    inline GetConnectionTicketRequest& setAppStartParam(string appStartParam) { DARABONBA_PTR_SET_VALUE(appStartParam_, appStartParam) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetConnectionTicketRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetConnectionTicketRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetConnectionTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetConnectionTicketRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    // The application ID.
    // 
    // >  This parameter is required for the first call to this operation and optional for subsequent calls to the operation.
    std::shared_ptr<string> appId_ = nullptr;
    // The delivery groups.
    // 
    // > *   If you configure this parameter, the system assigns application instances only among the specified authorized delivery groups. 
    // > *   This parameter is required if you configure `AppInstanceId` or `AppInstancePersistentId`.
    std::shared_ptr<vector<string>> appInstanceGroupIdList_ = nullptr;
    // The ID of the application instance.
    // 
    // > *   If you configure this parameter, the system attempts to assign only the specified application instance.
    // > *   If you configure this parameter, you must also configure `AppInstanceGroupIdList` and the number of delivery groups specified by `AppInstanceGroupIdList` must be 1.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    // The ID of the persistent session.
    std::shared_ptr<string> appInstancePersistentId_ = nullptr;
    std::shared_ptr<string> appPolicyId_ = nullptr;
    // The parameters that are configured to start the application. For information about how to obtain these parameters, see [Obtain parameters configured to install and start an application](https://help.aliyun.com/document_detail/426045.html).
    std::shared_ptr<string> appStartParam_ = nullptr;
    // The application version. If you configure this parameter, only an application of the specified version is started. If you do not configure this parameter, an application of a random authorized version is started.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The region ID.
    // 
    // >  If you configure this parameter, the system assigns application instances only among the delivery groups that reside in the specified region.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The ID of the convenience account.
    // 
    // This parameter is required.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The product type.
    // 
    // Valid values:
    // 
    // *   CloudApp: App Streaming
    // *   AndroidCloud: Cloud Phone
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The task ID.
    // 
    // >  This parameter is required for calls other than the first call to this operation. You can use this parameter to query the task status and connection credential.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
