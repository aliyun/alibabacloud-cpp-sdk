// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESMARTAGDPIMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESMARTAGDPIMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class EnableSmartAGDpiMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSmartAGDpiMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSmartAGDpiMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    EnableSmartAGDpiMonitorRequest() = default ;
    EnableSmartAGDpiMonitorRequest(const EnableSmartAGDpiMonitorRequest &) = default ;
    EnableSmartAGDpiMonitorRequest(EnableSmartAGDpiMonitorRequest &&) = default ;
    EnableSmartAGDpiMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSmartAGDpiMonitorRequest() = default ;
    EnableSmartAGDpiMonitorRequest& operator=(const EnableSmartAGDpiMonitorRequest &) = default ;
    EnableSmartAGDpiMonitorRequest& operator=(EnableSmartAGDpiMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->slsLogStore_ == nullptr && this->slsProjectName_ == nullptr && this->smartAGId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableSmartAGDpiMonitorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline EnableSmartAGDpiMonitorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableSmartAGDpiMonitorRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableSmartAGDpiMonitorRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableSmartAGDpiMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableSmartAGDpiMonitorRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableSmartAGDpiMonitorRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string getSlsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline EnableSmartAGDpiMonitorRequest& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline EnableSmartAGDpiMonitorRequest& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline EnableSmartAGDpiMonitorRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to check the validity of the request without actually making the request. Valid values:
    // 
    // *   **true**: checks the validity of the request but does not enable or disables the DPI feature for the SAG instance. Check items include the request format, instance status, and whether the required parameters are set. If the request fails the check, an error message is returned. If the request passes the request, the ID of the request is returned.
    // *   **false**: makes the request and enables the DPI feature for the SAG instance after the request passes the check. This is the default value.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the Logstore.
    // 
    // This parameter is required.
    shared_ptr<string> slsLogStore_ {};
    // The name of the Log Service project.
    // 
    // This parameter is required.
    shared_ptr<string> slsProjectName_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
