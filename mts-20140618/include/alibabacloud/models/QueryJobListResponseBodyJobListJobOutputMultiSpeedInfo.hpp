// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMULTISPEEDINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMULTISPEEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DowngradePolicy, downgradePolicy_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RealSpeed, realSpeed_);
      DARABONBA_PTR_TO_JSON(SettingSpeed, settingSpeed_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DowngradePolicy, downgradePolicy_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RealSpeed, realSpeed_);
      DARABONBA_PTR_FROM_JSON(SettingSpeed, settingSpeed_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo() = default ;
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo(const QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo &) = default ;
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo(QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo &&) = default ;
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo() = default ;
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& operator=(const QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo &) = default ;
    QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& operator=(QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->downgradePolicy_ == nullptr && return this->duration_ == nullptr && return this->enable_ == nullptr && return this->message_ == nullptr && return this->realSpeed_ == nullptr
        && return this->settingSpeed_ == nullptr && return this->timeCost_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downgradePolicy Field Functions 
    bool hasDowngradePolicy() const { return this->downgradePolicy_ != nullptr;};
    void deleteDowngradePolicy() { this->downgradePolicy_ = nullptr;};
    inline string downgradePolicy() const { DARABONBA_PTR_GET_DEFAULT(downgradePolicy_, "") };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setDowngradePolicy(string downgradePolicy) { DARABONBA_PTR_SET_VALUE(downgradePolicy_, downgradePolicy) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // realSpeed Field Functions 
    bool hasRealSpeed() const { return this->realSpeed_ != nullptr;};
    void deleteRealSpeed() { this->realSpeed_ = nullptr;};
    inline double realSpeed() const { DARABONBA_PTR_GET_DEFAULT(realSpeed_, 0.0) };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setRealSpeed(double realSpeed) { DARABONBA_PTR_SET_VALUE(realSpeed_, realSpeed) };


    // settingSpeed Field Functions 
    bool hasSettingSpeed() const { return this->settingSpeed_ != nullptr;};
    void deleteSettingSpeed() { this->settingSpeed_ = nullptr;};
    inline int32_t settingSpeed() const { DARABONBA_PTR_GET_DEFAULT(settingSpeed_, 0) };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setSettingSpeed(int32_t settingSpeed) { DARABONBA_PTR_SET_VALUE(settingSpeed_, settingSpeed) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline double timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0.0) };
    inline QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo& setTimeCost(double timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The error code returned if high-speed transcoding is not enabled.
    std::shared_ptr<string> code_ = nullptr;
    // The downgrade policy if high-speed transcoding is not supported.
    std::shared_ptr<string> downgradePolicy_ = nullptr;
    // The duration of the output video.
    std::shared_ptr<double> duration_ = nullptr;
    // Indicates whether high-speed transcoding is enabled.
    std::shared_ptr<string> enable_ = nullptr;
    // The error message returned if high-speed transcoding is not enabled.
    std::shared_ptr<string> message_ = nullptr;
    // The actual transcoding speed.
    std::shared_ptr<double> realSpeed_ = nullptr;
    // The speed setting.
    std::shared_ptr<int32_t> settingSpeed_ = nullptr;
    // The amount of time consumed.
    std::shared_ptr<double> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
