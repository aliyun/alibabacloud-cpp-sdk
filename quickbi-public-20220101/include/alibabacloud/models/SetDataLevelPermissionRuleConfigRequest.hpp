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
    virtual bool empty() const override { return this->ruleModel_ == nullptr; };
    // ruleModel Field Functions 
    bool hasRuleModel() const { return this->ruleModel_ != nullptr;};
    void deleteRuleModel() { this->ruleModel_ = nullptr;};
    inline string getRuleModel() const { DARABONBA_PTR_GET_DEFAULT(ruleModel_, "") };
    inline SetDataLevelPermissionRuleConfigRequest& setRuleModel(string ruleModel) { DARABONBA_PTR_SET_VALUE(ruleModel_, ruleModel) };


  protected:
    // {
    //     "rule": "a5bb24da-****-a891683e14da",   // ID of the row and column permission rule; when provided, it modifies the row-level permission rule, otherwise, it adds a new one
    //     "cubeId": "7c7223ae-****-3c744528014b",  // Dataset ID
    //     "ruleName": "Test Row-Level Permission", // Name of the row-level permission rule
    //     "ruleLevelType": "ROW_LEVEL", // Type of row-level permission: ROW_LEVEL: Row-level permission, COLUMN_LEVEL: Column-level permission
    //     "ruleTargetScope": "ALL", // Target audience for the row-level permission rule: 1: Everyone, 2: Specific people
    //     "hitTakeEffect": 1, // Whether the rule takes effect after being hit (for column-level permissions): 1: Takes effect (default), 0: Does not take effect
    //     "ruleUsersModel": {
    //         "userGroups": [
    //             "9bd2c6440ac542****589f16bf12ca8178dd", // User group IDs for the target user groups
    //             "0d5fb19b-****-1248fc27ca51",
    //             "3d2c23d4-****-f6390f325c2d"
    //         ],
    //         "users": [
    //             "43342****3784358", // User IDs for the target users
    //             "Huang****2e3fa822"
    //         ]
    //     },
    //     "ruleContentModel": {
    //         "ruleContentType": "ROW_FIELD", // Type of the row and column permission rule
    //         "ruleContentJson": "{\\"conditionNode\\":{\\"caption\\":\\"Period\\",\\"isMeasure\\":false,\\"pathId\\":\\"7d3b***bc6\\",\\"relationOperator\\":\\"not-null\\",\\"name\\":\\"7d3b***bc6\\",\\"value\\":{\\"value\\":[\\"\\"],\\"valueType\\":\\"ENUM\\"}}}", // JSON string of the rule
    //         "ruleOriginConfigJson": "{\\"operator\\":\\"and\\",\\"operands\\":[{\\"labelName\\":\\"Period\\",\\"isValid\\":true,\\"uniqueId\\":\\"5\\",\\"fieldId\\":\\"7d3b***bc6\\",\\"error\\":false,\\"fieldType\\":\\"string\\",\\"defaultValue\\":{\\"selectType\\":\\"condition\\",\\"value\\":{\\"conditionOp\\":\\"not-null\\",\\"conditionValue\\":\\"\\"},\\"valueType\\":\\"ENUM\\"}}],\\"isRelation\\":true}" // JSON result used by the frontend template (specific to row-level permissions)
    //     }
    // }
    // 
    // This parameter is required.
    shared_ptr<string> ruleModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
