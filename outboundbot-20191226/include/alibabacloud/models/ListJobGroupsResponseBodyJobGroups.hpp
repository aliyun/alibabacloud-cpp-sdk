// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobGroupsResponseBodyJobGroupsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsResponseBodyJobGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsResponseBodyJobGroups& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsResponseBodyJobGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobGroupsResponseBodyJobGroups() = default ;
    ListJobGroupsResponseBodyJobGroups(const ListJobGroupsResponseBodyJobGroups &) = default ;
    ListJobGroupsResponseBodyJobGroups(ListJobGroupsResponseBodyJobGroups &&) = default ;
    ListJobGroupsResponseBodyJobGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsResponseBodyJobGroups() = default ;
    ListJobGroupsResponseBodyJobGroups& operator=(const ListJobGroupsResponseBodyJobGroups &) = default ;
    ListJobGroupsResponseBodyJobGroups& operator=(ListJobGroupsResponseBodyJobGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListJobGroupsResponseBodyJobGroupsList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListJobGroupsResponseBodyJobGroupsList>) };
    inline vector<Models::ListJobGroupsResponseBodyJobGroupsList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListJobGroupsResponseBodyJobGroupsList>) };
    inline ListJobGroupsResponseBodyJobGroups& setList(const vector<Models::ListJobGroupsResponseBodyJobGroupsList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListJobGroupsResponseBodyJobGroups& setList(vector<Models::ListJobGroupsResponseBodyJobGroupsList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobGroupsResponseBodyJobGroups& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobGroupsResponseBodyJobGroups& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobGroupsResponseBodyJobGroups& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListJobGroupsResponseBodyJobGroupsList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
