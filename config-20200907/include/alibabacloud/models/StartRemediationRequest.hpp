// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTREMEDIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTREMEDIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartRemediationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRemediationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRemediationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
    };
    StartRemediationRequest() = default ;
    StartRemediationRequest(const StartRemediationRequest &) = default ;
    StartRemediationRequest(StartRemediationRequest &&) = default ;
    StartRemediationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRemediationRequest() = default ;
    StartRemediationRequest& operator=(const StartRemediationRequest &) = default ;
    StartRemediationRequest& operator=(StartRemediationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline StartRemediationRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


  protected:
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
