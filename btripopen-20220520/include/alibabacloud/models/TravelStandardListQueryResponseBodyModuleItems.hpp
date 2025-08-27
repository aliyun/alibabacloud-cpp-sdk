// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TravelStandardListQueryResponseBodyModuleItemsMainReserveRule.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(main_reserve_rule, mainReserveRule_);
      DARABONBA_PTR_TO_JSON(reserve_rule_desc, reserveRuleDesc_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(main_reserve_rule, mainReserveRule_);
      DARABONBA_PTR_FROM_JSON(reserve_rule_desc, reserveRuleDesc_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
    };
    TravelStandardListQueryResponseBodyModuleItems() = default ;
    TravelStandardListQueryResponseBodyModuleItems(const TravelStandardListQueryResponseBodyModuleItems &) = default ;
    TravelStandardListQueryResponseBodyModuleItems(TravelStandardListQueryResponseBodyModuleItems &&) = default ;
    TravelStandardListQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBodyModuleItems() = default ;
    TravelStandardListQueryResponseBodyModuleItems& operator=(const TravelStandardListQueryResponseBodyModuleItems &) = default ;
    TravelStandardListQueryResponseBodyModuleItems& operator=(TravelStandardListQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mainReserveRule_ != nullptr
        && this->reserveRuleDesc_ != nullptr && this->scope_ != nullptr; };
    // mainReserveRule Field Functions 
    bool hasMainReserveRule() const { return this->mainReserveRule_ != nullptr;};
    void deleteMainReserveRule() { this->mainReserveRule_ = nullptr;};
    inline const Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule & mainReserveRule() const { DARABONBA_PTR_GET_CONST(mainReserveRule_, Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule) };
    inline Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule mainReserveRule() { DARABONBA_PTR_GET(mainReserveRule_, Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule) };
    inline TravelStandardListQueryResponseBodyModuleItems& setMainReserveRule(const Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule & mainReserveRule) { DARABONBA_PTR_SET_VALUE(mainReserveRule_, mainReserveRule) };
    inline TravelStandardListQueryResponseBodyModuleItems& setMainReserveRule(Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule && mainReserveRule) { DARABONBA_PTR_SET_RVALUE(mainReserveRule_, mainReserveRule) };


    // reserveRuleDesc Field Functions 
    bool hasReserveRuleDesc() const { return this->reserveRuleDesc_ != nullptr;};
    void deleteReserveRuleDesc() { this->reserveRuleDesc_ = nullptr;};
    inline const vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc> & reserveRuleDesc() const { DARABONBA_PTR_GET_CONST(reserveRuleDesc_, vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc>) };
    inline vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc> reserveRuleDesc() { DARABONBA_PTR_GET(reserveRuleDesc_, vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc>) };
    inline TravelStandardListQueryResponseBodyModuleItems& setReserveRuleDesc(const vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc> & reserveRuleDesc) { DARABONBA_PTR_SET_VALUE(reserveRuleDesc_, reserveRuleDesc) };
    inline TravelStandardListQueryResponseBodyModuleItems& setReserveRuleDesc(vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc> && reserveRuleDesc) { DARABONBA_PTR_SET_RVALUE(reserveRuleDesc_, reserveRuleDesc) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int32_t scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
    inline TravelStandardListQueryResponseBodyModuleItems& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    std::shared_ptr<Models::TravelStandardListQueryResponseBodyModuleItemsMainReserveRule> mainReserveRule_ = nullptr;
    std::shared_ptr<vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc>> reserveRuleDesc_ = nullptr;
    std::shared_ptr<int32_t> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
