// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DeleteAgentConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteAgentConversationRequest() = default ;
    DeleteAgentConversationRequest(const DeleteAgentConversationRequest &) = default ;
    DeleteAgentConversationRequest(DeleteAgentConversationRequest &&) = default ;
    DeleteAgentConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentConversationRequest() = default ;
    DeleteAgentConversationRequest& operator=(const DeleteAgentConversationRequest &) = default ;
    DeleteAgentConversationRequest& operator=(DeleteAgentConversationRequest &&) = default ;
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
