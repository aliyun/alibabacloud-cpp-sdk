// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MONITORCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorCallResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/MonitorCallResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class MonitorCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    MonitorCallResponseBodyData() = default ;
    MonitorCallResponseBodyData(const MonitorCallResponseBodyData &) = default ;
    MonitorCallResponseBodyData(MonitorCallResponseBodyData &&) = default ;
    MonitorCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorCallResponseBodyData() = default ;
    MonitorCallResponseBodyData& operator=(const MonitorCallResponseBodyData &) = default ;
    MonitorCallResponseBodyData& operator=(MonitorCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callContext_ == nullptr
        && return this->userContext_ == nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::MonitorCallResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::MonitorCallResponseBodyDataCallContext) };
    inline Models::MonitorCallResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::MonitorCallResponseBodyDataCallContext) };
    inline MonitorCallResponseBodyData& setCallContext(const Models::MonitorCallResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline MonitorCallResponseBodyData& setCallContext(Models::MonitorCallResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::MonitorCallResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::MonitorCallResponseBodyDataUserContext) };
    inline Models::MonitorCallResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::MonitorCallResponseBodyDataUserContext) };
    inline MonitorCallResponseBodyData& setUserContext(const Models::MonitorCallResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline MonitorCallResponseBodyData& setUserContext(Models::MonitorCallResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::MonitorCallResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<Models::MonitorCallResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
