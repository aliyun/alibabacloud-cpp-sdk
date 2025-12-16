// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateCloudAppInfoRequestPatch.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateCloudAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Patch, patch_);
      DARABONBA_PTR_TO_JSON(PkgLabels, pkgLabels_);
      DARABONBA_PTR_TO_JSON(StablePatchId, stablePatchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Patch, patch_);
      DARABONBA_PTR_FROM_JSON(PkgLabels, pkgLabels_);
      DARABONBA_PTR_FROM_JSON(StablePatchId, stablePatchId_);
    };
    UpdateCloudAppInfoRequest() = default ;
    UpdateCloudAppInfoRequest(const UpdateCloudAppInfoRequest &) = default ;
    UpdateCloudAppInfoRequest(UpdateCloudAppInfoRequest &&) = default ;
    UpdateCloudAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudAppInfoRequest() = default ;
    UpdateCloudAppInfoRequest& operator=(const UpdateCloudAppInfoRequest &) = default ;
    UpdateCloudAppInfoRequest& operator=(UpdateCloudAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->description_ == nullptr && return this->patch_ == nullptr && return this->pkgLabels_ == nullptr && return this->stablePatchId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCloudAppInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCloudAppInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // patch Field Functions 
    bool hasPatch() const { return this->patch_ != nullptr;};
    void deletePatch() { this->patch_ = nullptr;};
    inline const UpdateCloudAppInfoRequestPatch & patch() const { DARABONBA_PTR_GET_CONST(patch_, UpdateCloudAppInfoRequestPatch) };
    inline UpdateCloudAppInfoRequestPatch patch() { DARABONBA_PTR_GET(patch_, UpdateCloudAppInfoRequestPatch) };
    inline UpdateCloudAppInfoRequest& setPatch(const UpdateCloudAppInfoRequestPatch & patch) { DARABONBA_PTR_SET_VALUE(patch_, patch) };
    inline UpdateCloudAppInfoRequest& setPatch(UpdateCloudAppInfoRequestPatch && patch) { DARABONBA_PTR_SET_RVALUE(patch_, patch) };


    // pkgLabels Field Functions 
    bool hasPkgLabels() const { return this->pkgLabels_ != nullptr;};
    void deletePkgLabels() { this->pkgLabels_ = nullptr;};
    inline const vector<string> & pkgLabels() const { DARABONBA_PTR_GET_CONST(pkgLabels_, vector<string>) };
    inline vector<string> pkgLabels() { DARABONBA_PTR_GET(pkgLabels_, vector<string>) };
    inline UpdateCloudAppInfoRequest& setPkgLabels(const vector<string> & pkgLabels) { DARABONBA_PTR_SET_VALUE(pkgLabels_, pkgLabels) };
    inline UpdateCloudAppInfoRequest& setPkgLabels(vector<string> && pkgLabels) { DARABONBA_PTR_SET_RVALUE(pkgLabels_, pkgLabels) };


    // stablePatchId Field Functions 
    bool hasStablePatchId() const { return this->stablePatchId_ != nullptr;};
    void deleteStablePatchId() { this->stablePatchId_ = nullptr;};
    inline string stablePatchId() const { DARABONBA_PTR_GET_DEFAULT(stablePatchId_, "") };
    inline UpdateCloudAppInfoRequest& setStablePatchId(string stablePatchId) { DARABONBA_PTR_SET_VALUE(stablePatchId_, stablePatchId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateCloudAppInfoRequestPatch> patch_ = nullptr;
    std::shared_ptr<vector<string>> pkgLabels_ = nullptr;
    std::shared_ptr<string> stablePatchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
