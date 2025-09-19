// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTOTAGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTOTAGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteAutoTagRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAutoTagRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAutoTagRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
    };
    DeleteAutoTagRulesRequest() = default ;
    DeleteAutoTagRulesRequest(const DeleteAutoTagRulesRequest &) = default ;
    DeleteAutoTagRulesRequest(DeleteAutoTagRulesRequest &&) = default ;
    DeleteAutoTagRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAutoTagRulesRequest() = default ;
    DeleteAutoTagRulesRequest& operator=(const DeleteAutoTagRulesRequest &) = default ;
    DeleteAutoTagRulesRequest& operator=(DeleteAutoTagRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleIdList_ != nullptr; };
    // ruleIdList Field Functions 
    bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
    void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
    inline string ruleIdList() const { DARABONBA_PTR_GET_DEFAULT(ruleIdList_, "") };
    inline DeleteAutoTagRulesRequest& setRuleIdList(string ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };


  protected:
    // The ID of the asset auto-tagging rule. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [ListAutoTagRules](~~ListAutoTagRules~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
