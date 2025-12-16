// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUESTPATCH_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDAPPINFOREQUESTPATCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateCloudAppInfoRequestPatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudAppInfoRequestPatch& obj) { 
      DARABONBA_PTR_TO_JSON(AsStablePatch, asStablePatch_);
      DARABONBA_PTR_TO_JSON(DownloadURL, downloadURL_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PatchName, patchName_);
      DARABONBA_PTR_TO_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudAppInfoRequestPatch& obj) { 
      DARABONBA_PTR_FROM_JSON(AsStablePatch, asStablePatch_);
      DARABONBA_PTR_FROM_JSON(DownloadURL, downloadURL_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PatchName, patchName_);
      DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    UpdateCloudAppInfoRequestPatch() = default ;
    UpdateCloudAppInfoRequestPatch(const UpdateCloudAppInfoRequestPatch &) = default ;
    UpdateCloudAppInfoRequestPatch(UpdateCloudAppInfoRequestPatch &&) = default ;
    UpdateCloudAppInfoRequestPatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudAppInfoRequestPatch() = default ;
    UpdateCloudAppInfoRequestPatch& operator=(const UpdateCloudAppInfoRequestPatch &) = default ;
    UpdateCloudAppInfoRequestPatch& operator=(UpdateCloudAppInfoRequestPatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asStablePatch_ == nullptr
        && return this->downloadURL_ == nullptr && return this->md5_ == nullptr && return this->patchName_ == nullptr && return this->pkgFormat_ == nullptr && return this->renderingInstanceId_ == nullptr; };
    // asStablePatch Field Functions 
    bool hasAsStablePatch() const { return this->asStablePatch_ != nullptr;};
    void deleteAsStablePatch() { this->asStablePatch_ = nullptr;};
    inline bool asStablePatch() const { DARABONBA_PTR_GET_DEFAULT(asStablePatch_, false) };
    inline UpdateCloudAppInfoRequestPatch& setAsStablePatch(bool asStablePatch) { DARABONBA_PTR_SET_VALUE(asStablePatch_, asStablePatch) };


    // downloadURL Field Functions 
    bool hasDownloadURL() const { return this->downloadURL_ != nullptr;};
    void deleteDownloadURL() { this->downloadURL_ = nullptr;};
    inline string downloadURL() const { DARABONBA_PTR_GET_DEFAULT(downloadURL_, "") };
    inline UpdateCloudAppInfoRequestPatch& setDownloadURL(string downloadURL) { DARABONBA_PTR_SET_VALUE(downloadURL_, downloadURL) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UpdateCloudAppInfoRequestPatch& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // patchName Field Functions 
    bool hasPatchName() const { return this->patchName_ != nullptr;};
    void deletePatchName() { this->patchName_ = nullptr;};
    inline string patchName() const { DARABONBA_PTR_GET_DEFAULT(patchName_, "") };
    inline UpdateCloudAppInfoRequestPatch& setPatchName(string patchName) { DARABONBA_PTR_SET_VALUE(patchName_, patchName) };


    // pkgFormat Field Functions 
    bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
    void deletePkgFormat() { this->pkgFormat_ = nullptr;};
    inline string pkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
    inline UpdateCloudAppInfoRequestPatch& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateCloudAppInfoRequestPatch& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<bool> asStablePatch_ = nullptr;
    std::shared_ptr<string> downloadURL_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> patchName_ = nullptr;
    std::shared_ptr<string> pkgFormat_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
