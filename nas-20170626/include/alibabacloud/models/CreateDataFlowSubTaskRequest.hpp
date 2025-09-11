// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataFlowSubTaskRequestCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(DstFilePath, dstFilePath_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(SrcFilePath, srcFilePath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(DstFilePath, dstFilePath_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(SrcFilePath, srcFilePath_);
    };
    CreateDataFlowSubTaskRequest() = default ;
    CreateDataFlowSubTaskRequest(const CreateDataFlowSubTaskRequest &) = default ;
    CreateDataFlowSubTaskRequest(CreateDataFlowSubTaskRequest &&) = default ;
    CreateDataFlowSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowSubTaskRequest() = default ;
    CreateDataFlowSubTaskRequest& operator=(const CreateDataFlowSubTaskRequest &) = default ;
    CreateDataFlowSubTaskRequest& operator=(CreateDataFlowSubTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->condition_ != nullptr && this->dataFlowId_ != nullptr && this->dataFlowTaskId_ != nullptr && this->dryRun_ != nullptr && this->dstFilePath_ != nullptr
        && this->fileSystemId_ != nullptr && this->srcFilePath_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataFlowSubTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const CreateDataFlowSubTaskRequestCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, CreateDataFlowSubTaskRequestCondition) };
    inline CreateDataFlowSubTaskRequestCondition condition() { DARABONBA_PTR_GET(condition_, CreateDataFlowSubTaskRequestCondition) };
    inline CreateDataFlowSubTaskRequest& setCondition(const CreateDataFlowSubTaskRequestCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline CreateDataFlowSubTaskRequest& setCondition(CreateDataFlowSubTaskRequestCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CreateDataFlowSubTaskRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataFlowTaskId Field Functions 
    bool hasDataFlowTaskId() const { return this->dataFlowTaskId_ != nullptr;};
    void deleteDataFlowTaskId() { this->dataFlowTaskId_ = nullptr;};
    inline string dataFlowTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowTaskId_, "") };
    inline CreateDataFlowSubTaskRequest& setDataFlowTaskId(string dataFlowTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowTaskId_, dataFlowTaskId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDataFlowSubTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dstFilePath Field Functions 
    bool hasDstFilePath() const { return this->dstFilePath_ != nullptr;};
    void deleteDstFilePath() { this->dstFilePath_ = nullptr;};
    inline string dstFilePath() const { DARABONBA_PTR_GET_DEFAULT(dstFilePath_, "") };
    inline CreateDataFlowSubTaskRequest& setDstFilePath(string dstFilePath) { DARABONBA_PTR_SET_VALUE(dstFilePath_, dstFilePath) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDataFlowSubTaskRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // srcFilePath Field Functions 
    bool hasSrcFilePath() const { return this->srcFilePath_ != nullptr;};
    void deleteSrcFilePath() { this->srcFilePath_ = nullptr;};
    inline string srcFilePath() const { DARABONBA_PTR_GET_DEFAULT(srcFilePath_, "") };
    inline CreateDataFlowSubTaskRequest& setSrcFilePath(string srcFilePath) { DARABONBA_PTR_SET_VALUE(srcFilePath_, srcFilePath) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The check conditions. The check must be passed after the following conditions are specified.
    std::shared_ptr<CreateDataFlowSubTaskRequestCondition> condition_ = nullptr;
    // The ID of the data flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The ID of the data flow task.
    // 
    // >  Only the IDs of data streaming tasks are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowTaskId_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no data streaming subtask is created and no fee is incurred.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned. No value is returned for the DataFlowSubTaskId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a data streaming subtask is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The path of the destination file. Limits:
    // 
    // *   The path must be 1 to 1,023 characters in length.
    // *   The path must be encoded in UTF-8.
    // *   The path must start with a forward slash (/).
    // *   The path must end with the file name.
    // 
    // This parameter is required.
    std::shared_ptr<string> dstFilePath_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The path of the source file. Limits:
    // 
    // *   The path must be 1 to 1,023 characters in length.
    // *   The path must be encoded in UTF-8.
    // *   The path must start with a forward slash (/).
    // *   The path must end with the file name.
    // 
    // This parameter is required.
    std::shared_ptr<string> srcFilePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
