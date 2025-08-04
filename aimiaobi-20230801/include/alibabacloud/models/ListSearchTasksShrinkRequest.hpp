// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueTypes, dialogueTypesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueTypes, dialogueTypesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListSearchTasksShrinkRequest() = default ;
    ListSearchTasksShrinkRequest(const ListSearchTasksShrinkRequest &) = default ;
    ListSearchTasksShrinkRequest(ListSearchTasksShrinkRequest &&) = default ;
    ListSearchTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTasksShrinkRequest() = default ;
    ListSearchTasksShrinkRequest& operator=(const ListSearchTasksShrinkRequest &) = default ;
    ListSearchTasksShrinkRequest& operator=(ListSearchTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dialogueTypesShrink_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->workspaceId_ != nullptr; };
    // dialogueTypesShrink Field Functions 
    bool hasDialogueTypesShrink() const { return this->dialogueTypesShrink_ != nullptr;};
    void deleteDialogueTypesShrink() { this->dialogueTypesShrink_ = nullptr;};
    inline string dialogueTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(dialogueTypesShrink_, "") };
    inline ListSearchTasksShrinkRequest& setDialogueTypesShrink(string dialogueTypesShrink) { DARABONBA_PTR_SET_VALUE(dialogueTypesShrink_, dialogueTypesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTasksShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTasksShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListSearchTasksShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> dialogueTypesShrink_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
