// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFoldersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentFolderPath, parentFolderPath_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentFolderPath, parentFolderPath_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    ListFoldersRequest() = default ;
    ListFoldersRequest(const ListFoldersRequest &) = default ;
    ListFoldersRequest(ListFoldersRequest &&) = default ;
    ListFoldersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersRequest() = default ;
    ListFoldersRequest& operator=(const ListFoldersRequest &) = default ;
    ListFoldersRequest& operator=(ListFoldersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->parentFolderPath_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFoldersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFoldersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentFolderPath Field Functions 
    bool hasParentFolderPath() const { return this->parentFolderPath_ != nullptr;};
    void deleteParentFolderPath() { this->parentFolderPath_ = nullptr;};
    inline string parentFolderPath() const { DARABONBA_PTR_GET_DEFAULT(parentFolderPath_, "") };
    inline ListFoldersRequest& setParentFolderPath(string parentFolderPath) { DARABONBA_PTR_SET_VALUE(parentFolderPath_, parentFolderPath) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListFoldersRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline ListFoldersRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentFolderPath_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
