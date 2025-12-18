// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODYCOMPLIANCEPACKTEMPLATESRESULTCOMPLIANCEPACKTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODYCOMPLIANCEPACKTEMPLATESRESULTCOMPLIANCEPACKTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_TO_JSON(CompliancePackTemplateName, compliancePackTemplateName_);
      DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LastUpdate, lastUpdate_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplateName, compliancePackTemplateName_);
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LastUpdate, lastUpdate_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates() = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates(const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates &) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates(ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates &&) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates() = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& operator=(const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates &) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& operator=(ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackTemplateId_ == nullptr
        && return this->compliancePackTemplateName_ == nullptr && return this->configRules_ == nullptr && return this->description_ == nullptr && return this->labels_ == nullptr && return this->lastUpdate_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // compliancePackTemplateId Field Functions 
    bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
    void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
    inline string compliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


    // compliancePackTemplateName Field Functions 
    bool hasCompliancePackTemplateName() const { return this->compliancePackTemplateName_ != nullptr;};
    void deleteCompliancePackTemplateName() { this->compliancePackTemplateName_ = nullptr;};
    inline string compliancePackTemplateName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateName_, "") };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setCompliancePackTemplateName(string compliancePackTemplateName) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateName_, compliancePackTemplateName) };


    // configRules Field Functions 
    bool hasConfigRules() const { return this->configRules_ != nullptr;};
    void deleteConfigRules() { this->configRules_ = nullptr;};
    inline const vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules> & configRules() const { DARABONBA_PTR_GET_CONST(configRules_, vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules>) };
    inline vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules> configRules() { DARABONBA_PTR_GET(configRules_, vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules>) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setConfigRules(const vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules> & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setConfigRules(vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules> && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // lastUpdate Field Functions 
    bool hasLastUpdate() const { return this->lastUpdate_ != nullptr;};
    void deleteLastUpdate() { this->lastUpdate_ = nullptr;};
    inline int32_t lastUpdate() const { DARABONBA_PTR_GET_DEFAULT(lastUpdate_, 0) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setLastUpdate(int32_t lastUpdate) { DARABONBA_PTR_SET_VALUE(lastUpdate_, lastUpdate) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The ID of the compliance package template.
    std::shared_ptr<string> compliancePackTemplateId_ = nullptr;
    // The name of the compliance package template.
    std::shared_ptr<string> compliancePackTemplateName_ = nullptr;
    // The default rules in the compliance package.
    std::shared_ptr<vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules>> configRules_ = nullptr;
    // The description of the compliance package.
    std::shared_ptr<string> description_ = nullptr;
    // The tag of the compliance package.
    std::shared_ptr<string> labels_ = nullptr;
    // The time when the compliance package was last updated.
    std::shared_ptr<int32_t> lastUpdate_ = nullptr;
    // The risk level of the managed rule in the compliance package. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
