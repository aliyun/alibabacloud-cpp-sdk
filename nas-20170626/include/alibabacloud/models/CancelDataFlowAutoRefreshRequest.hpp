// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELDATAFLOWAUTOREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELDATAFLOWAUTOREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelDataFlowAutoRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
    };
    friend void from_json(const Darabonba::Json& j, CancelDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
    };
    CancelDataFlowAutoRefreshRequest() = default ;
    CancelDataFlowAutoRefreshRequest(const CancelDataFlowAutoRefreshRequest &) = default ;
    CancelDataFlowAutoRefreshRequest(CancelDataFlowAutoRefreshRequest &&) = default ;
    CancelDataFlowAutoRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelDataFlowAutoRefreshRequest() = default ;
    CancelDataFlowAutoRefreshRequest& operator=(const CancelDataFlowAutoRefreshRequest &) = default ;
    CancelDataFlowAutoRefreshRequest& operator=(CancelDataFlowAutoRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataFlowId_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->refreshPath_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelDataFlowAutoRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CancelDataFlowAutoRefreshRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CancelDataFlowAutoRefreshRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelDataFlowAutoRefreshRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // refreshPath Field Functions 
    bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
    void deleteRefreshPath() { this->refreshPath_ = nullptr;};
    inline string getRefreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
    inline CancelDataFlowAutoRefreshRequest& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


  protected:
    // Ensures the idempotence of the request. Generate a unique parameter value from your client to ensure that the value is unique among different requests.
    // 
    // The value of ClientToken can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The data flow ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating the instance or incurring fees.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without creating the data flow. The dry run checks whether required parameters are specified, whether the request format is valid, and whether business dependencies are met. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but DataFlowId is empty.
    // - false (default): Sends a normal request. After the check succeeds, the instance is directly created.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The directory for which you want to cancel the automatic update configuration.
    // 
    // Limits:
    // 
    // - The length must be 2 to 1,024 characters.
    // - The value must be encoded in UTF-8.
    // - The value must start and end with a forward slash (/).
    // 
    // > The directory must be an existing directory in CPFS and must be in a fileset for which data flow is enabled.
    // 
    // This parameter is required.
    shared_ptr<string> refreshPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
