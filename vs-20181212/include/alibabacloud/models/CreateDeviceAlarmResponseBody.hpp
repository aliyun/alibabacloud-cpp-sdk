// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVICEALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVICEALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateDeviceAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeviceAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDelay, alarmDelay_);
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeviceAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDelay, alarmDelay_);
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateDeviceAlarmResponseBody() = default ;
    CreateDeviceAlarmResponseBody(const CreateDeviceAlarmResponseBody &) = default ;
    CreateDeviceAlarmResponseBody(CreateDeviceAlarmResponseBody &&) = default ;
    CreateDeviceAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeviceAlarmResponseBody() = default ;
    CreateDeviceAlarmResponseBody& operator=(const CreateDeviceAlarmResponseBody &) = default ;
    CreateDeviceAlarmResponseBody& operator=(CreateDeviceAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmDelay_ == nullptr
        && this->alarmId_ == nullptr && this->expire_ == nullptr && this->requestId_ == nullptr && this->url_ == nullptr; };
    // alarmDelay Field Functions 
    bool hasAlarmDelay() const { return this->alarmDelay_ != nullptr;};
    void deleteAlarmDelay() { this->alarmDelay_ = nullptr;};
    inline int64_t getAlarmDelay() const { DARABONBA_PTR_GET_DEFAULT(alarmDelay_, 0L) };
    inline CreateDeviceAlarmResponseBody& setAlarmDelay(int64_t alarmDelay) { DARABONBA_PTR_SET_VALUE(alarmDelay_, alarmDelay) };


    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline CreateDeviceAlarmResponseBody& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline CreateDeviceAlarmResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeviceAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateDeviceAlarmResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<int64_t> alarmDelay_ {};
    shared_ptr<string> alarmId_ {};
    shared_ptr<int64_t> expire_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
