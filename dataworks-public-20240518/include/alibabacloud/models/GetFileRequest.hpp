// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    GetFileRequest() = default ;
    GetFileRequest(const GetFileRequest &) = default ;
    GetFileRequest(GetFileRequest &&) = default ;
    GetFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileRequest() = default ;
    GetFileRequest& operator=(const GetFileRequest &) = default ;
    GetFileRequest& operator=(GetFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->nodeId_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetFileRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetFileRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The ID of the file. You can invoke the [ListFiles](https://help.aliyun.com/document_detail/173942.html) API to query the ID of the corresponding file.
    shared_ptr<int64_t> fileId_ {};
    // The ID of the scheduling node. You can invoke the [ListFiles](https://help.aliyun.com/document_detail/173942.html) API to obtain the node ID.
    shared_ptr<int64_t> nodeId_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console), and go to the workspace configuration page to obtain the workspace ID.
    // 
    // You must specify either this parameter or the ProjectIdentifier parameter to identify the DataWorks workspace for this API call.
    shared_ptr<int64_t> projectId_ {};
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console), and go to the workspace configuration page to obtain the workspace name.
    // 
    // You must specify either this parameter or the ProjectId parameter to identify the DataWorks workspace for this API call.
    shared_ptr<string> projectIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
