// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPREDICTIVECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTPREDICTIVECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartPredictiveCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/StartPredictiveCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartPredictiveCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPredictiveCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, StartPredictiveCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    StartPredictiveCallResponseBodyData() = default ;
    StartPredictiveCallResponseBodyData(const StartPredictiveCallResponseBodyData &) = default ;
    StartPredictiveCallResponseBodyData(StartPredictiveCallResponseBodyData &&) = default ;
    StartPredictiveCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPredictiveCallResponseBodyData() = default ;
    StartPredictiveCallResponseBodyData& operator=(const StartPredictiveCallResponseBodyData &) = default ;
    StartPredictiveCallResponseBodyData& operator=(StartPredictiveCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::StartPredictiveCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::StartPredictiveCallResponseBodyDataCallContext) };
    inline Models::StartPredictiveCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::StartPredictiveCallResponseBodyDataCallContext) };
    inline StartPredictiveCallResponseBodyData& setCallContext(const Models::StartPredictiveCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline StartPredictiveCallResponseBodyData& setCallContext(Models::StartPredictiveCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::StartPredictiveCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::StartPredictiveCallResponseBodyDataUserContext) };
    inline Models::StartPredictiveCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::StartPredictiveCallResponseBodyDataUserContext) };
    inline StartPredictiveCallResponseBodyData& setUserContext(const Models::StartPredictiveCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline StartPredictiveCallResponseBodyData& setUserContext(Models::StartPredictiveCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::StartPredictiveCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::StartPredictiveCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
