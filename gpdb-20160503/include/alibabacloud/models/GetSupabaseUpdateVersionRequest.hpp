// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEUPDATEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEUPDATEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseUpdateVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseUpdateVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseUpdateVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSupabaseUpdateVersionRequest() = default ;
    GetSupabaseUpdateVersionRequest(const GetSupabaseUpdateVersionRequest &) = default ;
    GetSupabaseUpdateVersionRequest(GetSupabaseUpdateVersionRequest &&) = default ;
    GetSupabaseUpdateVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseUpdateVersionRequest() = default ;
    GetSupabaseUpdateVersionRequest& operator=(const GetSupabaseUpdateVersionRequest &) = default ;
    GetSupabaseUpdateVersionRequest& operator=(GetSupabaseUpdateVersionRequest &&) = default ;
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
    inline GetSupabaseUpdateVersionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSupabaseUpdateVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Supabase project.
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
