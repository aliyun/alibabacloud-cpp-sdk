// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATAFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATAFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyDataFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
    };
    ModifyDataFlowRequest() = default ;
    ModifyDataFlowRequest(const ModifyDataFlowRequest &) = default ;
    ModifyDataFlowRequest(ModifyDataFlowRequest &&) = default ;
    ModifyDataFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataFlowRequest() = default ;
    ModifyDataFlowRequest& operator=(const ModifyDataFlowRequest &) = default ;
    ModifyDataFlowRequest& operator=(ModifyDataFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataFlowId_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->throughput_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDataFlowRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline ModifyDataFlowRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDataFlowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDataFlowRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyDataFlowRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int64_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
    inline ModifyDataFlowRequest& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


  protected:
    // Ensures the idempotency of the request. Generate a parameter value from your client to ensure that the value is unique across different requests.
    // 
    // ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotency](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The data flow ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // The description of the data flow. 
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter and cannot start with http:// or https://.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating the instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a check request without creating the instance. The check items include whether required parameters are specified, the request format, business limitations, and NAS inventory. If the check fails, the corresponding error is returned. If the check passes, HTTP status code 200 is returned, but FileSystemId is empty.
    // - false (default): Sends a normal request. After the check passes, the instance is directly created.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - CPFS: The ID must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: The ID must start with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The maximum transmission bandwidth of the data flow. Unit: MB/s.
    // Valid values: 
    // 
    // - 600
    // - 1200
    // - 1500
    // 
    // > The transmission bandwidth of the data flow must be less than the I/O bandwidth of the file system. This parameter is required when the file system type is CPFS.
    shared_ptr<int64_t> throughput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
