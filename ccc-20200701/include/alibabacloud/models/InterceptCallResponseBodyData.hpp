// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERCEPTCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INTERCEPTCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InterceptCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/InterceptCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class InterceptCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterceptCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, InterceptCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    InterceptCallResponseBodyData() = default ;
    InterceptCallResponseBodyData(const InterceptCallResponseBodyData &) = default ;
    InterceptCallResponseBodyData(InterceptCallResponseBodyData &&) = default ;
    InterceptCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterceptCallResponseBodyData() = default ;
    InterceptCallResponseBodyData& operator=(const InterceptCallResponseBodyData &) = default ;
    InterceptCallResponseBodyData& operator=(InterceptCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::InterceptCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::InterceptCallResponseBodyDataCallContext) };
    inline Models::InterceptCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::InterceptCallResponseBodyDataCallContext) };
    inline InterceptCallResponseBodyData& setCallContext(const Models::InterceptCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline InterceptCallResponseBodyData& setCallContext(Models::InterceptCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::InterceptCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::InterceptCallResponseBodyDataUserContext) };
    inline Models::InterceptCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::InterceptCallResponseBodyDataUserContext) };
    inline InterceptCallResponseBodyData& setUserContext(const Models::InterceptCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline InterceptCallResponseBodyData& setUserContext(Models::InterceptCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::InterceptCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::InterceptCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
