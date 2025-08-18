// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEMYPROJECTSRESPONSEBODYPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEMYPROJECTSRESPONSEBODYPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceMyProjectsResponseBodyProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceMyProjectsResponseBodyProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceMyProjectsResponseBodyProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    GetDataServiceMyProjectsResponseBodyProjectList() = default ;
    GetDataServiceMyProjectsResponseBodyProjectList(const GetDataServiceMyProjectsResponseBodyProjectList &) = default ;
    GetDataServiceMyProjectsResponseBodyProjectList(GetDataServiceMyProjectsResponseBodyProjectList &&) = default ;
    GetDataServiceMyProjectsResponseBodyProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceMyProjectsResponseBodyProjectList() = default ;
    GetDataServiceMyProjectsResponseBodyProjectList& operator=(const GetDataServiceMyProjectsResponseBodyProjectList &) = default ;
    GetDataServiceMyProjectsResponseBodyProjectList& operator=(GetDataServiceMyProjectsResponseBodyProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->projectName_ != nullptr && this->role_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GetDataServiceMyProjectsResponseBodyProjectList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDataServiceMyProjectsResponseBodyProjectList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline GetDataServiceMyProjectsResponseBodyProjectList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
