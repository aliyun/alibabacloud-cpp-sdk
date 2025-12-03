// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICY_HPP_
#define ALIBABACLOUD_MODELS_POLICY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class Policy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Policy& obj) { 
      DARABONBA_PTR_TO_JSON(channelStrategy, channelStrategy_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(outerBizNo, outerBizNo_);
      DARABONBA_PTR_TO_JSON(speed, speed_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, Policy& obj) { 
      DARABONBA_PTR_FROM_JSON(channelStrategy, channelStrategy_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(outerBizNo, outerBizNo_);
      DARABONBA_PTR_FROM_JSON(speed, speed_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    Policy() = default ;
    Policy(const Policy &) = default ;
    Policy(Policy &&) = default ;
    Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Policy() = default ;
    Policy& operator=(const Policy &) = default ;
    Policy& operator=(Policy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelStrategy_ == nullptr
        && return this->expireTime_ == nullptr && return this->outerBizNo_ == nullptr && return this->speed_ == nullptr && return this->startTime_ == nullptr; };
    // channelStrategy Field Functions 
    bool hasChannelStrategy() const { return this->channelStrategy_ != nullptr;};
    void deleteChannelStrategy() { this->channelStrategy_ = nullptr;};
    inline const map<string, string> & channelStrategy() const { DARABONBA_PTR_GET_CONST(channelStrategy_, map<string, string>) };
    inline map<string, string> channelStrategy() { DARABONBA_PTR_GET(channelStrategy_, map<string, string>) };
    inline Policy& setChannelStrategy(const map<string, string> & channelStrategy) { DARABONBA_PTR_SET_VALUE(channelStrategy_, channelStrategy) };
    inline Policy& setChannelStrategy(map<string, string> && channelStrategy) { DARABONBA_PTR_SET_RVALUE(channelStrategy_, channelStrategy) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline Policy& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // outerBizNo Field Functions 
    bool hasOuterBizNo() const { return this->outerBizNo_ != nullptr;};
    void deleteOuterBizNo() { this->outerBizNo_ = nullptr;};
    inline string outerBizNo() const { DARABONBA_PTR_GET_DEFAULT(outerBizNo_, "") };
    inline Policy& setOuterBizNo(string outerBizNo) { DARABONBA_PTR_SET_VALUE(outerBizNo_, outerBizNo) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline Policy& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline Policy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<map<string, string>> channelStrategy_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> outerBizNo_ = nullptr;
    std::shared_ptr<int32_t> speed_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
