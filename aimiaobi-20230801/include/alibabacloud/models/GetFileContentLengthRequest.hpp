// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILECONTENTLENGTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILECONTENTLENGTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetFileContentLengthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileContentLengthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileContentLengthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetFileContentLengthRequest() = default ;
    GetFileContentLengthRequest(const GetFileContentLengthRequest &) = default ;
    GetFileContentLengthRequest(GetFileContentLengthRequest &&) = default ;
    GetFileContentLengthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileContentLengthRequest() = default ;
    GetFileContentLengthRequest& operator=(const GetFileContentLengthRequest &) = default ;
    GetFileContentLengthRequest& operator=(GetFileContentLengthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docName_ == nullptr
        && this->fileUrl_ == nullptr && this->workspaceId_ == nullptr; };
    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline GetFileContentLengthRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetFileContentLengthRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetFileContentLengthRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> docName_ {};
    shared_ptr<string> fileUrl_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
