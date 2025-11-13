// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ClaimChatResponseBodyDataChatContexts.hpp>
#include <alibabacloud/models/ClaimChatResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ClaimChatResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClaimChatResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChatContexts, chatContexts_);
      DARABONBA_PTR_TO_JSON(ContextId, contextId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, ClaimChatResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatContexts, chatContexts_);
      DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    ClaimChatResponseBodyData() = default ;
    ClaimChatResponseBodyData(const ClaimChatResponseBodyData &) = default ;
    ClaimChatResponseBodyData(ClaimChatResponseBodyData &&) = default ;
    ClaimChatResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClaimChatResponseBodyData() = default ;
    ClaimChatResponseBodyData& operator=(const ClaimChatResponseBodyData &) = default ;
    ClaimChatResponseBodyData& operator=(ClaimChatResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatContexts_ == nullptr
        && return this->contextId_ == nullptr && return this->userContext_ == nullptr; };
    // chatContexts Field Functions 
    bool hasChatContexts() const { return this->chatContexts_ != nullptr;};
    void deleteChatContexts() { this->chatContexts_ = nullptr;};
    inline const vector<Models::ClaimChatResponseBodyDataChatContexts> & chatContexts() const { DARABONBA_PTR_GET_CONST(chatContexts_, vector<Models::ClaimChatResponseBodyDataChatContexts>) };
    inline vector<Models::ClaimChatResponseBodyDataChatContexts> chatContexts() { DARABONBA_PTR_GET(chatContexts_, vector<Models::ClaimChatResponseBodyDataChatContexts>) };
    inline ClaimChatResponseBodyData& setChatContexts(const vector<Models::ClaimChatResponseBodyDataChatContexts> & chatContexts) { DARABONBA_PTR_SET_VALUE(chatContexts_, chatContexts) };
    inline ClaimChatResponseBodyData& setChatContexts(vector<Models::ClaimChatResponseBodyDataChatContexts> && chatContexts) { DARABONBA_PTR_SET_RVALUE(chatContexts_, chatContexts) };


    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline int64_t contextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
    inline ClaimChatResponseBodyData& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::ClaimChatResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::ClaimChatResponseBodyDataUserContext) };
    inline Models::ClaimChatResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::ClaimChatResponseBodyDataUserContext) };
    inline ClaimChatResponseBodyData& setUserContext(const Models::ClaimChatResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline ClaimChatResponseBodyData& setUserContext(Models::ClaimChatResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<vector<Models::ClaimChatResponseBodyDataChatContexts>> chatContexts_ = nullptr;
    std::shared_ptr<int64_t> contextId_ = nullptr;
    std::shared_ptr<Models::ClaimChatResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
