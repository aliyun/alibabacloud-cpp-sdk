// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAGENTCREDITQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAGENTCREDITQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class SetAgentCreditQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAgentCreditQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CreditQuota, creditQuota_);
    };
    friend void from_json(const Darabonba::Json& j, SetAgentCreditQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CreditQuota, creditQuota_);
    };
    SetAgentCreditQuotaRequest() = default ;
    SetAgentCreditQuotaRequest(const SetAgentCreditQuotaRequest &) = default ;
    SetAgentCreditQuotaRequest(SetAgentCreditQuotaRequest &&) = default ;
    SetAgentCreditQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAgentCreditQuotaRequest() = default ;
    SetAgentCreditQuotaRequest& operator=(const SetAgentCreditQuotaRequest &) = default ;
    SetAgentCreditQuotaRequest& operator=(SetAgentCreditQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIds_ == nullptr
        && this->agentType_ == nullptr && this->bizType_ == nullptr && this->creditQuota_ == nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline const vector<string> & getAgentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<string>) };
    inline vector<string> getAgentIds() { DARABONBA_PTR_GET(agentIds_, vector<string>) };
    inline SetAgentCreditQuotaRequest& setAgentIds(const vector<string> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
    inline SetAgentCreditQuotaRequest& setAgentIds(vector<string> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline SetAgentCreditQuotaRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline SetAgentCreditQuotaRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // creditQuota Field Functions 
    bool hasCreditQuota() const { return this->creditQuota_ != nullptr;};
    void deleteCreditQuota() { this->creditQuota_ = nullptr;};
    inline int32_t getCreditQuota() const { DARABONBA_PTR_GET_DEFAULT(creditQuota_, 0) };
    inline SetAgentCreditQuotaRequest& setCreditQuota(int32_t creditQuota) { DARABONBA_PTR_SET_VALUE(creditQuota_, creditQuota) };


  protected:
    shared_ptr<vector<string>> agentIds_ {};
    shared_ptr<string> agentType_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<int32_t> creditQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
