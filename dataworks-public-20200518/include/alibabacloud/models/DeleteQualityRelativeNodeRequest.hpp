// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYRELATIVENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYRELATIVENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteQualityRelativeNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualityRelativeNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TargetNodeProjectId, targetNodeProjectId_);
      DARABONBA_PTR_TO_JSON(TargetNodeProjectName, targetNodeProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualityRelativeNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TargetNodeProjectId, targetNodeProjectId_);
      DARABONBA_PTR_FROM_JSON(TargetNodeProjectName, targetNodeProjectName_);
    };
    DeleteQualityRelativeNodeRequest() = default ;
    DeleteQualityRelativeNodeRequest(const DeleteQualityRelativeNodeRequest &) = default ;
    DeleteQualityRelativeNodeRequest(DeleteQualityRelativeNodeRequest &&) = default ;
    DeleteQualityRelativeNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualityRelativeNodeRequest() = default ;
    DeleteQualityRelativeNodeRequest& operator=(const DeleteQualityRelativeNodeRequest &) = default ;
    DeleteQualityRelativeNodeRequest& operator=(DeleteQualityRelativeNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envType_ != nullptr
        && this->matchExpression_ != nullptr && this->nodeId_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr && this->tableName_ != nullptr
        && this->targetNodeProjectId_ != nullptr && this->targetNodeProjectName_ != nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline DeleteQualityRelativeNodeRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // matchExpression Field Functions 
    bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
    void deleteMatchExpression() { this->matchExpression_ = nullptr;};
    inline string matchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
    inline DeleteQualityRelativeNodeRequest& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline DeleteQualityRelativeNodeRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteQualityRelativeNodeRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DeleteQualityRelativeNodeRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DeleteQualityRelativeNodeRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetNodeProjectId Field Functions 
    bool hasTargetNodeProjectId() const { return this->targetNodeProjectId_ != nullptr;};
    void deleteTargetNodeProjectId() { this->targetNodeProjectId_ = nullptr;};
    inline int64_t targetNodeProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetNodeProjectId_, 0L) };
    inline DeleteQualityRelativeNodeRequest& setTargetNodeProjectId(int64_t targetNodeProjectId) { DARABONBA_PTR_SET_VALUE(targetNodeProjectId_, targetNodeProjectId) };


    // targetNodeProjectName Field Functions 
    bool hasTargetNodeProjectName() const { return this->targetNodeProjectName_ != nullptr;};
    void deleteTargetNodeProjectName() { this->targetNodeProjectName_ = nullptr;};
    inline string targetNodeProjectName() const { DARABONBA_PTR_GET_DEFAULT(targetNodeProjectName_, "") };
    inline DeleteQualityRelativeNodeRequest& setTargetNodeProjectName(string targetNodeProjectName) { DARABONBA_PTR_SET_VALUE(targetNodeProjectName_, targetNodeProjectName) };


  protected:
    // The type of the compute engine or data source. Valid values:
    // 
    // *   cdh
    // *   analyticdb_for_mysql
    // *   odps
    // *   emr
    // *   hadoop
    // *   holodb
    // *   hybriddb_for_postgresql
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The partition filter expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> matchExpression_ = nullptr;
    // The ID of the node.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the compute engine instance or data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the table that is generated by the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the workspace to which the node associated with the partition filter expression belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> targetNodeProjectId_ = nullptr;
    // The name of the workspace to which the node associated with the partition filter expression belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetNodeProjectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
