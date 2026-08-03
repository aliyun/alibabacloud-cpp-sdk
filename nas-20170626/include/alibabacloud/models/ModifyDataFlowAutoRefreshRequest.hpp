// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATAFLOWAUTOREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATAFLOWAUTOREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyDataFlowAutoRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ModifyDataFlowAutoRefreshRequest() = default ;
    ModifyDataFlowAutoRefreshRequest(const ModifyDataFlowAutoRefreshRequest &) = default ;
    ModifyDataFlowAutoRefreshRequest(ModifyDataFlowAutoRefreshRequest &&) = default ;
    ModifyDataFlowAutoRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataFlowAutoRefreshRequest() = default ;
    ModifyDataFlowAutoRefreshRequest& operator=(const ModifyDataFlowAutoRefreshRequest &) = default ;
    ModifyDataFlowAutoRefreshRequest& operator=(ModifyDataFlowAutoRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRefreshInterval_ == nullptr
        && this->autoRefreshPolicy_ == nullptr && this->clientToken_ == nullptr && this->dataFlowId_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr; };
    // autoRefreshInterval Field Functions 
    bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
    void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
    inline int64_t getAutoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
    inline ModifyDataFlowAutoRefreshRequest& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


    // autoRefreshPolicy Field Functions 
    bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
    void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
    inline string getAutoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDataFlowAutoRefreshRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The automatic update interval. CPFS checks the directory for data updates at each interval. If data updates exist, an automatic update task is started. Unit: minutes.
    // 
    // Valid values: 5 to 526600. Default value: 10.
    shared_ptr<int64_t> autoRefreshInterval_ {};
    // The automatic update policy. This policy specifies how data updates from the source are imported to CPFS after the source data is updated. Valid values:
    // 
    // - None: Data updates from the source are not automatically imported to CPFS. You can import source data updates by using a dataflow task.
    // - ImportChanged: Data updates from the source are automatically imported to CPFS.
    shared_ptr<string> autoRefreshPolicy_ {};
    // Ensures the idempotency of the request. Generate a parameter value from your client to ensure that the value is unique across different requests.
    // 
    // ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotency](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The dataflow ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating an instance or incurring fees.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without creating an instance. The check items include whether required parameters are specified, the request format, business limits, and NAS inventory. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but FileSystemId is empty.
    // - false (default): Sends a normal request. After the check succeeds, the instance is directly created.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
