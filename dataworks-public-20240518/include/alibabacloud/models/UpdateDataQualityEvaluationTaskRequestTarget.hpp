// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTTARGET_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestTarget& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(PartitionSpec, partitionSpec_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(PartitionSpec, partitionSpec_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    UpdateDataQualityEvaluationTaskRequestTarget() = default ;
    UpdateDataQualityEvaluationTaskRequestTarget(const UpdateDataQualityEvaluationTaskRequestTarget &) = default ;
    UpdateDataQualityEvaluationTaskRequestTarget(UpdateDataQualityEvaluationTaskRequestTarget &&) = default ;
    UpdateDataQualityEvaluationTaskRequestTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestTarget() = default ;
    UpdateDataQualityEvaluationTaskRequestTarget& operator=(const UpdateDataQualityEvaluationTaskRequestTarget &) = default ;
    UpdateDataQualityEvaluationTaskRequestTarget& operator=(UpdateDataQualityEvaluationTaskRequestTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseType_ != nullptr
        && this->partitionSpec_ != nullptr && this->tableGuid_ != nullptr; };
    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline UpdateDataQualityEvaluationTaskRequestTarget& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // partitionSpec Field Functions 
    bool hasPartitionSpec() const { return this->partitionSpec_ != nullptr;};
    void deletePartitionSpec() { this->partitionSpec_ = nullptr;};
    inline string partitionSpec() const { DARABONBA_PTR_GET_DEFAULT(partitionSpec_, "") };
    inline UpdateDataQualityEvaluationTaskRequestTarget& setPartitionSpec(string partitionSpec) { DARABONBA_PTR_SET_VALUE(partitionSpec_, partitionSpec) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateDataQualityEvaluationTaskRequestTarget& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The type of the database to which the table belongs. Valid values:
    // 
    // *   maxcompute
    // *   hologres
    // *   cdh
    // *   analyticdb_for_mysql
    // *   starrocks
    // *   emr
    // *   analyticdb_for_postgresql
    std::shared_ptr<string> databaseType_ = nullptr;
    // The configuration of the partitioned table.
    std::shared_ptr<string> partitionSpec_ = nullptr;
    // The ID of the table in Data Map.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
