// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RetrieveCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/RetrieveCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RetrieveCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    RetrieveCallResponseBodyData() = default ;
    RetrieveCallResponseBodyData(const RetrieveCallResponseBodyData &) = default ;
    RetrieveCallResponseBodyData(RetrieveCallResponseBodyData &&) = default ;
    RetrieveCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveCallResponseBodyData() = default ;
    RetrieveCallResponseBodyData& operator=(const RetrieveCallResponseBodyData &) = default ;
    RetrieveCallResponseBodyData& operator=(RetrieveCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::RetrieveCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::RetrieveCallResponseBodyDataCallContext) };
    inline Models::RetrieveCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::RetrieveCallResponseBodyDataCallContext) };
    inline RetrieveCallResponseBodyData& setCallContext(const Models::RetrieveCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline RetrieveCallResponseBodyData& setCallContext(Models::RetrieveCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::RetrieveCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::RetrieveCallResponseBodyDataUserContext) };
    inline Models::RetrieveCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::RetrieveCallResponseBodyDataUserContext) };
    inline RetrieveCallResponseBodyData& setUserContext(const Models::RetrieveCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline RetrieveCallResponseBodyData& setUserContext(Models::RetrieveCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::RetrieveCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::RetrieveCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
