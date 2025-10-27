// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODYDEVICEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODYDEVICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceInfoResponseBodyDeviceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceInfoResponseBodyDeviceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(LastOnlineTime, lastOnlineTime_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PushEnabled, pushEnabled_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceInfoResponseBodyDeviceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(LastOnlineTime, lastOnlineTime_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PushEnabled, pushEnabled_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    QueryDeviceInfoResponseBodyDeviceInfo() = default ;
    QueryDeviceInfoResponseBodyDeviceInfo(const QueryDeviceInfoResponseBodyDeviceInfo &) = default ;
    QueryDeviceInfoResponseBodyDeviceInfo(QueryDeviceInfoResponseBodyDeviceInfo &&) = default ;
    QueryDeviceInfoResponseBodyDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceInfoResponseBodyDeviceInfo() = default ;
    QueryDeviceInfoResponseBodyDeviceInfo& operator=(const QueryDeviceInfoResponseBodyDeviceInfo &) = default ;
    QueryDeviceInfoResponseBodyDeviceInfo& operator=(QueryDeviceInfoResponseBodyDeviceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->alias_ == nullptr && return this->brand_ == nullptr && return this->deviceId_ == nullptr && return this->deviceToken_ == nullptr && return this->deviceType_ == nullptr
        && return this->lastOnlineTime_ == nullptr && return this->model_ == nullptr && return this->online_ == nullptr && return this->phoneNumber_ == nullptr && return this->pushEnabled_ == nullptr
        && return this->tags_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string deviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // lastOnlineTime Field Functions 
    bool hasLastOnlineTime() const { return this->lastOnlineTime_ != nullptr;};
    void deleteLastOnlineTime() { this->lastOnlineTime_ = nullptr;};
    inline string lastOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnlineTime_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setLastOnlineTime(string lastOnlineTime) { DARABONBA_PTR_SET_VALUE(lastOnlineTime_, lastOnlineTime) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // pushEnabled Field Functions 
    bool hasPushEnabled() const { return this->pushEnabled_ != nullptr;};
    void deletePushEnabled() { this->pushEnabled_ = nullptr;};
    inline bool pushEnabled() const { DARABONBA_PTR_GET_DEFAULT(pushEnabled_, false) };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setPushEnabled(bool pushEnabled) { DARABONBA_PTR_SET_VALUE(pushEnabled_, pushEnabled) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline QueryDeviceInfoResponseBodyDeviceInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceToken_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> lastOnlineTime_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<bool> pushEnabled_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
