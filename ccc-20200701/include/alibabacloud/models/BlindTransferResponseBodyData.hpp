// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLINDTRANSFERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BLINDTRANSFERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BlindTransferResponseBodyDataCallContext.hpp>
#include <alibabacloud/models/BlindTransferResponseBodyDataUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BlindTransferResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlindTransferResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallContext, callContext_);
      DARABONBA_PTR_TO_JSON(ContextId, contextId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
    };
    friend void from_json(const Darabonba::Json& j, BlindTransferResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
      DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
    };
    BlindTransferResponseBodyData() = default ;
    BlindTransferResponseBodyData(const BlindTransferResponseBodyData &) = default ;
    BlindTransferResponseBodyData(BlindTransferResponseBodyData &&) = default ;
    BlindTransferResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlindTransferResponseBodyData() = default ;
    BlindTransferResponseBodyData& operator=(const BlindTransferResponseBodyData &) = default ;
    BlindTransferResponseBodyData& operator=(BlindTransferResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callContext_ != nullptr
        && this->contextId_ != nullptr && this->userContext_ != nullptr; };
    // callContext Field Functions 
    bool hasCallContext() const { return this->callContext_ != nullptr;};
    void deleteCallContext() { this->callContext_ = nullptr;};
    inline const Models::BlindTransferResponseBodyDataCallContext & callContext() const { DARABONBA_PTR_GET_CONST(callContext_, Models::BlindTransferResponseBodyDataCallContext) };
    inline Models::BlindTransferResponseBodyDataCallContext callContext() { DARABONBA_PTR_GET(callContext_, Models::BlindTransferResponseBodyDataCallContext) };
    inline BlindTransferResponseBodyData& setCallContext(const Models::BlindTransferResponseBodyDataCallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
    inline BlindTransferResponseBodyData& setCallContext(Models::BlindTransferResponseBodyDataCallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline int64_t contextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
    inline BlindTransferResponseBodyData& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::BlindTransferResponseBodyDataUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::BlindTransferResponseBodyDataUserContext) };
    inline Models::BlindTransferResponseBodyDataUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::BlindTransferResponseBodyDataUserContext) };
    inline BlindTransferResponseBodyData& setUserContext(const Models::BlindTransferResponseBodyDataUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline BlindTransferResponseBodyData& setUserContext(Models::BlindTransferResponseBodyDataUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


  protected:
    std::shared_ptr<Models::BlindTransferResponseBodyDataCallContext> callContext_ = nullptr;
    std::shared_ptr<int64_t> contextId_ = nullptr;
    std::shared_ptr<Models::BlindTransferResponseBodyDataUserContext> userContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
