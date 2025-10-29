// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKTARGET_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskTarget& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(PartitionSpec, partitionSpec_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(PartitionSpec, partitionSpec_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DataQualityEvaluationTaskTarget() = default ;
    DataQualityEvaluationTaskTarget(const DataQualityEvaluationTaskTarget &) = default ;
    DataQualityEvaluationTaskTarget(DataQualityEvaluationTaskTarget &&) = default ;
    DataQualityEvaluationTaskTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskTarget() = default ;
    DataQualityEvaluationTaskTarget& operator=(const DataQualityEvaluationTaskTarget &) = default ;
    DataQualityEvaluationTaskTarget& operator=(DataQualityEvaluationTaskTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseType_ == nullptr
        && return this->partitionSpec_ == nullptr && return this->tableGuid_ == nullptr && return this->type_ == nullptr; };
    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DataQualityEvaluationTaskTarget& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // partitionSpec Field Functions 
    bool hasPartitionSpec() const { return this->partitionSpec_ != nullptr;};
    void deletePartitionSpec() { this->partitionSpec_ = nullptr;};
    inline string partitionSpec() const { DARABONBA_PTR_GET_DEFAULT(partitionSpec_, "") };
    inline DataQualityEvaluationTaskTarget& setPartitionSpec(string partitionSpec) { DARABONBA_PTR_SET_VALUE(partitionSpec_, partitionSpec) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline DataQualityEvaluationTaskTarget& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DataQualityEvaluationTaskTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> databaseType_ = nullptr;
    std::shared_ptr<string> partitionSpec_ = nullptr;
    std::shared_ptr<string> tableGuid_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
