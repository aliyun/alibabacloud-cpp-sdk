// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDCDNWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDCDNWAFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchDeleteDcdnWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    BatchDeleteDcdnWafRulesRequest() = default ;
    BatchDeleteDcdnWafRulesRequest(const BatchDeleteDcdnWafRulesRequest &) = default ;
    BatchDeleteDcdnWafRulesRequest(BatchDeleteDcdnWafRulesRequest &&) = default ;
    BatchDeleteDcdnWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDcdnWafRulesRequest() = default ;
    BatchDeleteDcdnWafRulesRequest& operator=(const BatchDeleteDcdnWafRulesRequest &) = default ;
    BatchDeleteDcdnWafRulesRequest& operator=(BatchDeleteDcdnWafRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleIds_ != nullptr; };
    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string ruleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline BatchDeleteDcdnWafRulesRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


  protected:
    // The IDs of the protection rules that you want to delete. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
