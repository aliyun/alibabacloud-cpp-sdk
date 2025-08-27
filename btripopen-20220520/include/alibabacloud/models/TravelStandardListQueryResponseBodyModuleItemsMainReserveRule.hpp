// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSMAINRESERVERULE_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSMAINRESERVERULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryResponseBodyModuleItemsMainReserveRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& obj) { 
      DARABONBA_PTR_TO_JSON(open_service_type_list, openServiceTypeList_);
      DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_TO_JSON(rule_desc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
      DARABONBA_PTR_TO_JSON(rule_name, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& obj) { 
      DARABONBA_PTR_FROM_JSON(open_service_type_list, openServiceTypeList_);
      DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_FROM_JSON(rule_desc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
      DARABONBA_PTR_FROM_JSON(rule_name, ruleName_);
    };
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule() = default ;
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule(const TravelStandardListQueryResponseBodyModuleItemsMainReserveRule &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule(TravelStandardListQueryResponseBodyModuleItemsMainReserveRule &&) = default ;
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBodyModuleItemsMainReserveRule() = default ;
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& operator=(const TravelStandardListQueryResponseBodyModuleItemsMainReserveRule &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& operator=(TravelStandardListQueryResponseBodyModuleItemsMainReserveRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openServiceTypeList_ != nullptr
        && this->ruleCode_ != nullptr && this->ruleDesc_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // openServiceTypeList Field Functions 
    bool hasOpenServiceTypeList() const { return this->openServiceTypeList_ != nullptr;};
    void deleteOpenServiceTypeList() { this->openServiceTypeList_ = nullptr;};
    inline const vector<string> & openServiceTypeList() const { DARABONBA_PTR_GET_CONST(openServiceTypeList_, vector<string>) };
    inline vector<string> openServiceTypeList() { DARABONBA_PTR_GET(openServiceTypeList_, vector<string>) };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setOpenServiceTypeList(const vector<string> & openServiceTypeList) { DARABONBA_PTR_SET_VALUE(openServiceTypeList_, openServiceTypeList) };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setOpenServiceTypeList(vector<string> && openServiceTypeList) { DARABONBA_PTR_SET_RVALUE(openServiceTypeList_, openServiceTypeList) };


    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline int64_t ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsMainReserveRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<vector<string>> openServiceTypeList_ = nullptr;
    std::shared_ptr<int64_t> ruleCode_ = nullptr;
    std::shared_ptr<string> ruleDesc_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
