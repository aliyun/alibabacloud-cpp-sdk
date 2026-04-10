// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DirectNotifyChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(activeDays, activeDays_);
      DARABONBA_PTR_TO_JSON(activeEndTime, activeEndTime_);
      DARABONBA_PTR_TO_JSON(activeStartTime, activeStartTime_);
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(silenceTimeSecs, silenceTimeSecs_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(utcOffset, utcOffset_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(activeDays, activeDays_);
      DARABONBA_PTR_FROM_JSON(activeEndTime, activeEndTime_);
      DARABONBA_PTR_FROM_JSON(activeStartTime, activeStartTime_);
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(silenceTimeSecs, silenceTimeSecs_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(utcOffset, utcOffset_);
    };
    NotifyConfigUnified() = default ;
    NotifyConfigUnified(const NotifyConfigUnified &) = default ;
    NotifyConfigUnified(NotifyConfigUnified &&) = default ;
    NotifyConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyConfigUnified() = default ;
    NotifyConfigUnified& operator=(const NotifyConfigUnified &) = default ;
    NotifyConfigUnified& operator=(NotifyConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeDays_ == nullptr
        && this->activeEndTime_ == nullptr && this->activeStartTime_ == nullptr && this->channels_ == nullptr && this->silenceTimeSecs_ == nullptr && this->type_ == nullptr
        && this->utcOffset_ == nullptr; };
    // activeDays Field Functions 
    bool hasActiveDays() const { return this->activeDays_ != nullptr;};
    void deleteActiveDays() { this->activeDays_ = nullptr;};
    inline const vector<int32_t> & getActiveDays() const { DARABONBA_PTR_GET_CONST(activeDays_, vector<int32_t>) };
    inline vector<int32_t> getActiveDays() { DARABONBA_PTR_GET(activeDays_, vector<int32_t>) };
    inline NotifyConfigUnified& setActiveDays(const vector<int32_t> & activeDays) { DARABONBA_PTR_SET_VALUE(activeDays_, activeDays) };
    inline NotifyConfigUnified& setActiveDays(vector<int32_t> && activeDays) { DARABONBA_PTR_SET_RVALUE(activeDays_, activeDays) };


    // activeEndTime Field Functions 
    bool hasActiveEndTime() const { return this->activeEndTime_ != nullptr;};
    void deleteActiveEndTime() { this->activeEndTime_ = nullptr;};
    inline string getActiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(activeEndTime_, "") };
    inline NotifyConfigUnified& setActiveEndTime(string activeEndTime) { DARABONBA_PTR_SET_VALUE(activeEndTime_, activeEndTime) };


    // activeStartTime Field Functions 
    bool hasActiveStartTime() const { return this->activeStartTime_ != nullptr;};
    void deleteActiveStartTime() { this->activeStartTime_ = nullptr;};
    inline string getActiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(activeStartTime_, "") };
    inline NotifyConfigUnified& setActiveStartTime(string activeStartTime) { DARABONBA_PTR_SET_VALUE(activeStartTime_, activeStartTime) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<DirectNotifyChannel> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<DirectNotifyChannel>) };
    inline vector<DirectNotifyChannel> getChannels() { DARABONBA_PTR_GET(channels_, vector<DirectNotifyChannel>) };
    inline NotifyConfigUnified& setChannels(const vector<DirectNotifyChannel> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline NotifyConfigUnified& setChannels(vector<DirectNotifyChannel> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // silenceTimeSecs Field Functions 
    bool hasSilenceTimeSecs() const { return this->silenceTimeSecs_ != nullptr;};
    void deleteSilenceTimeSecs() { this->silenceTimeSecs_ = nullptr;};
    inline int32_t getSilenceTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(silenceTimeSecs_, 0) };
    inline NotifyConfigUnified& setSilenceTimeSecs(int32_t silenceTimeSecs) { DARABONBA_PTR_SET_VALUE(silenceTimeSecs_, silenceTimeSecs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NotifyConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // utcOffset Field Functions 
    bool hasUtcOffset() const { return this->utcOffset_ != nullptr;};
    void deleteUtcOffset() { this->utcOffset_ = nullptr;};
    inline string getUtcOffset() const { DARABONBA_PTR_GET_DEFAULT(utcOffset_, "") };
    inline NotifyConfigUnified& setUtcOffset(string utcOffset) { DARABONBA_PTR_SET_VALUE(utcOffset_, utcOffset) };


  protected:
    // 一周中发送通知的星期，1-7
    shared_ptr<vector<int32_t>> activeDays_ {};
    // 每天通知生效结束时间
    shared_ptr<string> activeEndTime_ {};
    // 每天通知生效开始时间
    shared_ptr<string> activeStartTime_ {};
    // 通知渠道列表
    // 
    // This parameter is required.
    shared_ptr<vector<DirectNotifyChannel>> channels_ {};
    // 通道沉默周期（秒）
    shared_ptr<int32_t> silenceTimeSecs_ {};
    // 通知配置类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // UTC 时区偏移量
    shared_ptr<string> utcOffset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
