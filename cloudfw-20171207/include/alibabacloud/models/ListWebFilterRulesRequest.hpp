// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFILTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFILTERRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListWebFilterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(WebFilterRuleId, webFilterRuleId_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(WebFilterRuleId, webFilterRuleId_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    ListWebFilterRulesRequest() = default ;
    ListWebFilterRulesRequest(const ListWebFilterRulesRequest &) = default ;
    ListWebFilterRulesRequest(ListWebFilterRulesRequest &&) = default ;
    ListWebFilterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFilterRulesRequest() = default ;
    ListWebFilterRulesRequest& operator=(const ListWebFilterRulesRequest &) = default ;
    ListWebFilterRulesRequest& operator=(ListWebFilterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->ruleAction_ == nullptr && this->webFilterRuleId_ == nullptr && this->webFilterTemplateId_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListWebFilterRulesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWebFilterRulesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline ListWebFilterRulesRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // webFilterRuleId Field Functions 
    bool hasWebFilterRuleId() const { return this->webFilterRuleId_ != nullptr;};
    void deleteWebFilterRuleId() { this->webFilterRuleId_ = nullptr;};
    inline string getWebFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(webFilterRuleId_, "") };
    inline ListWebFilterRulesRequest& setWebFilterRuleId(string webFilterRuleId) { DARABONBA_PTR_SET_VALUE(webFilterRuleId_, webFilterRuleId) };


    // webFilterTemplateId Field Functions 
    bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
    void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
    inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
    inline ListWebFilterRulesRequest& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


  protected:
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Valid values: integers greater than or equal to 1. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The rule action for exact matching. Valid values:
    // - **Allow**: allows the traffic.
    // - **Alert**: monitors the traffic.
    // - **Deny**: blocks the traffic.
    shared_ptr<string> ruleAction_ {};
    // The ID of the web filtering rule for exact matching.
    shared_ptr<string> webFilterRuleId_ {};
    // The ID of the web filtering template for exact matching.
    shared_ptr<string> webFilterTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
