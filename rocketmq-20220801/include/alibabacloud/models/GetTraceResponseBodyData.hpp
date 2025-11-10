// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTraceResponseBodyDataBrokerInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodyDataConsumerInfos.hpp>
#include <alibabacloud/models/GetTraceResponseBodyDataMessageInfo.hpp>
#include <alibabacloud/models/GetTraceResponseBodyDataProducerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(brokerInfo, brokerInfo_);
      DARABONBA_PTR_TO_JSON(consumerInfos, consumerInfos_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(messageInfo, messageInfo_);
      DARABONBA_PTR_TO_JSON(producerInfo, producerInfo_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(brokerInfo, brokerInfo_);
      DARABONBA_PTR_FROM_JSON(consumerInfos, consumerInfos_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(messageInfo, messageInfo_);
      DARABONBA_PTR_FROM_JSON(producerInfo, producerInfo_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    GetTraceResponseBodyData() = default ;
    GetTraceResponseBodyData(const GetTraceResponseBodyData &) = default ;
    GetTraceResponseBodyData(GetTraceResponseBodyData &&) = default ;
    GetTraceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyData() = default ;
    GetTraceResponseBodyData& operator=(const GetTraceResponseBodyData &) = default ;
    GetTraceResponseBodyData& operator=(GetTraceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brokerInfo_ == nullptr
        && return this->consumerInfos_ == nullptr && return this->instanceId_ == nullptr && return this->messageInfo_ == nullptr && return this->producerInfo_ == nullptr && return this->regionId_ == nullptr
        && return this->topicName_ == nullptr; };
    // brokerInfo Field Functions 
    bool hasBrokerInfo() const { return this->brokerInfo_ != nullptr;};
    void deleteBrokerInfo() { this->brokerInfo_ = nullptr;};
    inline const Models::GetTraceResponseBodyDataBrokerInfo & brokerInfo() const { DARABONBA_PTR_GET_CONST(brokerInfo_, Models::GetTraceResponseBodyDataBrokerInfo) };
    inline Models::GetTraceResponseBodyDataBrokerInfo brokerInfo() { DARABONBA_PTR_GET(brokerInfo_, Models::GetTraceResponseBodyDataBrokerInfo) };
    inline GetTraceResponseBodyData& setBrokerInfo(const Models::GetTraceResponseBodyDataBrokerInfo & brokerInfo) { DARABONBA_PTR_SET_VALUE(brokerInfo_, brokerInfo) };
    inline GetTraceResponseBodyData& setBrokerInfo(Models::GetTraceResponseBodyDataBrokerInfo && brokerInfo) { DARABONBA_PTR_SET_RVALUE(brokerInfo_, brokerInfo) };


    // consumerInfos Field Functions 
    bool hasConsumerInfos() const { return this->consumerInfos_ != nullptr;};
    void deleteConsumerInfos() { this->consumerInfos_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodyDataConsumerInfos> & consumerInfos() const { DARABONBA_PTR_GET_CONST(consumerInfos_, vector<Models::GetTraceResponseBodyDataConsumerInfos>) };
    inline vector<Models::GetTraceResponseBodyDataConsumerInfos> consumerInfos() { DARABONBA_PTR_GET(consumerInfos_, vector<Models::GetTraceResponseBodyDataConsumerInfos>) };
    inline GetTraceResponseBodyData& setConsumerInfos(const vector<Models::GetTraceResponseBodyDataConsumerInfos> & consumerInfos) { DARABONBA_PTR_SET_VALUE(consumerInfos_, consumerInfos) };
    inline GetTraceResponseBodyData& setConsumerInfos(vector<Models::GetTraceResponseBodyDataConsumerInfos> && consumerInfos) { DARABONBA_PTR_SET_RVALUE(consumerInfos_, consumerInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTraceResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageInfo Field Functions 
    bool hasMessageInfo() const { return this->messageInfo_ != nullptr;};
    void deleteMessageInfo() { this->messageInfo_ = nullptr;};
    inline const Models::GetTraceResponseBodyDataMessageInfo & messageInfo() const { DARABONBA_PTR_GET_CONST(messageInfo_, Models::GetTraceResponseBodyDataMessageInfo) };
    inline Models::GetTraceResponseBodyDataMessageInfo messageInfo() { DARABONBA_PTR_GET(messageInfo_, Models::GetTraceResponseBodyDataMessageInfo) };
    inline GetTraceResponseBodyData& setMessageInfo(const Models::GetTraceResponseBodyDataMessageInfo & messageInfo) { DARABONBA_PTR_SET_VALUE(messageInfo_, messageInfo) };
    inline GetTraceResponseBodyData& setMessageInfo(Models::GetTraceResponseBodyDataMessageInfo && messageInfo) { DARABONBA_PTR_SET_RVALUE(messageInfo_, messageInfo) };


    // producerInfo Field Functions 
    bool hasProducerInfo() const { return this->producerInfo_ != nullptr;};
    void deleteProducerInfo() { this->producerInfo_ = nullptr;};
    inline const Models::GetTraceResponseBodyDataProducerInfo & producerInfo() const { DARABONBA_PTR_GET_CONST(producerInfo_, Models::GetTraceResponseBodyDataProducerInfo) };
    inline Models::GetTraceResponseBodyDataProducerInfo producerInfo() { DARABONBA_PTR_GET(producerInfo_, Models::GetTraceResponseBodyDataProducerInfo) };
    inline GetTraceResponseBodyData& setProducerInfo(const Models::GetTraceResponseBodyDataProducerInfo & producerInfo) { DARABONBA_PTR_SET_VALUE(producerInfo_, producerInfo) };
    inline GetTraceResponseBodyData& setProducerInfo(Models::GetTraceResponseBodyDataProducerInfo && producerInfo) { DARABONBA_PTR_SET_RVALUE(producerInfo_, producerInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTraceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTraceResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The broker trace.
    std::shared_ptr<Models::GetTraceResponseBodyDataBrokerInfo> brokerInfo_ = nullptr;
    // Consumer trace info.
    std::shared_ptr<vector<Models::GetTraceResponseBodyDataConsumerInfos>> consumerInfos_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The message information.
    std::shared_ptr<Models::GetTraceResponseBodyDataMessageInfo> messageInfo_ = nullptr;
    // The producer trace.
    std::shared_ptr<Models::GetTraceResponseBodyDataProducerInfo> producerInfo_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
