// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETXCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETXCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetXConfigResponseBodyDataReachJsons.hpp>
#include <alibabacloud/models/GetXConfigResponseBodyDataSequenceCalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetXConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetXConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_TO_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_TO_JSON(ReachJsons, reachJsons_);
      DARABONBA_PTR_TO_JSON(SequenceCalls, sequenceCalls_);
      DARABONBA_PTR_TO_JSON(SequenceEndTime, sequenceEndTime_);
      DARABONBA_PTR_TO_JSON(SequenceStartTime, sequenceStartTime_);
      DARABONBA_PTR_TO_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_TO_JSON(SmsSignMode, smsSignMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetXConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_FROM_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_FROM_JSON(ReachJsons, reachJsons_);
      DARABONBA_PTR_FROM_JSON(SequenceCalls, sequenceCalls_);
      DARABONBA_PTR_FROM_JSON(SequenceEndTime, sequenceEndTime_);
      DARABONBA_PTR_FROM_JSON(SequenceStartTime, sequenceStartTime_);
      DARABONBA_PTR_FROM_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_FROM_JSON(SmsSignMode, smsSignMode_);
    };
    GetXConfigResponseBodyData() = default ;
    GetXConfigResponseBodyData(const GetXConfigResponseBodyData &) = default ;
    GetXConfigResponseBodyData(GetXConfigResponseBodyData &&) = default ;
    GetXConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetXConfigResponseBodyData() = default ;
    GetXConfigResponseBodyData& operator=(const GetXConfigResponseBodyData &) = default ;
    GetXConfigResponseBodyData& operator=(GetXConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callAbility_ == nullptr
        && return this->GNFlag_ == nullptr && return this->reachJsons_ == nullptr && return this->sequenceCalls_ == nullptr && return this->sequenceEndTime_ == nullptr && return this->sequenceStartTime_ == nullptr
        && return this->smsAbility_ == nullptr && return this->smsSignMode_ == nullptr; };
    // callAbility Field Functions 
    bool hasCallAbility() const { return this->callAbility_ != nullptr;};
    void deleteCallAbility() { this->callAbility_ = nullptr;};
    inline string callAbility() const { DARABONBA_PTR_GET_DEFAULT(callAbility_, "") };
    inline GetXConfigResponseBodyData& setCallAbility(string callAbility) { DARABONBA_PTR_SET_VALUE(callAbility_, callAbility) };


    // GNFlag Field Functions 
    bool hasGNFlag() const { return this->GNFlag_ != nullptr;};
    void deleteGNFlag() { this->GNFlag_ = nullptr;};
    inline string GNFlag() const { DARABONBA_PTR_GET_DEFAULT(GNFlag_, "") };
    inline GetXConfigResponseBodyData& setGNFlag(string GNFlag) { DARABONBA_PTR_SET_VALUE(GNFlag_, GNFlag) };


    // reachJsons Field Functions 
    bool hasReachJsons() const { return this->reachJsons_ != nullptr;};
    void deleteReachJsons() { this->reachJsons_ = nullptr;};
    inline const vector<Models::GetXConfigResponseBodyDataReachJsons> & reachJsons() const { DARABONBA_PTR_GET_CONST(reachJsons_, vector<Models::GetXConfigResponseBodyDataReachJsons>) };
    inline vector<Models::GetXConfigResponseBodyDataReachJsons> reachJsons() { DARABONBA_PTR_GET(reachJsons_, vector<Models::GetXConfigResponseBodyDataReachJsons>) };
    inline GetXConfigResponseBodyData& setReachJsons(const vector<Models::GetXConfigResponseBodyDataReachJsons> & reachJsons) { DARABONBA_PTR_SET_VALUE(reachJsons_, reachJsons) };
    inline GetXConfigResponseBodyData& setReachJsons(vector<Models::GetXConfigResponseBodyDataReachJsons> && reachJsons) { DARABONBA_PTR_SET_RVALUE(reachJsons_, reachJsons) };


    // sequenceCalls Field Functions 
    bool hasSequenceCalls() const { return this->sequenceCalls_ != nullptr;};
    void deleteSequenceCalls() { this->sequenceCalls_ = nullptr;};
    inline const vector<Models::GetXConfigResponseBodyDataSequenceCalls> & sequenceCalls() const { DARABONBA_PTR_GET_CONST(sequenceCalls_, vector<Models::GetXConfigResponseBodyDataSequenceCalls>) };
    inline vector<Models::GetXConfigResponseBodyDataSequenceCalls> sequenceCalls() { DARABONBA_PTR_GET(sequenceCalls_, vector<Models::GetXConfigResponseBodyDataSequenceCalls>) };
    inline GetXConfigResponseBodyData& setSequenceCalls(const vector<Models::GetXConfigResponseBodyDataSequenceCalls> & sequenceCalls) { DARABONBA_PTR_SET_VALUE(sequenceCalls_, sequenceCalls) };
    inline GetXConfigResponseBodyData& setSequenceCalls(vector<Models::GetXConfigResponseBodyDataSequenceCalls> && sequenceCalls) { DARABONBA_PTR_SET_RVALUE(sequenceCalls_, sequenceCalls) };


    // sequenceEndTime Field Functions 
    bool hasSequenceEndTime() const { return this->sequenceEndTime_ != nullptr;};
    void deleteSequenceEndTime() { this->sequenceEndTime_ = nullptr;};
    inline string sequenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceEndTime_, "") };
    inline GetXConfigResponseBodyData& setSequenceEndTime(string sequenceEndTime) { DARABONBA_PTR_SET_VALUE(sequenceEndTime_, sequenceEndTime) };


    // sequenceStartTime Field Functions 
    bool hasSequenceStartTime() const { return this->sequenceStartTime_ != nullptr;};
    void deleteSequenceStartTime() { this->sequenceStartTime_ = nullptr;};
    inline string sequenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceStartTime_, "") };
    inline GetXConfigResponseBodyData& setSequenceStartTime(string sequenceStartTime) { DARABONBA_PTR_SET_VALUE(sequenceStartTime_, sequenceStartTime) };


    // smsAbility Field Functions 
    bool hasSmsAbility() const { return this->smsAbility_ != nullptr;};
    void deleteSmsAbility() { this->smsAbility_ = nullptr;};
    inline string smsAbility() const { DARABONBA_PTR_GET_DEFAULT(smsAbility_, "") };
    inline GetXConfigResponseBodyData& setSmsAbility(string smsAbility) { DARABONBA_PTR_SET_VALUE(smsAbility_, smsAbility) };


    // smsSignMode Field Functions 
    bool hasSmsSignMode() const { return this->smsSignMode_ != nullptr;};
    void deleteSmsSignMode() { this->smsSignMode_ = nullptr;};
    inline string smsSignMode() const { DARABONBA_PTR_GET_DEFAULT(smsSignMode_, "") };
    inline GetXConfigResponseBodyData& setSmsSignMode(string smsSignMode) { DARABONBA_PTR_SET_VALUE(smsSignMode_, smsSignMode) };


  protected:
    // 开/关呼叫能力状态： ‘0’：禁用； ‘1’：开启；
    std::shared_ptr<string> callAbility_ = nullptr;
    // 是否透传来显为真实主叫： 00-非透传：互相拨打时都显示工作号; 10-透传：A客户为主叫时,B员工的来显为客户A号码;B员工为主叫时,A客户的来显为工作号; 默认为 00
    std::shared_ptr<string> GNFlag_ = nullptr;
    // 企业名片规则控制参数
    std::shared_ptr<vector<Models::GetXConfigResponseBodyDataReachJsons>> reachJsons_ = nullptr;
    // 顺振控制参数
    std::shared_ptr<vector<Models::GetXConfigResponseBodyDataSequenceCalls>> sequenceCalls_ = nullptr;
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
