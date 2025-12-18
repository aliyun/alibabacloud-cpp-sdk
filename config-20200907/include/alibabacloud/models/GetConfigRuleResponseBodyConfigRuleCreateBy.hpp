// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULECREATEBY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULECREATEBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBodyConfigRuleCreateBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBodyConfigRuleCreateBy& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBodyConfigRuleCreateBy& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
    };
    GetConfigRuleResponseBodyConfigRuleCreateBy() = default ;
    GetConfigRuleResponseBodyConfigRuleCreateBy(const GetConfigRuleResponseBodyConfigRuleCreateBy &) = default ;
    GetConfigRuleResponseBodyConfigRuleCreateBy(GetConfigRuleResponseBodyConfigRuleCreateBy &&) = default ;
    GetConfigRuleResponseBodyConfigRuleCreateBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBodyConfigRuleCreateBy() = default ;
    GetConfigRuleResponseBodyConfigRuleCreateBy& operator=(const GetConfigRuleResponseBodyConfigRuleCreateBy &) = default ;
    GetConfigRuleResponseBodyConfigRuleCreateBy& operator=(GetConfigRuleResponseBodyConfigRuleCreateBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->compliancePackName_ == nullptr && return this->creatorId_ == nullptr && return this->creatorName_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetConfigRuleResponseBodyConfigRuleCreateBy& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline GetConfigRuleResponseBodyConfigRuleCreateBy& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetConfigRuleResponseBodyConfigRuleCreateBy& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetConfigRuleResponseBodyConfigRuleCreateBy& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


  protected:
    // The compliance package ID.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The name of the compliance package.
    std::shared_ptr<string> compliancePackName_ = nullptr;
    // The ID of the account that was used to create the rule.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The name of the account that was used to create the rule.
    std::shared_ptr<string> creatorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
