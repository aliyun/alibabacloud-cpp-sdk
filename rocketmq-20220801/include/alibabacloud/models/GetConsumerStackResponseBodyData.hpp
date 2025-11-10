// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerStackResponseBodyDataStacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerStackResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerStackResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(stacks, stacks_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerStackResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(stacks, stacks_);
    };
    GetConsumerStackResponseBodyData() = default ;
    GetConsumerStackResponseBodyData(const GetConsumerStackResponseBodyData &) = default ;
    GetConsumerStackResponseBodyData(GetConsumerStackResponseBodyData &&) = default ;
    GetConsumerStackResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerStackResponseBodyData() = default ;
    GetConsumerStackResponseBodyData& operator=(const GetConsumerStackResponseBodyData &) = default ;
    GetConsumerStackResponseBodyData& operator=(GetConsumerStackResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->stacks_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline GetConsumerStackResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumerStackResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsumerStackResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stacks Field Functions 
    bool hasStacks() const { return this->stacks_ != nullptr;};
    void deleteStacks() { this->stacks_ = nullptr;};
    inline const vector<Models::GetConsumerStackResponseBodyDataStacks> & stacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<Models::GetConsumerStackResponseBodyDataStacks>) };
    inline vector<Models::GetConsumerStackResponseBodyDataStacks> stacks() { DARABONBA_PTR_GET(stacks_, vector<Models::GetConsumerStackResponseBodyDataStacks>) };
    inline GetConsumerStackResponseBodyData& setStacks(const vector<Models::GetConsumerStackResponseBodyDataStacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
    inline GetConsumerStackResponseBodyData& setStacks(vector<Models::GetConsumerStackResponseBodyDataStacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


  protected:
    // The ID of the consumer group.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Stack Information.
    std::shared_ptr<vector<Models::GetConsumerStackResponseBodyDataStacks>> stacks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
