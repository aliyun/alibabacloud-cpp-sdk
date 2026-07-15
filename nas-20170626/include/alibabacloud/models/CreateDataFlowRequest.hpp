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
      // The auto-refresh directory. CPFS General-purpose registers data modification events from the source storage and checks whether the source data in this directory has been updated, then automatically imports the updated data.
      // 
      // The default value is empty, which means that data updates in the source storage are not automatically imported to CPFS General-purpose. You must manually create a task to import updates.
      // 
      // Limits:
      // 
      // - The path must be 2 to 1024 characters in length.
      // - UTF-8 encoding is used.
      // - The path must start and end with a forward slash (/).
      // - The directory must be an existing directory in the CPFS General-purpose file system and must be located within the Fileset directory of the data flow.
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
    // The auto-refresh interval. CPFS General-purpose checks the directory for data updates at this interval. If data updates exist, an auto-refresh task is started. Unit: minutes.
    // 
    // Valid values: 10 to 525600. Default value: 10.
    // > This parameter takes effect only when the file system type is CPFS General-purpose.
    shared_ptr<int64_t> autoRefreshInterval_ {};
    // The auto-refresh policy. Specifies the policy for importing data updates from the source storage to CPFS General-purpose after the source data is updated. Valid values:
    // 
    // - None (default): Data updates in the source storage are not automatically imported to CPFS General-purpose. You can import data updates from the source storage by using a data flow task.
    // - ImportChanged: Data updates in the source storage are automatically imported to CPFS General-purpose.
    // > This parameter takes effect only when the file system type is CPFS General-purpose.
    shared_ptr<string> autoRefreshPolicy_ {};
    // The auto-refresh configuration collection.
    // > This parameter takes effect only when the file system type is CPFS General-purpose.
    shared_ptr<vector<CreateDataFlowRequest::AutoRefreshs>> autoRefreshs_ {};
    // Ensures the idempotence of the request. Generate a parameter value from your client to ensure that the value is unique across different requests.
    // 
    // ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the data flow.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter.
    // - The description cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this create request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating the instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without creating the instance. The check items include required parameters, request format, business limits, and NAS inventory. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but FileSystemId is empty.
    // - false (default): Sends a normal request and creates the instance after the check is passed.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - CPFS General-purpose: must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The directory in the CPFS for Lingjun file system. Limits:
    // - The path must start and end with a forward slash (/).
    // 
    // - The directory must be an existing directory in the CPFS for Lingjun file system.
    // 
    // - The path must be 1 to 1023 characters in length.
    // 
    // - UTF-8 encoding is used.
    // 
    // > This parameter is required when the file system type is CPFS for Lingjun.
    shared_ptr<string> fileSystemPath_ {};
    // The Fileset ID.
    // > This parameter is required when the file system type is CPFS General-purpose.
    shared_ptr<string> fsetId_ {};
    // The security protection type of the source storage. If the source storage must be accessed through security protection, specify the security protection type. Valid values:
    // 
    // - None (default): The source storage does not require security protection for access.
    // - SSL: Access is protected by an SSL certificate.
    shared_ptr<string> sourceSecurityType_ {};
    // The access address of the source storage. Format: `<storage type>://[<account id>:]<path>`.
    // 
    // Where:
    // 
    // - storage type: only oss is supported.
    // - account id: optional. The UID of the account that owns the source storage. This parameter is required when you use cross-account OSS.
    // - path: the name of the OSS bucket. Limits:
    // 
    //     - Only lowercase letters, digits, and hyphens (-) are supported. The name must start and end with a lowercase letter or digit.
    // 
    //     - The maximum length is 128 characters.
    // 
    //     - UTF-8 encoding is used.
    // 
    // > - The OSS bucket must be an existing bucket in the region.
    // > - The account id parameter is supported only by CPFS for Lingjun 2.6.0 and later.
    // 
    // This parameter is required.
    shared_ptr<string> sourceStorage_ {};
    // The access path within the source storage bucket. Limits:
    // 
    //    - The path must start and end with a forward slash (/).
    // 
    // - The path is case-sensitive.
    // 
    // - The path must be 1 to 1023 characters in length.
    // 
    // - UTF-8 encoding is used.
    // 
    // > This parameter is required when the file system type is CPFS for Lingjun.
    shared_ptr<string> sourceStoragePath_ {};
    // The maximum transfer bandwidth of the data flow. Unit: MB/s. Valid values: 
    // 
    // - 600
    // - 1200
    // - 1500
    // 
    // > The transfer bandwidth of the data flow must be less than the I/O bandwidth of the file system.
    // > This parameter is required when the file system type is CPFS General-purpose.
    shared_ptr<int64_t> throughput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
