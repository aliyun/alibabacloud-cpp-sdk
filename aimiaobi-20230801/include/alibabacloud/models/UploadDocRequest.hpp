// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDocRequestDocs.hpp>
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->docs_ == nullptr && return this->workspaceId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline UploadDocRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // docs Field Functions 
    bool hasDocs() const { return this->docs_ != nullptr;};
    void deleteDocs() { this->docs_ = nullptr;};
    inline const vector<UploadDocRequestDocs> & docs() const { DARABONBA_PTR_GET_CONST(docs_, vector<UploadDocRequestDocs>) };
    inline vector<UploadDocRequestDocs> docs() { DARABONBA_PTR_GET(docs_, vector<UploadDocRequestDocs>) };
    inline UploadDocRequest& setDocs(const vector<UploadDocRequestDocs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
    inline UploadDocRequest& setDocs(vector<UploadDocRequestDocs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UploadDocRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UploadDocRequestDocs>> docs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
