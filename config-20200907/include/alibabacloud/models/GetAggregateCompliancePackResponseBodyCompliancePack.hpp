// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACK_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateCompliancePackResponseBodyCompliancePackConfigRules.hpp>
#include <alibabacloud/models/GetAggregateCompliancePackResponseBodyCompliancePackScope.hpp>
#include <alibabacloud/models/GetAggregateCompliancePackResponseBodyCompliancePackTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackResponseBodyCompliancePack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackResponseBodyCompliancePack& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackResponseBodyCompliancePack& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
    };
    GetAggregateCompliancePackResponseBodyCompliancePack() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePack(const GetAggregateCompliancePackResponseBodyCompliancePack &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePack(GetAggregateCompliancePackResponseBodyCompliancePack &&) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackResponseBodyCompliancePack() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePack& operator=(const GetAggregateCompliancePackResponseBodyCompliancePack &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePack& operator=(GetAggregateCompliancePackResponseBodyCompliancePack &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->compliancePackId_ == nullptr && return this->compliancePackName_ == nullptr && return this->compliancePackTemplateId_ == nullptr && return this->configRules_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->description_ == nullptr && return this->riskLevel_ == nullptr && return this->scope_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->templateContent_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // compliancePackTemplateId Field Functions 
    bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
    void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
    inline string compliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


    // configRules Field Functions 
    bool hasConfigRules() const { return this->configRules_ != nullptr;};
    void deleteConfigRules() { this->configRules_ = nullptr;};
    inline const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules> & configRules() const { DARABONBA_PTR_GET_CONST(configRules_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules>) };
    inline vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules> configRules() { DARABONBA_PTR_GET(configRules_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules>) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setConfigRules(const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules> & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setConfigRules(vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules> && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const Models::GetAggregateCompliancePackResponseBodyCompliancePackScope & scope() const { DARABONBA_PTR_GET_CONST(scope_, Models::GetAggregateCompliancePackResponseBodyCompliancePackScope) };
    inline Models::GetAggregateCompliancePackResponseBodyCompliancePackScope scope() { DARABONBA_PTR_GET(scope_, Models::GetAggregateCompliancePackResponseBodyCompliancePackScope) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setScope(const Models::GetAggregateCompliancePackResponseBodyCompliancePackScope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setScope(Models::GetAggregateCompliancePackResponseBodyCompliancePackScope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags>) };
    inline vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags>) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setTags(const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setTags(vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePack& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


  protected:
    // The ID of the management account to which the compliance package belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The name of the compliance package.
    std::shared_ptr<string> compliancePackName_ = nullptr;
    // The ID of the compliance package template.
    std::shared_ptr<string> compliancePackTemplateId_ = nullptr;
    // The rules in the compliance package.
    std::shared_ptr<vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRules>> configRules_ = nullptr;
    // The timestamp when the compliance package was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The description of the compliance package.
    std::shared_ptr<string> description_ = nullptr;
    // The risk level of the resources that are not compliant with the rules in the compliance package. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The evaluation scope of the compliance package.
    std::shared_ptr<Models::GetAggregateCompliancePackResponseBodyCompliancePackScope> scope_ = nullptr;
    // The status of the compliance package. Valid values:
    // 
    // *   ACTIVE: The compliance package was normal.
    // *   CREATING: The compliance package was being created.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackTags>> tags_ = nullptr;
    // The information about the current compliance package template. The rules in the template do not contain custom function rules. You can quickly create the same compliance package for other accounts or account groups based on the template information.
    std::shared_ptr<string> templateContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
