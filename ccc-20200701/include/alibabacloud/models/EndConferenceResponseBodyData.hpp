// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDCONFERENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENDCONFERENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EndConferenceResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/EndConferenceResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class EndConferenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(ContextId, contextId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, EndConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    EndConferenceResponseBodyData() = default ;
    EndConferenceResponseBodyData(const EndConferenceResponseBodyData &) = default ;
    EndConferenceResponseBodyData(EndConferenceResponseBodyData &&) = default ;
    EndConferenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndConferenceResponseBodyData() = default ;
    EndConferenceResponseBodyData& operator=(const EndConferenceResponseBodyData &) = default ;
    EndConferenceResponseBodyData& operator=(EndConferenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->contextId_ == nullptr && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::EndConferenceResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::EndConferenceResponseBodyDataCallContext) };
    inline Models::EndConferenceResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::EndConferenceResponseBodyDataCallContext) };
    inline EndConferenceResponseBodyData& setCallContext(const Models::EndConferenceResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline EndConferenceResponseBodyData& setCallContext(Models::EndConferenceResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline int64_t contextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
    inline EndConferenceResponseBodyData& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::EndConferenceResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::EndConferenceResponseBodyDataUserContext) };
    inline Models::EndConferenceResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::EndConferenceResponseBodyDataUserContext) };
    inline EndConferenceResponseBodyData& setUserContext(const Models::EndConferenceResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline EndConferenceResponseBodyData& setUserContext(Models::EndConferenceResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::EndConferenceResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<int64_t> contextId_ = nullptr;
    std::shared_ptr<Models::EndConferenceResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
