// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCalendarsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListCalendarsRequest() = default ;
    ListCalendarsRequest(const ListCalendarsRequest &) = default ;
    ListCalendarsRequest(ListCalendarsRequest &&) = default ;
    ListCalendarsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsRequest() = default ;
    ListCalendarsRequest& operator=(const ListCalendarsRequest &) = default ;
    ListCalendarsRequest& operator=(ListCalendarsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->owner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->sortBy_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCalendarsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListCalendarsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCalendarsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCalendarsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCalendarsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListCalendarsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The name of the scheduling calendar. Partial match is supported.
    shared_ptr<string> name_ {};
    // The account ID of the owner. Exact match is supported.
    shared_ptr<string> owner_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of items per page. Default value: 10. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID. Queries the calendars applicable to this workspace, including those applicable to all workspaces. If this parameter is not specified, the calendars of the current tenant are queried.
    shared_ptr<int64_t> projectId_ {};
    // The sorting rule. The format is "Field Direction", separated by a space.
    // 
    // - Field: ModifyTime, Name, or Id.
    // - Direction: Asc for ascending order, or Desc for descending order. If this parameter is not specified, Asc is used.
    // 
    // Default value: ModifyTime Desc.
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
