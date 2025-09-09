// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTaskOptionsSms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(Sms, sms_);
      DARABONBA_PTR_TO_JSON(Trim, trim_);
      DARABONBA_PTR_TO_JSON(UseChannels, useChannels_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(Sms, sms_);
      DARABONBA_PTR_FROM_JSON(Trim, trim_);
      DARABONBA_PTR_FROM_JSON(UseChannels, useChannels_);
    };
    PushTaskOptions() = default ;
    PushTaskOptions(const PushTaskOptions &) = default ;
    PushTaskOptions(PushTaskOptions &&) = default ;
    PushTaskOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskOptions() = default ;
    PushTaskOptions& operator=(const PushTaskOptions &) = default ;
    PushTaskOptions& operator=(PushTaskOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireTime_ != nullptr
        && this->jobKey_ != nullptr && this->messageId_ != nullptr && this->pushTime_ != nullptr && this->sms_ != nullptr && this->trim_ != nullptr
        && this->useChannels_ != nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline PushTaskOptions& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushTaskOptions& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline int64_t messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, 0L) };
    inline PushTaskOptions& setMessageId(int64_t messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline PushTaskOptions& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // sms Field Functions 
    bool hasSms() const { return this->sms_ != nullptr;};
    void deleteSms() { this->sms_ = nullptr;};
    inline const Models::PushTaskOptionsSms & sms() const { DARABONBA_PTR_GET_CONST(sms_, Models::PushTaskOptionsSms) };
    inline Models::PushTaskOptionsSms sms() { DARABONBA_PTR_GET(sms_, Models::PushTaskOptionsSms) };
    inline PushTaskOptions& setSms(const Models::PushTaskOptionsSms & sms) { DARABONBA_PTR_SET_VALUE(sms_, sms) };
    inline PushTaskOptions& setSms(Models::PushTaskOptionsSms && sms) { DARABONBA_PTR_SET_RVALUE(sms_, sms) };


    // trim Field Functions 
    bool hasTrim() const { return this->trim_ != nullptr;};
    void deleteTrim() { this->trim_ = nullptr;};
    inline bool trim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
    inline PushTaskOptions& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


    // useChannels Field Functions 
    bool hasUseChannels() const { return this->useChannels_ != nullptr;};
    void deleteUseChannels() { this->useChannels_ = nullptr;};
    inline string useChannels() const { DARABONBA_PTR_GET_DEFAULT(useChannels_, "") };
    inline PushTaskOptions& setUseChannels(string useChannels) { DARABONBA_PTR_SET_VALUE(useChannels_, useChannels) };


  protected:
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> jobKey_ = nullptr;
    std::shared_ptr<int64_t> messageId_ = nullptr;
    std::shared_ptr<string> pushTime_ = nullptr;
    std::shared_ptr<Models::PushTaskOptionsSms> sms_ = nullptr;
    std::shared_ptr<bool> trim_ = nullptr;
    std::shared_ptr<string> useChannels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
