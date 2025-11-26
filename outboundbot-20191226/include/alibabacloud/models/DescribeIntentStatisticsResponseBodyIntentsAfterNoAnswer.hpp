// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODYINTENTSAFTERNOANSWER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODYINTENTSAFTERNOANSWER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
    };
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer() = default ;
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer(const DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer &) = default ;
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer(DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer &&) = default ;
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer() = default ;
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& operator=(const DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer &) = default ;
    DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& operator=(DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->hitAfterNoAnswer_ == nullptr && return this->instanceId_ == nullptr && return this->intentId_ == nullptr && return this->intentName_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hitAfterNoAnswer Field Functions 
    bool hasHitAfterNoAnswer() const { return this->hitAfterNoAnswer_ != nullptr;};
    void deleteHitAfterNoAnswer() { this->hitAfterNoAnswer_ = nullptr;};
    inline int32_t hitAfterNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(hitAfterNoAnswer_, 0) };
    inline DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& setHitAfterNoAnswer(int32_t hitAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(hitAfterNoAnswer_, hitAfterNoAnswer) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int32_t> hitAfterNoAnswer_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> intentId_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
