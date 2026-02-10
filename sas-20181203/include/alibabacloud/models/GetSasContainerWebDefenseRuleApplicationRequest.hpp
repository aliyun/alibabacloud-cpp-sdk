// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetSasContainerWebDefenseRuleApplicationRequest() = default ;
    GetSasContainerWebDefenseRuleApplicationRequest(const GetSasContainerWebDefenseRuleApplicationRequest &) = default ;
    GetSasContainerWebDefenseRuleApplicationRequest(GetSasContainerWebDefenseRuleApplicationRequest &&) = default ;
    GetSasContainerWebDefenseRuleApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleApplicationRequest() = default ;
    GetSasContainerWebDefenseRuleApplicationRequest& operator=(const GetSasContainerWebDefenseRuleApplicationRequest &) = default ;
    GetSasContainerWebDefenseRuleApplicationRequest& operator=(GetSasContainerWebDefenseRuleApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the rule.
    // 
    // >  You can call the ListSasContainerWebDefenseRule operation to query the IDs of rules.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
