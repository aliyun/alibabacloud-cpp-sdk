// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODYGROUPPAGINGRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODYGROUPPAGINGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceGroupsResponseBodyGroupPagingResultGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceGroupsResponseBodyGroupPagingResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceGroupsResponseBodyGroupPagingResult& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceGroupsResponseBodyGroupPagingResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceGroupsResponseBodyGroupPagingResult() = default ;
    ListDataServiceGroupsResponseBodyGroupPagingResult(const ListDataServiceGroupsResponseBodyGroupPagingResult &) = default ;
    ListDataServiceGroupsResponseBodyGroupPagingResult(ListDataServiceGroupsResponseBodyGroupPagingResult &&) = default ;
    ListDataServiceGroupsResponseBodyGroupPagingResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceGroupsResponseBodyGroupPagingResult() = default ;
    ListDataServiceGroupsResponseBodyGroupPagingResult& operator=(const ListDataServiceGroupsResponseBodyGroupPagingResult &) = default ;
    ListDataServiceGroupsResponseBodyGroupPagingResult& operator=(ListDataServiceGroupsResponseBodyGroupPagingResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groups_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups>) };
    inline vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups>) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult& setGroups(const vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult& setGroups(vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business processes.
    std::shared_ptr<vector<Models::ListDataServiceGroupsResponseBodyGroupPagingResultGroups>> groups_ = nullptr;
    // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
