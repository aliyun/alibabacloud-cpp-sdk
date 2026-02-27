// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPNOTIFICATIONSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPNOTIFICATIONSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupNotificationSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupNotificationSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupNotificationEnableStatus, resourceGroupNotificationEnableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupNotificationSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupNotificationEnableStatus, resourceGroupNotificationEnableStatus_);
    };
    GetResourceGroupNotificationSettingResponseBody() = default ;
    GetResourceGroupNotificationSettingResponseBody(const GetResourceGroupNotificationSettingResponseBody &) = default ;
    GetResourceGroupNotificationSettingResponseBody(GetResourceGroupNotificationSettingResponseBody &&) = default ;
    GetResourceGroupNotificationSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupNotificationSettingResponseBody() = default ;
    GetResourceGroupNotificationSettingResponseBody& operator=(const GetResourceGroupNotificationSettingResponseBody &) = default ;
    GetResourceGroupNotificationSettingResponseBody& operator=(GetResourceGroupNotificationSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroupNotificationEnableStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupNotificationSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupNotificationEnableStatus Field Functions 
    bool hasResourceGroupNotificationEnableStatus() const { return this->resourceGroupNotificationEnableStatus_ != nullptr;};
    void deleteResourceGroupNotificationEnableStatus() { this->resourceGroupNotificationEnableStatus_ = nullptr;};
    inline bool getResourceGroupNotificationEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupNotificationEnableStatus_, false) };
    inline GetResourceGroupNotificationSettingResponseBody& setResourceGroupNotificationEnableStatus(bool resourceGroupNotificationEnableStatus) { DARABONBA_PTR_SET_VALUE(resourceGroupNotificationEnableStatus_, resourceGroupNotificationEnableStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the group event notification is enabled.
    shared_ptr<bool> resourceGroupNotificationEnableStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
