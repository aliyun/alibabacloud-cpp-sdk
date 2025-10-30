// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectMembersResponseBodyPageResultProjectMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectMembersResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectMemberList, projectMemberList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectMemberList, projectMemberList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectMembersResponseBodyPageResult() = default ;
    ListProjectMembersResponseBodyPageResult(const ListProjectMembersResponseBodyPageResult &) = default ;
    ListProjectMembersResponseBodyPageResult(ListProjectMembersResponseBodyPageResult &&) = default ;
    ListProjectMembersResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyPageResult() = default ;
    ListProjectMembersResponseBodyPageResult& operator=(const ListProjectMembersResponseBodyPageResult &) = default ;
    ListProjectMembersResponseBodyPageResult& operator=(ListProjectMembersResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectMemberList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // projectMemberList Field Functions 
    bool hasProjectMemberList() const { return this->projectMemberList_ != nullptr;};
    void deleteProjectMemberList() { this->projectMemberList_ = nullptr;};
    inline const vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList> & projectMemberList() const { DARABONBA_PTR_GET_CONST(projectMemberList_, vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList>) };
    inline vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList> projectMemberList() { DARABONBA_PTR_GET(projectMemberList_, vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList>) };
    inline ListProjectMembersResponseBodyPageResult& setProjectMemberList(const vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList> & projectMemberList) { DARABONBA_PTR_SET_VALUE(projectMemberList_, projectMemberList) };
    inline ListProjectMembersResponseBodyPageResult& setProjectMemberList(vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList> && projectMemberList) { DARABONBA_PTR_SET_RVALUE(projectMemberList_, projectMemberList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectMembersResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListProjectMembersResponseBodyPageResultProjectMemberList>> projectMemberList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
