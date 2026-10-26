// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAGENTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPAGENTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class StopAgentConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StopAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    StopAgentConversationRequest() = default ;
    StopAgentConversationRequest(const StopAgentConversationRequest &) = default ;
    StopAgentConversationRequest(StopAgentConversationRequest &&) = default ;
    StopAgentConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAgentConversationRequest() = default ;
    StopAgentConversationRequest& operator=(const StopAgentConversationRequest &) = default ;
    StopAgentConversationRequest& operator=(StopAgentConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
