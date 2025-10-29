// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectRolesResponseBodyPagingInfoProjectRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectRolesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectRoles, projectRoles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectRoles, projectRoles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectRolesResponseBodyPagingInfo() = default ;
    ListProjectRolesResponseBodyPagingInfo(const ListProjectRolesResponseBodyPagingInfo &) = default ;
    ListProjectRolesResponseBodyPagingInfo(ListProjectRolesResponseBodyPagingInfo &&) = default ;
    ListProjectRolesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesResponseBodyPagingInfo() = default ;
    ListProjectRolesResponseBodyPagingInfo& operator=(const ListProjectRolesResponseBodyPagingInfo &) = default ;
    ListProjectRolesResponseBodyPagingInfo& operator=(ListProjectRolesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->projectRoles_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListProjectRolesResponseBodyPagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListProjectRolesResponseBodyPagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectRoles Field Functions 
    bool hasProjectRoles() const { return this->projectRoles_ != nullptr;};
    void deleteProjectRoles() { this->projectRoles_ = nullptr;};
    inline const vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles> & projectRoles() const { DARABONBA_PTR_GET_CONST(projectRoles_, vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles>) };
    inline vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles> projectRoles() { DARABONBA_PTR_GET(projectRoles_, vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles>) };
    inline ListProjectRolesResponseBodyPagingInfo& setProjectRoles(const vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles> & projectRoles) { DARABONBA_PTR_SET_VALUE(projectRoles_, projectRoles) };
    inline ListProjectRolesResponseBodyPagingInfo& setProjectRoles(vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles> && projectRoles) { DARABONBA_PTR_SET_RVALUE(projectRoles_, projectRoles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListProjectRolesResponseBodyPagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The roles in the DataWorks workspace.
    std::shared_ptr<vector<Models::ListProjectRolesResponseBodyPagingInfoProjectRoles>> projectRoles_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
