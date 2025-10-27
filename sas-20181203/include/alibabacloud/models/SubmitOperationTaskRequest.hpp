// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitOperationTaskRequestOperationTaskInstances.hpp>
#include <alibabacloud/models/SubmitOperationTaskRequestRepairTempParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitOperationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_TO_JSON(RelationKey, relationKey_);
      DARABONBA_PTR_TO_JSON(RepairTempParam, repairTempParam_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_FROM_JSON(RelationKey, relationKey_);
      DARABONBA_PTR_FROM_JSON(RepairTempParam, repairTempParam_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitOperationTaskRequest() = default ;
    SubmitOperationTaskRequest(const SubmitOperationTaskRequest &) = default ;
    SubmitOperationTaskRequest(SubmitOperationTaskRequest &&) = default ;
    SubmitOperationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationTaskRequest() = default ;
    SubmitOperationTaskRequest& operator=(const SubmitOperationTaskRequest &) = default ;
    SubmitOperationTaskRequest& operator=(SubmitOperationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->dimensionType_ == nullptr && return this->operationTaskInstances_ == nullptr && return this->relationKey_ == nullptr && return this->repairTempParam_ == nullptr && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline SubmitOperationTaskRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string dimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline SubmitOperationTaskRequest& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // operationTaskInstances Field Functions 
    bool hasOperationTaskInstances() const { return this->operationTaskInstances_ != nullptr;};
    void deleteOperationTaskInstances() { this->operationTaskInstances_ = nullptr;};
    inline const vector<SubmitOperationTaskRequestOperationTaskInstances> & operationTaskInstances() const { DARABONBA_PTR_GET_CONST(operationTaskInstances_, vector<SubmitOperationTaskRequestOperationTaskInstances>) };
    inline vector<SubmitOperationTaskRequestOperationTaskInstances> operationTaskInstances() { DARABONBA_PTR_GET(operationTaskInstances_, vector<SubmitOperationTaskRequestOperationTaskInstances>) };
    inline SubmitOperationTaskRequest& setOperationTaskInstances(const vector<SubmitOperationTaskRequestOperationTaskInstances> & operationTaskInstances) { DARABONBA_PTR_SET_VALUE(operationTaskInstances_, operationTaskInstances) };
    inline SubmitOperationTaskRequest& setOperationTaskInstances(vector<SubmitOperationTaskRequestOperationTaskInstances> && operationTaskInstances) { DARABONBA_PTR_SET_RVALUE(operationTaskInstances_, operationTaskInstances) };


    // relationKey Field Functions 
    bool hasRelationKey() const { return this->relationKey_ != nullptr;};
    void deleteRelationKey() { this->relationKey_ = nullptr;};
    inline string relationKey() const { DARABONBA_PTR_GET_DEFAULT(relationKey_, "") };
    inline SubmitOperationTaskRequest& setRelationKey(string relationKey) { DARABONBA_PTR_SET_VALUE(relationKey_, relationKey) };


    // repairTempParam Field Functions 
    bool hasRepairTempParam() const { return this->repairTempParam_ != nullptr;};
    void deleteRepairTempParam() { this->repairTempParam_ = nullptr;};
    inline const vector<SubmitOperationTaskRequestRepairTempParam> & repairTempParam() const { DARABONBA_PTR_GET_CONST(repairTempParam_, vector<SubmitOperationTaskRequestRepairTempParam>) };
    inline vector<SubmitOperationTaskRequestRepairTempParam> repairTempParam() { DARABONBA_PTR_GET(repairTempParam_, vector<SubmitOperationTaskRequestRepairTempParam>) };
    inline SubmitOperationTaskRequest& setRepairTempParam(const vector<SubmitOperationTaskRequestRepairTempParam> & repairTempParam) { DARABONBA_PTR_SET_VALUE(repairTempParam_, repairTempParam) };
    inline SubmitOperationTaskRequest& setRepairTempParam(vector<SubmitOperationTaskRequestRepairTempParam> && repairTempParam) { DARABONBA_PTR_SET_RVALUE(repairTempParam_, repairTempParam) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitOperationTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to obtain the ID of the check item.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The dimension of the task that you want to submit. Valid values:
    // 
    // *   Instance dimension: INSTANCE
    // *   Check item dimension: CHECK_ID
    std::shared_ptr<string> dimensionType_ = nullptr;
    // The asset information required to submit the tasks for instances.
    std::shared_ptr<vector<SubmitOperationTaskRequestOperationTaskInstances>> operationTaskInstances_ = nullptr;
    // The key linked to cross-page selections during task submission.
    // 
    // >  You can call the [CreateAssetSelectionConfig](~~CreateAssetSelectionConfig~~) operation to query the associated key from the BusinessType field.
    std::shared_ptr<string> relationKey_ = nullptr;
    // The temporary parameters required for the repair task.
    std::shared_ptr<vector<SubmitOperationTaskRequestRepairTempParam>> repairTempParam_ = nullptr;
    // The type of the task that you want to submit. Valid values:
    // 
    // *   Repair task: REPAIR
    // *   Rollback task: ROLLBACK
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
