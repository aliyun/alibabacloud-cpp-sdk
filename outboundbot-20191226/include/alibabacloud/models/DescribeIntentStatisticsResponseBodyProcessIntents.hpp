// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODYPROCESSINTENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODYPROCESSINTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentStatisticsResponseBodyProcessIntents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentStatisticsResponseBodyProcessIntents& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
      DARABONBA_PTR_TO_JSON(HitNum, hitNum_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(RateDisplay, rateDisplay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentStatisticsResponseBodyProcessIntents& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
      DARABONBA_PTR_FROM_JSON(HitNum, hitNum_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(RateDisplay, rateDisplay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeIntentStatisticsResponseBodyProcessIntents() = default ;
    DescribeIntentStatisticsResponseBodyProcessIntents(const DescribeIntentStatisticsResponseBodyProcessIntents &) = default ;
    DescribeIntentStatisticsResponseBodyProcessIntents(DescribeIntentStatisticsResponseBodyProcessIntents &&) = default ;
    DescribeIntentStatisticsResponseBodyProcessIntents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentStatisticsResponseBodyProcessIntents() = default ;
    DescribeIntentStatisticsResponseBodyProcessIntents& operator=(const DescribeIntentStatisticsResponseBodyProcessIntents &) = default ;
    DescribeIntentStatisticsResponseBodyProcessIntents& operator=(DescribeIntentStatisticsResponseBodyProcessIntents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->hitAfterNoAnswer_ == nullptr && return this->hitNum_ == nullptr && return this->instanceId_ == nullptr && return this->intentId_ == nullptr && return this->intentName_ == nullptr
        && return this->rateDisplay_ == nullptr && return this->type_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hitAfterNoAnswer Field Functions 
    bool hasHitAfterNoAnswer() const { return this->hitAfterNoAnswer_ != nullptr;};
    void deleteHitAfterNoAnswer() { this->hitAfterNoAnswer_ = nullptr;};
    inline int32_t hitAfterNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(hitAfterNoAnswer_, 0) };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setHitAfterNoAnswer(int32_t hitAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(hitAfterNoAnswer_, hitAfterNoAnswer) };


    // hitNum Field Functions 
    bool hasHitNum() const { return this->hitNum_ != nullptr;};
    void deleteHitNum() { this->hitNum_ = nullptr;};
    inline int32_t hitNum() const { DARABONBA_PTR_GET_DEFAULT(hitNum_, 0) };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setHitNum(int32_t hitNum) { DARABONBA_PTR_SET_VALUE(hitNum_, hitNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // rateDisplay Field Functions 
    bool hasRateDisplay() const { return this->rateDisplay_ != nullptr;};
    void deleteRateDisplay() { this->rateDisplay_ = nullptr;};
    inline string rateDisplay() const { DARABONBA_PTR_GET_DEFAULT(rateDisplay_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setRateDisplay(string rateDisplay) { DARABONBA_PTR_SET_VALUE(rateDisplay_, rateDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeIntentStatisticsResponseBodyProcessIntents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int32_t> hitAfterNoAnswer_ = nullptr;
    std::shared_ptr<int32_t> hitNum_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> intentId_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> rateDisplay_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
