// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RELEASECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReleaseCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/ReleaseCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ReleaseCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(ContextId, contextId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    ReleaseCallResponseBodyData() = default ;
    ReleaseCallResponseBodyData(const ReleaseCallResponseBodyData &) = default ;
    ReleaseCallResponseBodyData(ReleaseCallResponseBodyData &&) = default ;
    ReleaseCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseCallResponseBodyData() = default ;
    ReleaseCallResponseBodyData& operator=(const ReleaseCallResponseBodyData &) = default ;
    ReleaseCallResponseBodyData& operator=(ReleaseCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->contextId_ != nullptr && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::ReleaseCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::ReleaseCallResponseBodyDataCallContext) };
    inline Models::ReleaseCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::ReleaseCallResponseBodyDataCallContext) };
    inline ReleaseCallResponseBodyData& setCallContext(const Models::ReleaseCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline ReleaseCallResponseBodyData& setCallContext(Models::ReleaseCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline int64_t contextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
    inline ReleaseCallResponseBodyData& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::ReleaseCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::ReleaseCallResponseBodyDataUserContext) };
    inline Models::ReleaseCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::ReleaseCallResponseBodyDataUserContext) };
    inline ReleaseCallResponseBodyData& setUserContext(const Models::ReleaseCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline ReleaseCallResponseBodyData& setUserContext(Models::ReleaseCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::ReleaseCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<int64_t> contextId_ = nullptr;
    std::shared_ptr<Models::ReleaseCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
