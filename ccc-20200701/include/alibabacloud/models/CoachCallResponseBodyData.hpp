// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COACHCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_COACHCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CoachCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/CoachCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CoachCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CoachCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, CoachCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    CoachCallResponseBodyData() = default ;
    CoachCallResponseBodyData(const CoachCallResponseBodyData &) = default ;
    CoachCallResponseBodyData(CoachCallResponseBodyData &&) = default ;
    CoachCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CoachCallResponseBodyData() = default ;
    CoachCallResponseBodyData& operator=(const CoachCallResponseBodyData &) = default ;
    CoachCallResponseBodyData& operator=(CoachCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::CoachCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::CoachCallResponseBodyDataCallContext) };
    inline Models::CoachCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::CoachCallResponseBodyDataCallContext) };
    inline CoachCallResponseBodyData& setCallContext(const Models::CoachCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline CoachCallResponseBodyData& setCallContext(Models::CoachCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::CoachCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::CoachCallResponseBodyDataUserContext) };
    inline Models::CoachCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::CoachCallResponseBodyDataUserContext) };
    inline CoachCallResponseBodyData& setUserContext(const Models::CoachCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline CoachCallResponseBodyData& setUserContext(Models::CoachCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::CoachCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::CoachCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
