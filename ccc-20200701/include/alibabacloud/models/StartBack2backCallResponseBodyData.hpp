// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartBack2BackCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/StartBack2BackCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartBack2BackCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBack2BackCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, StartBack2BackCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    StartBack2BackCallResponseBodyData() = default ;
    StartBack2BackCallResponseBodyData(const StartBack2BackCallResponseBodyData &) = default ;
    StartBack2BackCallResponseBodyData(StartBack2BackCallResponseBodyData &&) = default ;
    StartBack2BackCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBack2BackCallResponseBodyData() = default ;
    StartBack2BackCallResponseBodyData& operator=(const StartBack2BackCallResponseBodyData &) = default ;
    StartBack2BackCallResponseBodyData& operator=(StartBack2BackCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::StartBack2BackCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::StartBack2BackCallResponseBodyDataCallContext) };
    inline Models::StartBack2BackCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::StartBack2BackCallResponseBodyDataCallContext) };
    inline StartBack2BackCallResponseBodyData& setCallContext(const Models::StartBack2BackCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline StartBack2BackCallResponseBodyData& setCallContext(Models::StartBack2BackCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::StartBack2BackCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::StartBack2BackCallResponseBodyDataUserContext) };
    inline Models::StartBack2BackCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::StartBack2BackCallResponseBodyDataUserContext) };
    inline StartBack2BackCallResponseBodyData& setUserContext(const Models::StartBack2BackCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline StartBack2BackCallResponseBodyData& setUserContext(Models::StartBack2BackCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::StartBack2BackCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::StartBack2BackCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
