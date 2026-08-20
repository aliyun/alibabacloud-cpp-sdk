// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(PushTask, pushTask_);
    };
    friend void from_json(const Darabonba::Json& j, PushV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(PushTask, pushTask_);
    };
    PushV2Request() = default ;
    PushV2Request(const PushV2Request &) = default ;
    PushV2Request(PushV2Request &&) = default ;
    PushV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushV2Request() = default ;
    PushV2Request& operator=(const PushV2Request &) = default ;
    PushV2Request& operator=(PushV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->idempotentToken_ == nullptr && this->pushTask_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushV2Request& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string getIdempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline PushV2Request& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // pushTask Field Functions 
    bool hasPushTask() const { return this->pushTask_ != nullptr;};
    void deletePushTask() { this->pushTask_ = nullptr;};
    inline const PushTask & getPushTask() const { DARABONBA_PTR_GET_CONST(pushTask_, PushTask) };
    inline PushTask getPushTask() { DARABONBA_PTR_GET(pushTask_, PushTask) };
    inline PushV2Request& setPushTask(const PushTask & pushTask) { DARABONBA_PTR_SET_VALUE(pushTask_, pushTask) };
    inline PushV2Request& setPushTask(PushTask && pushTask) { DARABONBA_PTR_SET_RVALUE(pushTask_, pushTask) };


  protected:
    // The AppKey information.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // An idempotence parameter that prevents duplicate push notifications caused by retries from the API caller. If you use the same IdempotentToken within 15 minutes, only one push notification is sent, and subsequent calls return the result of the first successful push.
    // 
    // > 
    // > - The parameter format is a standard 36-character UUID (8-4-4-4-12). Each valid character is a hexadecimal digit in the range 0-9 or a-f, case-insensitive.
    // > - This parameter only prevents duplicate push notifications caused by retries. It cannot prevent duplicate push notifications caused by concurrent calls.
    shared_ptr<string> idempotentToken_ {};
    // The push task.
    // 
    // This parameter is required.
    shared_ptr<PushTask> pushTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
