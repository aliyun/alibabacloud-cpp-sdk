// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMESSAGECLOUDMONITORCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMESSAGECLOUDMONITORCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteMessageCloudMonitorConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMessageCloudMonitorConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMessageCloudMonitorConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
    };
    DeleteMessageCloudMonitorConfigRequest() = default ;
    DeleteMessageCloudMonitorConfigRequest(const DeleteMessageCloudMonitorConfigRequest &) = default ;
    DeleteMessageCloudMonitorConfigRequest(DeleteMessageCloudMonitorConfigRequest &&) = default ;
    DeleteMessageCloudMonitorConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMessageCloudMonitorConfigRequest() = default ;
    DeleteMessageCloudMonitorConfigRequest& operator=(const DeleteMessageCloudMonitorConfigRequest &) = default ;
    DeleteMessageCloudMonitorConfigRequest& operator=(DeleteMessageCloudMonitorConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->ownerAccount_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMessageCloudMonitorConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteMessageCloudMonitorConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
