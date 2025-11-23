// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDesensitizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesensitizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FuncType, funcType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesensitizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FuncType, funcType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListDesensitizationRuleRequest() = default ;
    ListDesensitizationRuleRequest(const ListDesensitizationRuleRequest &) = default ;
    ListDesensitizationRuleRequest(ListDesensitizationRuleRequest &&) = default ;
    ListDesensitizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesensitizationRuleRequest() = default ;
    ListDesensitizationRuleRequest& operator=(const ListDesensitizationRuleRequest &) = default ;
    ListDesensitizationRuleRequest& operator=(ListDesensitizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->funcType_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleType_ == nullptr
        && return this->tid_ == nullptr; };
    // funcType Field Functions 
    bool hasFuncType() const { return this->funcType_ != nullptr;};
    void deleteFuncType() { this->funcType_ = nullptr;};
    inline string funcType() const { DARABONBA_PTR_GET_DEFAULT(funcType_, "") };
    inline ListDesensitizationRuleRequest& setFuncType(string funcType) { DARABONBA_PTR_SET_VALUE(funcType_, funcType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDesensitizationRuleRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDesensitizationRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline ListDesensitizationRuleRequest& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListDesensitizationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListDesensitizationRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDesensitizationRuleRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The type of the masking algorithm.
    std::shared_ptr<string> funcType_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. The maximum value is 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the masking rule.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The name of the masking rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The algorithm used for masking.
    std::shared_ptr<string> ruleType_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
