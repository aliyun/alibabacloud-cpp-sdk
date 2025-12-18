// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULECREATEBY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULECREATEBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBodyConfigRuleCreateBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
    };
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy(const GetAggregateConfigRuleResponseBodyConfigRuleCreateBy &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy(GetAggregateConfigRuleResponseBodyConfigRuleCreateBy &&) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBodyConfigRuleCreateBy() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& operator=(const GetAggregateConfigRuleResponseBodyConfigRuleCreateBy &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& operator=(GetAggregateConfigRuleResponseBodyConfigRuleCreateBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->aggregatorName_ == nullptr && return this->compliancePackId_ == nullptr && return this->compliancePackName_ == nullptr && return this->creatorId_ == nullptr && return this->creatorName_ == nullptr
        && return this->creatorType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string creatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleCreateBy& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


  protected:
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The name of the account group.
    std::shared_ptr<string> aggregatorName_ = nullptr;
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The name of the compliance package.
    std::shared_ptr<string> compliancePackName_ = nullptr;
    // The ID of the account that was used to create the rule.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The name of the account that was used to create the rule.
    std::shared_ptr<string> creatorName_ = nullptr;
    // The type of the entity to which the rule belongs. The value is fixed to `AGGREGATOR`, which indicates an account group.
    std::shared_ptr<string> creatorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
