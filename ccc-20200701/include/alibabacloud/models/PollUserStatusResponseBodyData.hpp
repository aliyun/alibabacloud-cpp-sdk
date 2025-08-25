// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PollUserStatusResponseBodyDataCallContext.hpp>
#include <vector>
#include <alibabacloud/models/PollUserStatusResponseBodyDataChatContexts.hpp>
#include <alibabacloud/models/PollUserStatusResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PollUserStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollUserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(ChatContexts, chatContexts_);
      DARABONBA_PTR_TO_JSON(ContextId, contextId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, PollUserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(ChatContexts, chatContexts_);
      DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    PollUserStatusResponseBodyData() = default ;
    PollUserStatusResponseBodyData(const PollUserStatusResponseBodyData &) = default ;
    PollUserStatusResponseBodyData(PollUserStatusResponseBodyData &&) = default ;
    PollUserStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollUserStatusResponseBodyData() = default ;
    PollUserStatusResponseBodyData& operator=(const PollUserStatusResponseBodyData &) = default ;
    PollUserStatusResponseBodyData& operator=(PollUserStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->chatContexts_ != nullptr && this->contextId_ != nullptr && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::PollUserStatusResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::PollUserStatusResponseBodyDataCallContext) };
    inline Models::PollUserStatusResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::PollUserStatusResponseBodyDataCallContext) };
    inline PollUserStatusResponseBodyData& setCallContext(const Models::PollUserStatusResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline PollUserStatusResponseBodyData& setCallContext(Models::PollUserStatusResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // chatContexts Field Functions 
    bool hasChatContexts() const { return this->chatContexts_ != nullptr;};
    void deleteChatContexts() { this->chatContexts_ = nullptr;};
    inline const vector<Models::PollUserStatusResponseBodyDataChatContexts> & chatContexts() const { DARABONBA_PTR_GET_CONST(chatContexts_, vector<Models::PollUserStatusResponseBodyDataChatContexts>) };
    inline vector<Models::PollUserStatusResponseBodyDataChatContexts> chatContexts() { DARABONBA_PTR_GET(chatContexts_, vector<Models::PollUserStatusResponseBodyDataChatContexts>) };
    inline PollUserStatusResponseBodyData& setChatContexts(const vector<Models::PollUserStatusResponseBodyDataChatContexts> & chatContexts) { DARABONBA_PTR_SET_VALUE(chatContexts_, chatContexts) };
    inline PollUserStatusResponseBodyData& setChatContexts(vector<Models::PollUserStatusResponseBodyDataChatContexts> && chatContexts) { DARABONBA_PTR_SET_RVALUE(chatContexts_, chatContexts) };


    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline int64_t contextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
    inline PollUserStatusResponseBodyData& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::PollUserStatusResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::PollUserStatusResponseBodyDataUserContext) };
    inline Models::PollUserStatusResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::PollUserStatusResponseBodyDataUserContext) };
    inline PollUserStatusResponseBodyData& setUserContext(const Models::PollUserStatusResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline PollUserStatusResponseBodyData& setUserContext(Models::PollUserStatusResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::PollUserStatusResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<vector<Models::PollUserStatusResponseBodyDataChatContexts>> chatContexts_ = nullptr;
    std::shared_ptr<int64_t> contextId_ = nullptr;
    std::shared_ptr<Models::PollUserStatusResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
