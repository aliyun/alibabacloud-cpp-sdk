// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MUTECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MuteCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/MuteCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class MuteCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, MuteCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    MuteCallResponseBodyData() = default ;
    MuteCallResponseBodyData(const MuteCallResponseBodyData &) = default ;
    MuteCallResponseBodyData(MuteCallResponseBodyData &&) = default ;
    MuteCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteCallResponseBodyData() = default ;
    MuteCallResponseBodyData& operator=(const MuteCallResponseBodyData &) = default ;
    MuteCallResponseBodyData& operator=(MuteCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::MuteCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::MuteCallResponseBodyDataCallContext) };
    inline Models::MuteCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::MuteCallResponseBodyDataCallContext) };
    inline MuteCallResponseBodyData& setCallContext(const Models::MuteCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline MuteCallResponseBodyData& setCallContext(Models::MuteCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::MuteCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::MuteCallResponseBodyDataUserContext) };
    inline Models::MuteCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::MuteCallResponseBodyDataUserContext) };
    inline MuteCallResponseBodyData& setUserContext(const Models::MuteCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline MuteCallResponseBodyData& setUserContext(Models::MuteCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::MuteCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::MuteCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
