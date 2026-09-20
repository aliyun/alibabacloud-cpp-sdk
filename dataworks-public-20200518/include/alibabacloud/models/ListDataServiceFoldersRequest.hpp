// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceFoldersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceFoldersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderNameKeyword, folderNameKeyword_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceFoldersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderNameKeyword, folderNameKeyword_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListDataServiceFoldersRequest() = default ;
    ListDataServiceFoldersRequest(const ListDataServiceFoldersRequest &) = default ;
    ListDataServiceFoldersRequest(ListDataServiceFoldersRequest &&) = default ;
    ListDataServiceFoldersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceFoldersRequest() = default ;
    ListDataServiceFoldersRequest& operator=(const ListDataServiceFoldersRequest &) = default ;
    ListDataServiceFoldersRequest& operator=(ListDataServiceFoldersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderNameKeyword_ == nullptr
        && this->groupId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
    // folderNameKeyword Field Functions 
    bool hasFolderNameKeyword() const { return this->folderNameKeyword_ != nullptr;};
    void deleteFolderNameKeyword() { this->folderNameKeyword_ = nullptr;};
    inline string getFolderNameKeyword() const { DARABONBA_PTR_GET_DEFAULT(folderNameKeyword_, "") };
    inline ListDataServiceFoldersRequest& setFolderNameKeyword(string folderNameKeyword) { DARABONBA_PTR_SET_VALUE(folderNameKeyword_, folderNameKeyword) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListDataServiceFoldersRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceFoldersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceFoldersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataServiceFoldersRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListDataServiceFoldersRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The keyword of the folder name. Substring matching is supported.
    shared_ptr<string> folderNameKeyword_ {};
    // The ID of the business process to which the folder belongs.
    shared_ptr<string> groupId_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The tenant ID. To obtain the tenant ID, log on to the [DataWorks console](https://workbench.data.aliyun.com/console), go to the DataStudio page, click your username in the upper-right corner, and select Menu > User Info.
    shared_ptr<int64_t> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
