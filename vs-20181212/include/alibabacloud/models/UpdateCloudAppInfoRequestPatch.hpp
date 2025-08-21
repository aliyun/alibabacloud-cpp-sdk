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
      DARABONBA_PTR_TO_JSON(DownloadURL, downloadURL_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PatchName, patchName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudAppInfoRequestPatch& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadURL, downloadURL_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PatchName, patchName_);
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
    virtual bool empty() const override { this->downloadURL_ != nullptr
        && this->md5_ != nullptr && this->patchName_ != nullptr; };
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


  protected:
    std::shared_ptr<string> downloadURL_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> patchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
