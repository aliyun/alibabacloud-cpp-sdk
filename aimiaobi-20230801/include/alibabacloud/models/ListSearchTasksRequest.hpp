// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKSREQUEST_HPP_
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
  class ListSearchTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueTypes, dialogueTypes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueTypes, dialogueTypes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListSearchTasksRequest() = default ;
    ListSearchTasksRequest(const ListSearchTasksRequest &) = default ;
    ListSearchTasksRequest(ListSearchTasksRequest &&) = default ;
    ListSearchTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTasksRequest() = default ;
    ListSearchTasksRequest& operator=(const ListSearchTasksRequest &) = default ;
    ListSearchTasksRequest& operator=(ListSearchTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dialogueTypes_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->workspaceId_ != nullptr; };
    // dialogueTypes Field Functions 
    bool hasDialogueTypes() const { return this->dialogueTypes_ != nullptr;};
    void deleteDialogueTypes() { this->dialogueTypes_ = nullptr;};
    inline const vector<int32_t> & dialogueTypes() const { DARABONBA_PTR_GET_CONST(dialogueTypes_, vector<int32_t>) };
    inline vector<int32_t> dialogueTypes() { DARABONBA_PTR_GET(dialogueTypes_, vector<int32_t>) };
    inline ListSearchTasksRequest& setDialogueTypes(const vector<int32_t> & dialogueTypes) { DARABONBA_PTR_SET_VALUE(dialogueTypes_, dialogueTypes) };
    inline ListSearchTasksRequest& setDialogueTypes(vector<int32_t> && dialogueTypes) { DARABONBA_PTR_SET_RVALUE(dialogueTypes_, dialogueTypes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListSearchTasksRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<int32_t>> dialogueTypes_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
