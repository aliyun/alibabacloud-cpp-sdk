// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadBookRequestDocs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UploadBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Docs, docs_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Docs, docs_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UploadBookRequest() = default ;
    UploadBookRequest(const UploadBookRequest &) = default ;
    UploadBookRequest(UploadBookRequest &&) = default ;
    UploadBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadBookRequest() = default ;
    UploadBookRequest& operator=(const UploadBookRequest &) = default ;
    UploadBookRequest& operator=(UploadBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->docs_ == nullptr && return this->workspaceId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline UploadBookRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // docs Field Functions 
    bool hasDocs() const { return this->docs_ != nullptr;};
    void deleteDocs() { this->docs_ = nullptr;};
    inline const vector<UploadBookRequestDocs> & docs() const { DARABONBA_PTR_GET_CONST(docs_, vector<UploadBookRequestDocs>) };
    inline vector<UploadBookRequestDocs> docs() { DARABONBA_PTR_GET(docs_, vector<UploadBookRequestDocs>) };
    inline UploadBookRequest& setDocs(const vector<UploadBookRequestDocs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
    inline UploadBookRequest& setDocs(vector<UploadBookRequestDocs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UploadBookRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UploadBookRequestDocs>> docs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
