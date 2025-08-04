// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterveneRulesResponseBodyDataInterveneRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InterveneRuleList, interveneRuleList_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InterveneRuleList, interveneRuleList_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListInterveneRulesResponseBodyData() = default ;
    ListInterveneRulesResponseBodyData(const ListInterveneRulesResponseBodyData &) = default ;
    ListInterveneRulesResponseBodyData(ListInterveneRulesResponseBodyData &&) = default ;
    ListInterveneRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneRulesResponseBodyData() = default ;
    ListInterveneRulesResponseBodyData& operator=(const ListInterveneRulesResponseBodyData &) = default ;
    ListInterveneRulesResponseBodyData& operator=(ListInterveneRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->count_ != nullptr && this->interveneRuleList_ != nullptr && this->pageIndex_ != nullptr && this->pageSize_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInterveneRulesResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListInterveneRulesResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interveneRuleList Field Functions 
    bool hasInterveneRuleList() const { return this->interveneRuleList_ != nullptr;};
    void deleteInterveneRuleList() { this->interveneRuleList_ = nullptr;};
    inline const vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList> & interveneRuleList() const { DARABONBA_PTR_GET_CONST(interveneRuleList_, vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList>) };
    inline vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList> interveneRuleList() { DARABONBA_PTR_GET(interveneRuleList_, vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList>) };
    inline ListInterveneRulesResponseBodyData& setInterveneRuleList(const vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList> & interveneRuleList) { DARABONBA_PTR_SET_VALUE(interveneRuleList_, interveneRuleList) };
    inline ListInterveneRulesResponseBodyData& setInterveneRuleList(vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList> && interveneRuleList) { DARABONBA_PTR_SET_RVALUE(interveneRuleList_, interveneRuleList) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListInterveneRulesResponseBodyData& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterveneRulesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleList>> interveneRuleList_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
