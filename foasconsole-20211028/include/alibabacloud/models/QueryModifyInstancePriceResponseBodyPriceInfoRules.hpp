// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICERESPONSEBODYPRICEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICERESPONSEBODYPRICEINFORULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryModifyInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    QueryModifyInstancePriceResponseBodyPriceInfoRules() = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoRules(const QueryModifyInstancePriceResponseBodyPriceInfoRules &) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoRules(QueryModifyInstancePriceResponseBodyPriceInfoRules &&) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceResponseBodyPriceInfoRules() = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoRules& operator=(const QueryModifyInstancePriceResponseBodyPriceInfoRules &) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoRules& operator=(QueryModifyInstancePriceResponseBodyPriceInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ruleId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryModifyInstancePriceResponseBodyPriceInfoRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline QueryModifyInstancePriceResponseBodyPriceInfoRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
