// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEAUTOSCALEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEAUTOSCALEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseAutoScalePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseAutoScalePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseAutoScalePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifySupabaseAutoScalePolicyRequest() = default ;
    ModifySupabaseAutoScalePolicyRequest(const ModifySupabaseAutoScalePolicyRequest &) = default ;
    ModifySupabaseAutoScalePolicyRequest(ModifySupabaseAutoScalePolicyRequest &&) = default ;
    ModifySupabaseAutoScalePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseAutoScalePolicyRequest() = default ;
    ModifySupabaseAutoScalePolicyRequest& operator=(const ModifySupabaseAutoScalePolicyRequest &) = default ;
    ModifySupabaseAutoScalePolicyRequest& operator=(ModifySupabaseAutoScalePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScale_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline ModifySupabaseAutoScalePolicyRequest& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifySupabaseAutoScalePolicyRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseAutoScalePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<bool> autoScale_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
