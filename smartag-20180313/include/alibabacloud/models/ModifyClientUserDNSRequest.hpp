// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLIENTUSERDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLIENTUSERDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyClientUserDNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClientUserDNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppDNS, appDNS_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecoveredDNS, recoveredDNS_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClientUserDNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDNS, appDNS_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecoveredDNS, recoveredDNS_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    ModifyClientUserDNSRequest() = default ;
    ModifyClientUserDNSRequest(const ModifyClientUserDNSRequest &) = default ;
    ModifyClientUserDNSRequest(ModifyClientUserDNSRequest &&) = default ;
    ModifyClientUserDNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClientUserDNSRequest() = default ;
    ModifyClientUserDNSRequest& operator=(const ModifyClientUserDNSRequest &) = default ;
    ModifyClientUserDNSRequest& operator=(ModifyClientUserDNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDNS_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->recoveredDNS_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr; };
    // appDNS Field Functions 
    bool hasAppDNS() const { return this->appDNS_ != nullptr;};
    void deleteAppDNS() { this->appDNS_ = nullptr;};
    inline const vector<string> & getAppDNS() const { DARABONBA_PTR_GET_CONST(appDNS_, vector<string>) };
    inline vector<string> getAppDNS() { DARABONBA_PTR_GET(appDNS_, vector<string>) };
    inline ModifyClientUserDNSRequest& setAppDNS(const vector<string> & appDNS) { DARABONBA_PTR_SET_VALUE(appDNS_, appDNS) };
    inline ModifyClientUserDNSRequest& setAppDNS(vector<string> && appDNS) { DARABONBA_PTR_SET_RVALUE(appDNS_, appDNS) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyClientUserDNSRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyClientUserDNSRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recoveredDNS Field Functions 
    bool hasRecoveredDNS() const { return this->recoveredDNS_ != nullptr;};
    void deleteRecoveredDNS() { this->recoveredDNS_ = nullptr;};
    inline const vector<string> & getRecoveredDNS() const { DARABONBA_PTR_GET_CONST(recoveredDNS_, vector<string>) };
    inline vector<string> getRecoveredDNS() { DARABONBA_PTR_GET(recoveredDNS_, vector<string>) };
    inline ModifyClientUserDNSRequest& setRecoveredDNS(const vector<string> & recoveredDNS) { DARABONBA_PTR_SET_VALUE(recoveredDNS_, recoveredDNS) };
    inline ModifyClientUserDNSRequest& setRecoveredDNS(vector<string> && recoveredDNS) { DARABONBA_PTR_SET_RVALUE(recoveredDNS_, recoveredDNS) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyClientUserDNSRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyClientUserDNSRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyClientUserDNSRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifyClientUserDNSRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The IP addresses of the primary and secondary DNS servers that the client uses when it connects to a private network.
    // 
    // > - If the client uses PrivateZone to access Alibaba Cloud, the DNS server IP addresses are 100.100.2.136 and 100.100.2.138.
    // 
    // - DNS configuration is supported only on Android and macOS clients, version 2.1.1 or later.
    // - This parameter is optional. If you do not specify this parameter, the system deletes the existing DNS configuration.
    shared_ptr<vector<string>> appDNS_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The IP addresses of the primary and secondary DNS servers to use after the client disconnects from the private network.
    // 
    // > This feature is not yet available.
    shared_ptr<vector<string>> recoveredDNS_ {};
    // The region ID of the Smart Access Gateway app instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the Smart Access Gateway app instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
