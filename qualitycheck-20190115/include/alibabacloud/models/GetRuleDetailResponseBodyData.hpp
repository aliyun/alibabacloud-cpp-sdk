// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditions.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetRuleDetailResponseBodyData() = default ;
    GetRuleDetailResponseBodyData(const GetRuleDetailResponseBodyData &) = default ;
    GetRuleDetailResponseBodyData(GetRuleDetailResponseBodyData &&) = default ;
    GetRuleDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyData() = default ;
    GetRuleDetailResponseBodyData& operator=(const GetRuleDetailResponseBodyData &) = default ;
    GetRuleDetailResponseBodyData& operator=(GetRuleDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->count_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->rules_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditions & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, Models::GetRuleDetailResponseBodyDataConditions) };
    inline Models::GetRuleDetailResponseBodyDataConditions conditions() { DARABONBA_PTR_GET(conditions_, Models::GetRuleDetailResponseBodyDataConditions) };
    inline GetRuleDetailResponseBodyData& setConditions(const Models::GetRuleDetailResponseBodyDataConditions & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetRuleDetailResponseBodyData& setConditions(Models::GetRuleDetailResponseBodyDataConditions && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetRuleDetailResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetRuleDetailResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRuleDetailResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::GetRuleDetailResponseBodyDataRules) };
    inline Models::GetRuleDetailResponseBodyDataRules rules() { DARABONBA_PTR_GET(rules_, Models::GetRuleDetailResponseBodyDataRules) };
    inline GetRuleDetailResponseBodyData& setRules(const Models::GetRuleDetailResponseBodyDataRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetRuleDetailResponseBodyData& setRules(Models::GetRuleDetailResponseBodyDataRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditions> conditions_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
