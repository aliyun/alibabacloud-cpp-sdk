// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYENTITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYENTITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetQualityEntityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityEntityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EntityLevel, entityLevel_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Followers, followers_);
      DARABONBA_PTR_TO_JSON(HasRelativeNode, hasRelativeNode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(OnDuty, onDuty_);
      DARABONBA_PTR_TO_JSON(OnDutyAccountName, onDutyAccountName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RelativeNode, relativeNode_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityEntityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EntityLevel, entityLevel_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Followers, followers_);
      DARABONBA_PTR_FROM_JSON(HasRelativeNode, hasRelativeNode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(OnDuty, onDuty_);
      DARABONBA_PTR_FROM_JSON(OnDutyAccountName, onDutyAccountName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RelativeNode, relativeNode_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetQualityEntityResponseBodyData() = default ;
    GetQualityEntityResponseBodyData(const GetQualityEntityResponseBodyData &) = default ;
    GetQualityEntityResponseBodyData(GetQualityEntityResponseBodyData &&) = default ;
    GetQualityEntityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityEntityResponseBodyData() = default ;
    GetQualityEntityResponseBodyData& operator=(const GetQualityEntityResponseBodyData &) = default ;
    GetQualityEntityResponseBodyData& operator=(GetQualityEntityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->entityLevel_ != nullptr && this->envType_ != nullptr && this->followers_ != nullptr && this->hasRelativeNode_ != nullptr && this->id_ != nullptr
        && this->matchExpression_ != nullptr && this->modifyTime_ != nullptr && this->modifyUser_ != nullptr && this->onDuty_ != nullptr && this->onDutyAccountName_ != nullptr
        && this->projectName_ != nullptr && this->relativeNode_ != nullptr && this->sql_ != nullptr && this->tableName_ != nullptr && this->task_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetQualityEntityResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // entityLevel Field Functions 
    bool hasEntityLevel() const { return this->entityLevel_ != nullptr;};
    void deleteEntityLevel() { this->entityLevel_ = nullptr;};
    inline int32_t entityLevel() const { DARABONBA_PTR_GET_DEFAULT(entityLevel_, 0) };
    inline GetQualityEntityResponseBodyData& setEntityLevel(int32_t entityLevel) { DARABONBA_PTR_SET_VALUE(entityLevel_, entityLevel) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetQualityEntityResponseBodyData& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // followers Field Functions 
    bool hasFollowers() const { return this->followers_ != nullptr;};
    void deleteFollowers() { this->followers_ = nullptr;};
    inline string followers() const { DARABONBA_PTR_GET_DEFAULT(followers_, "") };
    inline GetQualityEntityResponseBodyData& setFollowers(string followers) { DARABONBA_PTR_SET_VALUE(followers_, followers) };


    // hasRelativeNode Field Functions 
    bool hasHasRelativeNode() const { return this->hasRelativeNode_ != nullptr;};
    void deleteHasRelativeNode() { this->hasRelativeNode_ = nullptr;};
    inline bool hasRelativeNode() const { DARABONBA_PTR_GET_DEFAULT(hasRelativeNode_, false) };
    inline GetQualityEntityResponseBodyData& setHasRelativeNode(bool hasRelativeNode) { DARABONBA_PTR_SET_VALUE(hasRelativeNode_, hasRelativeNode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetQualityEntityResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchExpression Field Functions 
    bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
    void deleteMatchExpression() { this->matchExpression_ = nullptr;};
    inline string matchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
    inline GetQualityEntityResponseBodyData& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetQualityEntityResponseBodyData& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetQualityEntityResponseBodyData& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // onDuty Field Functions 
    bool hasOnDuty() const { return this->onDuty_ != nullptr;};
    void deleteOnDuty() { this->onDuty_ = nullptr;};
    inline string onDuty() const { DARABONBA_PTR_GET_DEFAULT(onDuty_, "") };
    inline GetQualityEntityResponseBodyData& setOnDuty(string onDuty) { DARABONBA_PTR_SET_VALUE(onDuty_, onDuty) };


    // onDutyAccountName Field Functions 
    bool hasOnDutyAccountName() const { return this->onDutyAccountName_ != nullptr;};
    void deleteOnDutyAccountName() { this->onDutyAccountName_ = nullptr;};
    inline string onDutyAccountName() const { DARABONBA_PTR_GET_DEFAULT(onDutyAccountName_, "") };
    inline GetQualityEntityResponseBodyData& setOnDutyAccountName(string onDutyAccountName) { DARABONBA_PTR_SET_VALUE(onDutyAccountName_, onDutyAccountName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetQualityEntityResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // relativeNode Field Functions 
    bool hasRelativeNode() const { return this->relativeNode_ != nullptr;};
    void deleteRelativeNode() { this->relativeNode_ = nullptr;};
    inline string relativeNode() const { DARABONBA_PTR_GET_DEFAULT(relativeNode_, "") };
    inline GetQualityEntityResponseBodyData& setRelativeNode(string relativeNode) { DARABONBA_PTR_SET_VALUE(relativeNode_, relativeNode) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline int32_t sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, 0) };
    inline GetQualityEntityResponseBodyData& setSql(int32_t sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetQualityEntityResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline int32_t task() const { DARABONBA_PTR_GET_DEFAULT(task_, 0) };
    inline GetQualityEntityResponseBodyData& setTask(int32_t task) { DARABONBA_PTR_SET_VALUE(task_, task) };


  protected:
    // The time when the partition filter expression was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The level of the partition filter expression. Valid values:
    // 
    // *   0: The partition filter expression is at the SQL level. This indicates that the system checks data quality after each SQL statement is executed.
    // *   1: The partition filter expression is at the node level. This indicates that the system checks data quality after all the SQL statements for a node are executed.
    std::shared_ptr<int32_t> entityLevel_ = nullptr;
    // The type of the compute engine instance or data source.
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to receive alert notifications.
    std::shared_ptr<string> followers_ = nullptr;
    // Indicates whether the partition filter expression is associated with a node. Valid values:
    // 
    // *   true: The partition filter expression is associated with a node.
    // *   false: The partition filter expression is not associated with a node.
    std::shared_ptr<bool> hasRelativeNode_ = nullptr;
    // The ID of the partition filter expression.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The partition filter expression.
    std::shared_ptr<string> matchExpression_ = nullptr;
    // The time when the partition filter expression was modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to modify the partition filter expression.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to configure the partition filter expression.
    std::shared_ptr<string> onDuty_ = nullptr;
    // The name of the Alibaba Cloud account that is used to configure the partition filter expression.
    std::shared_ptr<string> onDutyAccountName_ = nullptr;
    // The name of the compute engine instance or data source.
    std::shared_ptr<string> projectName_ = nullptr;
    // The information about the node with which the partition filter expression is associated. The information includes the following items:
    // 
    // *   ProjectName: the name of the workspace to which the node belongs.
    // *   NodeID: the ID of the node.
    std::shared_ptr<string> relativeNode_ = nullptr;
    // Indicates that the partition filter expression is at the SQL level.
    std::shared_ptr<int32_t> sql_ = nullptr;
    // The name of the partitioned table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The node.
    std::shared_ptr<int32_t> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
