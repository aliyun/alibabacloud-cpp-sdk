// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSESDEVICESTATUSINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSESDEVICESTATUSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DlpStatus, dlpStatus_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(LaStatus, laStatus_);
      DARABONBA_PTR_TO_JSON(LoginStatus, loginStatus_);
      DARABONBA_PTR_TO_JSON(NacStatus, nacStatus_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(Workshop, workshop_);
      DARABONBA_PTR_TO_JSON(ZtnaStatus, ztnaStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DlpStatus, dlpStatus_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(LaStatus, laStatus_);
      DARABONBA_PTR_FROM_JSON(LoginStatus, loginStatus_);
      DARABONBA_PTR_FROM_JSON(NacStatus, nacStatus_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(Workshop, workshop_);
      DARABONBA_PTR_FROM_JSON(ZtnaStatus, ztnaStatus_);
    };
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo(const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo(ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo &&) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& operator=(const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& operator=(ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && return this->department_ == nullptr && return this->dlpStatus_ == nullptr && return this->internetIp_ == nullptr && return this->laStatus_ == nullptr && return this->loginStatus_ == nullptr
        && return this->nacStatus_ == nullptr && return this->privateIp_ == nullptr && return this->saseUserId_ == nullptr && return this->username_ == nullptr && return this->workshop_ == nullptr
        && return this->ztnaStatus_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // dlpStatus Field Functions 
    bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
    void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
    inline string dlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // laStatus Field Functions 
    bool hasLaStatus() const { return this->laStatus_ != nullptr;};
    void deleteLaStatus() { this->laStatus_ = nullptr;};
    inline string laStatus() const { DARABONBA_PTR_GET_DEFAULT(laStatus_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setLaStatus(string laStatus) { DARABONBA_PTR_SET_VALUE(laStatus_, laStatus) };


    // loginStatus Field Functions 
    bool hasLoginStatus() const { return this->loginStatus_ != nullptr;};
    void deleteLoginStatus() { this->loginStatus_ = nullptr;};
    inline string loginStatus() const { DARABONBA_PTR_GET_DEFAULT(loginStatus_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setLoginStatus(string loginStatus) { DARABONBA_PTR_SET_VALUE(loginStatus_, loginStatus) };


    // nacStatus Field Functions 
    bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
    void deleteNacStatus() { this->nacStatus_ = nullptr;};
    inline string nacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workshop Field Functions 
    bool hasWorkshop() const { return this->workshop_ != nullptr;};
    void deleteWorkshop() { this->workshop_ = nullptr;};
    inline string workshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


    // ztnaStatus Field Functions 
    bool hasZtnaStatus() const { return this->ztnaStatus_ != nullptr;};
    void deleteZtnaStatus() { this->ztnaStatus_ = nullptr;};
    inline string ztnaStatus() const { DARABONBA_PTR_GET_DEFAULT(ztnaStatus_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo& setZtnaStatus(string ztnaStatus) { DARABONBA_PTR_SET_VALUE(ztnaStatus_, ztnaStatus) };


  protected:
    // Client version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // Department to which the user belongs.
    std::shared_ptr<string> department_ = nullptr;
    // Office data protection status. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // - **Unprovisioned**: Not configured.
    // - **Unauthorized**: Unauthorized.
    std::shared_ptr<string> dlpStatus_ = nullptr;
    // Public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Internet behavior management enablement status.
    std::shared_ptr<string> laStatus_ = nullptr;
    // Login status.
    std::shared_ptr<string> loginStatus_ = nullptr;
    // Network access control status. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // - **Unprovisioned**: Not configured.
    std::shared_ptr<string> nacStatus_ = nullptr;
    // Private IP address.
    std::shared_ptr<string> privateIp_ = nullptr;
    // Unique ID of the SASE user.
    std::shared_ptr<string> saseUserId_ = nullptr;
    // Username.
    std::shared_ptr<string> username_ = nullptr;
    // Identified office area name.
    std::shared_ptr<string> workshop_ = nullptr;
    // ZTNA enablement status.
    std::shared_ptr<string> ztnaStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
