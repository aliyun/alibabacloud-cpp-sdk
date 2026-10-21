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
      // The auto-refresh directory. General-purpose CPFS registers data modification events of the source storage, checks whether the source data in this directory is updated, and automatically imports the updated data.
      // 
      // By default, this parameter is empty. Data updates in the source storage are not automatically imported to General-purpose CPFS. You must create a manual task to import the updates.
      // 
      // Limits:
      // 
      // - The directory must be 2 to 1,024 characters in length.
      // - The directory must be encoded in UTF-8.
      // - The directory must start and end with a forward slash (/).
      // - The directory must already exist in General-purpose CPFS and must be located in the fileset directory of the data flow.
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
    // The auto-refresh interval. General-purpose CPFS checks whether data updates exist in the directory at this interval. If data updates exist, an auto-refresh task is started. Unit: minutes.
    // 
    // Valid values: 10 to 525600. Default value: 10.
    // > This parameter takes effect only when the file system type is General-purpose CPFS.
    shared_ptr<int64_t> autoRefreshInterval_ {};
    // The auto-refresh policy. This policy determines how data updates from the source storage are imported to General-purpose CPFS.
    // 
    // - None: Data updates from the source storage are not automatically imported to General-purpose CPFS. You can use a data flow task to import the updates. This is the default value.
    // - ImportChanged: Data updates from the source storage are automatically imported to General-purpose CPFS.
    // > This parameter takes effect only when the file system type is General-purpose CPFS.
    shared_ptr<string> autoRefreshPolicy_ {};
    // The auto-refresh configurations.
    // > This parameter takes effect only when the file system type is General-purpose CPFS.
    shared_ptr<vector<CreateDataFlowRequest::AutoRefreshs>> autoRefreshs_ {};
    // The client token that is used to ensure the idempotence of the request. You can generate the token on your client to ensure that the token is unique across different requests.
    // 
    // The client token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the data flow. 
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run on the creation request.
    // 
    // A dry run helps you check parameter validity and resource availability without actually creating the instance or incurring fees.
    // 
    // Valid values:
    // 
    // - true: A dry run is performed and no instance is created. The system checks whether required parameters are specified, the request format, business limits, and NAS resource availability. If the request fails the dry run, an error is returned. If the request passes the dry run, the HTTP status code 200 is returned, but the FileSystemId parameter is empty.
    // - false: A regular request is sent. If the request passes the dry run, the instance is created. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - General-purpose CPFS: The ID must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: The ID must start with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The directory in the CPFS for Lingjun file system. Limits:
    // 
    // - The directory must start and end with a forward slash (/).
    // 
    // - The directory must already exist in the CPFS for Lingjun file system.
    // 
    // - The directory must be 1 to 1,023 characters in length.
    // 
    // - The directory must be encoded in UTF-8.
    // 
    // > This parameter is required when the file system type is CPFS for Lingjun.
    shared_ptr<string> fileSystemPath_ {};
    // The fileset ID.
    // > This parameter is required when the file system type is General-purpose CPFS.
    shared_ptr<string> fsetId_ {};
    // The security protection type of the source storage. If the source storage must be accessed through security protection, specify the security protection type. Valid values:
    // 
    // - None: The source storage does not require security protection for access. This is the default value.
    // - SSL: Access is protected by an SSL certificate.
    shared_ptr<string> sourceSecurityType_ {};
    // The access address of the source storage. Format: `<storage type>://[<account id>:]<path>`.
    // 
    // Where:
    // 
    // - storage type: Only oss is supported.
    // - account id: Optional. The UID of the account to which the source storage belongs. This parameter is required when you use a cross-account OSS bucket.
    // - path: The name of the OSS bucket. Limits:
    // 
    //     - The name can contain only lowercase letters, digits, and hyphens (-), and must start and end with a lowercase letter or a digit.
    // 
    //     - The name can be up to 128 characters in length.
    // 
    //     - The name must be encoded in UTF-8.
    // 
    // > - The OSS bucket must already exist in the region.
    // > - The account id parameter is supported only in CPFS for Lingjun 2.6.0 and later.
    // 
    // This parameter is required.
    shared_ptr<string> sourceStorage_ {};
    // The access path in the source storage bucket. Limits:
    // 
    // - The path must start and end with a forward slash (/).
    // 
    // - The path is case-sensitive.
    // 
    // - The path must be 1 to 1,023 characters in length.
    // 
    // - The path must be encoded in UTF-8.
    // 
    // > This parameter is required when the file system type is CPFS for Lingjun.
    shared_ptr<string> sourceStoragePath_ {};
    // The maximum transmission bandwidth of the data flow. Unit: MB/s. Valid values: 
    // 
    // - 600
    // - 1200
    // - 1500
    // 
    // > The transmission bandwidth of the data flow must be less than the I/O bandwidth of the file system.
    // > This parameter is required when the file system type is General-purpose CPFS.
    shared_ptr<int64_t> throughput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
