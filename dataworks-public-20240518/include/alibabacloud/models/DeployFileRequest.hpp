// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeployFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeployFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    DeployFileRequest() = default ;
    DeployFileRequest(const DeployFileRequest &) = default ;
    DeployFileRequest(DeployFileRequest &&) = default ;
    DeployFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployFileRequest() = default ;
    DeployFileRequest& operator=(const DeployFileRequest &) = default ;
    DeployFileRequest& operator=(DeployFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->fileId_ == nullptr && this->nodeId_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DeployFileRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline DeployFileRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline DeployFileRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeployFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline DeployFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The description of the deployment.
    shared_ptr<string> comment_ {};
    // The ID of the file. You can call [ListFiles](https://help.aliyun.com/document_detail/173942.html) to query the file ID. You need to specify only one of this parameter and the NodeId parameter settings.
    shared_ptr<int64_t> fileId_ {};
    // The ID of the node in the scheduling system that corresponds to the file to be published.
    // 
    // You need to specify only one of this parameter and the FileId parameter settings.
    shared_ptr<int64_t> nodeId_ {};
    // The ID of the DataWorks workspace.
    // 
    // You can log on to the DataWorks console and go to the workspace configuration page to obtain the workspace ID. You must specify either this parameter or ProjectIdentifier to determine the DataWorks workspace for this API call.
    shared_ptr<int64_t> projectId_ {};
    // The name of the DataWorks workspace.
    // 
    // You can log on to the DataWorks console and go to the workspace configuration page to obtain the workspace name. You must specify either this parameter or ProjectId to determine the DataWorks workspace for this API call.
    shared_ptr<string> projectIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
