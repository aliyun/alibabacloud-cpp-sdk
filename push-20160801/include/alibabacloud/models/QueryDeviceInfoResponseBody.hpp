// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDeviceInfoResponseBody() = default ;
    QueryDeviceInfoResponseBody(const QueryDeviceInfoResponseBody &) = default ;
    QueryDeviceInfoResponseBody(QueryDeviceInfoResponseBody &&) = default ;
    QueryDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceInfoResponseBody() = default ;
    QueryDeviceInfoResponseBody& operator=(const QueryDeviceInfoResponseBody &) = default ;
    QueryDeviceInfoResponseBody& operator=(QueryDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
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
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->alias_ == nullptr && this->brand_ == nullptr && this->deviceId_ == nullptr && this->deviceToken_ == nullptr && this->deviceType_ == nullptr
        && this->lastOnlineTime_ == nullptr && this->model_ == nullptr && this->online_ == nullptr && this->phoneNumber_ == nullptr && this->pushEnabled_ == nullptr
        && this->tags_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline DeviceInfo& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline DeviceInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // brand Field Functions 
      bool hasBrand() const { return this->brand_ != nullptr;};
      void deleteBrand() { this->brand_ = nullptr;};
      inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
      inline DeviceInfo& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline DeviceInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceToken Field Functions 
      bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
      void deleteDeviceToken() { this->deviceToken_ = nullptr;};
      inline string getDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
      inline DeviceInfo& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline DeviceInfo& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // lastOnlineTime Field Functions 
      bool hasLastOnlineTime() const { return this->lastOnlineTime_ != nullptr;};
      void deleteLastOnlineTime() { this->lastOnlineTime_ = nullptr;};
      inline string getLastOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnlineTime_, "") };
      inline DeviceInfo& setLastOnlineTime(string lastOnlineTime) { DARABONBA_PTR_SET_VALUE(lastOnlineTime_, lastOnlineTime) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline DeviceInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline DeviceInfo& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline DeviceInfo& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // pushEnabled Field Functions 
      bool hasPushEnabled() const { return this->pushEnabled_ != nullptr;};
      void deletePushEnabled() { this->pushEnabled_ = nullptr;};
      inline bool getPushEnabled() const { DARABONBA_PTR_GET_DEFAULT(pushEnabled_, false) };
      inline DeviceInfo& setPushEnabled(bool pushEnabled) { DARABONBA_PTR_SET_VALUE(pushEnabled_, pushEnabled) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline DeviceInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    protected:
      shared_ptr<string> account_ {};
      shared_ptr<string> alias_ {};
      shared_ptr<string> brand_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceToken_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> lastOnlineTime_ {};
      shared_ptr<string> model_ {};
      shared_ptr<bool> online_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<bool> pushEnabled_ {};
      shared_ptr<string> tags_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const QueryDeviceInfoResponseBody::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, QueryDeviceInfoResponseBody::DeviceInfo) };
    inline QueryDeviceInfoResponseBody::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, QueryDeviceInfoResponseBody::DeviceInfo) };
    inline QueryDeviceInfoResponseBody& setDeviceInfo(const QueryDeviceInfoResponseBody::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline QueryDeviceInfoResponseBody& setDeviceInfo(QueryDeviceInfoResponseBody::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryDeviceInfoResponseBody::DeviceInfo> deviceInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
