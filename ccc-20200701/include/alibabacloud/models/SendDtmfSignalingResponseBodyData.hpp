// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDTMFSIGNALINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDDTMFSIGNALINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendDtmfSignalingResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/SendDtmfSignalingResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SendDtmfSignalingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDtmfSignalingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, SendDtmfSignalingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    SendDtmfSignalingResponseBodyData() = default ;
    SendDtmfSignalingResponseBodyData(const SendDtmfSignalingResponseBodyData &) = default ;
    SendDtmfSignalingResponseBodyData(SendDtmfSignalingResponseBodyData &&) = default ;
    SendDtmfSignalingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDtmfSignalingResponseBodyData() = default ;
    SendDtmfSignalingResponseBodyData& operator=(const SendDtmfSignalingResponseBodyData &) = default ;
    SendDtmfSignalingResponseBodyData& operator=(SendDtmfSignalingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::SendDtmfSignalingResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::SendDtmfSignalingResponseBodyDataCallContext) };
    inline Models::SendDtmfSignalingResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::SendDtmfSignalingResponseBodyDataCallContext) };
    inline SendDtmfSignalingResponseBodyData& setCallContext(const Models::SendDtmfSignalingResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline SendDtmfSignalingResponseBodyData& setCallContext(Models::SendDtmfSignalingResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::SendDtmfSignalingResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::SendDtmfSignalingResponseBodyDataUserContext) };
    inline Models::SendDtmfSignalingResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::SendDtmfSignalingResponseBodyDataUserContext) };
    inline SendDtmfSignalingResponseBodyData& setUserContext(const Models::SendDtmfSignalingResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline SendDtmfSignalingResponseBodyData& setUserContext(Models::SendDtmfSignalingResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::SendDtmfSignalingResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::SendDtmfSignalingResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
