// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHAUTHENTICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHAUTHENTICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LaunchAuthenticationResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/LaunchAuthenticationResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class LaunchAuthenticationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchAuthenticationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchAuthenticationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    LaunchAuthenticationResponseBodyData() = default ;
    LaunchAuthenticationResponseBodyData(const LaunchAuthenticationResponseBodyData &) = default ;
    LaunchAuthenticationResponseBodyData(LaunchAuthenticationResponseBodyData &&) = default ;
    LaunchAuthenticationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchAuthenticationResponseBodyData() = default ;
    LaunchAuthenticationResponseBodyData& operator=(const LaunchAuthenticationResponseBodyData &) = default ;
    LaunchAuthenticationResponseBodyData& operator=(LaunchAuthenticationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::LaunchAuthenticationResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::LaunchAuthenticationResponseBodyDataCallContext) };
    inline Models::LaunchAuthenticationResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::LaunchAuthenticationResponseBodyDataCallContext) };
    inline LaunchAuthenticationResponseBodyData& setCallContext(const Models::LaunchAuthenticationResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline LaunchAuthenticationResponseBodyData& setCallContext(Models::LaunchAuthenticationResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::LaunchAuthenticationResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::LaunchAuthenticationResponseBodyDataUserContext) };
    inline Models::LaunchAuthenticationResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::LaunchAuthenticationResponseBodyDataUserContext) };
    inline LaunchAuthenticationResponseBodyData& setUserContext(const Models::LaunchAuthenticationResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline LaunchAuthenticationResponseBodyData& setUserContext(Models::LaunchAuthenticationResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::LaunchAuthenticationResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::LaunchAuthenticationResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
