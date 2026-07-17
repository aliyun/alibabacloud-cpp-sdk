// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ModifyInstanceFeaturesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceFeaturesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SiteFeatures, siteFeaturesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceFeaturesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SiteFeatures, siteFeaturesShrink_);
    };
    ModifyInstanceFeaturesShrinkRequest() = default ;
    ModifyInstanceFeaturesShrinkRequest(const ModifyInstanceFeaturesShrinkRequest &) = default ;
    ModifyInstanceFeaturesShrinkRequest(ModifyInstanceFeaturesShrinkRequest &&) = default ;
    ModifyInstanceFeaturesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceFeaturesShrinkRequest() = default ;
    ModifyInstanceFeaturesShrinkRequest& operator=(const ModifyInstanceFeaturesShrinkRequest &) = default ;
    ModifyInstanceFeaturesShrinkRequest& operator=(ModifyInstanceFeaturesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->siteFeaturesShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceFeaturesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // siteFeaturesShrink Field Functions 
    bool hasSiteFeaturesShrink() const { return this->siteFeaturesShrink_ != nullptr;};
    void deleteSiteFeaturesShrink() { this->siteFeaturesShrink_ = nullptr;};
    inline string getSiteFeaturesShrink() const { DARABONBA_PTR_GET_DEFAULT(siteFeaturesShrink_, "") };
    inline ModifyInstanceFeaturesShrinkRequest& setSiteFeaturesShrink(string siteFeaturesShrink) { DARABONBA_PTR_SET_VALUE(siteFeaturesShrink_, siteFeaturesShrink) };


  protected:
    // The plan instance ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of site feature configurations.
    // 
    // This parameter is required.
    shared_ptr<string> siteFeaturesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
