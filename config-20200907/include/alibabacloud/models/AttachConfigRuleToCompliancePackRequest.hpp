// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class AttachConfigRuleToCompliancePackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachConfigRuleToCompliancePackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, AttachConfigRuleToCompliancePackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    AttachConfigRuleToCompliancePackRequest() = default ;
    AttachConfigRuleToCompliancePackRequest(const AttachConfigRuleToCompliancePackRequest &) = default ;
    AttachConfigRuleToCompliancePackRequest(AttachConfigRuleToCompliancePackRequest &&) = default ;
    AttachConfigRuleToCompliancePackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachConfigRuleToCompliancePackRequest() = default ;
    AttachConfigRuleToCompliancePackRequest& operator=(const AttachConfigRuleToCompliancePackRequest &) = default ;
    AttachConfigRuleToCompliancePackRequest& operator=(AttachConfigRuleToCompliancePackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->configRuleIds_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline AttachConfigRuleToCompliancePackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string getConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline AttachConfigRuleToCompliancePackRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
    // The rule ID. Separate multiple rule IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
