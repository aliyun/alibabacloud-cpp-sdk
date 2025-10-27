// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODYCHECKRULESCHECKPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODYCHECKRULESCHECKPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleResponseBodyCheckRulesCheckPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleResponseBodyCheckRulesCheckPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(sectionShowName, sectionShowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleResponseBodyCheckRulesCheckPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(sectionShowName, sectionShowName_);
    };
    ListCheckRuleResponseBodyCheckRulesCheckPolicies() = default ;
    ListCheckRuleResponseBodyCheckRulesCheckPolicies(const ListCheckRuleResponseBodyCheckRulesCheckPolicies &) = default ;
    ListCheckRuleResponseBodyCheckRulesCheckPolicies(ListCheckRuleResponseBodyCheckRulesCheckPolicies &&) = default ;
    ListCheckRuleResponseBodyCheckRulesCheckPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleResponseBodyCheckRulesCheckPolicies() = default ;
    ListCheckRuleResponseBodyCheckRulesCheckPolicies& operator=(const ListCheckRuleResponseBodyCheckRulesCheckPolicies &) = default ;
    ListCheckRuleResponseBodyCheckRulesCheckPolicies& operator=(ListCheckRuleResponseBodyCheckRulesCheckPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sectionShowName_ == nullptr; };
    // sectionShowName Field Functions 
    bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
    void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
    inline string sectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
    inline ListCheckRuleResponseBodyCheckRulesCheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


  protected:
    // Display name of the item\\"s chapter.
    std::shared_ptr<string> sectionShowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
