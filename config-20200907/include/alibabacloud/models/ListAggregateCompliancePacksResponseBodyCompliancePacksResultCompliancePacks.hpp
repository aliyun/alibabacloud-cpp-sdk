// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSRESPONSEBODYCOMPLIANCEPACKSRESULTCOMPLIANCEPACKS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSRESPONSEBODYCOMPLIANCEPACKSRESULTCOMPLIANCEPACKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() = default ;
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks(const ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks &) = default ;
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks(ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks &&) = default ;
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() = default ;
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& operator=(const ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks &) = default ;
    ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& operator=(ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->compliancePackId_ == nullptr && return this->compliancePackName_ == nullptr && return this->compliancePackTemplateId_ == nullptr && return this->createTimestamp_ == nullptr
        && return this->description_ == nullptr && return this->riskLevel_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // compliancePackTemplateId Field Functions 
    bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
    void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
    inline string compliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags>) };
    inline vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags>) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setTags(const vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks& setTags(vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
    // The timestamp when the compliance package was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The description of the compliance package.
    std::shared_ptr<string> description_ = nullptr;
    // The risk level of the resources that are not compliant with the managed rules in the compliance package. Valid values:
    // 
    // *   1: high risk level.
    // *   2: medium risk level.
    // *   3: low risk level.
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The status of the compliance package. Valid values:
    // 
    // *   ACTIVE: The compliance package is available for use.
    // *   CREATING: The compliance package is being created.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacksTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
