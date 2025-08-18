// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectsResponseBodyPageResultProjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectsResponseBodyPageResult() = default ;
    ListProjectsResponseBodyPageResult(const ListProjectsResponseBodyPageResult &) = default ;
    ListProjectsResponseBodyPageResult(ListProjectsResponseBodyPageResult &&) = default ;
    ListProjectsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyPageResult() = default ;
    ListProjectsResponseBodyPageResult& operator=(const ListProjectsResponseBodyPageResult &) = default ;
    ListProjectsResponseBodyPageResult& operator=(ListProjectsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectList_ != nullptr
        && this->totalCount_ != nullptr; };
    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<Models::ListProjectsResponseBodyPageResultProjectList> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<Models::ListProjectsResponseBodyPageResultProjectList>) };
    inline vector<Models::ListProjectsResponseBodyPageResultProjectList> projectList() { DARABONBA_PTR_GET(projectList_, vector<Models::ListProjectsResponseBodyPageResultProjectList>) };
    inline ListProjectsResponseBodyPageResult& setProjectList(const vector<Models::ListProjectsResponseBodyPageResultProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListProjectsResponseBodyPageResult& setProjectList(vector<Models::ListProjectsResponseBodyPageResultProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListProjectsResponseBodyPageResultProjectList>> projectList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
