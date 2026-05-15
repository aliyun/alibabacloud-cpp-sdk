// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRATELIMITRULESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTRATELIMITRULESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RateLimitRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListRateLimitRulesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRateLimitRulesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListRateLimitRulesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListRateLimitRulesOutput() = default ;
    ListRateLimitRulesOutput(const ListRateLimitRulesOutput &) = default ;
    ListRateLimitRulesOutput(ListRateLimitRulesOutput &&) = default ;
    ListRateLimitRulesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRateLimitRulesOutput() = default ;
    ListRateLimitRulesOutput& operator=(const ListRateLimitRulesOutput &) = default ;
    ListRateLimitRulesOutput& operator=(ListRateLimitRulesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<RateLimitRule> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<RateLimitRule>) };
    inline vector<RateLimitRule> getItems() { DARABONBA_PTR_GET(items_, vector<RateLimitRule>) };
    inline ListRateLimitRulesOutput& setItems(const vector<RateLimitRule> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListRateLimitRulesOutput& setItems(vector<RateLimitRule> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRateLimitRulesOutput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRateLimitRulesOutput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListRateLimitRulesOutput& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 限流规则列表
    shared_ptr<vector<RateLimitRule>> items_ {};
    // 当前页码
    shared_ptr<int32_t> pageNumber_ {};
    // 每页记录数
    shared_ptr<int32_t> pageSize_ {};
    // 符合条件的限流规则总数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
