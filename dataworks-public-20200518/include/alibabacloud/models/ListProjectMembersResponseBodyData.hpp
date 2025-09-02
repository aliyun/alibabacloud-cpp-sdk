// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectMembersResponseBodyDataProjectMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectMembersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectMemberList, projectMemberList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectMemberList, projectMemberList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectMembersResponseBodyData() = default ;
    ListProjectMembersResponseBodyData(const ListProjectMembersResponseBodyData &) = default ;
    ListProjectMembersResponseBodyData(ListProjectMembersResponseBodyData &&) = default ;
    ListProjectMembersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyData() = default ;
    ListProjectMembersResponseBodyData& operator=(const ListProjectMembersResponseBodyData &) = default ;
    ListProjectMembersResponseBodyData& operator=(ListProjectMembersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->projectMemberList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectMembersResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectMembersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectMemberList Field Functions 
    bool hasProjectMemberList() const { return this->projectMemberList_ != nullptr;};
    void deleteProjectMemberList() { this->projectMemberList_ = nullptr;};
    inline const vector<Models::ListProjectMembersResponseBodyDataProjectMemberList> & projectMemberList() const { DARABONBA_PTR_GET_CONST(projectMemberList_, vector<Models::ListProjectMembersResponseBodyDataProjectMemberList>) };
    inline vector<Models::ListProjectMembersResponseBodyDataProjectMemberList> projectMemberList() { DARABONBA_PTR_GET(projectMemberList_, vector<Models::ListProjectMembersResponseBodyDataProjectMemberList>) };
    inline ListProjectMembersResponseBodyData& setProjectMemberList(const vector<Models::ListProjectMembersResponseBodyDataProjectMemberList> & projectMemberList) { DARABONBA_PTR_SET_VALUE(projectMemberList_, projectMemberList) };
    inline ListProjectMembersResponseBodyData& setProjectMemberList(vector<Models::ListProjectMembersResponseBodyDataProjectMemberList> && projectMemberList) { DARABONBA_PTR_SET_RVALUE(projectMemberList_, projectMemberList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectMembersResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about members in the DataWorks workspace.
    std::shared_ptr<vector<Models::ListProjectMembersResponseBodyDataProjectMemberList>> projectMemberList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
