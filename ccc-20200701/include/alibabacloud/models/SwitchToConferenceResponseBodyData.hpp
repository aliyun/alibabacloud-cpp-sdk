// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHTOCONFERENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SWITCHTOCONFERENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SwitchToConferenceResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/SwitchToConferenceResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SwitchToConferenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchToConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchToConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    SwitchToConferenceResponseBodyData() = default ;
    SwitchToConferenceResponseBodyData(const SwitchToConferenceResponseBodyData &) = default ;
    SwitchToConferenceResponseBodyData(SwitchToConferenceResponseBodyData &&) = default ;
    SwitchToConferenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchToConferenceResponseBodyData() = default ;
    SwitchToConferenceResponseBodyData& operator=(const SwitchToConferenceResponseBodyData &) = default ;
    SwitchToConferenceResponseBodyData& operator=(SwitchToConferenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::SwitchToConferenceResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::SwitchToConferenceResponseBodyDataCallContext) };
    inline Models::SwitchToConferenceResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::SwitchToConferenceResponseBodyDataCallContext) };
    inline SwitchToConferenceResponseBodyData& setCallContext(const Models::SwitchToConferenceResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline SwitchToConferenceResponseBodyData& setCallContext(Models::SwitchToConferenceResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::SwitchToConferenceResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::SwitchToConferenceResponseBodyDataUserContext) };
    inline Models::SwitchToConferenceResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::SwitchToConferenceResponseBodyDataUserContext) };
    inline SwitchToConferenceResponseBodyData& setUserContext(const Models::SwitchToConferenceResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline SwitchToConferenceResponseBodyData& setUserContext(Models::SwitchToConferenceResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::SwitchToConferenceResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::SwitchToConferenceResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
