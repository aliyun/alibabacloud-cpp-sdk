// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADBOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADBOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UploadBookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadBookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Docs, docsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadBookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Docs, docsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UploadBookShrinkRequest() = default ;
    UploadBookShrinkRequest(const UploadBookShrinkRequest &) = default ;
    UploadBookShrinkRequest(UploadBookShrinkRequest &&) = default ;
    UploadBookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadBookShrinkRequest() = default ;
    UploadBookShrinkRequest& operator=(const UploadBookShrinkRequest &) = default ;
    UploadBookShrinkRequest& operator=(UploadBookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->docsShrink_ != nullptr && this->workspaceId_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline UploadBookShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // docsShrink Field Functions 
    bool hasDocsShrink() const { return this->docsShrink_ != nullptr;};
    void deleteDocsShrink() { this->docsShrink_ = nullptr;};
    inline string docsShrink() const { DARABONBA_PTR_GET_DEFAULT(docsShrink_, "") };
    inline UploadBookShrinkRequest& setDocsShrink(string docsShrink) { DARABONBA_PTR_SET_VALUE(docsShrink_, docsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UploadBookShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
