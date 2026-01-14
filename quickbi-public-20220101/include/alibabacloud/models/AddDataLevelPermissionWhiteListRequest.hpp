// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddDataLevelPermissionWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    AddDataLevelPermissionWhiteListRequest() = default ;
    AddDataLevelPermissionWhiteListRequest(const AddDataLevelPermissionWhiteListRequest &) = default ;
    AddDataLevelPermissionWhiteListRequest(AddDataLevelPermissionWhiteListRequest &&) = default ;
    AddDataLevelPermissionWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataLevelPermissionWhiteListRequest() = default ;
    AddDataLevelPermissionWhiteListRequest& operator=(const AddDataLevelPermissionWhiteListRequest &) = default ;
    AddDataLevelPermissionWhiteListRequest& operator=(AddDataLevelPermissionWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->operateType_ == nullptr && this->ruleType_ == nullptr && this->targetIds_ == nullptr && this->targetType_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline AddDataLevelPermissionWhiteListRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline AddDataLevelPermissionWhiteListRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddDataLevelPermissionWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline string getTargetIds() const { DARABONBA_PTR_GET_DEFAULT(targetIds_, "") };
    inline AddDataLevelPermissionWhiteListRequest& setTargetIds(string targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline AddDataLevelPermissionWhiteListRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    // 
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // Operation Type: You can set this parameter to one of the following values.
    // 
    // *   ADD: Add a whitelist
    // *   DELETE: deletes a whitelist.
    shared_ptr<string> operateType_ {};
    // The type of row-level permissions.
    // 
    // *   ROW_LEVEL: row-level permissions,
    // *   COLUMN_LEVEL: column-level permissions
    shared_ptr<string> ruleType_ {};
    shared_ptr<string> targetIds_ {};
    // Modify the type of the whitelist:
    // 
    // *   1: user
    // *   2: user group
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
