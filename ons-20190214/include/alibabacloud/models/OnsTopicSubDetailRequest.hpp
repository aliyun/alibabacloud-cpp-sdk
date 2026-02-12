// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICSUBDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICSUBDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicSubDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicSubDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicSubDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTopicSubDetailRequest() = default ;
    OnsTopicSubDetailRequest(const OnsTopicSubDetailRequest &) = default ;
    OnsTopicSubDetailRequest(OnsTopicSubDetailRequest &&) = default ;
    OnsTopicSubDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicSubDetailRequest() = default ;
    OnsTopicSubDetailRequest& operator=(const OnsTopicSubDetailRequest &) = default ;
    OnsTopicSubDetailRequest& operator=(OnsTopicSubDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTopicSubDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTopicSubDetailRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance that contains the topic you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the topic that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
