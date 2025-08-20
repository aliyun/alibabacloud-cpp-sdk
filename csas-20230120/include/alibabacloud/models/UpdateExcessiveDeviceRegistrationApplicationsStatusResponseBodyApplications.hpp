// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IsUsed, isUsed_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IsUsed, isUsed_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications &&) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& operator=(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& operator=(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->createTime_ != nullptr && this->department_ != nullptr && this->description_ != nullptr && this->deviceTag_ != nullptr && this->deviceType_ != nullptr
        && this->hostname_ != nullptr && this->isUsed_ != nullptr && this->mac_ != nullptr && this->saseUserId_ != nullptr && this->status_ != nullptr
        && this->username_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceTag Field Functions 
    bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
    void deleteDeviceTag() { this->deviceTag_ = nullptr;};
    inline string deviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // isUsed Field Functions 
    bool hasIsUsed() const { return this->isUsed_ != nullptr;};
    void deleteIsUsed() { this->isUsed_ = nullptr;};
    inline bool isUsed() const { DARABONBA_PTR_GET_DEFAULT(isUsed_, false) };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setIsUsed(bool isUsed) { DARABONBA_PTR_SET_VALUE(isUsed_, isUsed) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> deviceTag_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<bool> isUsed_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
