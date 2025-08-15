// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATABROKERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATABROKERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodyDataBrokerInfoOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataBrokerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataBrokerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(delayStatus, delayStatus_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
      DARABONBA_PTR_TO_JSON(presetDelayTime, presetDelayTime_);
      DARABONBA_PTR_TO_JSON(recallResult, recallResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataBrokerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(delayStatus, delayStatus_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
      DARABONBA_PTR_FROM_JSON(presetDelayTime, presetDelayTime_);
      DARABONBA_PTR_FROM_JSON(recallResult, recallResult_);
    };
    GetTraceResponseBodyDataBrokerInfo() = default ;
    GetTraceResponseBodyDataBrokerInfo(const GetTraceResponseBodyDataBrokerInfo &) = default ;
    GetTraceResponseBodyDataBrokerInfo(GetTraceResponseBodyDataBrokerInfo &&) = default ;
    GetTraceResponseBodyDataBrokerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataBrokerInfo() = default ;
    GetTraceResponseBodyDataBrokerInfo& operator=(const GetTraceResponseBodyDataBrokerInfo &) = default ;
    GetTraceResponseBodyDataBrokerInfo& operator=(GetTraceResponseBodyDataBrokerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delayStatus_ != nullptr
        && this->operations_ != nullptr && this->presetDelayTime_ != nullptr && this->recallResult_ != nullptr; };
    // delayStatus Field Functions 
    bool hasDelayStatus() const { return this->delayStatus_ != nullptr;};
    void deleteDelayStatus() { this->delayStatus_ = nullptr;};
    inline string delayStatus() const { DARABONBA_PTR_GET_DEFAULT(delayStatus_, "") };
    inline GetTraceResponseBodyDataBrokerInfo& setDelayStatus(string delayStatus) { DARABONBA_PTR_SET_VALUE(delayStatus_, delayStatus) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodyDataBrokerInfoOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Models::GetTraceResponseBodyDataBrokerInfoOperations>) };
    inline vector<Models::GetTraceResponseBodyDataBrokerInfoOperations> operations() { DARABONBA_PTR_GET(operations_, vector<Models::GetTraceResponseBodyDataBrokerInfoOperations>) };
    inline GetTraceResponseBodyDataBrokerInfo& setOperations(const vector<Models::GetTraceResponseBodyDataBrokerInfoOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline GetTraceResponseBodyDataBrokerInfo& setOperations(vector<Models::GetTraceResponseBodyDataBrokerInfoOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // presetDelayTime Field Functions 
    bool hasPresetDelayTime() const { return this->presetDelayTime_ != nullptr;};
    void deletePresetDelayTime() { this->presetDelayTime_ = nullptr;};
    inline string presetDelayTime() const { DARABONBA_PTR_GET_DEFAULT(presetDelayTime_, "") };
    inline GetTraceResponseBodyDataBrokerInfo& setPresetDelayTime(string presetDelayTime) { DARABONBA_PTR_SET_VALUE(presetDelayTime_, presetDelayTime) };


    // recallResult Field Functions 
    bool hasRecallResult() const { return this->recallResult_ != nullptr;};
    void deleteRecallResult() { this->recallResult_ = nullptr;};
    inline string recallResult() const { DARABONBA_PTR_GET_DEFAULT(recallResult_, "") };
    inline GetTraceResponseBodyDataBrokerInfo& setRecallResult(string recallResult) { DARABONBA_PTR_SET_VALUE(recallResult_, recallResult) };


  protected:
    // Delay status.
    std::shared_ptr<string> delayStatus_ = nullptr;
    // Operation list.
    std::shared_ptr<vector<Models::GetTraceResponseBodyDataBrokerInfoOperations>> operations_ = nullptr;
    // Preset delivery time.
    std::shared_ptr<string> presetDelayTime_ = nullptr;
    // Withdraw scheduled message request result
    std::shared_ptr<string> recallResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
