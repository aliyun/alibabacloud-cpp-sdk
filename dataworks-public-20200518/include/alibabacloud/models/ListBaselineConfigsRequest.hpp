// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineTypes, baselineTypes_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(Useflag, useflag_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineTypes, baselineTypes_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(Useflag, useflag_);
    };
    ListBaselineConfigsRequest() = default ;
    ListBaselineConfigsRequest(const ListBaselineConfigsRequest &) = default ;
    ListBaselineConfigsRequest(ListBaselineConfigsRequest &&) = default ;
    ListBaselineConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineConfigsRequest() = default ;
    ListBaselineConfigsRequest& operator=(const ListBaselineConfigsRequest &) = default ;
    ListBaselineConfigsRequest& operator=(ListBaselineConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineTypes_ != nullptr
        && this->owner_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->priority_ != nullptr && this->projectId_ != nullptr
        && this->searchText_ != nullptr && this->useflag_ != nullptr; };
    // baselineTypes Field Functions 
    bool hasBaselineTypes() const { return this->baselineTypes_ != nullptr;};
    void deleteBaselineTypes() { this->baselineTypes_ = nullptr;};
    inline string baselineTypes() const { DARABONBA_PTR_GET_DEFAULT(baselineTypes_, "") };
    inline ListBaselineConfigsRequest& setBaselineTypes(string baselineTypes) { DARABONBA_PTR_SET_VALUE(baselineTypes_, baselineTypes) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListBaselineConfigsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBaselineConfigsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineConfigsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ListBaselineConfigsRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListBaselineConfigsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListBaselineConfigsRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // useflag Field Functions 
    bool hasUseflag() const { return this->useflag_ != nullptr;};
    void deleteUseflag() { this->useflag_ = nullptr;};
    inline bool useflag() const { DARABONBA_PTR_GET_DEFAULT(useflag_, false) };
    inline ListBaselineConfigsRequest& setUseflag(bool useflag) { DARABONBA_PTR_SET_VALUE(useflag_, useflag) };


  protected:
    // The type of the baseline. Valid values: DAILY and HOURLY. Separate multiple baseline types with commas (,).
    std::shared_ptr<string> baselineTypes_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The page number. Valid values: 1 to 30. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The priority of the baseline. Valid values: {1,3,5,7,8}. Separate multiple priorities with commas (,).
    std::shared_ptr<string> priority_ = nullptr;
    // The workspace ID. You can call the ListProjects operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The keyword in the baseline name, which is used to search for the baseline.
    std::shared_ptr<string> searchText_ = nullptr;
    // Specifies whether to enable the baseline. Valid values: true and false.
    std::shared_ptr<bool> useflag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
