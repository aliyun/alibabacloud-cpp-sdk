// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESUPABASEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESUPABASEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteSupabaseProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteSupabaseProjectRequest() = default ;
    DeleteSupabaseProjectRequest(const DeleteSupabaseProjectRequest &) = default ;
    DeleteSupabaseProjectRequest(DeleteSupabaseProjectRequest &&) = default ;
    DeleteSupabaseProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSupabaseProjectRequest() = default ;
    DeleteSupabaseProjectRequest& operator=(const DeleteSupabaseProjectRequest &) = default ;
    DeleteSupabaseProjectRequest& operator=(DeleteSupabaseProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->regionId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteSupabaseProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSupabaseProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Supabase project ID. You can go to the Supabase page in the AnalyticDB for PostgreSQL console to obtain the workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
