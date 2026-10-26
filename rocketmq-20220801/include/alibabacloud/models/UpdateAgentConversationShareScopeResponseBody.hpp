// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTCONVERSATIONSHARESCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTCONVERSATIONSHARESCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateAgentConversationShareScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentConversationShareScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(shareScope, shareScope_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentConversationShareScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(shareScope, shareScope_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    UpdateAgentConversationShareScopeResponseBody() = default ;
    UpdateAgentConversationShareScopeResponseBody(const UpdateAgentConversationShareScopeResponseBody &) = default ;
    UpdateAgentConversationShareScopeResponseBody(UpdateAgentConversationShareScopeResponseBody &&) = default ;
    UpdateAgentConversationShareScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentConversationShareScopeResponseBody() = default ;
    UpdateAgentConversationShareScopeResponseBody& operator=(const UpdateAgentConversationShareScopeResponseBody &) = default ;
    UpdateAgentConversationShareScopeResponseBody& operator=(UpdateAgentConversationShareScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->shareScope_ == nullptr && this->title_ == nullptr && this->updatedAt_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateAgentConversationShareScopeResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline UpdateAgentConversationShareScopeResponseBody& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateAgentConversationShareScopeResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline UpdateAgentConversationShareScopeResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> shareScope_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
