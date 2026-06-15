// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELDATAFLOWTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELDATAFLOWTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelDataFlowTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelDataFlowTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelDataFlowTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelDataFlowTaskRequest() = default ;
    CancelDataFlowTaskRequest(const CancelDataFlowTaskRequest &) = default ;
    CancelDataFlowTaskRequest(CancelDataFlowTaskRequest &&) = default ;
    CancelDataFlowTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelDataFlowTaskRequest() = default ;
    CancelDataFlowTaskRequest& operator=(const CancelDataFlowTaskRequest &) = default ;
    CancelDataFlowTaskRequest& operator=(CancelDataFlowTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataFlowId_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->taskId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelDataFlowTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CancelDataFlowTaskRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CancelDataFlowTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelDataFlowTaskRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelDataFlowTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // A client-generated token that you can use to ensure the idempotence of the request. The token must be unique across different requests.
    // 
    // The `ClientToken` value must be an ASCII string of 64 characters or less. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the `ClientToken`. The request ID is unique for each request.
    shared_ptr<string> clientToken_ {};
    // The data flow ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // Specifies whether to perform a dry run for the request.
    // 
    // A dry run checks for parameter validity and resource availability without actually canceling the task or incurring charges.
    // 
    // Valid values:
    // 
    // - `true`: Performs a dry run. The system checks the request for potential issues, including missing parameters, invalid formats, and service limits. If the check fails, the system returns an error message; otherwise, it returns a success code.
    // 
    // - `false` (default): Sends a normal request. After the request passes the check, the task is canceled.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - For a general-purpose CPFS instance, the ID must start with `cpfs-`, for example, `cpfs-125487****`.
    // 
    // - For a CPFS for AI Computing instance, the ID must start with `bmcpfs-`, for example, `bmcpfs-0015****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The data flow task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
