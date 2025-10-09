// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectMembersResponseBodyPagingInfoProjectMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectMembersResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectMembers, projectMembers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectMembers, projectMembers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectMembersResponseBodyPagingInfo() = default ;
    ListProjectMembersResponseBodyPagingInfo(const ListProjectMembersResponseBodyPagingInfo &) = default ;
    ListProjectMembersResponseBodyPagingInfo(ListProjectMembersResponseBodyPagingInfo &&) = default ;
    ListProjectMembersResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyPagingInfo() = default ;
    ListProjectMembersResponseBodyPagingInfo& operator=(const ListProjectMembersResponseBodyPagingInfo &) = default ;
    ListProjectMembersResponseBodyPagingInfo& operator=(ListProjectMembersResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->projectMembers_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectMembersResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectMembersResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectMembers Field Functions 
    bool hasProjectMembers() const { return this->projectMembers_ != nullptr;};
    void deleteProjectMembers() { this->projectMembers_ = nullptr;};
    inline const vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers> & projectMembers() const { DARABONBA_PTR_GET_CONST(projectMembers_, vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers>) };
    inline vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers> projectMembers() { DARABONBA_PTR_GET(projectMembers_, vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers>) };
    inline ListProjectMembersResponseBodyPagingInfo& setProjectMembers(const vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers> & projectMembers) { DARABONBA_PTR_SET_VALUE(projectMembers_, projectMembers) };
    inline ListProjectMembersResponseBodyPagingInfo& setProjectMembers(vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers> && projectMembers) { DARABONBA_PTR_SET_RVALUE(projectMembers_, projectMembers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectMembersResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The members in the workspace.
    std::shared_ptr<vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembers>> projectMembers_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
