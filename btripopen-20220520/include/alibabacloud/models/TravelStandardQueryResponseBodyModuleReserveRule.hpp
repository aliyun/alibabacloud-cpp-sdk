// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODYMODULERESERVERULE_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODYMODULERESERVERULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardQueryResponseBodyModuleReserveRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardQueryResponseBodyModuleReserveRule& obj) { 
      DARABONBA_PTR_TO_JSON(main_reserve_rule, mainReserveRule_);
      DARABONBA_PTR_TO_JSON(module_config_list, moduleConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardQueryResponseBodyModuleReserveRule& obj) { 
      DARABONBA_PTR_FROM_JSON(main_reserve_rule, mainReserveRule_);
      DARABONBA_PTR_FROM_JSON(module_config_list, moduleConfigList_);
    };
    TravelStandardQueryResponseBodyModuleReserveRule() = default ;
    TravelStandardQueryResponseBodyModuleReserveRule(const TravelStandardQueryResponseBodyModuleReserveRule &) = default ;
    TravelStandardQueryResponseBodyModuleReserveRule(TravelStandardQueryResponseBodyModuleReserveRule &&) = default ;
    TravelStandardQueryResponseBodyModuleReserveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardQueryResponseBodyModuleReserveRule() = default ;
    TravelStandardQueryResponseBodyModuleReserveRule& operator=(const TravelStandardQueryResponseBodyModuleReserveRule &) = default ;
    TravelStandardQueryResponseBodyModuleReserveRule& operator=(TravelStandardQueryResponseBodyModuleReserveRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mainReserveRule_ != nullptr
        && this->moduleConfigList_ != nullptr; };
    // mainReserveRule Field Functions 
    bool hasMainReserveRule() const { return this->mainReserveRule_ != nullptr;};
    void deleteMainReserveRule() { this->mainReserveRule_ = nullptr;};
    inline const Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule & mainReserveRule() const { DARABONBA_PTR_GET_CONST(mainReserveRule_, Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule) };
    inline Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule mainReserveRule() { DARABONBA_PTR_GET(mainReserveRule_, Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule) };
    inline TravelStandardQueryResponseBodyModuleReserveRule& setMainReserveRule(const Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule & mainReserveRule) { DARABONBA_PTR_SET_VALUE(mainReserveRule_, mainReserveRule) };
    inline TravelStandardQueryResponseBodyModuleReserveRule& setMainReserveRule(Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule && mainReserveRule) { DARABONBA_PTR_SET_RVALUE(mainReserveRule_, mainReserveRule) };


    // moduleConfigList Field Functions 
    bool hasModuleConfigList() const { return this->moduleConfigList_ != nullptr;};
    void deleteModuleConfigList() { this->moduleConfigList_ = nullptr;};
    inline const vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList> & moduleConfigList() const { DARABONBA_PTR_GET_CONST(moduleConfigList_, vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList>) };
    inline vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList> moduleConfigList() { DARABONBA_PTR_GET(moduleConfigList_, vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList>) };
    inline TravelStandardQueryResponseBodyModuleReserveRule& setModuleConfigList(const vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList> & moduleConfigList) { DARABONBA_PTR_SET_VALUE(moduleConfigList_, moduleConfigList) };
    inline TravelStandardQueryResponseBodyModuleReserveRule& setModuleConfigList(vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList> && moduleConfigList) { DARABONBA_PTR_SET_RVALUE(moduleConfigList_, moduleConfigList) };


  protected:
    std::shared_ptr<Models::TravelStandardQueryResponseBodyModuleReserveRuleMainReserveRule> mainReserveRule_ = nullptr;
    std::shared_ptr<vector<Models::TravelStandardQueryResponseBodyModuleReserveRuleModuleConfigList>> moduleConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
