// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFIREWALLFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFIREWALLFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateFirewallFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFirewallFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFirewallFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateFirewallFeatureRequest() = default ;
    UpdateFirewallFeatureRequest(const UpdateFirewallFeatureRequest &) = default ;
    UpdateFirewallFeatureRequest(UpdateFirewallFeatureRequest &&) = default ;
    UpdateFirewallFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFirewallFeatureRequest() = default ;
    UpdateFirewallFeatureRequest& operator=(const UpdateFirewallFeatureRequest &) = default ;
    UpdateFirewallFeatureRequest& operator=(UpdateFirewallFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureName_ == nullptr
        && this->status_ == nullptr; };
    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline UpdateFirewallFeatureRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateFirewallFeatureRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the feature to enable. Valid values:
    // - **ApplicationControl**: application control.
    // - **WebFilter**: web filtering.
    // 
    // This parameter is required.
    shared_ptr<string> featureName_ {};
    // The feature status. The only valid value is **Enable**, which enables the feature. If you specify Disable or any other value, an error is returned. This operation is idempotent if the feature is already enabled.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
