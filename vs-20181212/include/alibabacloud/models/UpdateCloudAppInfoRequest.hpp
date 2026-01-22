// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class Patch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Patch& obj) { 
        DARABONBA_PTR_TO_JSON(AsStablePatch, asStablePatch_);
        DARABONBA_PTR_TO_JSON(DownloadURL, downloadURL_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(PatchName, patchName_);
        DARABONBA_PTR_TO_JSON(PkgFormat, pkgFormat_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Patch& obj) { 
        DARABONBA_PTR_FROM_JSON(AsStablePatch, asStablePatch_);
        DARABONBA_PTR_FROM_JSON(DownloadURL, downloadURL_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(PatchName, patchName_);
        DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      Patch() = default ;
      Patch(const Patch &) = default ;
      Patch(Patch &&) = default ;
      Patch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Patch() = default ;
      Patch& operator=(const Patch &) = default ;
      Patch& operator=(Patch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asStablePatch_ == nullptr
        && this->downloadURL_ == nullptr && this->md5_ == nullptr && this->patchName_ == nullptr && this->pkgFormat_ == nullptr && this->renderingInstanceId_ == nullptr; };
      // asStablePatch Field Functions 
      bool hasAsStablePatch() const { return this->asStablePatch_ != nullptr;};
      void deleteAsStablePatch() { this->asStablePatch_ = nullptr;};
      inline bool getAsStablePatch() const { DARABONBA_PTR_GET_DEFAULT(asStablePatch_, false) };
      inline Patch& setAsStablePatch(bool asStablePatch) { DARABONBA_PTR_SET_VALUE(asStablePatch_, asStablePatch) };


      // downloadURL Field Functions 
      bool hasDownloadURL() const { return this->downloadURL_ != nullptr;};
      void deleteDownloadURL() { this->downloadURL_ = nullptr;};
      inline string getDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(downloadURL_, "") };
      inline Patch& setDownloadURL(string downloadURL) { DARABONBA_PTR_SET_VALUE(downloadURL_, downloadURL) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Patch& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // patchName Field Functions 
      bool hasPatchName() const { return this->patchName_ != nullptr;};
      void deletePatchName() { this->patchName_ = nullptr;};
      inline string getPatchName() const { DARABONBA_PTR_GET_DEFAULT(patchName_, "") };
      inline Patch& setPatchName(string patchName) { DARABONBA_PTR_SET_VALUE(patchName_, patchName) };


      // pkgFormat Field Functions 
      bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
      void deletePkgFormat() { this->pkgFormat_ = nullptr;};
      inline string getPkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
      inline Patch& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline Patch& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      shared_ptr<bool> asStablePatch_ {};
      shared_ptr<string> downloadURL_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> patchName_ {};
      shared_ptr<string> pkgFormat_ {};
      shared_ptr<string> renderingInstanceId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->description_ == nullptr && this->patch_ == nullptr && this->pkgLabels_ == nullptr && this->stablePatchId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCloudAppInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCloudAppInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // patch Field Functions 
    bool hasPatch() const { return this->patch_ != nullptr;};
    void deletePatch() { this->patch_ = nullptr;};
    inline const UpdateCloudAppInfoRequest::Patch & getPatch() const { DARABONBA_PTR_GET_CONST(patch_, UpdateCloudAppInfoRequest::Patch) };
    inline UpdateCloudAppInfoRequest::Patch getPatch() { DARABONBA_PTR_GET(patch_, UpdateCloudAppInfoRequest::Patch) };
    inline UpdateCloudAppInfoRequest& setPatch(const UpdateCloudAppInfoRequest::Patch & patch) { DARABONBA_PTR_SET_VALUE(patch_, patch) };
    inline UpdateCloudAppInfoRequest& setPatch(UpdateCloudAppInfoRequest::Patch && patch) { DARABONBA_PTR_SET_RVALUE(patch_, patch) };


    // pkgLabels Field Functions 
    bool hasPkgLabels() const { return this->pkgLabels_ != nullptr;};
    void deletePkgLabels() { this->pkgLabels_ = nullptr;};
    inline const vector<string> & getPkgLabels() const { DARABONBA_PTR_GET_CONST(pkgLabels_, vector<string>) };
    inline vector<string> getPkgLabels() { DARABONBA_PTR_GET(pkgLabels_, vector<string>) };
    inline UpdateCloudAppInfoRequest& setPkgLabels(const vector<string> & pkgLabels) { DARABONBA_PTR_SET_VALUE(pkgLabels_, pkgLabels) };
    inline UpdateCloudAppInfoRequest& setPkgLabels(vector<string> && pkgLabels) { DARABONBA_PTR_SET_RVALUE(pkgLabels_, pkgLabels) };


    // stablePatchId Field Functions 
    bool hasStablePatchId() const { return this->stablePatchId_ != nullptr;};
    void deleteStablePatchId() { this->stablePatchId_ = nullptr;};
    inline string getStablePatchId() const { DARABONBA_PTR_GET_DEFAULT(stablePatchId_, "") };
    inline UpdateCloudAppInfoRequest& setStablePatchId(string stablePatchId) { DARABONBA_PTR_SET_VALUE(stablePatchId_, stablePatchId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<UpdateCloudAppInfoRequest::Patch> patch_ {};
    shared_ptr<vector<string>> pkgLabels_ {};
    shared_ptr<string> stablePatchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
