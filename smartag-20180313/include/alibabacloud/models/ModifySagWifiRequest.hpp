// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGWIFIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGWIFIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagWifiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagWifiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_TO_JSON(IsBroadcast, isBroadcast_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SSID, SSID_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagWifiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_FROM_JSON(IsBroadcast, isBroadcast_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SSID, SSID_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
    };
    ModifySagWifiRequest() = default ;
    ModifySagWifiRequest(const ModifySagWifiRequest &) = default ;
    ModifySagWifiRequest(ModifySagWifiRequest &&) = default ;
    ModifySagWifiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagWifiRequest() = default ;
    ModifySagWifiRequest& operator=(const ModifySagWifiRequest &) = default ;
    ModifySagWifiRequest& operator=(ModifySagWifiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->bandwidth_ == nullptr && this->channel_ == nullptr && this->encryptAlgorithm_ == nullptr && this->isAuth_ == nullptr && this->isBroadcast_ == nullptr
        && this->isEnable_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->SSID_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline ModifySagWifiRequest& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ModifySagWifiRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ModifySagWifiRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline ModifySagWifiRequest& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // isAuth Field Functions 
    bool hasIsAuth() const { return this->isAuth_ != nullptr;};
    void deleteIsAuth() { this->isAuth_ = nullptr;};
    inline string getIsAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, "") };
    inline ModifySagWifiRequest& setIsAuth(string isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


    // isBroadcast Field Functions 
    bool hasIsBroadcast() const { return this->isBroadcast_ != nullptr;};
    void deleteIsBroadcast() { this->isBroadcast_ = nullptr;};
    inline string getIsBroadcast() const { DARABONBA_PTR_GET_DEFAULT(isBroadcast_, "") };
    inline ModifySagWifiRequest& setIsBroadcast(string isBroadcast) { DARABONBA_PTR_SET_VALUE(isBroadcast_, isBroadcast) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline string getIsEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, "") };
    inline ModifySagWifiRequest& setIsEnable(string isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagWifiRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagWifiRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifySagWifiRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagWifiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagWifiRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagWifiRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SSID Field Functions 
    bool hasSSID() const { return this->SSID_ != nullptr;};
    void deleteSSID() { this->SSID_ = nullptr;};
    inline string getSSID() const { DARABONBA_PTR_GET_DEFAULT(SSID_, "") };
    inline ModifySagWifiRequest& setSSID(string SSID) { DARABONBA_PTR_SET_VALUE(SSID_, SSID) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagWifiRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagWifiRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


  protected:
    // The authentication type. Valid values:
    // 
    // *   **NONE**
    // *   **WPA-PSK**
    // *   **WPA2-PSK**
    shared_ptr<string> authenticationType_ {};
    // The bandwidth of the channel. Valid values:
    // 
    // *   **Automatic**
    // *   **20 MHz**
    // *   **40 MHz**
    shared_ptr<string> bandwidth_ {};
    // The Wi-Fi channel.
    // 
    // Valid values: **0 to 11**.
    shared_ptr<string> channel_ {};
    // The encryption algorithm. Valid values:
    // 
    // *   **AUTO**: automatically selects the encryption algorithm.
    // *   **TKIP**: uses the Temporal Key Integrity Protocol (TKIP).
    // *   **AES**: uses the Advanced Encryption Standard authorized by Wi-Fi®.
    shared_ptr<string> encryptAlgorithm_ {};
    // Specifies whether wireless security is enabled. Valid values:
    // 
    // *   **true**: enables wireless security.
    // *   **False**: disables wireless security.
    shared_ptr<string> isAuth_ {};
    // Specifies whether broadcast over Wi-Fi is enabled. Valid values:
    // 
    // *   **true**: enables broadcast.
    // *   **False**: disables broadcast.
    // 
    // >  Only after you enable broadcast, terminals that support wireless connections can search the Wi-Fi network by its SSID and receive Wi-Fi signals.
    shared_ptr<string> isBroadcast_ {};
    // Specifies whether Wi-Fi is enabled. Valid values:
    // 
    // *   **true**: enables Wi-Fi.
    // *   **False**: disables Wi-Fi.
    // 
    // This parameter is required.
    shared_ptr<string> isEnable_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password used to connect to the Wi-Fi network.
    // 
    // The password must be 8 to 32 characters in length, and can contain digits and letters.
    shared_ptr<string> password_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The service set identifier (SSID) of the Wi-Fi network.
    // 
    // The name must be 1 to 31 characters in length, and can contain digits and letters.
    shared_ptr<string> SSID_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
