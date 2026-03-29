// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATADIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATADIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateDataDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataDiagnosisRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateDataDiagnosisRequest& obj) { 
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
    UpdateDataDiagnosisRequest() = default ;
    UpdateDataDiagnosisRequest(const UpdateDataDiagnosisRequest &) = default ;
    UpdateDataDiagnosisRequest(UpdateDataDiagnosisRequest &&) = default ;
    UpdateDataDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataDiagnosisRequest() = default ;
    UpdateDataDiagnosisRequest& operator=(const UpdateDataDiagnosisRequest &) = default ;
    UpdateDataDiagnosisRequest& operator=(UpdateDataDiagnosisRequest &&) = default ;
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
    inline UpdateDataDiagnosisRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // cycleTime Field Functions 
    bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
    void deleteCycleTime() { this->cycleTime_ = nullptr;};
    inline string getCycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, "") };
    inline UpdateDataDiagnosisRequest& setCycleTime(string cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDataDiagnosisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // leftTableMetaId Field Functions 
    bool hasLeftTableMetaId() const { return this->leftTableMetaId_ != nullptr;};
    void deleteLeftTableMetaId() { this->leftTableMetaId_ = nullptr;};
    inline string getLeftTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(leftTableMetaId_, "") };
    inline UpdateDataDiagnosisRequest& setLeftTableMetaId(string leftTableMetaId) { DARABONBA_PTR_SET_VALUE(leftTableMetaId_, leftTableMetaId) };


    // leftTablePartitionField Field Functions 
    bool hasLeftTablePartitionField() const { return this->leftTablePartitionField_ != nullptr;};
    void deleteLeftTablePartitionField() { this->leftTablePartitionField_ = nullptr;};
    inline string getLeftTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(leftTablePartitionField_, "") };
    inline UpdateDataDiagnosisRequest& setLeftTablePartitionField(string leftTablePartitionField) { DARABONBA_PTR_SET_VALUE(leftTablePartitionField_, leftTablePartitionField) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataDiagnosisRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionField Field Functions 
    bool hasPartitionField() const { return this->partitionField_ != nullptr;};
    void deletePartitionField() { this->partitionField_ = nullptr;};
    inline string getPartitionField() const { DARABONBA_PTR_GET_DEFAULT(partitionField_, "") };
    inline UpdateDataDiagnosisRequest& setPartitionField(string partitionField) { DARABONBA_PTR_SET_VALUE(partitionField_, partitionField) };


    // rightTableMetaId Field Functions 
    bool hasRightTableMetaId() const { return this->rightTableMetaId_ != nullptr;};
    void deleteRightTableMetaId() { this->rightTableMetaId_ = nullptr;};
    inline string getRightTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(rightTableMetaId_, "") };
    inline UpdateDataDiagnosisRequest& setRightTableMetaId(string rightTableMetaId) { DARABONBA_PTR_SET_VALUE(rightTableMetaId_, rightTableMetaId) };


    // rightTablePartitionField Field Functions 
    bool hasRightTablePartitionField() const { return this->rightTablePartitionField_ != nullptr;};
    void deleteRightTablePartitionField() { this->rightTablePartitionField_ = nullptr;};
    inline string getRightTablePartitionField() const { DARABONBA_PTR_GET_DEFAULT(rightTablePartitionField_, "") };
    inline UpdateDataDiagnosisRequest& setRightTablePartitionField(string rightTablePartitionField) { DARABONBA_PTR_SET_VALUE(rightTablePartitionField_, rightTablePartitionField) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline UpdateDataDiagnosisRequest& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // topNQuantity Field Functions 
    bool hasTopNQuantity() const { return this->topNQuantity_ != nullptr;};
    void deleteTopNQuantity() { this->topNQuantity_ = nullptr;};
    inline int64_t getTopNQuantity() const { DARABONBA_PTR_GET_DEFAULT(topNQuantity_, 0L) };
    inline UpdateDataDiagnosisRequest& setTopNQuantity(int64_t topNQuantity) { DARABONBA_PTR_SET_VALUE(topNQuantity_, topNQuantity) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDataDiagnosisRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> config_ {};
    shared_ptr<string> cycleTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> leftTableMetaId_ {};
    shared_ptr<string> leftTablePartitionField_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> partitionField_ {};
    shared_ptr<string> rightTableMetaId_ {};
    shared_ptr<string> rightTablePartitionField_ {};
    shared_ptr<string> tableMetaId_ {};
    shared_ptr<int64_t> topNQuantity_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
