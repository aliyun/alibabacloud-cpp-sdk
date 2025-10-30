// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETXDEFAULTCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETXDEFAULTCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetXDefaultConfigResponseBodyDataReachJson.hpp>
#include <alibabacloud/models/GetXDefaultConfigResponseBodyDataSequenceCall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetXDefaultConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetXDefaultConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_TO_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_TO_JSON(ReachJson, reachJson_);
      DARABONBA_PTR_TO_JSON(SequenceCall, sequenceCall_);
      DARABONBA_PTR_TO_JSON(SequenceEndTime, sequenceEndTime_);
      DARABONBA_PTR_TO_JSON(SequenceStartTime, sequenceStartTime_);
      DARABONBA_PTR_TO_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_TO_JSON(SmsSignMode, smsSignMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetXDefaultConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_FROM_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_FROM_JSON(ReachJson, reachJson_);
      DARABONBA_PTR_FROM_JSON(SequenceCall, sequenceCall_);
      DARABONBA_PTR_FROM_JSON(SequenceEndTime, sequenceEndTime_);
      DARABONBA_PTR_FROM_JSON(SequenceStartTime, sequenceStartTime_);
      DARABONBA_PTR_FROM_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_FROM_JSON(SmsSignMode, smsSignMode_);
    };
    GetXDefaultConfigResponseBodyData() = default ;
    GetXDefaultConfigResponseBodyData(const GetXDefaultConfigResponseBodyData &) = default ;
    GetXDefaultConfigResponseBodyData(GetXDefaultConfigResponseBodyData &&) = default ;
    GetXDefaultConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetXDefaultConfigResponseBodyData() = default ;
    GetXDefaultConfigResponseBodyData& operator=(const GetXDefaultConfigResponseBodyData &) = default ;
    GetXDefaultConfigResponseBodyData& operator=(GetXDefaultConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callAbility_ == nullptr
        && return this->GNFlag_ == nullptr && return this->reachJson_ == nullptr && return this->sequenceCall_ == nullptr && return this->sequenceEndTime_ == nullptr && return this->sequenceStartTime_ == nullptr
        && return this->smsAbility_ == nullptr && return this->smsSignMode_ == nullptr; };
    // callAbility Field Functions 
    bool hasCallAbility() const { return this->callAbility_ != nullptr;};
    void deleteCallAbility() { this->callAbility_ = nullptr;};
    inline string callAbility() const { DARABONBA_PTR_GET_DEFAULT(callAbility_, "") };
    inline GetXDefaultConfigResponseBodyData& setCallAbility(string callAbility) { DARABONBA_PTR_SET_VALUE(callAbility_, callAbility) };


    // GNFlag Field Functions 
    bool hasGNFlag() const { return this->GNFlag_ != nullptr;};
    void deleteGNFlag() { this->GNFlag_ = nullptr;};
    inline string GNFlag() const { DARABONBA_PTR_GET_DEFAULT(GNFlag_, "") };
    inline GetXDefaultConfigResponseBodyData& setGNFlag(string GNFlag) { DARABONBA_PTR_SET_VALUE(GNFlag_, GNFlag) };


    // reachJson Field Functions 
    bool hasReachJson() const { return this->reachJson_ != nullptr;};
    void deleteReachJson() { this->reachJson_ = nullptr;};
    inline const vector<Models::GetXDefaultConfigResponseBodyDataReachJson> & reachJson() const { DARABONBA_PTR_GET_CONST(reachJson_, vector<Models::GetXDefaultConfigResponseBodyDataReachJson>) };
    inline vector<Models::GetXDefaultConfigResponseBodyDataReachJson> reachJson() { DARABONBA_PTR_GET(reachJson_, vector<Models::GetXDefaultConfigResponseBodyDataReachJson>) };
    inline GetXDefaultConfigResponseBodyData& setReachJson(const vector<Models::GetXDefaultConfigResponseBodyDataReachJson> & reachJson) { DARABONBA_PTR_SET_VALUE(reachJson_, reachJson) };
    inline GetXDefaultConfigResponseBodyData& setReachJson(vector<Models::GetXDefaultConfigResponseBodyDataReachJson> && reachJson) { DARABONBA_PTR_SET_RVALUE(reachJson_, reachJson) };


    // sequenceCall Field Functions 
    bool hasSequenceCall() const { return this->sequenceCall_ != nullptr;};
    void deleteSequenceCall() { this->sequenceCall_ = nullptr;};
    inline const vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall> & sequenceCall() const { DARABONBA_PTR_GET_CONST(sequenceCall_, vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall>) };
    inline vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall> sequenceCall() { DARABONBA_PTR_GET(sequenceCall_, vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall>) };
    inline GetXDefaultConfigResponseBodyData& setSequenceCall(const vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall> & sequenceCall) { DARABONBA_PTR_SET_VALUE(sequenceCall_, sequenceCall) };
    inline GetXDefaultConfigResponseBodyData& setSequenceCall(vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall> && sequenceCall) { DARABONBA_PTR_SET_RVALUE(sequenceCall_, sequenceCall) };


    // sequenceEndTime Field Functions 
    bool hasSequenceEndTime() const { return this->sequenceEndTime_ != nullptr;};
    void deleteSequenceEndTime() { this->sequenceEndTime_ = nullptr;};
    inline string sequenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceEndTime_, "") };
    inline GetXDefaultConfigResponseBodyData& setSequenceEndTime(string sequenceEndTime) { DARABONBA_PTR_SET_VALUE(sequenceEndTime_, sequenceEndTime) };


    // sequenceStartTime Field Functions 
    bool hasSequenceStartTime() const { return this->sequenceStartTime_ != nullptr;};
    void deleteSequenceStartTime() { this->sequenceStartTime_ = nullptr;};
    inline string sequenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceStartTime_, "") };
    inline GetXDefaultConfigResponseBodyData& setSequenceStartTime(string sequenceStartTime) { DARABONBA_PTR_SET_VALUE(sequenceStartTime_, sequenceStartTime) };


    // smsAbility Field Functions 
    bool hasSmsAbility() const { return this->smsAbility_ != nullptr;};
    void deleteSmsAbility() { this->smsAbility_ = nullptr;};
    inline string smsAbility() const { DARABONBA_PTR_GET_DEFAULT(smsAbility_, "") };
    inline GetXDefaultConfigResponseBodyData& setSmsAbility(string smsAbility) { DARABONBA_PTR_SET_VALUE(smsAbility_, smsAbility) };


    // smsSignMode Field Functions 
    bool hasSmsSignMode() const { return this->smsSignMode_ != nullptr;};
    void deleteSmsSignMode() { this->smsSignMode_ = nullptr;};
    inline string smsSignMode() const { DARABONBA_PTR_GET_DEFAULT(smsSignMode_, "") };
    inline GetXDefaultConfigResponseBodyData& setSmsSignMode(string smsSignMode) { DARABONBA_PTR_SET_VALUE(smsSignMode_, smsSignMode) };


  protected:
    // 开/关呼叫能力状态： ‘0’：禁用； ‘1’：开启；
    std::shared_ptr<string> callAbility_ = nullptr;
    // 是否透传来显为真实主叫： 00-非透传：互相拨打时都显示工作号; 10-透传：A客户为主叫时,B员工的来显为客户A号码;B员工为主叫时,A客户的来显为工作号; 默认为 00
    std::shared_ptr<string> GNFlag_ = nullptr;
    // 企业名片规则控制参数
    std::shared_ptr<vector<Models::GetXDefaultConfigResponseBodyDataReachJson>> reachJson_ = nullptr;
    // 顺振控制参数
    std::shared_ptr<vector<Models::GetXDefaultConfigResponseBodyDataSequenceCall>> sequenceCall_ = nullptr;
    // 顺振结束时间 格式：HH:mm:ss 18:00:00
    std::shared_ptr<string> sequenceEndTime_ = nullptr;
    // 顺振开启时间 格式：HH:mm:ss 09:00:00
    std::shared_ptr<string> sequenceStartTime_ = nullptr;
    // 开/关短信功能状态： ‘0’：禁用； ‘1’：开启；
    std::shared_ptr<string> smsAbility_ = nullptr;
    // 是否透传来显为真实主叫： 00-非透传：互相拨打时都显示工作号; 10-透传：A客户为主叫时,B员工的来显为客户A号码;B员工为主叫时,A客户的来显为工作号; 默认为 00
    std::shared_ptr<string> smsSignMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
