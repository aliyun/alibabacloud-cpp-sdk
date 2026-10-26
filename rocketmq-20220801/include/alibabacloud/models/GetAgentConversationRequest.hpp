// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetAgentConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAgentConversationRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAgentConversationRequest() = default ;
    GetAgentConversationRequest(const GetAgentConversationRequest &) = default ;
    GetAgentConversationRequest(GetAgentConversationRequest &&) = default ;
    GetAgentConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentConversationRequest() = default ;
    GetAgentConversationRequest& operator=(const GetAgentConversationRequest &) = default ;
    GetAgentConversationRequest& operator=(GetAgentConversationRequest &&) = default ;
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
