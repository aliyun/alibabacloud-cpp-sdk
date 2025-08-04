// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMTOPICBYTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMTOPICBYTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteCustomTopicByTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomTopicByTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomTopicByTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DeleteCustomTopicByTopicRequest() = default ;
    DeleteCustomTopicByTopicRequest(const DeleteCustomTopicByTopicRequest &) = default ;
    DeleteCustomTopicByTopicRequest(DeleteCustomTopicByTopicRequest &&) = default ;
    DeleteCustomTopicByTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomTopicByTopicRequest() = default ;
    DeleteCustomTopicByTopicRequest& operator=(const DeleteCustomTopicByTopicRequest &) = default ;
    DeleteCustomTopicByTopicRequest& operator=(DeleteCustomTopicByTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->topic_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteCustomTopicByTopicRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DeleteCustomTopicByTopicRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
