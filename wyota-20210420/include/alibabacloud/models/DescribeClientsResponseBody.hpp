// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class DescribeClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClientsResponseBody() = default ;
    DescribeClientsResponseBody(const DescribeClientsResponseBody &) = default ;
    DescribeClientsResponseBody(DescribeClientsResponseBody &&) = default ;
    DescribeClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientsResponseBody() = default ;
    DescribeClientsResponseBody& operator=(const DescribeClientsResponseBody &) = default ;
    DescribeClientsResponseBody& operator=(DescribeClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AreaSite, areaSite_);
        DARABONBA_PTR_TO_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_TO_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_TO_JSON(BuildId, buildId_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(CurrentConnectDesktop, currentConnectDesktop_);
        DARABONBA_PTR_TO_JSON(CurrentLoginUser, currentLoginUser_);
        DARABONBA_PTR_TO_JSON(CustomResInvalidReason, customResInvalidReason_);
        DARABONBA_PTR_TO_JSON(CustomResourceId, customResourceId_);
        DARABONBA_PTR_TO_JSON(CustomResourceName, customResourceName_);
        DARABONBA_PTR_TO_JSON(CustomResourceStatus, customResourceStatus_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopRegionId, desktopRegionId_);
        DARABONBA_PTR_TO_JSON(DeviceOs, deviceOs_);
        DARABONBA_PTR_TO_JSON(FunctionSupport, functionSupport_);
        DARABONBA_PTR_TO_JSON(HardwareInfo, hardwareInfo_);
        DARABONBA_PTR_TO_JSON(HostOsInfo, hostOsInfo_);
        DARABONBA_PTR_TO_JSON(InManage, inManage_);
        DARABONBA_PTR_TO_JSON(IpGeoLocation, ipGeoLocation_);
        DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
        DARABONBA_PTR_TO_JSON(LastLoginUser, lastLoginUser_);
        DARABONBA_PTR_TO_JSON(LocalDeviceSn, localDeviceSn_);
        DARABONBA_PTR_TO_JSON(LocationInfo, locationInfo_);
        DARABONBA_PTR_TO_JSON(LoginUser, loginUser_);
        DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
        DARABONBA_PTR_TO_JSON(ManageTime, manageTime_);
        DARABONBA_PTR_TO_JSON(ManageTimestamp, manageTimestamp_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModelPreviewUrl, modelPreviewUrl_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_TO_JSON(PasswordFreeLoginUser, passwordFreeLoginUser_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(PublicIpv4, publicIpv4_);
        DARABONBA_PTR_TO_JSON(SetPasswordFreeLoginUserTime, setPasswordFreeLoginUserTime_);
        DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_TO_JSON(UpgradeDownloadType, upgradeDownloadType_);
        DARABONBA_PTR_TO_JSON(UserBindCount, userBindCount_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(WosAppVersion, wosAppVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AreaSite, areaSite_);
        DARABONBA_PTR_FROM_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_FROM_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(CurrentConnectDesktop, currentConnectDesktop_);
        DARABONBA_PTR_FROM_JSON(CurrentLoginUser, currentLoginUser_);
        DARABONBA_PTR_FROM_JSON(CustomResInvalidReason, customResInvalidReason_);
        DARABONBA_PTR_FROM_JSON(CustomResourceId, customResourceId_);
        DARABONBA_PTR_FROM_JSON(CustomResourceName, customResourceName_);
        DARABONBA_PTR_FROM_JSON(CustomResourceStatus, customResourceStatus_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopRegionId, desktopRegionId_);
        DARABONBA_PTR_FROM_JSON(DeviceOs, deviceOs_);
        DARABONBA_PTR_FROM_JSON(FunctionSupport, functionSupport_);
        DARABONBA_PTR_FROM_JSON(HardwareInfo, hardwareInfo_);
        DARABONBA_PTR_FROM_JSON(HostOsInfo, hostOsInfo_);
        DARABONBA_PTR_FROM_JSON(InManage, inManage_);
        DARABONBA_PTR_FROM_JSON(IpGeoLocation, ipGeoLocation_);
        DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
        DARABONBA_PTR_FROM_JSON(LastLoginUser, lastLoginUser_);
        DARABONBA_PTR_FROM_JSON(LocalDeviceSn, localDeviceSn_);
        DARABONBA_PTR_FROM_JSON(LocationInfo, locationInfo_);
        DARABONBA_PTR_FROM_JSON(LoginUser, loginUser_);
        DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
        DARABONBA_PTR_FROM_JSON(ManageTime, manageTime_);
        DARABONBA_PTR_FROM_JSON(ManageTimestamp, manageTimestamp_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModelPreviewUrl, modelPreviewUrl_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordFreeLoginUser, passwordFreeLoginUser_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(PublicIpv4, publicIpv4_);
        DARABONBA_PTR_FROM_JSON(SetPasswordFreeLoginUserTime, setPasswordFreeLoginUserTime_);
        DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_FROM_JSON(UpgradeDownloadType, upgradeDownloadType_);
        DARABONBA_PTR_FROM_JSON(UserBindCount, userBindCount_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(WosAppVersion, wosAppVersion_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HardwareInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HardwareInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Bluetooth, bluetooth_);
          DARABONBA_PTR_TO_JSON(ChipId, chipId_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Mac, mac_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
          DARABONBA_PTR_TO_JSON(Wlan, wlan_);
        };
        friend void from_json(const Darabonba::Json& j, HardwareInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Bluetooth, bluetooth_);
          DARABONBA_PTR_FROM_JSON(ChipId, chipId_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Mac, mac_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
          DARABONBA_PTR_FROM_JSON(Wlan, wlan_);
        };
        HardwareInfo() = default ;
        HardwareInfo(const HardwareInfo &) = default ;
        HardwareInfo(HardwareInfo &&) = default ;
        HardwareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HardwareInfo() = default ;
        HardwareInfo& operator=(const HardwareInfo &) = default ;
        HardwareInfo& operator=(HardwareInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bluetooth_ == nullptr
        && this->chipId_ == nullptr && this->cpu_ == nullptr && this->mac_ == nullptr && this->memory_ == nullptr && this->storage_ == nullptr
        && this->wlan_ == nullptr; };
        // bluetooth Field Functions 
        bool hasBluetooth() const { return this->bluetooth_ != nullptr;};
        void deleteBluetooth() { this->bluetooth_ = nullptr;};
        inline string getBluetooth() const { DARABONBA_PTR_GET_DEFAULT(bluetooth_, "") };
        inline HardwareInfo& setBluetooth(string bluetooth) { DARABONBA_PTR_SET_VALUE(bluetooth_, bluetooth) };


        // chipId Field Functions 
        bool hasChipId() const { return this->chipId_ != nullptr;};
        void deleteChipId() { this->chipId_ = nullptr;};
        inline string getChipId() const { DARABONBA_PTR_GET_DEFAULT(chipId_, "") };
        inline HardwareInfo& setChipId(string chipId) { DARABONBA_PTR_SET_VALUE(chipId_, chipId) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline HardwareInfo& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // mac Field Functions 
        bool hasMac() const { return this->mac_ != nullptr;};
        void deleteMac() { this->mac_ = nullptr;};
        inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
        inline HardwareInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline HardwareInfo& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
        inline HardwareInfo& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


        // wlan Field Functions 
        bool hasWlan() const { return this->wlan_ != nullptr;};
        void deleteWlan() { this->wlan_ = nullptr;};
        inline string getWlan() const { DARABONBA_PTR_GET_DEFAULT(wlan_, "") };
        inline HardwareInfo& setWlan(string wlan) { DARABONBA_PTR_SET_VALUE(wlan_, wlan) };


      protected:
        shared_ptr<string> bluetooth_ {};
        // chipId
        shared_ptr<string> chipId_ {};
        shared_ptr<string> cpu_ {};
        shared_ptr<string> mac_ {};
        shared_ptr<string> memory_ {};
        shared_ptr<string> storage_ {};
        // wifi mac
        shared_ptr<string> wlan_ {};
      };

      class FunctionSupport : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionSupport& obj) { 
          DARABONBA_PTR_TO_JSON(EnablePolicy, enablePolicy_);
          DARABONBA_PTR_TO_JSON(PasswordFreeLoginForbiddenReason, passwordFreeLoginForbiddenReason_);
          DARABONBA_PTR_TO_JSON(SupportAssistLogin, supportAssistLogin_);
          DARABONBA_PTR_TO_JSON(SupportDiagnose, supportDiagnose_);
          DARABONBA_PTR_TO_JSON(SupportLimitLoginUser, supportLimitLoginUser_);
          DARABONBA_PTR_TO_JSON(SupportLocalDeviceSn, supportLocalDeviceSn_);
          DARABONBA_PTR_TO_JSON(SupportManage, supportManage_);
          DARABONBA_PTR_TO_JSON(SupportModifyPolicy, supportModifyPolicy_);
          DARABONBA_PTR_TO_JSON(SupportPasswordFreeLogin, supportPasswordFreeLogin_);
          DARABONBA_PTR_TO_JSON(SupportReboot, supportReboot_);
          DARABONBA_PTR_TO_JSON(SupportReset, supportReset_);
          DARABONBA_PTR_TO_JSON(SupportResetPin, supportResetPin_);
          DARABONBA_PTR_TO_JSON(SupportStop, supportStop_);
          DARABONBA_PTR_TO_JSON(SupportUpgrade, supportUpgrade_);
          DARABONBA_PTR_TO_JSON(UnsupportAssistLoginReason, unsupportAssistLoginReason_);
          DARABONBA_PTR_TO_JSON(UnsupportManageReason, unsupportManageReason_);
          DARABONBA_PTR_TO_JSON(UnsupportedLocalDeviceSnReason, unsupportedLocalDeviceSnReason_);
          DARABONBA_PTR_TO_JSON(VersionSupported, versionSupported_);
          DARABONBA_PTR_TO_JSON(VersionTooLow, versionTooLow_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionSupport& obj) { 
          DARABONBA_PTR_FROM_JSON(EnablePolicy, enablePolicy_);
          DARABONBA_PTR_FROM_JSON(PasswordFreeLoginForbiddenReason, passwordFreeLoginForbiddenReason_);
          DARABONBA_PTR_FROM_JSON(SupportAssistLogin, supportAssistLogin_);
          DARABONBA_PTR_FROM_JSON(SupportDiagnose, supportDiagnose_);
          DARABONBA_PTR_FROM_JSON(SupportLimitLoginUser, supportLimitLoginUser_);
          DARABONBA_PTR_FROM_JSON(SupportLocalDeviceSn, supportLocalDeviceSn_);
          DARABONBA_PTR_FROM_JSON(SupportManage, supportManage_);
          DARABONBA_PTR_FROM_JSON(SupportModifyPolicy, supportModifyPolicy_);
          DARABONBA_PTR_FROM_JSON(SupportPasswordFreeLogin, supportPasswordFreeLogin_);
          DARABONBA_PTR_FROM_JSON(SupportReboot, supportReboot_);
          DARABONBA_PTR_FROM_JSON(SupportReset, supportReset_);
          DARABONBA_PTR_FROM_JSON(SupportResetPin, supportResetPin_);
          DARABONBA_PTR_FROM_JSON(SupportStop, supportStop_);
          DARABONBA_PTR_FROM_JSON(SupportUpgrade, supportUpgrade_);
          DARABONBA_PTR_FROM_JSON(UnsupportAssistLoginReason, unsupportAssistLoginReason_);
          DARABONBA_PTR_FROM_JSON(UnsupportManageReason, unsupportManageReason_);
          DARABONBA_PTR_FROM_JSON(UnsupportedLocalDeviceSnReason, unsupportedLocalDeviceSnReason_);
          DARABONBA_PTR_FROM_JSON(VersionSupported, versionSupported_);
          DARABONBA_PTR_FROM_JSON(VersionTooLow, versionTooLow_);
        };
        FunctionSupport() = default ;
        FunctionSupport(const FunctionSupport &) = default ;
        FunctionSupport(FunctionSupport &&) = default ;
        FunctionSupport(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionSupport() = default ;
        FunctionSupport& operator=(const FunctionSupport &) = default ;
        FunctionSupport& operator=(FunctionSupport &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enablePolicy_ == nullptr
        && this->passwordFreeLoginForbiddenReason_ == nullptr && this->supportAssistLogin_ == nullptr && this->supportDiagnose_ == nullptr && this->supportLimitLoginUser_ == nullptr && this->supportLocalDeviceSn_ == nullptr
        && this->supportManage_ == nullptr && this->supportModifyPolicy_ == nullptr && this->supportPasswordFreeLogin_ == nullptr && this->supportReboot_ == nullptr && this->supportReset_ == nullptr
        && this->supportResetPin_ == nullptr && this->supportStop_ == nullptr && this->supportUpgrade_ == nullptr && this->unsupportAssistLoginReason_ == nullptr && this->unsupportManageReason_ == nullptr
        && this->unsupportedLocalDeviceSnReason_ == nullptr && this->versionSupported_ == nullptr && this->versionTooLow_ == nullptr; };
        // enablePolicy Field Functions 
        bool hasEnablePolicy() const { return this->enablePolicy_ != nullptr;};
        void deleteEnablePolicy() { this->enablePolicy_ = nullptr;};
        inline bool getEnablePolicy() const { DARABONBA_PTR_GET_DEFAULT(enablePolicy_, false) };
        inline FunctionSupport& setEnablePolicy(bool enablePolicy) { DARABONBA_PTR_SET_VALUE(enablePolicy_, enablePolicy) };


        // passwordFreeLoginForbiddenReason Field Functions 
        bool hasPasswordFreeLoginForbiddenReason() const { return this->passwordFreeLoginForbiddenReason_ != nullptr;};
        void deletePasswordFreeLoginForbiddenReason() { this->passwordFreeLoginForbiddenReason_ = nullptr;};
        inline string getPasswordFreeLoginForbiddenReason() const { DARABONBA_PTR_GET_DEFAULT(passwordFreeLoginForbiddenReason_, "") };
        inline FunctionSupport& setPasswordFreeLoginForbiddenReason(string passwordFreeLoginForbiddenReason) { DARABONBA_PTR_SET_VALUE(passwordFreeLoginForbiddenReason_, passwordFreeLoginForbiddenReason) };


        // supportAssistLogin Field Functions 
        bool hasSupportAssistLogin() const { return this->supportAssistLogin_ != nullptr;};
        void deleteSupportAssistLogin() { this->supportAssistLogin_ = nullptr;};
        inline bool getSupportAssistLogin() const { DARABONBA_PTR_GET_DEFAULT(supportAssistLogin_, false) };
        inline FunctionSupport& setSupportAssistLogin(bool supportAssistLogin) { DARABONBA_PTR_SET_VALUE(supportAssistLogin_, supportAssistLogin) };


        // supportDiagnose Field Functions 
        bool hasSupportDiagnose() const { return this->supportDiagnose_ != nullptr;};
        void deleteSupportDiagnose() { this->supportDiagnose_ = nullptr;};
        inline bool getSupportDiagnose() const { DARABONBA_PTR_GET_DEFAULT(supportDiagnose_, false) };
        inline FunctionSupport& setSupportDiagnose(bool supportDiagnose) { DARABONBA_PTR_SET_VALUE(supportDiagnose_, supportDiagnose) };


        // supportLimitLoginUser Field Functions 
        bool hasSupportLimitLoginUser() const { return this->supportLimitLoginUser_ != nullptr;};
        void deleteSupportLimitLoginUser() { this->supportLimitLoginUser_ = nullptr;};
        inline bool getSupportLimitLoginUser() const { DARABONBA_PTR_GET_DEFAULT(supportLimitLoginUser_, false) };
        inline FunctionSupport& setSupportLimitLoginUser(bool supportLimitLoginUser) { DARABONBA_PTR_SET_VALUE(supportLimitLoginUser_, supportLimitLoginUser) };


        // supportLocalDeviceSn Field Functions 
        bool hasSupportLocalDeviceSn() const { return this->supportLocalDeviceSn_ != nullptr;};
        void deleteSupportLocalDeviceSn() { this->supportLocalDeviceSn_ = nullptr;};
        inline bool getSupportLocalDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(supportLocalDeviceSn_, false) };
        inline FunctionSupport& setSupportLocalDeviceSn(bool supportLocalDeviceSn) { DARABONBA_PTR_SET_VALUE(supportLocalDeviceSn_, supportLocalDeviceSn) };


        // supportManage Field Functions 
        bool hasSupportManage() const { return this->supportManage_ != nullptr;};
        void deleteSupportManage() { this->supportManage_ = nullptr;};
        inline bool getSupportManage() const { DARABONBA_PTR_GET_DEFAULT(supportManage_, false) };
        inline FunctionSupport& setSupportManage(bool supportManage) { DARABONBA_PTR_SET_VALUE(supportManage_, supportManage) };


        // supportModifyPolicy Field Functions 
        bool hasSupportModifyPolicy() const { return this->supportModifyPolicy_ != nullptr;};
        void deleteSupportModifyPolicy() { this->supportModifyPolicy_ = nullptr;};
        inline bool getSupportModifyPolicy() const { DARABONBA_PTR_GET_DEFAULT(supportModifyPolicy_, false) };
        inline FunctionSupport& setSupportModifyPolicy(bool supportModifyPolicy) { DARABONBA_PTR_SET_VALUE(supportModifyPolicy_, supportModifyPolicy) };


        // supportPasswordFreeLogin Field Functions 
        bool hasSupportPasswordFreeLogin() const { return this->supportPasswordFreeLogin_ != nullptr;};
        void deleteSupportPasswordFreeLogin() { this->supportPasswordFreeLogin_ = nullptr;};
        inline bool getSupportPasswordFreeLogin() const { DARABONBA_PTR_GET_DEFAULT(supportPasswordFreeLogin_, false) };
        inline FunctionSupport& setSupportPasswordFreeLogin(bool supportPasswordFreeLogin) { DARABONBA_PTR_SET_VALUE(supportPasswordFreeLogin_, supportPasswordFreeLogin) };


        // supportReboot Field Functions 
        bool hasSupportReboot() const { return this->supportReboot_ != nullptr;};
        void deleteSupportReboot() { this->supportReboot_ = nullptr;};
        inline bool getSupportReboot() const { DARABONBA_PTR_GET_DEFAULT(supportReboot_, false) };
        inline FunctionSupport& setSupportReboot(bool supportReboot) { DARABONBA_PTR_SET_VALUE(supportReboot_, supportReboot) };


        // supportReset Field Functions 
        bool hasSupportReset() const { return this->supportReset_ != nullptr;};
        void deleteSupportReset() { this->supportReset_ = nullptr;};
        inline bool getSupportReset() const { DARABONBA_PTR_GET_DEFAULT(supportReset_, false) };
        inline FunctionSupport& setSupportReset(bool supportReset) { DARABONBA_PTR_SET_VALUE(supportReset_, supportReset) };


        // supportResetPin Field Functions 
        bool hasSupportResetPin() const { return this->supportResetPin_ != nullptr;};
        void deleteSupportResetPin() { this->supportResetPin_ = nullptr;};
        inline bool getSupportResetPin() const { DARABONBA_PTR_GET_DEFAULT(supportResetPin_, false) };
        inline FunctionSupport& setSupportResetPin(bool supportResetPin) { DARABONBA_PTR_SET_VALUE(supportResetPin_, supportResetPin) };


        // supportStop Field Functions 
        bool hasSupportStop() const { return this->supportStop_ != nullptr;};
        void deleteSupportStop() { this->supportStop_ = nullptr;};
        inline bool getSupportStop() const { DARABONBA_PTR_GET_DEFAULT(supportStop_, false) };
        inline FunctionSupport& setSupportStop(bool supportStop) { DARABONBA_PTR_SET_VALUE(supportStop_, supportStop) };


        // supportUpgrade Field Functions 
        bool hasSupportUpgrade() const { return this->supportUpgrade_ != nullptr;};
        void deleteSupportUpgrade() { this->supportUpgrade_ = nullptr;};
        inline bool getSupportUpgrade() const { DARABONBA_PTR_GET_DEFAULT(supportUpgrade_, false) };
        inline FunctionSupport& setSupportUpgrade(bool supportUpgrade) { DARABONBA_PTR_SET_VALUE(supportUpgrade_, supportUpgrade) };


        // unsupportAssistLoginReason Field Functions 
        bool hasUnsupportAssistLoginReason() const { return this->unsupportAssistLoginReason_ != nullptr;};
        void deleteUnsupportAssistLoginReason() { this->unsupportAssistLoginReason_ = nullptr;};
        inline string getUnsupportAssistLoginReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportAssistLoginReason_, "") };
        inline FunctionSupport& setUnsupportAssistLoginReason(string unsupportAssistLoginReason) { DARABONBA_PTR_SET_VALUE(unsupportAssistLoginReason_, unsupportAssistLoginReason) };


        // unsupportManageReason Field Functions 
        bool hasUnsupportManageReason() const { return this->unsupportManageReason_ != nullptr;};
        void deleteUnsupportManageReason() { this->unsupportManageReason_ = nullptr;};
        inline string getUnsupportManageReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportManageReason_, "") };
        inline FunctionSupport& setUnsupportManageReason(string unsupportManageReason) { DARABONBA_PTR_SET_VALUE(unsupportManageReason_, unsupportManageReason) };


        // unsupportedLocalDeviceSnReason Field Functions 
        bool hasUnsupportedLocalDeviceSnReason() const { return this->unsupportedLocalDeviceSnReason_ != nullptr;};
        void deleteUnsupportedLocalDeviceSnReason() { this->unsupportedLocalDeviceSnReason_ = nullptr;};
        inline string getUnsupportedLocalDeviceSnReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportedLocalDeviceSnReason_, "") };
        inline FunctionSupport& setUnsupportedLocalDeviceSnReason(string unsupportedLocalDeviceSnReason) { DARABONBA_PTR_SET_VALUE(unsupportedLocalDeviceSnReason_, unsupportedLocalDeviceSnReason) };


        // versionSupported Field Functions 
        bool hasVersionSupported() const { return this->versionSupported_ != nullptr;};
        void deleteVersionSupported() { this->versionSupported_ = nullptr;};
        inline bool getVersionSupported() const { DARABONBA_PTR_GET_DEFAULT(versionSupported_, false) };
        inline FunctionSupport& setVersionSupported(bool versionSupported) { DARABONBA_PTR_SET_VALUE(versionSupported_, versionSupported) };


        // versionTooLow Field Functions 
        bool hasVersionTooLow() const { return this->versionTooLow_ != nullptr;};
        void deleteVersionTooLow() { this->versionTooLow_ = nullptr;};
        inline bool getVersionTooLow() const { DARABONBA_PTR_GET_DEFAULT(versionTooLow_, false) };
        inline FunctionSupport& setVersionTooLow(bool versionTooLow) { DARABONBA_PTR_SET_VALUE(versionTooLow_, versionTooLow) };


      protected:
        shared_ptr<bool> enablePolicy_ {};
        shared_ptr<string> passwordFreeLoginForbiddenReason_ {};
        shared_ptr<bool> supportAssistLogin_ {};
        shared_ptr<bool> supportDiagnose_ {};
        shared_ptr<bool> supportLimitLoginUser_ {};
        shared_ptr<bool> supportLocalDeviceSn_ {};
        shared_ptr<bool> supportManage_ {};
        shared_ptr<bool> supportModifyPolicy_ {};
        shared_ptr<bool> supportPasswordFreeLogin_ {};
        shared_ptr<bool> supportReboot_ {};
        shared_ptr<bool> supportReset_ {};
        shared_ptr<bool> supportResetPin_ {};
        shared_ptr<bool> supportStop_ {};
        shared_ptr<bool> supportUpgrade_ {};
        shared_ptr<string> unsupportAssistLoginReason_ {};
        shared_ptr<string> unsupportManageReason_ {};
        shared_ptr<string> unsupportedLocalDeviceSnReason_ {};
        shared_ptr<bool> versionSupported_ {};
        shared_ptr<bool> versionTooLow_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->alias_ == nullptr && this->areaSite_ == nullptr && this->bindUserCount_ == nullptr && this->bindUserId_ == nullptr && this->buildId_ == nullptr
        && this->clientType_ == nullptr && this->clientVersion_ == nullptr && this->currentConnectDesktop_ == nullptr && this->currentLoginUser_ == nullptr && this->customResInvalidReason_ == nullptr
        && this->customResourceId_ == nullptr && this->customResourceName_ == nullptr && this->customResourceStatus_ == nullptr && this->desktopId_ == nullptr && this->desktopRegionId_ == nullptr
        && this->deviceOs_ == nullptr && this->functionSupport_ == nullptr && this->hardwareInfo_ == nullptr && this->hostOsInfo_ == nullptr && this->inManage_ == nullptr
        && this->ipGeoLocation_ == nullptr && this->ipv4_ == nullptr && this->lastLoginUser_ == nullptr && this->localDeviceSn_ == nullptr && this->locationInfo_ == nullptr
        && this->loginUser_ == nullptr && this->mainBizType_ == nullptr && this->manageTime_ == nullptr && this->manageTimestamp_ == nullptr && this->model_ == nullptr
        && this->modelPreviewUrl_ == nullptr && this->online_ == nullptr && this->onlineStatus_ == nullptr && this->passwordFreeLoginUser_ == nullptr && this->platform_ == nullptr
        && this->productName_ == nullptr && this->publicIpv4_ == nullptr && this->setPasswordFreeLoginUserTime_ == nullptr && this->terminalGroupId_ == nullptr && this->upgradeDownloadType_ == nullptr
        && this->userBindCount_ == nullptr && this->uuid_ == nullptr && this->wosAppVersion_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // areaSite Field Functions 
      bool hasAreaSite() const { return this->areaSite_ != nullptr;};
      void deleteAreaSite() { this->areaSite_ = nullptr;};
      inline string getAreaSite() const { DARABONBA_PTR_GET_DEFAULT(areaSite_, "") };
      inline Data& setAreaSite(string areaSite) { DARABONBA_PTR_SET_VALUE(areaSite_, areaSite) };


      // bindUserCount Field Functions 
      bool hasBindUserCount() const { return this->bindUserCount_ != nullptr;};
      void deleteBindUserCount() { this->bindUserCount_ = nullptr;};
      inline int32_t getBindUserCount() const { DARABONBA_PTR_GET_DEFAULT(bindUserCount_, 0) };
      inline Data& setBindUserCount(int32_t bindUserCount) { DARABONBA_PTR_SET_VALUE(bindUserCount_, bindUserCount) };


      // bindUserId Field Functions 
      bool hasBindUserId() const { return this->bindUserId_ != nullptr;};
      void deleteBindUserId() { this->bindUserId_ = nullptr;};
      inline string getBindUserId() const { DARABONBA_PTR_GET_DEFAULT(bindUserId_, "") };
      inline Data& setBindUserId(string bindUserId) { DARABONBA_PTR_SET_VALUE(bindUserId_, bindUserId) };


      // buildId Field Functions 
      bool hasBuildId() const { return this->buildId_ != nullptr;};
      void deleteBuildId() { this->buildId_ = nullptr;};
      inline string getBuildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, "") };
      inline Data& setBuildId(string buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
      inline Data& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Data& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // currentConnectDesktop Field Functions 
      bool hasCurrentConnectDesktop() const { return this->currentConnectDesktop_ != nullptr;};
      void deleteCurrentConnectDesktop() { this->currentConnectDesktop_ = nullptr;};
      inline string getCurrentConnectDesktop() const { DARABONBA_PTR_GET_DEFAULT(currentConnectDesktop_, "") };
      inline Data& setCurrentConnectDesktop(string currentConnectDesktop) { DARABONBA_PTR_SET_VALUE(currentConnectDesktop_, currentConnectDesktop) };


      // currentLoginUser Field Functions 
      bool hasCurrentLoginUser() const { return this->currentLoginUser_ != nullptr;};
      void deleteCurrentLoginUser() { this->currentLoginUser_ = nullptr;};
      inline string getCurrentLoginUser() const { DARABONBA_PTR_GET_DEFAULT(currentLoginUser_, "") };
      inline Data& setCurrentLoginUser(string currentLoginUser) { DARABONBA_PTR_SET_VALUE(currentLoginUser_, currentLoginUser) };


      // customResInvalidReason Field Functions 
      bool hasCustomResInvalidReason() const { return this->customResInvalidReason_ != nullptr;};
      void deleteCustomResInvalidReason() { this->customResInvalidReason_ = nullptr;};
      inline string getCustomResInvalidReason() const { DARABONBA_PTR_GET_DEFAULT(customResInvalidReason_, "") };
      inline Data& setCustomResInvalidReason(string customResInvalidReason) { DARABONBA_PTR_SET_VALUE(customResInvalidReason_, customResInvalidReason) };


      // customResourceId Field Functions 
      bool hasCustomResourceId() const { return this->customResourceId_ != nullptr;};
      void deleteCustomResourceId() { this->customResourceId_ = nullptr;};
      inline string getCustomResourceId() const { DARABONBA_PTR_GET_DEFAULT(customResourceId_, "") };
      inline Data& setCustomResourceId(string customResourceId) { DARABONBA_PTR_SET_VALUE(customResourceId_, customResourceId) };


      // customResourceName Field Functions 
      bool hasCustomResourceName() const { return this->customResourceName_ != nullptr;};
      void deleteCustomResourceName() { this->customResourceName_ = nullptr;};
      inline string getCustomResourceName() const { DARABONBA_PTR_GET_DEFAULT(customResourceName_, "") };
      inline Data& setCustomResourceName(string customResourceName) { DARABONBA_PTR_SET_VALUE(customResourceName_, customResourceName) };


      // customResourceStatus Field Functions 
      bool hasCustomResourceStatus() const { return this->customResourceStatus_ != nullptr;};
      void deleteCustomResourceStatus() { this->customResourceStatus_ = nullptr;};
      inline bool getCustomResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(customResourceStatus_, false) };
      inline Data& setCustomResourceStatus(bool customResourceStatus) { DARABONBA_PTR_SET_VALUE(customResourceStatus_, customResourceStatus) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Data& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopRegionId Field Functions 
      bool hasDesktopRegionId() const { return this->desktopRegionId_ != nullptr;};
      void deleteDesktopRegionId() { this->desktopRegionId_ = nullptr;};
      inline string getDesktopRegionId() const { DARABONBA_PTR_GET_DEFAULT(desktopRegionId_, "") };
      inline Data& setDesktopRegionId(string desktopRegionId) { DARABONBA_PTR_SET_VALUE(desktopRegionId_, desktopRegionId) };


      // deviceOs Field Functions 
      bool hasDeviceOs() const { return this->deviceOs_ != nullptr;};
      void deleteDeviceOs() { this->deviceOs_ = nullptr;};
      inline string getDeviceOs() const { DARABONBA_PTR_GET_DEFAULT(deviceOs_, "") };
      inline Data& setDeviceOs(string deviceOs) { DARABONBA_PTR_SET_VALUE(deviceOs_, deviceOs) };


      // functionSupport Field Functions 
      bool hasFunctionSupport() const { return this->functionSupport_ != nullptr;};
      void deleteFunctionSupport() { this->functionSupport_ = nullptr;};
      inline const Data::FunctionSupport & getFunctionSupport() const { DARABONBA_PTR_GET_CONST(functionSupport_, Data::FunctionSupport) };
      inline Data::FunctionSupport getFunctionSupport() { DARABONBA_PTR_GET(functionSupport_, Data::FunctionSupport) };
      inline Data& setFunctionSupport(const Data::FunctionSupport & functionSupport) { DARABONBA_PTR_SET_VALUE(functionSupport_, functionSupport) };
      inline Data& setFunctionSupport(Data::FunctionSupport && functionSupport) { DARABONBA_PTR_SET_RVALUE(functionSupport_, functionSupport) };


      // hardwareInfo Field Functions 
      bool hasHardwareInfo() const { return this->hardwareInfo_ != nullptr;};
      void deleteHardwareInfo() { this->hardwareInfo_ = nullptr;};
      inline const Data::HardwareInfo & getHardwareInfo() const { DARABONBA_PTR_GET_CONST(hardwareInfo_, Data::HardwareInfo) };
      inline Data::HardwareInfo getHardwareInfo() { DARABONBA_PTR_GET(hardwareInfo_, Data::HardwareInfo) };
      inline Data& setHardwareInfo(const Data::HardwareInfo & hardwareInfo) { DARABONBA_PTR_SET_VALUE(hardwareInfo_, hardwareInfo) };
      inline Data& setHardwareInfo(Data::HardwareInfo && hardwareInfo) { DARABONBA_PTR_SET_RVALUE(hardwareInfo_, hardwareInfo) };


      // hostOsInfo Field Functions 
      bool hasHostOsInfo() const { return this->hostOsInfo_ != nullptr;};
      void deleteHostOsInfo() { this->hostOsInfo_ = nullptr;};
      inline string getHostOsInfo() const { DARABONBA_PTR_GET_DEFAULT(hostOsInfo_, "") };
      inline Data& setHostOsInfo(string hostOsInfo) { DARABONBA_PTR_SET_VALUE(hostOsInfo_, hostOsInfo) };


      // inManage Field Functions 
      bool hasInManage() const { return this->inManage_ != nullptr;};
      void deleteInManage() { this->inManage_ = nullptr;};
      inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
      inline Data& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


      // ipGeoLocation Field Functions 
      bool hasIpGeoLocation() const { return this->ipGeoLocation_ != nullptr;};
      void deleteIpGeoLocation() { this->ipGeoLocation_ = nullptr;};
      inline string getIpGeoLocation() const { DARABONBA_PTR_GET_DEFAULT(ipGeoLocation_, "") };
      inline Data& setIpGeoLocation(string ipGeoLocation) { DARABONBA_PTR_SET_VALUE(ipGeoLocation_, ipGeoLocation) };


      // ipv4 Field Functions 
      bool hasIpv4() const { return this->ipv4_ != nullptr;};
      void deleteIpv4() { this->ipv4_ = nullptr;};
      inline string getIpv4() const { DARABONBA_PTR_GET_DEFAULT(ipv4_, "") };
      inline Data& setIpv4(string ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };


      // lastLoginUser Field Functions 
      bool hasLastLoginUser() const { return this->lastLoginUser_ != nullptr;};
      void deleteLastLoginUser() { this->lastLoginUser_ = nullptr;};
      inline string getLastLoginUser() const { DARABONBA_PTR_GET_DEFAULT(lastLoginUser_, "") };
      inline Data& setLastLoginUser(string lastLoginUser) { DARABONBA_PTR_SET_VALUE(lastLoginUser_, lastLoginUser) };


      // localDeviceSn Field Functions 
      bool hasLocalDeviceSn() const { return this->localDeviceSn_ != nullptr;};
      void deleteLocalDeviceSn() { this->localDeviceSn_ = nullptr;};
      inline string getLocalDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(localDeviceSn_, "") };
      inline Data& setLocalDeviceSn(string localDeviceSn) { DARABONBA_PTR_SET_VALUE(localDeviceSn_, localDeviceSn) };


      // locationInfo Field Functions 
      bool hasLocationInfo() const { return this->locationInfo_ != nullptr;};
      void deleteLocationInfo() { this->locationInfo_ = nullptr;};
      inline string getLocationInfo() const { DARABONBA_PTR_GET_DEFAULT(locationInfo_, "") };
      inline Data& setLocationInfo(string locationInfo) { DARABONBA_PTR_SET_VALUE(locationInfo_, locationInfo) };


      // loginUser Field Functions 
      bool hasLoginUser() const { return this->loginUser_ != nullptr;};
      void deleteLoginUser() { this->loginUser_ = nullptr;};
      inline string getLoginUser() const { DARABONBA_PTR_GET_DEFAULT(loginUser_, "") };
      inline Data& setLoginUser(string loginUser) { DARABONBA_PTR_SET_VALUE(loginUser_, loginUser) };


      // mainBizType Field Functions 
      bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
      void deleteMainBizType() { this->mainBizType_ = nullptr;};
      inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
      inline Data& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


      // manageTime Field Functions 
      bool hasManageTime() const { return this->manageTime_ != nullptr;};
      void deleteManageTime() { this->manageTime_ = nullptr;};
      inline string getManageTime() const { DARABONBA_PTR_GET_DEFAULT(manageTime_, "") };
      inline Data& setManageTime(string manageTime) { DARABONBA_PTR_SET_VALUE(manageTime_, manageTime) };


      // manageTimestamp Field Functions 
      bool hasManageTimestamp() const { return this->manageTimestamp_ != nullptr;};
      void deleteManageTimestamp() { this->manageTimestamp_ = nullptr;};
      inline int64_t getManageTimestamp() const { DARABONBA_PTR_GET_DEFAULT(manageTimestamp_, 0L) };
      inline Data& setManageTimestamp(int64_t manageTimestamp) { DARABONBA_PTR_SET_VALUE(manageTimestamp_, manageTimestamp) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Data& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelPreviewUrl Field Functions 
      bool hasModelPreviewUrl() const { return this->modelPreviewUrl_ != nullptr;};
      void deleteModelPreviewUrl() { this->modelPreviewUrl_ = nullptr;};
      inline string getModelPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(modelPreviewUrl_, "") };
      inline Data& setModelPreviewUrl(string modelPreviewUrl) { DARABONBA_PTR_SET_VALUE(modelPreviewUrl_, modelPreviewUrl) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // onlineStatus Field Functions 
      bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
      void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
      inline bool getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, false) };
      inline Data& setOnlineStatus(bool onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


      // passwordFreeLoginUser Field Functions 
      bool hasPasswordFreeLoginUser() const { return this->passwordFreeLoginUser_ != nullptr;};
      void deletePasswordFreeLoginUser() { this->passwordFreeLoginUser_ = nullptr;};
      inline string getPasswordFreeLoginUser() const { DARABONBA_PTR_GET_DEFAULT(passwordFreeLoginUser_, "") };
      inline Data& setPasswordFreeLoginUser(string passwordFreeLoginUser) { DARABONBA_PTR_SET_VALUE(passwordFreeLoginUser_, passwordFreeLoginUser) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // publicIpv4 Field Functions 
      bool hasPublicIpv4() const { return this->publicIpv4_ != nullptr;};
      void deletePublicIpv4() { this->publicIpv4_ = nullptr;};
      inline string getPublicIpv4() const { DARABONBA_PTR_GET_DEFAULT(publicIpv4_, "") };
      inline Data& setPublicIpv4(string publicIpv4) { DARABONBA_PTR_SET_VALUE(publicIpv4_, publicIpv4) };


      // setPasswordFreeLoginUserTime Field Functions 
      bool hasSetPasswordFreeLoginUserTime() const { return this->setPasswordFreeLoginUserTime_ != nullptr;};
      void deleteSetPasswordFreeLoginUserTime() { this->setPasswordFreeLoginUserTime_ = nullptr;};
      inline string getSetPasswordFreeLoginUserTime() const { DARABONBA_PTR_GET_DEFAULT(setPasswordFreeLoginUserTime_, "") };
      inline Data& setSetPasswordFreeLoginUserTime(string setPasswordFreeLoginUserTime) { DARABONBA_PTR_SET_VALUE(setPasswordFreeLoginUserTime_, setPasswordFreeLoginUserTime) };


      // terminalGroupId Field Functions 
      bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
      void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
      inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
      inline Data& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


      // upgradeDownloadType Field Functions 
      bool hasUpgradeDownloadType() const { return this->upgradeDownloadType_ != nullptr;};
      void deleteUpgradeDownloadType() { this->upgradeDownloadType_ = nullptr;};
      inline string getUpgradeDownloadType() const { DARABONBA_PTR_GET_DEFAULT(upgradeDownloadType_, "") };
      inline Data& setUpgradeDownloadType(string upgradeDownloadType) { DARABONBA_PTR_SET_VALUE(upgradeDownloadType_, upgradeDownloadType) };


      // userBindCount Field Functions 
      bool hasUserBindCount() const { return this->userBindCount_ != nullptr;};
      void deleteUserBindCount() { this->userBindCount_ = nullptr;};
      inline int32_t getUserBindCount() const { DARABONBA_PTR_GET_DEFAULT(userBindCount_, 0) };
      inline Data& setUserBindCount(int32_t userBindCount) { DARABONBA_PTR_SET_VALUE(userBindCount_, userBindCount) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // wosAppVersion Field Functions 
      bool hasWosAppVersion() const { return this->wosAppVersion_ != nullptr;};
      void deleteWosAppVersion() { this->wosAppVersion_ = nullptr;};
      inline string getWosAppVersion() const { DARABONBA_PTR_GET_DEFAULT(wosAppVersion_, "") };
      inline Data& setWosAppVersion(string wosAppVersion) { DARABONBA_PTR_SET_VALUE(wosAppVersion_, wosAppVersion) };


    protected:
      // aliUid
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<string> alias_ {};
      shared_ptr<string> areaSite_ {};
      shared_ptr<int32_t> bindUserCount_ {};
      shared_ptr<string> bindUserId_ {};
      shared_ptr<string> buildId_ {};
      shared_ptr<int32_t> clientType_ {};
      shared_ptr<string> clientVersion_ {};
      shared_ptr<string> currentConnectDesktop_ {};
      shared_ptr<string> currentLoginUser_ {};
      shared_ptr<string> customResInvalidReason_ {};
      shared_ptr<string> customResourceId_ {};
      shared_ptr<string> customResourceName_ {};
      shared_ptr<bool> customResourceStatus_ {};
      shared_ptr<string> desktopId_ {};
      shared_ptr<string> desktopRegionId_ {};
      shared_ptr<string> deviceOs_ {};
      shared_ptr<Data::FunctionSupport> functionSupport_ {};
      shared_ptr<Data::HardwareInfo> hardwareInfo_ {};
      shared_ptr<string> hostOsInfo_ {};
      shared_ptr<bool> inManage_ {};
      shared_ptr<string> ipGeoLocation_ {};
      // ipv4
      shared_ptr<string> ipv4_ {};
      shared_ptr<string> lastLoginUser_ {};
      shared_ptr<string> localDeviceSn_ {};
      shared_ptr<string> locationInfo_ {};
      shared_ptr<string> loginUser_ {};
      shared_ptr<string> mainBizType_ {};
      shared_ptr<string> manageTime_ {};
      shared_ptr<int64_t> manageTimestamp_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> modelPreviewUrl_ {};
      shared_ptr<bool> online_ {};
      shared_ptr<bool> onlineStatus_ {};
      shared_ptr<string> passwordFreeLoginUser_ {};
      shared_ptr<string> platform_ {};
      // productName
      shared_ptr<string> productName_ {};
      shared_ptr<string> publicIpv4_ {};
      shared_ptr<string> setPasswordFreeLoginUserTime_ {};
      shared_ptr<string> terminalGroupId_ {};
      shared_ptr<string> upgradeDownloadType_ {};
      shared_ptr<int32_t> userBindCount_ {};
      // uuid
      shared_ptr<string> uuid_ {};
      // appVersion
      shared_ptr<string> wosAppVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeClientsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeClientsResponseBody::Data>) };
    inline vector<DescribeClientsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeClientsResponseBody::Data>) };
    inline DescribeClientsResponseBody& setData(const vector<DescribeClientsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeClientsResponseBody& setData(vector<DescribeClientsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeClientsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeClientsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<DescribeClientsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
