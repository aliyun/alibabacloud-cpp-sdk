// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTopicDeleteRequest() = default ;
    OnsTopicDeleteRequest(const OnsTopicDeleteRequest &) = default ;
    OnsTopicDeleteRequest(OnsTopicDeleteRequest &&) = default ;
    OnsTopicDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicDeleteRequest() = default ;
    OnsTopicDeleteRequest& operator=(const OnsTopicDeleteRequest &) = default ;
    OnsTopicDeleteRequest& operator=(OnsTopicDeleteRequest &&) = default ;
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
    inline OnsTopicDeleteRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTopicDeleteRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance to which the topic you want to delete belongs.
    shared_ptr<string> instanceId_ {};
    // The name of the topic that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
