// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptorIdList, adaptorIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Distro, distro_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptorIdList, adaptorIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Distro, distro_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateImageRequest() = default ;
    UpdateImageRequest(const UpdateImageRequest &) = default ;
    UpdateImageRequest(UpdateImageRequest &&) = default ;
    UpdateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageRequest() = default ;
    UpdateImageRequest& operator=(const UpdateImageRequest &) = default ;
    UpdateImageRequest& operator=(UpdateImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptorIdList_ == nullptr
        && this->description_ == nullptr && this->distro_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->language_ == nullptr
        && this->versionId_ == nullptr && this->versionName_ == nullptr; };
    // adaptorIdList Field Functions 
    bool hasAdaptorIdList() const { return this->adaptorIdList_ != nullptr;};
    void deleteAdaptorIdList() { this->adaptorIdList_ = nullptr;};
    inline const vector<string> & getAdaptorIdList() const { DARABONBA_PTR_GET_CONST(adaptorIdList_, vector<string>) };
    inline vector<string> getAdaptorIdList() { DARABONBA_PTR_GET(adaptorIdList_, vector<string>) };
    inline UpdateImageRequest& setAdaptorIdList(const vector<string> & adaptorIdList) { DARABONBA_PTR_SET_VALUE(adaptorIdList_, adaptorIdList) };
    inline UpdateImageRequest& setAdaptorIdList(vector<string> && adaptorIdList) { DARABONBA_PTR_SET_RVALUE(adaptorIdList_, adaptorIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distro Field Functions 
    bool hasDistro() const { return this->distro_ != nullptr;};
    void deleteDistro() { this->distro_ = nullptr;};
    inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
    inline UpdateImageRequest& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline UpdateImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateImageRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateImageRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateImageRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The complete list of application adapter IDs for the selected image version. A maximum of 100 items are supported. **When a non-empty list is passed, it must include the adapters that you want to retain. Omitting this parameter or passing an empty list does not clear the existing associations.**
    shared_ptr<vector<string>> adaptorIdList_ {};
    // The new description of the image.
    shared_ptr<string> description_ {};
    // The operating system distribution information of the image. It must be consistent with the actual operating system distribution of the image.
    shared_ptr<string> distro_ {};
    // The ID of the image to be modified. You must provide at least one of ImageId and VersionId. If both are provided, they must belong to the same image.
    shared_ptr<string> imageId_ {};
    // The new name of the image. Specify this parameter only when you need to update the name.
    shared_ptr<string> imageName_ {};
    // The language of the image. Valid values:
    // 
    // - **zh-CN**: Simplified Chinese.
    // - **zh-HK**: Traditional Chinese (Hong Kong).
    // - **en-US**: English.
    // - **ja-JP**: Japanese.
    // - **CN**: A compatible value for Simplified Chinese.
    // - **EN**: A compatible value for English.
    // - **JP**: A compatible value for Japanese.
    // - **CN-HK**: A compatible value for Traditional Chinese (Hong Kong).
    shared_ptr<string> language_ {};
    // The ID of the image version to be modified. If this parameter is omitted, the current effective version of the image specified by ImageId is used. You must provide at least one of VersionId and ImageId.
    shared_ptr<string> versionId_ {};
    // The new display name of the image version.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
