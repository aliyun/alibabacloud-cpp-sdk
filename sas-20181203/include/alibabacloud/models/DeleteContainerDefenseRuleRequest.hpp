// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTAINERDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTAINERDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteContainerDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    DeleteContainerDefenseRuleRequest() = default ;
    DeleteContainerDefenseRuleRequest(const DeleteContainerDefenseRuleRequest &) = default ;
    DeleteContainerDefenseRuleRequest(DeleteContainerDefenseRuleRequest &&) = default ;
    DeleteContainerDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContainerDefenseRuleRequest() = default ;
    DeleteContainerDefenseRuleRequest& operator=(const DeleteContainerDefenseRuleRequest &) = default ;
    DeleteContainerDefenseRuleRequest& operator=(DeleteContainerDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleIds_ == nullptr; };
    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
    inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
    inline DeleteContainerDefenseRuleRequest& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DeleteContainerDefenseRuleRequest& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The IDs of the rules that you want to delete.
    // 
    // >  You can call the [ListContainerDefenseRule](https://help.aliyun.com/document_detail/2590599.html) operation to query the rule IDs.
    shared_ptr<vector<int64_t>> ruleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
