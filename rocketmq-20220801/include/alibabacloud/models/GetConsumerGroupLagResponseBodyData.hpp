// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataTopicLagMapValue.hpp>
#include <alibabacloud/models/GetConsumerGroupLagResponseBodyDataTotalLag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupLagResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupLagResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topicLagMap, topicLagMap_);
      DARABONBA_PTR_TO_JSON(totalLag, totalLag_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupLagResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topicLagMap, topicLagMap_);
      DARABONBA_PTR_FROM_JSON(totalLag, totalLag_);
    };
    GetConsumerGroupLagResponseBodyData() = default ;
    GetConsumerGroupLagResponseBodyData(const GetConsumerGroupLagResponseBodyData &) = default ;
    GetConsumerGroupLagResponseBodyData(GetConsumerGroupLagResponseBodyData &&) = default ;
    GetConsumerGroupLagResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupLagResponseBodyData() = default ;
    GetConsumerGroupLagResponseBodyData& operator=(const GetConsumerGroupLagResponseBodyData &) = default ;
    GetConsumerGroupLagResponseBodyData& operator=(GetConsumerGroupLagResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerGroupId_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->topicLagMap_ != nullptr && this->totalLag_ != nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline GetConsumerGroupLagResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumerGroupLagResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsumerGroupLagResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicLagMap Field Functions 
    bool hasTopicLagMap() const { return this->topicLagMap_ != nullptr;};
    void deleteTopicLagMap() { this->topicLagMap_ = nullptr;};
    inline const map<string, Models::DataTopicLagMapValue> & topicLagMap() const { DARABONBA_PTR_GET_CONST(topicLagMap_, map<string, Models::DataTopicLagMapValue>) };
    inline map<string, Models::DataTopicLagMapValue> topicLagMap() { DARABONBA_PTR_GET(topicLagMap_, map<string, Models::DataTopicLagMapValue>) };
    inline GetConsumerGroupLagResponseBodyData& setTopicLagMap(const map<string, Models::DataTopicLagMapValue> & topicLagMap) { DARABONBA_PTR_SET_VALUE(topicLagMap_, topicLagMap) };
    inline GetConsumerGroupLagResponseBodyData& setTopicLagMap(map<string, Models::DataTopicLagMapValue> && topicLagMap) { DARABONBA_PTR_SET_RVALUE(topicLagMap_, topicLagMap) };


    // totalLag Field Functions 
    bool hasTotalLag() const { return this->totalLag_ != nullptr;};
    void deleteTotalLag() { this->totalLag_ = nullptr;};
    inline const Models::GetConsumerGroupLagResponseBodyDataTotalLag & totalLag() const { DARABONBA_PTR_GET_CONST(totalLag_, Models::GetConsumerGroupLagResponseBodyDataTotalLag) };
    inline Models::GetConsumerGroupLagResponseBodyDataTotalLag totalLag() { DARABONBA_PTR_GET(totalLag_, Models::GetConsumerGroupLagResponseBodyDataTotalLag) };
    inline GetConsumerGroupLagResponseBodyData& setTotalLag(const Models::GetConsumerGroupLagResponseBodyDataTotalLag & totalLag) { DARABONBA_PTR_SET_VALUE(totalLag_, totalLag) };
    inline GetConsumerGroupLagResponseBodyData& setTotalLag(Models::GetConsumerGroupLagResponseBodyDataTotalLag && totalLag) { DARABONBA_PTR_SET_RVALUE(totalLag_, totalLag) };


  protected:
    // Consumer Group ID
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // Backlog for each topic
    std::shared_ptr<map<string, Models::DataTopicLagMapValue>> topicLagMap_ = nullptr;
    // Total lag count
    std::shared_ptr<Models::GetConsumerGroupLagResponseBodyDataTotalLag> totalLag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
