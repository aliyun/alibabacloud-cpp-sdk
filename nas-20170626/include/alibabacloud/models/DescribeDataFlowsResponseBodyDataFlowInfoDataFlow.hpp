// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFODATAFLOW_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFODATAFLOW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsResponseBodyDataFlowInfoDataFlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefresh, autoRefresh_);
      DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(FsetDescription, fsetDescription_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(SourceSecurityType, sourceSecurityType_);
      DARABONBA_PTR_TO_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_TO_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefresh, autoRefresh_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(FsetDescription, fsetDescription_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(SourceSecurityType, sourceSecurityType_);
      DARABONBA_PTR_FROM_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_FROM_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow(const DescribeDataFlowsResponseBodyDataFlowInfoDataFlow &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow(DescribeDataFlowsResponseBodyDataFlowInfoDataFlow &&) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsResponseBodyDataFlowInfoDataFlow() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& operator=(const DescribeDataFlowsResponseBodyDataFlowInfoDataFlow &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& operator=(DescribeDataFlowsResponseBodyDataFlowInfoDataFlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRefresh_ == nullptr
        && return this->autoRefreshInterval_ == nullptr && return this->autoRefreshPolicy_ == nullptr && return this->createTime_ == nullptr && return this->dataFlowId_ == nullptr && return this->description_ == nullptr
        && return this->errorMessage_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemPath_ == nullptr && return this->fsetDescription_ == nullptr && return this->fsetId_ == nullptr
        && return this->sourceSecurityType_ == nullptr && return this->sourceStorage_ == nullptr && return this->sourceStoragePath_ == nullptr && return this->status_ == nullptr && return this->throughput_ == nullptr
        && return this->updateTime_ == nullptr; };
    // autoRefresh Field Functions 
    bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
    void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
    inline const Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh & autoRefresh() const { DARABONBA_PTR_GET_CONST(autoRefresh_, Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh) };
    inline Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh autoRefresh() { DARABONBA_PTR_GET(autoRefresh_, Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setAutoRefresh(const Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh & autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setAutoRefresh(Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh && autoRefresh) { DARABONBA_PTR_SET_RVALUE(autoRefresh_, autoRefresh) };


    // autoRefreshInterval Field Functions 
    bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
    void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
    inline int64_t autoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


    // autoRefreshPolicy Field Functions 
    bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
    void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
    inline string autoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string fileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // fsetDescription Field Functions 
    bool hasFsetDescription() const { return this->fsetDescription_ != nullptr;};
    void deleteFsetDescription() { this->fsetDescription_ = nullptr;};
    inline string fsetDescription() const { DARABONBA_PTR_GET_DEFAULT(fsetDescription_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setFsetDescription(string fsetDescription) { DARABONBA_PTR_SET_VALUE(fsetDescription_, fsetDescription) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string fsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // sourceSecurityType Field Functions 
    bool hasSourceSecurityType() const { return this->sourceSecurityType_ != nullptr;};
    void deleteSourceSecurityType() { this->sourceSecurityType_ = nullptr;};
    inline string sourceSecurityType() const { DARABONBA_PTR_GET_DEFAULT(sourceSecurityType_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setSourceSecurityType(string sourceSecurityType) { DARABONBA_PTR_SET_VALUE(sourceSecurityType_, sourceSecurityType) };


    // sourceStorage Field Functions 
    bool hasSourceStorage() const { return this->sourceStorage_ != nullptr;};
    void deleteSourceStorage() { this->sourceStorage_ = nullptr;};
    inline string sourceStorage() const { DARABONBA_PTR_GET_DEFAULT(sourceStorage_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setSourceStorage(string sourceStorage) { DARABONBA_PTR_SET_VALUE(sourceStorage_, sourceStorage) };


    // sourceStoragePath Field Functions 
    bool hasSourceStoragePath() const { return this->sourceStoragePath_ != nullptr;};
    void deleteSourceStoragePath() { this->sourceStoragePath_ = nullptr;};
    inline string sourceStoragePath() const { DARABONBA_PTR_GET_DEFAULT(sourceStoragePath_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setSourceStoragePath(string sourceStoragePath) { DARABONBA_PTR_SET_VALUE(sourceStoragePath_, sourceStoragePath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int64_t throughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlow& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The details about automatic update policies.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh> autoRefresh_ = nullptr;
    // The automatic update interval. CPFS checks whether data is updated in the directory at the interval specified by this parameter. If data is updated, CPFS starts an automatic update task. Unit: minutes.
    // 
    // Valid values: 5 to 526600. Default value: 10.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<int64_t> autoRefreshInterval_ = nullptr;
    // The automatic update policy. The updated data in the source storage is imported into the CPFS file system based on the policy. Valid values:
    // 
    // *   None: Updated data in the source storage is not automatically imported into the CPFS file system. You can run a data flow task to import the updated data from the source storage.
    // *   ImportChanged: Updated data in the source storage is automatically imported into the CPFS file system.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<string> autoRefreshPolicy_ = nullptr;
    // The time when the fileset was created.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The dataflow ID.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The description of the dataflow.
    // 
    // Limits:
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   The description must start with a letter but cannot start with `http://` or `https://`.
    // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // The error message returned. Valid values:
    // 
    // *   None (default): The dataflow status is normal.
    // *   SourceStorageUnreachable: The access path of the source storage is not found.
    // *   ThroughputTooLow: The dataflow throughput is low.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The directory of the fileset in the CPFS file system.
    // 
    // Limits:
    // 
    // *   The directory must be 2 to 1,024 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   The directory must start and end with a forward slash (/).
    // *   The directory must be a fileset directory in the CPFS file system.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<string> fileSystemPath_ = nullptr;
    // The description of the automatic update.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<string> fsetDescription_ = nullptr;
    // The fileset ID.
    std::shared_ptr<string> fsetId_ = nullptr;
    // The type of security mechanism for the source storage. This parameter must be specified if the source storage is accessed with a security mechanism. Valid values:
    // 
    // *   None (default): The source storage can be accessed without a security mechanism.
    // *   SSL: The source storage must be accessed with an SSL certificate.
    std::shared_ptr<string> sourceSecurityType_ = nullptr;
    // The access path of the source storage. Format: `<storage type>://<path>`.
    // 
    // Parameters:
    // 
    // *   storage type: Only Object Storage Service (OSS) is supported.
    // 
    // *   path: the name of the OSS bucket.
    // 
    //     *   The name can contain only lowercase letters, digits, and hyphens (-). The name must start and end with a lowercase letter or digit.
    //     *   The name must be 8 to 128 characters in length.
    //     *   The name must be encoded in UTF-8.
    //     *   The name cannot start with http:// or https://.
    // 
    // >  The OSS bucket must be an existing bucket in the region.
    std::shared_ptr<string> sourceStorage_ = nullptr;
    // The access path in the bucket of the source storage.
    // 
    // >  Only CPFS for LINGJUN supports this parameter.
    std::shared_ptr<string> sourceStoragePath_ = nullptr;
    // The dataflow status. Valid values:
    // 
    // *   Starting: The dataflow is being created or enabled.
    // *   Running: The dataflow has been created and is running properly.
    // *   Updating: The dataflow is being modified. For example, the dataflow throughput is increased and the automatic update interval is modified.
    // *   Deleting: The dataflow is being deleted.
    // *   Stopping: The dataflow is being disabled.
    // *   Stopped: The dataflow has been disabled.
    // *   Misconfigured: The dataflow configuration is abnormal. For example, the source storage is inaccessible, and the automatic update cannot be completed due to low dataflow throughput.
    std::shared_ptr<string> status_ = nullptr;
    // The maximum dataflow throughput. Unit: MB/s. Valid values:
    // 
    // *   600
    // *   1,200
    // *   1,500
    // 
    // >  The dataflow throughput must be less than the I/O throughput of the file system.
    std::shared_ptr<int64_t> throughput_ = nullptr;
    // The time when the fileset was last updated.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
