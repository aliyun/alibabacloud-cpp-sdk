// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEADAPTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEADAPTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAdaptorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAdaptorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAdaptorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    DeleteAdaptorRequest() = default ;
    DeleteAdaptorRequest(const DeleteAdaptorRequest &) = default ;
    DeleteAdaptorRequest(DeleteAdaptorRequest &&) = default ;
    DeleteAdaptorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAdaptorRequest() = default ;
    DeleteAdaptorRequest& operator=(const DeleteAdaptorRequest &) = default ;
    DeleteAdaptorRequest& operator=(DeleteAdaptorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptorId_ == nullptr
        && this->appId_ == nullptr && this->appVersionId_ == nullptr && this->imageId_ == nullptr && this->versionId_ == nullptr; };
    // adaptorId Field Functions 
    bool hasAdaptorId() const { return this->adaptorId_ != nullptr;};
    void deleteAdaptorId() { this->adaptorId_ = nullptr;};
    inline string getAdaptorId() const { DARABONBA_PTR_GET_DEFAULT(adaptorId_, "") };
    inline DeleteAdaptorRequest& setAdaptorId(string adaptorId) { DARABONBA_PTR_SET_VALUE(adaptorId_, adaptorId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAdaptorRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline DeleteAdaptorRequest& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DeleteAdaptorRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline DeleteAdaptorRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the application adaptation to be processed. **Required**. It must point to the same application adaptation as AppId and AppVersionId.
    shared_ptr<string> adaptorId_ {};
    // The application ID. **Required**. It must correspond to the same application as AdaptorId.
    shared_ptr<string> appId_ {};
    // The application version ID. **Required**. It must correspond to the same application version as AdaptorId. This parameter is not the image version ID.
    shared_ptr<string> appVersionId_ {};
    // The ID of the image to be dissociated. **Must be provided together with VersionId**. If they are not both specified, the adaptation deletion process is initiated.
    shared_ptr<string> imageId_ {};
    // The ID of the image version to be dissociated. It must be provided together with ImageId and belong to the image.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
