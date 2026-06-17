// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseProjectDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseProjectDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseProjectDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifySupabaseProjectDescriptionRequest() = default ;
    ModifySupabaseProjectDescriptionRequest(const ModifySupabaseProjectDescriptionRequest &) = default ;
    ModifySupabaseProjectDescriptionRequest(ModifySupabaseProjectDescriptionRequest &&) = default ;
    ModifySupabaseProjectDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseProjectDescriptionRequest() = default ;
    ModifySupabaseProjectDescriptionRequest& operator=(const ModifySupabaseProjectDescriptionRequest &) = default ;
    ModifySupabaseProjectDescriptionRequest& operator=(ModifySupabaseProjectDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectDescription_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // projectDescription Field Functions 
    bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
    void deleteProjectDescription() { this->projectDescription_ = nullptr;};
    inline string getProjectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
    inline ModifySupabaseProjectDescriptionRequest& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifySupabaseProjectDescriptionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseProjectDescriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The detailed description of the Supabase project.
    shared_ptr<string> projectDescription_ {};
    // The Supabase instance ID.
    shared_ptr<string> projectId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
