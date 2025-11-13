// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOLDCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_HOLDCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HoldCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/HoldCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class HoldCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HoldCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, HoldCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    HoldCallResponseBodyData() = default ;
    HoldCallResponseBodyData(const HoldCallResponseBodyData &) = default ;
    HoldCallResponseBodyData(HoldCallResponseBodyData &&) = default ;
    HoldCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HoldCallResponseBodyData() = default ;
    HoldCallResponseBodyData& operator=(const HoldCallResponseBodyData &) = default ;
    HoldCallResponseBodyData& operator=(HoldCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::HoldCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::HoldCallResponseBodyDataCallContext) };
    inline Models::HoldCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::HoldCallResponseBodyDataCallContext) };
    inline HoldCallResponseBodyData& setCallContext(const Models::HoldCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline HoldCallResponseBodyData& setCallContext(Models::HoldCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::HoldCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::HoldCallResponseBodyDataUserContext) };
    inline Models::HoldCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::HoldCallResponseBodyDataUserContext) };
    inline HoldCallResponseBodyData& setUserContext(const Models::HoldCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline HoldCallResponseBodyData& setUserContext(Models::HoldCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::HoldCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::HoldCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
