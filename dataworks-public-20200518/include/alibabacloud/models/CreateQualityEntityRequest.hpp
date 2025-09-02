// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateQualityEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityLevel, entityLevel_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityLevel, entityLevel_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CreateQualityEntityRequest() = default ;
    CreateQualityEntityRequest(const CreateQualityEntityRequest &) = default ;
    CreateQualityEntityRequest(CreateQualityEntityRequest &&) = default ;
    CreateQualityEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityEntityRequest() = default ;
    CreateQualityEntityRequest& operator=(const CreateQualityEntityRequest &) = default ;
    CreateQualityEntityRequest& operator=(CreateQualityEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityLevel_ != nullptr
        && this->envType_ != nullptr && this->matchExpression_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr && this->tableName_ != nullptr; };
    // entityLevel Field Functions 
    bool hasEntityLevel() const { return this->entityLevel_ != nullptr;};
    void deleteEntityLevel() { this->entityLevel_ = nullptr;};
    inline int32_t entityLevel() const { DARABONBA_PTR_GET_DEFAULT(entityLevel_, 0) };
    inline CreateQualityEntityRequest& setEntityLevel(int32_t entityLevel) { DARABONBA_PTR_SET_VALUE(entityLevel_, entityLevel) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateQualityEntityRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // matchExpression Field Functions 
    bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
    void deleteMatchExpression() { this->matchExpression_ = nullptr;};
    inline string matchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
    inline CreateQualityEntityRequest& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateQualityEntityRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateQualityEntityRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateQualityEntityRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is deprecated.
    // 
    // The value 0 indicates that the partition filter expression is at the SQL level, and the system checks data quality after each SQL statement is executed.
    // 
    // * 0
    // * 1
    std::shared_ptr<int32_t> entityLevel_ = nullptr;
    // The type of the compute engine or data source.
    // 
    // Valid values:
    // 
    // *   odps
    // *   emr
    // *   hadoop
    // *   cdh
    // *   analyticdb_for_mysql
    // *   hybriddb_for_postgresql
    // *   holodb
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The partition filter expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> matchExpression_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console to query the ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the compute engine or data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
