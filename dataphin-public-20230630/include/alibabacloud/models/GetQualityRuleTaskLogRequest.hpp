// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULETASKLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULETASKLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityRuleTaskLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleTaskLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RuleTaskId, ruleTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleTaskLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RuleTaskId, ruleTaskId_);
    };
    GetQualityRuleTaskLogRequest() = default ;
    GetQualityRuleTaskLogRequest(const GetQualityRuleTaskLogRequest &) = default ;
    GetQualityRuleTaskLogRequest(GetQualityRuleTaskLogRequest &&) = default ;
    GetQualityRuleTaskLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleTaskLogRequest() = default ;
    GetQualityRuleTaskLogRequest& operator=(const GetQualityRuleTaskLogRequest &) = default ;
    GetQualityRuleTaskLogRequest& operator=(GetQualityRuleTaskLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->ruleTaskId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetQualityRuleTaskLogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // ruleTaskId Field Functions 
    bool hasRuleTaskId() const { return this->ruleTaskId_ != nullptr;};
    void deleteRuleTaskId() { this->ruleTaskId_ = nullptr;};
    inline int64_t getRuleTaskId() const { DARABONBA_PTR_GET_DEFAULT(ruleTaskId_, 0L) };
    inline GetQualityRuleTaskLogRequest& setRuleTaskId(int64_t ruleTaskId) { DARABONBA_PTR_SET_VALUE(ruleTaskId_, ruleTaskId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int64_t> ruleTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
