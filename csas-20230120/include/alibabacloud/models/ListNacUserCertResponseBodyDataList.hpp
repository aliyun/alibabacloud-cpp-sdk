// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListNacUserCertResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacUserCertResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacUserCertResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListNacUserCertResponseBodyDataList() = default ;
    ListNacUserCertResponseBodyDataList(const ListNacUserCertResponseBodyDataList &) = default ;
    ListNacUserCertResponseBodyDataList(ListNacUserCertResponseBodyDataList &&) = default ;
    ListNacUserCertResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacUserCertResponseBodyDataList() = default ;
    ListNacUserCertResponseBodyDataList& operator=(const ListNacUserCertResponseBodyDataList &) = default ;
    ListNacUserCertResponseBodyDataList& operator=(ListNacUserCertResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliuid_ != nullptr
        && this->department_ != nullptr && this->devTag_ != nullptr && this->deviceType_ != nullptr && this->expiredTime_ != nullptr && this->hostname_ != nullptr
        && this->mac_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr && this->username_ != nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline string aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
    inline ListNacUserCertResponseBodyDataList& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListNacUserCertResponseBodyDataList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListNacUserCertResponseBodyDataList& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline ListNacUserCertResponseBodyDataList& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListNacUserCertResponseBodyDataList& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListNacUserCertResponseBodyDataList& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListNacUserCertResponseBodyDataList& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNacUserCertResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListNacUserCertResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListNacUserCertResponseBodyDataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> aliuid_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> devTag_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
