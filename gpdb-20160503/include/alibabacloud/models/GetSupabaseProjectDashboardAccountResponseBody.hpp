// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTDASHBOARDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTDASHBOARDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectDashboardAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectDashboardAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DashboardUsername, dashboardUsername_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectDashboardAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DashboardUsername, dashboardUsername_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSupabaseProjectDashboardAccountResponseBody() = default ;
    GetSupabaseProjectDashboardAccountResponseBody(const GetSupabaseProjectDashboardAccountResponseBody &) = default ;
    GetSupabaseProjectDashboardAccountResponseBody(GetSupabaseProjectDashboardAccountResponseBody &&) = default ;
    GetSupabaseProjectDashboardAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectDashboardAccountResponseBody() = default ;
    GetSupabaseProjectDashboardAccountResponseBody& operator=(const GetSupabaseProjectDashboardAccountResponseBody &) = default ;
    GetSupabaseProjectDashboardAccountResponseBody& operator=(GetSupabaseProjectDashboardAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboardPassword_ == nullptr
        && this->dashboardUsername_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr; };
    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline GetSupabaseProjectDashboardAccountResponseBody& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dashboardUsername Field Functions 
    bool hasDashboardUsername() const { return this->dashboardUsername_ != nullptr;};
    void deleteDashboardUsername() { this->dashboardUsername_ = nullptr;};
    inline string getDashboardUsername() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsername_, "") };
    inline GetSupabaseProjectDashboardAccountResponseBody& setDashboardUsername(string dashboardUsername) { DARABONBA_PTR_SET_VALUE(dashboardUsername_, dashboardUsername) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetSupabaseProjectDashboardAccountResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSupabaseProjectDashboardAccountResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseProjectDashboardAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The username for accessing the project\\"s dashboard.
    shared_ptr<string> dashboardPassword_ {};
    // The password associated with the dashboard username.
    shared_ptr<string> dashboardUsername_ {};
    // The ID of the Supabase project.
    shared_ptr<string> projectId_ {};
    // The name of the Supabase project.
    shared_ptr<string> projectName_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
