// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONEXTRACONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONEXTRACONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SetDataLevelPermissionExtraConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataLevelPermissionExtraConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(MissHitPolicy, missHitPolicy_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataLevelPermissionExtraConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(MissHitPolicy, missHitPolicy_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    SetDataLevelPermissionExtraConfigRequest() = default ;
    SetDataLevelPermissionExtraConfigRequest(const SetDataLevelPermissionExtraConfigRequest &) = default ;
    SetDataLevelPermissionExtraConfigRequest(SetDataLevelPermissionExtraConfigRequest &&) = default ;
    SetDataLevelPermissionExtraConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataLevelPermissionExtraConfigRequest() = default ;
    SetDataLevelPermissionExtraConfigRequest& operator=(const SetDataLevelPermissionExtraConfigRequest &) = default ;
    SetDataLevelPermissionExtraConfigRequest& operator=(SetDataLevelPermissionExtraConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->missHitPolicy_ == nullptr && this->ruleType_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline SetDataLevelPermissionExtraConfigRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // missHitPolicy Field Functions 
    bool hasMissHitPolicy() const { return this->missHitPolicy_ != nullptr;};
    void deleteMissHitPolicy() { this->missHitPolicy_ = nullptr;};
    inline string getMissHitPolicy() const { DARABONBA_PTR_GET_DEFAULT(missHitPolicy_, "") };
    inline SetDataLevelPermissionExtraConfigRequest& setMissHitPolicy(string missHitPolicy) { DARABONBA_PTR_SET_VALUE(missHitPolicy_, missHitPolicy) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline SetDataLevelPermissionExtraConfigRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // Dataset ID.
    // 
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // Policy when no rule is matched:
    // 
    // - NONE: No permission
    // - ALL: Full permission
    // 
    // This parameter is required.
    shared_ptr<string> missHitPolicy_ {};
    // Type of dataset row and column permissions. Possible values:
    // 
    // - ROW_LEVEL: Row-level permission
    // - COLUMN_LEVEL: Column-level permission
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
