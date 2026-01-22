// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateCloudAppInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudAppInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Patch, patchShrink_);
      DARABONBA_PTR_TO_JSON(PkgLabels, pkgLabelsShrink_);
      DARABONBA_PTR_TO_JSON(StablePatchId, stablePatchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudAppInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Patch, patchShrink_);
      DARABONBA_PTR_FROM_JSON(PkgLabels, pkgLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(StablePatchId, stablePatchId_);
    };
    UpdateCloudAppInfoShrinkRequest() = default ;
    UpdateCloudAppInfoShrinkRequest(const UpdateCloudAppInfoShrinkRequest &) = default ;
    UpdateCloudAppInfoShrinkRequest(UpdateCloudAppInfoShrinkRequest &&) = default ;
    UpdateCloudAppInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudAppInfoShrinkRequest() = default ;
    UpdateCloudAppInfoShrinkRequest& operator=(const UpdateCloudAppInfoShrinkRequest &) = default ;
    UpdateCloudAppInfoShrinkRequest& operator=(UpdateCloudAppInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->description_ == nullptr && this->patchShrink_ == nullptr && this->pkgLabelsShrink_ == nullptr && this->stablePatchId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCloudAppInfoShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCloudAppInfoShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // patchShrink Field Functions 
    bool hasPatchShrink() const { return this->patchShrink_ != nullptr;};
    void deletePatchShrink() { this->patchShrink_ = nullptr;};
    inline string getPatchShrink() const { DARABONBA_PTR_GET_DEFAULT(patchShrink_, "") };
    inline UpdateCloudAppInfoShrinkRequest& setPatchShrink(string patchShrink) { DARABONBA_PTR_SET_VALUE(patchShrink_, patchShrink) };


    // pkgLabelsShrink Field Functions 
    bool hasPkgLabelsShrink() const { return this->pkgLabelsShrink_ != nullptr;};
    void deletePkgLabelsShrink() { this->pkgLabelsShrink_ = nullptr;};
    inline string getPkgLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(pkgLabelsShrink_, "") };
    inline UpdateCloudAppInfoShrinkRequest& setPkgLabelsShrink(string pkgLabelsShrink) { DARABONBA_PTR_SET_VALUE(pkgLabelsShrink_, pkgLabelsShrink) };


    // stablePatchId Field Functions 
    bool hasStablePatchId() const { return this->stablePatchId_ != nullptr;};
    void deleteStablePatchId() { this->stablePatchId_ = nullptr;};
    inline string getStablePatchId() const { DARABONBA_PTR_GET_DEFAULT(stablePatchId_, "") };
    inline UpdateCloudAppInfoShrinkRequest& setStablePatchId(string stablePatchId) { DARABONBA_PTR_SET_VALUE(stablePatchId_, stablePatchId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> patchShrink_ {};
    shared_ptr<string> pkgLabelsShrink_ {};
    shared_ptr<string> stablePatchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
