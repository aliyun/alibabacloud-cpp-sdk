// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODYCONFIGRULESCONFIGRULELISTCREATEBY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODYCONFIGRULESCONFIGRULELISTCREATEBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
    };
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() = default ;
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy(const ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy &) = default ;
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy(ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy &&) = default ;
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() = default ;
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& operator=(const ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy &) = default ;
    ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& operator=(ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->compliancePackName_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


  protected:
    // The compliance package ID.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The name of the compliance package.
    std::shared_ptr<string> compliancePackName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
