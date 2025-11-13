// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCONFERENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTCONFERENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartConferenceResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/StartConferenceResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartConferenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, StartConferenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    StartConferenceResponseBodyData() = default ;
    StartConferenceResponseBodyData(const StartConferenceResponseBodyData &) = default ;
    StartConferenceResponseBodyData(StartConferenceResponseBodyData &&) = default ;
    StartConferenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartConferenceResponseBodyData() = default ;
    StartConferenceResponseBodyData& operator=(const StartConferenceResponseBodyData &) = default ;
    StartConferenceResponseBodyData& operator=(StartConferenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::StartConferenceResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::StartConferenceResponseBodyDataCallContext) };
    inline Models::StartConferenceResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::StartConferenceResponseBodyDataCallContext) };
    inline StartConferenceResponseBodyData& setCallContext(const Models::StartConferenceResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline StartConferenceResponseBodyData& setCallContext(Models::StartConferenceResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::StartConferenceResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::StartConferenceResponseBodyDataUserContext) };
    inline Models::StartConferenceResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::StartConferenceResponseBodyDataUserContext) };
    inline StartConferenceResponseBodyData& setUserContext(const Models::StartConferenceResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline StartConferenceResponseBodyData& setUserContext(Models::StartConferenceResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::StartConferenceResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::StartConferenceResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
