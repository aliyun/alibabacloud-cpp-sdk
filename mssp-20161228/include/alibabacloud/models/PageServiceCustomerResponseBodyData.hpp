// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class PageServiceCustomerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageServiceCustomerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CmAuthStatus, cmAuthStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MonitorAuthStatus, monitorAuthStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnId, ownId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PageServiceCustomerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CmAuthStatus, cmAuthStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MonitorAuthStatus, monitorAuthStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnId, ownId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    PageServiceCustomerResponseBodyData() = default ;
    PageServiceCustomerResponseBodyData(const PageServiceCustomerResponseBodyData &) = default ;
    PageServiceCustomerResponseBodyData(PageServiceCustomerResponseBodyData &&) = default ;
    PageServiceCustomerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageServiceCustomerResponseBodyData() = default ;
    PageServiceCustomerResponseBodyData& operator=(const PageServiceCustomerResponseBodyData &) = default ;
    PageServiceCustomerResponseBodyData& operator=(PageServiceCustomerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliuid_ == nullptr
        && return this->authStatus_ == nullptr && return this->cmAuthStatus_ == nullptr && return this->endTime_ == nullptr && return this->level_ == nullptr && return this->monitorAuthStatus_ == nullptr
        && return this->name_ == nullptr && return this->ownId_ == nullptr && return this->startTime_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline string aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
    inline PageServiceCustomerResponseBodyData& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int32_t authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
    inline PageServiceCustomerResponseBodyData& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // cmAuthStatus Field Functions 
    bool hasCmAuthStatus() const { return this->cmAuthStatus_ != nullptr;};
    void deleteCmAuthStatus() { this->cmAuthStatus_ = nullptr;};
    inline int32_t cmAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(cmAuthStatus_, 0) };
    inline PageServiceCustomerResponseBodyData& setCmAuthStatus(int32_t cmAuthStatus) { DARABONBA_PTR_SET_VALUE(cmAuthStatus_, cmAuthStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline PageServiceCustomerResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PageServiceCustomerResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // monitorAuthStatus Field Functions 
    bool hasMonitorAuthStatus() const { return this->monitorAuthStatus_ != nullptr;};
    void deleteMonitorAuthStatus() { this->monitorAuthStatus_ = nullptr;};
    inline int32_t monitorAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorAuthStatus_, 0) };
    inline PageServiceCustomerResponseBodyData& setMonitorAuthStatus(int32_t monitorAuthStatus) { DARABONBA_PTR_SET_VALUE(monitorAuthStatus_, monitorAuthStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PageServiceCustomerResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownId Field Functions 
    bool hasOwnId() const { return this->ownId_ != nullptr;};
    void deleteOwnId() { this->ownId_ = nullptr;};
    inline string ownId() const { DARABONBA_PTR_GET_DEFAULT(ownId_, "") };
    inline PageServiceCustomerResponseBodyData& setOwnId(string ownId) { DARABONBA_PTR_SET_VALUE(ownId_, ownId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline PageServiceCustomerResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline PageServiceCustomerResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PageServiceCustomerResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Customer UID.
    std::shared_ptr<string> aliuid_ = nullptr;
    // Authorization status.
    std::shared_ptr<int32_t> authStatus_ = nullptr;
    // Cloud Monitoring - Alert authorization status.
    std::shared_ptr<int32_t> cmAuthStatus_ = nullptr;
    // End time. The format is a Unix timestamp, which is the number of milliseconds since January 1, 1970.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Customer level.
    std::shared_ptr<string> level_ = nullptr;
    // Cloud Security - Alert authorization status.
    std::shared_ptr<int32_t> monitorAuthStatus_ = nullptr;
    // Customer name.
    std::shared_ptr<string> name_ = nullptr;
    // Owner name.
    std::shared_ptr<string> ownId_ = nullptr;
    // Start time. The format is a Unix timestamp, which is the number of milliseconds since January 1, 1970.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Customer ID.
    std::shared_ptr<string> userId_ = nullptr;
    // Version information.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
