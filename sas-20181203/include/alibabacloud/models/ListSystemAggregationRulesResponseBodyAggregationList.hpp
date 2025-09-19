// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODYAGGREGATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODYAGGREGATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemAggregationRulesResponseBodyAggregationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemAggregationRulesResponseBodyAggregationList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemAggregationRulesResponseBodyAggregationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    ListSystemAggregationRulesResponseBodyAggregationList() = default ;
    ListSystemAggregationRulesResponseBodyAggregationList(const ListSystemAggregationRulesResponseBodyAggregationList &) = default ;
    ListSystemAggregationRulesResponseBodyAggregationList(ListSystemAggregationRulesResponseBodyAggregationList &&) = default ;
    ListSystemAggregationRulesResponseBodyAggregationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemAggregationRulesResponseBodyAggregationList() = default ;
    ListSystemAggregationRulesResponseBodyAggregationList& operator=(const ListSystemAggregationRulesResponseBodyAggregationList &) = default ;
    ListSystemAggregationRulesResponseBodyAggregationList& operator=(ListSystemAggregationRulesResponseBodyAggregationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->ruleCount_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListSystemAggregationRulesResponseBodyAggregationList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSystemAggregationRulesResponseBodyAggregationList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline ListSystemAggregationRulesResponseBodyAggregationList& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The ID of the aggregation type.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the aggregation type.
    std::shared_ptr<string> name_ = nullptr;
    // The number of rules that are of the aggregation type.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
