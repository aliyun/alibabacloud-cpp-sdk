// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_TO_JSON(AutoRefreshs, autoRefreshs_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(SourceSecurityType, sourceSecurityType_);
      DARABONBA_PTR_TO_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_TO_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshs, autoRefreshs_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(SourceSecurityType, sourceSecurityType_);
      DARABONBA_PTR_FROM_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_FROM_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
    };
    CreateDataFlowRequest() = default ;
    CreateDataFlowRequest(const CreateDataFlowRequest &) = default ;
    CreateDataFlowRequest(CreateDataFlowRequest &&) = default ;
    CreateDataFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowRequest() = default ;
    CreateDataFlowRequest& operator=(const CreateDataFlowRequest &) = default ;
    CreateDataFlowRequest& operator=(CreateDataFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoRefreshs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoRefreshs& obj) { 
        DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
      };
      friend void from_json(const Darabonba::Json& j, AutoRefreshs& obj) { 
        DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
      };
      AutoRefreshs() = default ;
      AutoRefreshs(const AutoRefreshs &) = default ;
      AutoRefreshs(AutoRefreshs &&) = default ;
      AutoRefreshs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoRefreshs() = default ;
      AutoRefreshs& operator=(const AutoRefreshs &) = default ;
      AutoRefreshs& operator=(AutoRefreshs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->refreshPath_ == nullptr; };
      // refreshPath Field Functions 
      bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
      void deleteRefreshPath() { this->refreshPath_ = nullptr;};
      inline string getRefreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
      inline AutoRefreshs& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


    protected:
      // The automatic update directory. CPFS registers the data update event in the source storage, and automatically checks whether the source data in the directory is updated and imports the updated data.
      // 
      // This parameter is empty by default. Updated data in the source storage is not automatically imported into the CPFS file system. You must import the updated data by running a manual task.
      // 
      // Limits:
      // 
      // *   The directory must be 2 to 1,024 characters in length.
      // *   The directory must be encoded in UTF-8.
      // *   The directory must start and end with a forward slash (/).
      // *   The directory must be an existing directory in the CPFS file system and must be in a fileset where the data flow is enabled.
      shared_ptr<string> refreshPath_ {};
    };

    virtual bool empty() const override { return this->autoRefreshInterval_ == nullptr
        && this->autoRefreshPolicy_ == nullptr && this->autoRefreshs_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr
        && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr && this->fsetId_ == nullptr && this->sourceSecurityType_ == nullptr && this->sourceStorage_ == nullptr
        && this->sourceStoragePath_ == nullptr && this->throughput_ == nullptr; };
    // autoRefreshInterval Field Functions 
    bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
    void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
    inline int64_t getAutoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
    inline CreateDataFlowRequest& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


    // autoRefreshPolicy Field Functions 
    bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
    void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
    inline string getAutoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
    inline CreateDataFlowRequest& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


    // autoRefreshs Field Functions 
    bool hasAutoRefreshs() const { return this->autoRefreshs_ != nullptr;};
    void deleteAutoRefreshs() { this->autoRefreshs_ = nullptr;};
    inline const vector<CreateDataFlowRequest::AutoRefreshs> & getAutoRefreshs() const { DARABONBA_PTR_GET_CONST(autoRefreshs_, vector<CreateDataFlowRequest::AutoRefreshs>) };
    inline vector<CreateDataFlowRequest::AutoRefreshs> getAutoRefreshs() { DARABONBA_PTR_GET(autoRefreshs_, vector<CreateDataFlowRequest::AutoRefreshs>) };
    inline CreateDataFlowRequest& setAutoRefreshs(const vector<CreateDataFlowRequest::AutoRefreshs> & autoRefreshs) { DARABONBA_PTR_SET_VALUE(autoRefreshs_, autoRefreshs) };
    inline CreateDataFlowRequest& setAutoRefreshs(vector<CreateDataFlowRequest::AutoRefreshs> && autoRefreshs) { DARABONBA_PTR_SET_RVALUE(autoRefreshs_, autoRefreshs) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataFlowRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataFlowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDataFlowRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDataFlowRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline CreateDataFlowRequest& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline CreateDataFlowRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // sourceSecurityType Field Functions 
    bool hasSourceSecurityType() const { return this->sourceSecurityType_ != nullptr;};
    void deleteSourceSecurityType() { this->sourceSecurityType_ = nullptr;};
    inline string getSourceSecurityType() const { DARABONBA_PTR_GET_DEFAULT(sourceSecurityType_, "") };
    inline CreateDataFlowRequest& setSourceSecurityType(string sourceSecurityType) { DARABONBA_PTR_SET_VALUE(sourceSecurityType_, sourceSecurityType) };


    // sourceStorage Field Functions 
    bool hasSourceStorage() const { return this->sourceStorage_ != nullptr;};
    void deleteSourceStorage() { this->sourceStorage_ = nullptr;};
    inline string getSourceStorage() const { DARABONBA_PTR_GET_DEFAULT(sourceStorage_, "") };
    inline CreateDataFlowRequest& setSourceStorage(string sourceStorage) { DARABONBA_PTR_SET_VALUE(sourceStorage_, sourceStorage) };


    // sourceStoragePath Field Functions 
    bool hasSourceStoragePath() const { return this->sourceStoragePath_ != nullptr;};
    void deleteSourceStoragePath() { this->sourceStoragePath_ = nullptr;};
    inline string getSourceStoragePath() const { DARABONBA_PTR_GET_DEFAULT(sourceStoragePath_, "") };
    inline CreateDataFlowRequest& setSourceStoragePath(string sourceStoragePath) { DARABONBA_PTR_SET_VALUE(sourceStoragePath_, sourceStoragePath) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int64_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
    inline CreateDataFlowRequest& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


  protected:
    // The automatic update interval. CPFS checks whether data is updated in the directory at the interval specified by this parameter. If data is updated, CPFS starts an automatic update task. Unit: minutes.
    // 
    // Valid values: 10 to 525600. Default value: 10.
    // 
    // >  This parameter takes effect only for CPFS file systems.
    shared_ptr<int64_t> autoRefreshInterval_ {};
    // The automatic update policy. The updated data in the source storage is imported into the CPFS file system based on the policy.
    // 
    // *   None (default): Updated data in the source storage is not automatically imported into the CPFS file system. You can run a data flow task to import the updated data from the source storage.
    // *   ImportChanged: Updated data in the source storage is automatically imported into the CPFS file system.
    // 
    // >  This parameter takes effect only for CPFS file systems.
    shared_ptr<string> autoRefreshPolicy_ {};
    // The automatic update configurations.
    // 
    // >  This parameter takes effect only for CPFS file systems.
    shared_ptr<vector<CreateDataFlowRequest::AutoRefreshs>> autoRefreshs_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The value of RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the dataflow.
    // 
    // Limits:
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   The description must start with a letter but cannot start with `http://` or `https://`.
    // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no file system is created and no fee is incurred.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, limits, and available NAS resources. If the request fails the dry run, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned. No value is returned for the FileSystemId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a file system is created.
    shared_ptr<bool> dryRun_ {};
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-125487\\*\\*\\*\\*.
    // *   The IDs of CPFS for Lingjun file systems must start with `bmcpfs-`. Example: bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The directory in the CPFS for LINGJUN file system. Limits:
    // 
    // *   The directory must start and end with a forward slash (/).
    // *   The directory must be an existing directory in the CPFS for LINGJUN file system.
    // *   The directory must be 1 to 1023 characters in length.
    // *   The directory must be encoded in UTF-8.
    // 
    // >  This parameter is required for CPFS for LINGJUN file systems.
    shared_ptr<string> fileSystemPath_ {};
    // The fileset ID.
    // 
    // >  This parameter is required for CPFS file systems.
    shared_ptr<string> fsetId_ {};
    // The type of security mechanism for the source storage. This parameter must be specified if the source storage is accessed with a security mechanism. Valid values:
    // 
    // *   None (default): The source storage can be accessed without a security mechanism.
    // *   SSL: The source storage must be accessed with an SSL certificate.
    shared_ptr<string> sourceSecurityType_ {};
    // The access path of the source storage. Format: `<storage type>://[<account id>:]<path>`.
    // 
    // Parameters:
    // 
    // *   storage type: Only OSS is supported.
    // 
    // *   account id (optional): the UID of the account of the source storage. This parameter is required when you use OSS buckets across accounts.
    // 
    // *   path: the name of the OSS bucket. Limits:
    // 
    //     *   The name can contain only lowercase letters, digits, and hyphens (-). The name must start and end with a lowercase letter or digit.
    //     *   The name can be up to 128 characters in length.
    //     *   The name must be encoded in UTF-8.
    // 
    // > *   The OSS bucket must be an existing bucket in the region.
    // > *   Only CPFS for LINGJUN V2.6.0 and later support the account id parameter.
    // 
    // This parameter is required.
    shared_ptr<string> sourceStorage_ {};
    // The access path in the bucket of the source storage. Limits:
    // 
    // *   The path must start and end with a forward slash (/).
    // *   The path is case-sensitive.
    // *   The path must be 1 to 1023 characters in length.
    // *   The path must be encoded in UTF-8.
    // 
    // >  This parameter is required for CPFS for LINGJUN file systems.
    shared_ptr<string> sourceStoragePath_ {};
    // The maximum data flow throughput. Unit: MB/s. Valid values:
    // 
    // *   600
    // *   1200
    // *   1500
    // 
    // >  The data flow throughput must be less than the I/O throughput of the file system. This parameter is required for CPFS file systems.
    shared_ptr<int64_t> throughput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
