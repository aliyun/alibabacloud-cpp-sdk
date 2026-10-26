// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTCONVERSATIONSHARESCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTCONVERSATIONSHARESCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateAgentConversationShareScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentConversationShareScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(shareScope, shareScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentConversationShareScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(shareScope, shareScope_);
    };
    UpdateAgentConversationShareScopeRequest() = default ;
    UpdateAgentConversationShareScopeRequest(const UpdateAgentConversationShareScopeRequest &) = default ;
    UpdateAgentConversationShareScopeRequest(UpdateAgentConversationShareScopeRequest &&) = default ;
    UpdateAgentConversationShareScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentConversationShareScopeRequest() = default ;
    UpdateAgentConversationShareScopeRequest& operator=(const UpdateAgentConversationShareScopeRequest &) = default ;
    UpdateAgentConversationShareScopeRequest& operator=(UpdateAgentConversationShareScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shareScope_ == nullptr; };
    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline UpdateAgentConversationShareScopeRequest& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


  protected:
    // This parameter is required.
    shared_ptr<string> shareScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
