// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BARGEINCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BARGEINCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BargeInCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/BargeInCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BargeInCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BargeInCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, BargeInCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    BargeInCallResponseBodyData() = default ;
    BargeInCallResponseBodyData(const BargeInCallResponseBodyData &) = default ;
    BargeInCallResponseBodyData(BargeInCallResponseBodyData &&) = default ;
    BargeInCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BargeInCallResponseBodyData() = default ;
    BargeInCallResponseBodyData& operator=(const BargeInCallResponseBodyData &) = default ;
    BargeInCallResponseBodyData& operator=(BargeInCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::BargeInCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::BargeInCallResponseBodyDataCallContext) };
    inline Models::BargeInCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::BargeInCallResponseBodyDataCallContext) };
    inline BargeInCallResponseBodyData& setCallContext(const Models::BargeInCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline BargeInCallResponseBodyData& setCallContext(Models::BargeInCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::BargeInCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::BargeInCallResponseBodyDataUserContext) };
    inline Models::BargeInCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::BargeInCallResponseBodyDataUserContext) };
    inline BargeInCallResponseBodyData& setUserContext(const Models::BargeInCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline BargeInCallResponseBodyData& setUserContext(Models::BargeInCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::BargeInCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::BargeInCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
