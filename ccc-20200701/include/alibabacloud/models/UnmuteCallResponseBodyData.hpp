// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNMUTECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UNMUTECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnmuteCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/UnmuteCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UnmuteCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnmuteCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, UnmuteCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    UnmuteCallResponseBodyData() = default ;
    UnmuteCallResponseBodyData(const UnmuteCallResponseBodyData &) = default ;
    UnmuteCallResponseBodyData(UnmuteCallResponseBodyData &&) = default ;
    UnmuteCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnmuteCallResponseBodyData() = default ;
    UnmuteCallResponseBodyData& operator=(const UnmuteCallResponseBodyData &) = default ;
    UnmuteCallResponseBodyData& operator=(UnmuteCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::UnmuteCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::UnmuteCallResponseBodyDataCallContext) };
    inline Models::UnmuteCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::UnmuteCallResponseBodyDataCallContext) };
    inline UnmuteCallResponseBodyData& setCallContext(const Models::UnmuteCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline UnmuteCallResponseBodyData& setCallContext(Models::UnmuteCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::UnmuteCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::UnmuteCallResponseBodyDataUserContext) };
    inline Models::UnmuteCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::UnmuteCallResponseBodyDataUserContext) };
    inline UnmuteCallResponseBodyData& setUserContext(const Models::UnmuteCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline UnmuteCallResponseBodyData& setUserContext(Models::UnmuteCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::UnmuteCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::UnmuteCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
