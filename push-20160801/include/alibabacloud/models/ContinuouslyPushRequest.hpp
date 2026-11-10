// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUOUSLYPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUOUSLYPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ContinuouslyPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinuouslyPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, ContinuouslyPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    ContinuouslyPushRequest() = default ;
    ContinuouslyPushRequest(const ContinuouslyPushRequest &) = default ;
    ContinuouslyPushRequest(ContinuouslyPushRequest &&) = default ;
    ContinuouslyPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinuouslyPushRequest() = default ;
    ContinuouslyPushRequest& operator=(const ContinuouslyPushRequest &) = default ;
    ContinuouslyPushRequest& operator=(ContinuouslyPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->messageId_ == nullptr && this->target_ == nullptr && this->targetValue_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ContinuouslyPushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ContinuouslyPushRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ContinuouslyPushRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline ContinuouslyPushRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The AppKey information.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The message ID.
    // 
    // The MessageId obtained after calling the Push operation and setting Target to TBD. It represents a message that has been saved to the push system.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
    // The push target:
    // 
    // - **DEVICE**: Push based on devices.
    // - **ACCOUNT**: Push based on accounts.
    // - **ALIAS**: Push based on aliases.
    // 
    // Continuous push supports only these three target types.
    // 
    // This parameter is required.
    shared_ptr<string> target_ {};
    // Set this parameter based on Target. Separate multiple values with commas. If the limit is exceeded, push the message in multiple batches.
    // 
    // - If Target is set to DEVICE, the value is in the format of `deviceid1,deviceid2`. A maximum of 1,000 devices are supported.
    // - If Target is set to ACCOUNT, the value is in the format of `account1,account2`. A maximum of 1,000 accounts are supported.
    // - If Target is set to ALIAS, the value is in the format of `alias1,alias2`. A maximum of 1,000 aliases are supported.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
