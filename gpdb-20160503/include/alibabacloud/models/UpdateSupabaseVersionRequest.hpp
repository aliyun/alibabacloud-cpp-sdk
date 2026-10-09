// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUPABASEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUPABASEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpdateSupabaseVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSupabaseVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSupabaseVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateSupabaseVersionRequest() = default ;
    UpdateSupabaseVersionRequest(const UpdateSupabaseVersionRequest &) = default ;
    UpdateSupabaseVersionRequest(UpdateSupabaseVersionRequest &&) = default ;
    UpdateSupabaseVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSupabaseVersionRequest() = default ;
    UpdateSupabaseVersionRequest& operator=(const UpdateSupabaseVersionRequest &) = default ;
    UpdateSupabaseVersionRequest& operator=(UpdateSupabaseVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minorVersion_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline UpdateSupabaseVersionRequest& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateSupabaseVersionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSupabaseVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The target minor version. You can query the supported upgrade versions for the current project by calling GetSupabaseUpdateVersion.
    shared_ptr<string> minorVersion_ {};
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
