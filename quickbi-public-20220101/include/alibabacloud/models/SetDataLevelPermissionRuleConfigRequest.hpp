// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONRULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONRULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SetDataLevelPermissionRuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataLevelPermissionRuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleModel, ruleModel_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataLevelPermissionRuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleModel, ruleModel_);
    };
    SetDataLevelPermissionRuleConfigRequest() = default ;
    SetDataLevelPermissionRuleConfigRequest(const SetDataLevelPermissionRuleConfigRequest &) = default ;
    SetDataLevelPermissionRuleConfigRequest(SetDataLevelPermissionRuleConfigRequest &&) = default ;
    SetDataLevelPermissionRuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataLevelPermissionRuleConfigRequest() = default ;
    SetDataLevelPermissionRuleConfigRequest& operator=(const SetDataLevelPermissionRuleConfigRequest &) = default ;
    SetDataLevelPermissionRuleConfigRequest& operator=(SetDataLevelPermissionRuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleModel_ != nullptr; };
    // ruleModel Field Functions 
    bool hasRuleModel() const { return this->ruleModel_ != nullptr;};
    void deleteRuleModel() { this->ruleModel_ = nullptr;};
    inline string ruleModel() const { DARABONBA_PTR_GET_DEFAULT(ruleModel_, "") };
    inline SetDataLevelPermissionRuleConfigRequest& setRuleModel(string ruleModel) { DARABONBA_PTR_SET_VALUE(ruleModel_, ruleModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ruleModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
