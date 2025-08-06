// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSRESPONSEBODYTOPICSUBSCRIBESTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSRESPONSEBODYTOPICSUBSCRIBESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroups, consumerGroups_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroups, consumerGroups_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus() = default ;
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus(const GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus &) = default ;
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus(GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus &&) = default ;
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus() = default ;
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& operator=(const GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus &) = default ;
    GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& operator=(GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerGroups_ != nullptr
        && this->topic_ != nullptr; };
    // consumerGroups Field Functions 
    bool hasConsumerGroups() const { return this->consumerGroups_ != nullptr;};
    void deleteConsumerGroups() { this->consumerGroups_ = nullptr;};
    inline const vector<string> & consumerGroups() const { DARABONBA_PTR_GET_CONST(consumerGroups_, vector<string>) };
    inline vector<string> consumerGroups() { DARABONBA_PTR_GET(consumerGroups_, vector<string>) };
    inline GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& setConsumerGroups(const vector<string> & consumerGroups) { DARABONBA_PTR_SET_VALUE(consumerGroups_, consumerGroups) };
    inline GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& setConsumerGroups(vector<string> && consumerGroups) { DARABONBA_PTR_SET_RVALUE(consumerGroups_, consumerGroups) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The groups that subscribe to the topic.
    std::shared_ptr<vector<string>> consumerGroups_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
