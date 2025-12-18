// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DescribeRemediationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRemediationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRemediationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
    };
    DescribeRemediationRequest() = default ;
    DescribeRemediationRequest(const DescribeRemediationRequest &) = default ;
    DescribeRemediationRequest(DescribeRemediationRequest &&) = default ;
    DescribeRemediationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRemediationRequest() = default ;
    DescribeRemediationRequest& operator=(const DescribeRemediationRequest &) = default ;
    DescribeRemediationRequest& operator=(DescribeRemediationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->remediationId_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline DescribeRemediationRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline DescribeRemediationRequest& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


  protected:
    // The rule ID.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The ID of the remediation configuration.
    std::shared_ptr<string> remediationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
