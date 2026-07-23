// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATADIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateDataDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LeftTableMetaId, leftTableMetaId_);
      DARABONBA_PTR_TO_JSON(LeftTablePartitionField, leftTablePartitionField_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_TO_JSON(RightTableMetaId, rightTableMetaId_);
      DARABONBA_PTR_TO_JSON(RightTablePartitionField, rightTablePartitionField_);
      DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_TO_JSON(TopNQuantity, topNQuantity_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LeftTableMetaId, leftTableMetaId_);
      DARABONBA_PTR_FROM_JSON(LeftTablePartitionField, leftTablePartitionField_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_FROM_JSON(RightTableMetaId, rightTableMetaId_);
      DARABONBA_PTR_FROM_JSON(RightTablePartitionField, rightTablePartitionField_);
      DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_FROM_JSON(TopNQuantity, topNQuantity_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDataDiagnosisRequest() = default ;
    CreateDataDiagnosisRequest(const CreateDataDiagnosisRequest &) = default ;
    CreateDataDiagnosisRequest(CreateDataDiagnosisRequest &&) = default ;
    CreateDataDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataDiagnosisRequest() = default ;
    CreateDataDiagnosisRequest& operator=(const CreateDataDiagnosisRequest &) = default ;
    CreateDataDiagnosisRequest& operator=(CreateDataDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->cycleTime_ == nullptr && this->instanceId_ == nullptr && this->leftTableMetaId_ == nullptr && this->leftTablePartitionField_ == nullptr && this->name_ == nullptr
        && this->partitionField_ == nullptr && this->rightTableMetaId_ == nullptr && this->rightTablePartitionField_ == nullptr && this->tableMetaId_ == nullptr && this->topNQuantity_ == nullptr
        && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateDataDiagnosisRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // cycleTime Field Functions 
    bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
    void deleteCycleTime() { this->cycleTime_ = nullptr;};
    inline string getCycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, "") };
    inline CreateDataDiagnosisRequest& setCycleTime(string cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDataDiagnosisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // leftTableMetaId Field Functions 
    bool hasLeftTableMetaId() const { return this->leftTableMetaId_ != nullptr;};
    void deleteLeftTableMetaId() { this->leftTableMetaId_ = nullptr;};
    inline string getLeftTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(leftTableMetaId_, "") };
    inline CreateDataDiagnosisRequest& setLeftTableMetaId(string leftTableMetaId) { DARABONBA_PTR_SET_VALUE(leftTableMetaId_, leftTableMetaId) };


    // leftTablePartitionField Field Functions 
    bool hasLeftTablePartitionField() const { return this->leftTablePartitionField_ != nullptr;};
    void deleteLeftTablePartitionField() { this->leftTablePartitionField_ = nullptr;};
    inline string getLeftTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(leftTablePartitionField_, "") };
    inline CreateDataDiagnosisRequest& setLeftTablePartitionField(string leftTablePartitionField) { DARABONBA_PTR_SET_VALUE(leftTablePartitionField_, leftTablePartitionField) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataDiagnosisRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionField Field Functions 
    bool hasPartitionField() const { return this->partitionField_ != nullptr;};
    void deletePartitionField() { this->partitionField_ = nullptr;};
    inline string getPartitionField() const { DARABONBA_PTR_GET_DEFAULT(partitionField_, "") };
    inline CreateDataDiagnosisRequest& setPartitionField(string partitionField) { DARABONBA_PTR_SET_VALUE(partitionField_, partitionField) };


    // rightTableMetaId Field Functions 
    bool hasRightTableMetaId() const { return this->rightTableMetaId_ != nullptr;};
    void deleteRightTableMetaId() { this->rightTableMetaId_ = nullptr;};
    inline string getRightTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(rightTableMetaId_, "") };
    inline CreateDataDiagnosisRequest& setRightTableMetaId(string rightTableMetaId) { DARABONBA_PTR_SET_VALUE(rightTableMetaId_, rightTableMetaId) };


    // rightTablePartitionField Field Functions 
    bool hasRightTablePartitionField() const { return this->rightTablePartitionField_ != nullptr;};
    void deleteRightTablePartitionField() { this->rightTablePartitionField_ = nullptr;};
    inline string getRightTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(rightTablePartitionField_, "") };
    inline CreateDataDiagnosisRequest& setRightTablePartitionField(string rightTablePartitionField) { DARABONBA_PTR_SET_VALUE(rightTablePartitionField_, rightTablePartitionField) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline CreateDataDiagnosisRequest& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // topNQuantity Field Functions 
    bool hasTopNQuantity() const { return this->topNQuantity_ != nullptr;};
    void deleteTopNQuantity() { this->topNQuantity_ = nullptr;};
    inline int64_t getTopNQuantity() const { DARABONBA_PTR_GET_DEFAULT(topNQuantity_, 0L) };
    inline CreateDataDiagnosisRequest& setTopNQuantity(int64_t topNQuantity) { DARABONBA_PTR_SET_VALUE(topNQuantity_, topNQuantity) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDataDiagnosisRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration for the data diagnosis task, specified as a JSON string. The required fields in this object depend on the value of the `Type` parameter.
    // 
    // - If `Type` is set to `ChangeRate`, specify the following fields: `AnalysisField` and `PartitionFieldFormat`.
    // 
    // - If `Type` is set to `PreferenceStatisticsCycle`, specify the following fields: `UserIdField`, `RemainDays`, `EverAppearedDays`, `RemainRatePeriods`, and `PartitionFieldFormat`.
    // 
    // - If `Type` is set to `JoinTables`, specify the following fields: `LeftTableAnalysisField`, `RightTableAnalysisField`, `LeftJoinField`, `RightJoinField`, `SampleQuantity`, `LeftTablePartitionFieldFormat`, and `RightTablePartitionFieldFormat`.
    // 
    // - If `Type` is set to `BaseStatistics`, specify the following fields: `TagField`, `TagFieldSeparator`, `KVField`, `KVFieldSeparator`, `KVPairSeparator`, `TextField`, `Quantiles`, `DefaultValueOfString`, `NullStringField`, and `PartitionFieldFormat`.
    // 
    // - If `Type` is set to `AbnormalBehavior`, specify the following fields: `UserId`, `ItemId`, `EventField`, `UpStreamBehavior`, `DownstreamBehavior`, `NumericHistogramBins`, and `PartitionFieldFormat`.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The scheduled time to run the task. If this parameter is omitted, the task runs only once.
    shared_ptr<string> cycleTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the left data table.
    shared_ptr<string> leftTableMetaId_ {};
    // The partition field for the left data table.
    shared_ptr<string> leftTablePartitionField_ {};
    // The name of the data diagnosis task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The partition field.
    shared_ptr<string> partitionField_ {};
    // The ID of the right data table.
    shared_ptr<string> rightTableMetaId_ {};
    // The partition field for the right data table.
    shared_ptr<string> rightTablePartitionField_ {};
    // The ID of the data table.
    shared_ptr<string> tableMetaId_ {};
    // The number of top results to return.
    shared_ptr<int64_t> topNQuantity_ {};
    // The type of the data diagnosis task. Valid values:
    // 
    // - ChangeRate: Item or user change rate analysis.
    // 
    // - PreferenceStatisticsCycle: User preference statistics cycle analysis.
    // 
    // - JoinTables: Two-table join analysis.
    // 
    // - BaseStatistics: Basic statistical analysis.
    // 
    // - AbnormalBehavior: Abnormal behavior analysis.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
