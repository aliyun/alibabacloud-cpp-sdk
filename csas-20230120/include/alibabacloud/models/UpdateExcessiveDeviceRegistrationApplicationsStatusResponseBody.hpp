// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODY_HPP_
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
  class UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &&) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& operator=(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& operator=(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
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
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->createTime_ == nullptr && this->department_ == nullptr && this->description_ == nullptr && this->deviceTag_ == nullptr && this->deviceType_ == nullptr
        && this->hostname_ == nullptr && this->isUsed_ == nullptr && this->mac_ == nullptr && this->saseUserId_ == nullptr && this->status_ == nullptr
        && this->username_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Applications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Applications& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Applications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceTag Field Functions 
      bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
      void deleteDeviceTag() { this->deviceTag_ = nullptr;};
      inline string getDeviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
      inline Applications& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Applications& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Applications& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // isUsed Field Functions 
      bool hasIsUsed() const { return this->isUsed_ != nullptr;};
      void deleteIsUsed() { this->isUsed_ = nullptr;};
      inline bool getIsUsed() const { DARABONBA_PTR_GET_DEFAULT(isUsed_, false) };
      inline Applications& setIsUsed(bool isUsed) { DARABONBA_PTR_SET_VALUE(isUsed_, isUsed) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Applications& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline Applications& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Applications& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> department_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> deviceTag_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<bool> isUsed_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<string> saseUserId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications>) };
    inline vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications>) };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setApplications(const vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setApplications(vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody::Applications>> applications_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
