// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UploadDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Docs, docs_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Docs, docs_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UploadDocRequest() = default ;
    UploadDocRequest(const UploadDocRequest &) = default ;
    UploadDocRequest(UploadDocRequest &&) = default ;
    UploadDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDocRequest() = default ;
    UploadDocRequest& operator=(const UploadDocRequest &) = default ;
    UploadDocRequest& operator=(UploadDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Docs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Docs& obj) { 
        DARABONBA_PTR_TO_JSON(DocName, docName_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Docs& obj) { 
        DARABONBA_PTR_FROM_JSON(DocName, docName_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      };
      Docs() = default ;
      Docs(const Docs &) = default ;
      Docs(Docs &&) = default ;
      Docs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Docs() = default ;
      Docs& operator=(const Docs &) = default ;
      Docs& operator=(Docs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docName_ == nullptr
        && this->fileUrl_ == nullptr; };
      // docName Field Functions 
      bool hasDocName() const { return this->docName_ != nullptr;};
      void deleteDocName() { this->docName_ = nullptr;};
      inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
      inline Docs& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Docs& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    protected:
      // This parameter is required.
      shared_ptr<string> docName_ {};
      // This parameter is required.
      shared_ptr<string> fileUrl_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->docs_ == nullptr && this->workspaceId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline UploadDocRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // docs Field Functions 
    bool hasDocs() const { return this->docs_ != nullptr;};
    void deleteDocs() { this->docs_ = nullptr;};
    inline const vector<UploadDocRequest::Docs> & getDocs() const { DARABONBA_PTR_GET_CONST(docs_, vector<UploadDocRequest::Docs>) };
    inline vector<UploadDocRequest::Docs> getDocs() { DARABONBA_PTR_GET(docs_, vector<UploadDocRequest::Docs>) };
    inline UploadDocRequest& setDocs(const vector<UploadDocRequest::Docs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
    inline UploadDocRequest& setDocs(vector<UploadDocRequest::Docs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UploadDocRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> categoryId_ {};
    // This parameter is required.
    shared_ptr<vector<UploadDocRequest::Docs>> docs_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
