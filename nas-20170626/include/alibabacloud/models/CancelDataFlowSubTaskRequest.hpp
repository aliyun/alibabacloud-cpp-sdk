// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELDATAFLOWSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELDATAFLOWSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelDataFlowSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelDataFlowSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_TO_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelDataFlowSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_FROM_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    CancelDataFlowSubTaskRequest() = default ;
    CancelDataFlowSubTaskRequest(const CancelDataFlowSubTaskRequest &) = default ;
    CancelDataFlowSubTaskRequest(CancelDataFlowSubTaskRequest &&) = default ;
    CancelDataFlowSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelDataFlowSubTaskRequest() = default ;
    CancelDataFlowSubTaskRequest& operator=(const CancelDataFlowSubTaskRequest &) = default ;
    CancelDataFlowSubTaskRequest& operator=(CancelDataFlowSubTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dataFlowId_ != nullptr && this->dataFlowSubTaskId_ != nullptr && this->dataFlowTaskId_ != nullptr && this->dryRun_ != nullptr && this->fileSystemId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelDataFlowSubTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CancelDataFlowSubTaskRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataFlowSubTaskId Field Functions 
    bool hasDataFlowSubTaskId() const { return this->dataFlowSubTaskId_ != nullptr;};
    void deleteDataFlowSubTaskId() { this->dataFlowSubTaskId_ = nullptr;};
    inline string dataFlowSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowSubTaskId_, "") };
    inline CancelDataFlowSubTaskRequest& setDataFlowSubTaskId(string dataFlowSubTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowSubTaskId_, dataFlowSubTaskId) };


    // dataFlowTaskId Field Functions 
    bool hasDataFlowTaskId() const { return this->dataFlowTaskId_ != nullptr;};
    void deleteDataFlowTaskId() { this->dataFlowTaskId_ = nullptr;};
    inline string dataFlowTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowTaskId_, "") };
    inline CancelDataFlowSubTaskRequest& setDataFlowTaskId(string dataFlowTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowTaskId_, dataFlowTaskId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CancelDataFlowSubTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelDataFlowSubTaskRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the data flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The ID of the data streaming task.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowSubTaskId_ = nullptr;
    // The ID of the data flow task.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowTaskId_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no data streaming task is created and no fee is incurred.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, service limits, and available File Storage NAS (NAS) resources. If the request fails the dry run, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a data streaming task is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
