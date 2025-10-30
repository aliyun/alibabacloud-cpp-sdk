// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppStatuses, appStatuses_);
      DARABONBA_PTR_TO_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_TO_JSON(AutoLoginStatuses, autoLoginStatuses_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(DeviceStatuses, deviceStatuses_);
      DARABONBA_PTR_TO_JSON(DeviceTags, deviceTags_);
      DARABONBA_PTR_TO_JSON(DeviceTypes, deviceTypes_);
      DARABONBA_PTR_TO_JSON(DlpStatuses, dlpStatuses_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IaStatuses, iaStatuses_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(NacStatuses, nacStatuses_);
      DARABONBA_PTR_TO_JSON(PaStatuses, paStatuses_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(SharingStatus, sharingStatus_);
      DARABONBA_PTR_TO_JSON(SnSystem, snSystem_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(Workshop, workshop_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppStatuses, appStatuses_);
      DARABONBA_PTR_FROM_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_FROM_JSON(AutoLoginStatuses, autoLoginStatuses_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(DeviceStatuses, deviceStatuses_);
      DARABONBA_PTR_FROM_JSON(DeviceTags, deviceTags_);
      DARABONBA_PTR_FROM_JSON(DeviceTypes, deviceTypes_);
      DARABONBA_PTR_FROM_JSON(DlpStatuses, dlpStatuses_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IaStatuses, iaStatuses_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(NacStatuses, nacStatuses_);
      DARABONBA_PTR_FROM_JSON(PaStatuses, paStatuses_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(SharingStatus, sharingStatus_);
      DARABONBA_PTR_FROM_JSON(SnSystem, snSystem_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(Workshop, workshop_);
    };
    ListUserDevicesRequest() = default ;
    ListUserDevicesRequest(const ListUserDevicesRequest &) = default ;
    ListUserDevicesRequest(ListUserDevicesRequest &&) = default ;
    ListUserDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDevicesRequest() = default ;
    ListUserDevicesRequest& operator=(const ListUserDevicesRequest &) = default ;
    ListUserDevicesRequest& operator=(ListUserDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appStatuses_ == nullptr
        && return this->appVersions_ == nullptr && return this->autoLoginStatuses_ == nullptr && return this->currentPage_ == nullptr && return this->department_ == nullptr && return this->deviceBelong_ == nullptr
        && return this->deviceGroupId_ == nullptr && return this->deviceStatuses_ == nullptr && return this->deviceTags_ == nullptr && return this->deviceTypes_ == nullptr && return this->dlpStatuses_ == nullptr
        && return this->hostname_ == nullptr && return this->iaStatuses_ == nullptr && return this->innerIp_ == nullptr && return this->mac_ == nullptr && return this->nacStatuses_ == nullptr
        && return this->paStatuses_ == nullptr && return this->pageSize_ == nullptr && return this->saseUserId_ == nullptr && return this->sharingStatus_ == nullptr && return this->snSystem_ == nullptr
        && return this->sortBy_ == nullptr && return this->username_ == nullptr && return this->workshop_ == nullptr; };
    // appStatuses Field Functions 
    bool hasAppStatuses() const { return this->appStatuses_ != nullptr;};
    void deleteAppStatuses() { this->appStatuses_ = nullptr;};
    inline const vector<string> & appStatuses() const { DARABONBA_PTR_GET_CONST(appStatuses_, vector<string>) };
    inline vector<string> appStatuses() { DARABONBA_PTR_GET(appStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setAppStatuses(const vector<string> & appStatuses) { DARABONBA_PTR_SET_VALUE(appStatuses_, appStatuses) };
    inline ListUserDevicesRequest& setAppStatuses(vector<string> && appStatuses) { DARABONBA_PTR_SET_RVALUE(appStatuses_, appStatuses) };


    // appVersions Field Functions 
    bool hasAppVersions() const { return this->appVersions_ != nullptr;};
    void deleteAppVersions() { this->appVersions_ = nullptr;};
    inline const vector<string> & appVersions() const { DARABONBA_PTR_GET_CONST(appVersions_, vector<string>) };
    inline vector<string> appVersions() { DARABONBA_PTR_GET(appVersions_, vector<string>) };
    inline ListUserDevicesRequest& setAppVersions(const vector<string> & appVersions) { DARABONBA_PTR_SET_VALUE(appVersions_, appVersions) };
    inline ListUserDevicesRequest& setAppVersions(vector<string> && appVersions) { DARABONBA_PTR_SET_RVALUE(appVersions_, appVersions) };


    // autoLoginStatuses Field Functions 
    bool hasAutoLoginStatuses() const { return this->autoLoginStatuses_ != nullptr;};
    void deleteAutoLoginStatuses() { this->autoLoginStatuses_ = nullptr;};
    inline const vector<string> & autoLoginStatuses() const { DARABONBA_PTR_GET_CONST(autoLoginStatuses_, vector<string>) };
    inline vector<string> autoLoginStatuses() { DARABONBA_PTR_GET(autoLoginStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setAutoLoginStatuses(const vector<string> & autoLoginStatuses) { DARABONBA_PTR_SET_VALUE(autoLoginStatuses_, autoLoginStatuses) };
    inline ListUserDevicesRequest& setAutoLoginStatuses(vector<string> && autoLoginStatuses) { DARABONBA_PTR_SET_RVALUE(autoLoginStatuses_, autoLoginStatuses) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUserDevicesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListUserDevicesRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // deviceBelong Field Functions 
    bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
    void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
    inline string deviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
    inline ListUserDevicesRequest& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline ListUserDevicesRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // deviceStatuses Field Functions 
    bool hasDeviceStatuses() const { return this->deviceStatuses_ != nullptr;};
    void deleteDeviceStatuses() { this->deviceStatuses_ = nullptr;};
    inline const vector<string> & deviceStatuses() const { DARABONBA_PTR_GET_CONST(deviceStatuses_, vector<string>) };
    inline vector<string> deviceStatuses() { DARABONBA_PTR_GET(deviceStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setDeviceStatuses(const vector<string> & deviceStatuses) { DARABONBA_PTR_SET_VALUE(deviceStatuses_, deviceStatuses) };
    inline ListUserDevicesRequest& setDeviceStatuses(vector<string> && deviceStatuses) { DARABONBA_PTR_SET_RVALUE(deviceStatuses_, deviceStatuses) };


    // deviceTags Field Functions 
    bool hasDeviceTags() const { return this->deviceTags_ != nullptr;};
    void deleteDeviceTags() { this->deviceTags_ = nullptr;};
    inline const vector<string> & deviceTags() const { DARABONBA_PTR_GET_CONST(deviceTags_, vector<string>) };
    inline vector<string> deviceTags() { DARABONBA_PTR_GET(deviceTags_, vector<string>) };
    inline ListUserDevicesRequest& setDeviceTags(const vector<string> & deviceTags) { DARABONBA_PTR_SET_VALUE(deviceTags_, deviceTags) };
    inline ListUserDevicesRequest& setDeviceTags(vector<string> && deviceTags) { DARABONBA_PTR_SET_RVALUE(deviceTags_, deviceTags) };


    // deviceTypes Field Functions 
    bool hasDeviceTypes() const { return this->deviceTypes_ != nullptr;};
    void deleteDeviceTypes() { this->deviceTypes_ = nullptr;};
    inline const vector<string> & deviceTypes() const { DARABONBA_PTR_GET_CONST(deviceTypes_, vector<string>) };
    inline vector<string> deviceTypes() { DARABONBA_PTR_GET(deviceTypes_, vector<string>) };
    inline ListUserDevicesRequest& setDeviceTypes(const vector<string> & deviceTypes) { DARABONBA_PTR_SET_VALUE(deviceTypes_, deviceTypes) };
    inline ListUserDevicesRequest& setDeviceTypes(vector<string> && deviceTypes) { DARABONBA_PTR_SET_RVALUE(deviceTypes_, deviceTypes) };


    // dlpStatuses Field Functions 
    bool hasDlpStatuses() const { return this->dlpStatuses_ != nullptr;};
    void deleteDlpStatuses() { this->dlpStatuses_ = nullptr;};
    inline const vector<string> & dlpStatuses() const { DARABONBA_PTR_GET_CONST(dlpStatuses_, vector<string>) };
    inline vector<string> dlpStatuses() { DARABONBA_PTR_GET(dlpStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setDlpStatuses(const vector<string> & dlpStatuses) { DARABONBA_PTR_SET_VALUE(dlpStatuses_, dlpStatuses) };
    inline ListUserDevicesRequest& setDlpStatuses(vector<string> && dlpStatuses) { DARABONBA_PTR_SET_RVALUE(dlpStatuses_, dlpStatuses) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListUserDevicesRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // iaStatuses Field Functions 
    bool hasIaStatuses() const { return this->iaStatuses_ != nullptr;};
    void deleteIaStatuses() { this->iaStatuses_ = nullptr;};
    inline const vector<string> & iaStatuses() const { DARABONBA_PTR_GET_CONST(iaStatuses_, vector<string>) };
    inline vector<string> iaStatuses() { DARABONBA_PTR_GET(iaStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setIaStatuses(const vector<string> & iaStatuses) { DARABONBA_PTR_SET_VALUE(iaStatuses_, iaStatuses) };
    inline ListUserDevicesRequest& setIaStatuses(vector<string> && iaStatuses) { DARABONBA_PTR_SET_RVALUE(iaStatuses_, iaStatuses) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string innerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline ListUserDevicesRequest& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListUserDevicesRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // nacStatuses Field Functions 
    bool hasNacStatuses() const { return this->nacStatuses_ != nullptr;};
    void deleteNacStatuses() { this->nacStatuses_ = nullptr;};
    inline const vector<string> & nacStatuses() const { DARABONBA_PTR_GET_CONST(nacStatuses_, vector<string>) };
    inline vector<string> nacStatuses() { DARABONBA_PTR_GET(nacStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setNacStatuses(const vector<string> & nacStatuses) { DARABONBA_PTR_SET_VALUE(nacStatuses_, nacStatuses) };
    inline ListUserDevicesRequest& setNacStatuses(vector<string> && nacStatuses) { DARABONBA_PTR_SET_RVALUE(nacStatuses_, nacStatuses) };


    // paStatuses Field Functions 
    bool hasPaStatuses() const { return this->paStatuses_ != nullptr;};
    void deletePaStatuses() { this->paStatuses_ = nullptr;};
    inline const vector<string> & paStatuses() const { DARABONBA_PTR_GET_CONST(paStatuses_, vector<string>) };
    inline vector<string> paStatuses() { DARABONBA_PTR_GET(paStatuses_, vector<string>) };
    inline ListUserDevicesRequest& setPaStatuses(const vector<string> & paStatuses) { DARABONBA_PTR_SET_VALUE(paStatuses_, paStatuses) };
    inline ListUserDevicesRequest& setPaStatuses(vector<string> && paStatuses) { DARABONBA_PTR_SET_RVALUE(paStatuses_, paStatuses) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUserDevicesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListUserDevicesRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // sharingStatus Field Functions 
    bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
    void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
    inline bool sharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
    inline ListUserDevicesRequest& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


    // snSystem Field Functions 
    bool hasSnSystem() const { return this->snSystem_ != nullptr;};
    void deleteSnSystem() { this->snSystem_ = nullptr;};
    inline string snSystem() const { DARABONBA_PTR_GET_DEFAULT(snSystem_, "") };
    inline ListUserDevicesRequest& setSnSystem(string snSystem) { DARABONBA_PTR_SET_VALUE(snSystem_, snSystem) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListUserDevicesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListUserDevicesRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workshop Field Functions 
    bool hasWorkshop() const { return this->workshop_ != nullptr;};
    void deleteWorkshop() { this->workshop_ = nullptr;};
    inline string workshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
    inline ListUserDevicesRequest& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


  protected:
    std::shared_ptr<vector<string>> appStatuses_ = nullptr;
    std::shared_ptr<vector<string>> appVersions_ = nullptr;
    std::shared_ptr<vector<string>> autoLoginStatuses_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> deviceStatuses_ = nullptr;
    std::shared_ptr<vector<string>> deviceTags_ = nullptr;
    std::shared_ptr<vector<string>> deviceTypes_ = nullptr;
    std::shared_ptr<vector<string>> dlpStatuses_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<vector<string>> iaStatuses_ = nullptr;
    std::shared_ptr<string> innerIp_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<vector<string>> nacStatuses_ = nullptr;
    std::shared_ptr<vector<string>> paStatuses_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<bool> sharingStatus_ = nullptr;
    std::shared_ptr<string> snSystem_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> workshop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
