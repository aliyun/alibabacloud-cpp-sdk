// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateCacheAnalysisJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCacheAnalysisJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Separators, separators_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCacheAnalysisJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Separators, separators_);
    };
    CreateCacheAnalysisJobRequest() = default ;
    CreateCacheAnalysisJobRequest(const CreateCacheAnalysisJobRequest &) = default ;
    CreateCacheAnalysisJobRequest(CreateCacheAnalysisJobRequest &&) = default ;
    CreateCacheAnalysisJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCacheAnalysisJobRequest() = default ;
    CreateCacheAnalysisJobRequest& operator=(const CreateCacheAnalysisJobRequest &) = default ;
    CreateCacheAnalysisJobRequest& operator=(CreateCacheAnalysisJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupSetId_ != nullptr
        && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->separators_ != nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateCacheAnalysisJobRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCacheAnalysisJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateCacheAnalysisJobRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // separators Field Functions 
    bool hasSeparators() const { return this->separators_ != nullptr;};
    void deleteSeparators() { this->separators_ = nullptr;};
    inline string separators() const { DARABONBA_PTR_GET_DEFAULT(separators_, "") };
    inline CreateCacheAnalysisJobRequest& setSeparators(string separators) { DARABONBA_PTR_SET_VALUE(separators_, separators) };


  protected:
    // The ID of the backup file. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query the ID.
    // 
    // *   If you need to specify multiple backup file IDs, separate them with commas (,). For example, you can set this parameter to `12345,67890`.
    // *   If you do not specify this parameter, the system automatically backs up the task and performs cache analysis on the backup file.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The ID of the ApsaraDB for Redis instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the data node on the instance. You can specify this parameter to query the monitoring information about the specified node.
    // 
    // >  If you specify the BackupSetId parameter, the system ignores the NodeId parameter. You can call the [DescribeLogicInstanceTopology](https://help.aliyun.com/document_detail/473786.html) operation to query the node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The delimiters used to identify the prefixes of keys. You do not need to specify this parameter if one or more of the following default delimiters are used: `: ; , _ - + @ = | #`
    std::shared_ptr<string> separators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
