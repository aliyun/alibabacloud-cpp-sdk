// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineAgentDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineAgentDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(AgentStatusCode, agentStatusCode_);
      DARABONBA_PTR_TO_JSON(Assigned, assigned_);
      DARABONBA_PTR_TO_JSON(RestType, restType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineAgentDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(AgentStatusCode, agentStatusCode_);
      DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
      DARABONBA_PTR_FROM_JSON(RestType, restType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetHotlineAgentDetailResponseBodyData() = default ;
    GetHotlineAgentDetailResponseBodyData(const GetHotlineAgentDetailResponseBodyData &) = default ;
    GetHotlineAgentDetailResponseBodyData(GetHotlineAgentDetailResponseBodyData &&) = default ;
    GetHotlineAgentDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineAgentDetailResponseBodyData() = default ;
    GetHotlineAgentDetailResponseBodyData& operator=(const GetHotlineAgentDetailResponseBodyData &) = default ;
    GetHotlineAgentDetailResponseBodyData& operator=(GetHotlineAgentDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentStatus_ == nullptr && return this->agentStatusCode_ == nullptr && return this->assigned_ == nullptr && return this->restType_ == nullptr && return this->tenantId_ == nullptr
        && return this->token_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline GetHotlineAgentDetailResponseBodyData& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline int32_t agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, 0) };
    inline GetHotlineAgentDetailResponseBodyData& setAgentStatus(int32_t agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // agentStatusCode Field Functions 
    bool hasAgentStatusCode() const { return this->agentStatusCode_ != nullptr;};
    void deleteAgentStatusCode() { this->agentStatusCode_ = nullptr;};
    inline string agentStatusCode() const { DARABONBA_PTR_GET_DEFAULT(agentStatusCode_, "") };
    inline GetHotlineAgentDetailResponseBodyData& setAgentStatusCode(string agentStatusCode) { DARABONBA_PTR_SET_VALUE(agentStatusCode_, agentStatusCode) };


    // assigned Field Functions 
    bool hasAssigned() const { return this->assigned_ != nullptr;};
    void deleteAssigned() { this->assigned_ = nullptr;};
    inline bool assigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, false) };
    inline GetHotlineAgentDetailResponseBodyData& setAssigned(bool assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


    // restType Field Functions 
    bool hasRestType() const { return this->restType_ != nullptr;};
    void deleteRestType() { this->restType_ = nullptr;};
    inline int32_t restType() const { DARABONBA_PTR_GET_DEFAULT(restType_, 0) };
    inline GetHotlineAgentDetailResponseBodyData& setRestType(int32_t restType) { DARABONBA_PTR_SET_VALUE(restType_, restType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetHotlineAgentDetailResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetHotlineAgentDetailResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<int32_t> agentStatus_ = nullptr;
    std::shared_ptr<string> agentStatusCode_ = nullptr;
    std::shared_ptr<bool> assigned_ = nullptr;
    std::shared_ptr<int32_t> restType_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
