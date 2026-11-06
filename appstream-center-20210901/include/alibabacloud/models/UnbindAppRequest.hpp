// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDAPPREQUEST_HPP_
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
  class UnbindAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UnbindAppRequest() = default ;
    UnbindAppRequest(const UnbindAppRequest &) = default ;
    UnbindAppRequest(UnbindAppRequest &&) = default ;
    UnbindAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAppRequest() = default ;
    UnbindAppRequest& operator=(const UnbindAppRequest &) = default ;
    UnbindAppRequest& operator=(UnbindAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIdList_ == nullptr
        && this->imageId_ == nullptr && this->versionId_ == nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & getAppIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> getAppIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline UnbindAppRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline UnbindAppRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UnbindAppRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UnbindAppRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The list of application IDs to dissociate from the specified image version. Verify that each application is associated with the selected image version beforehand.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> appIdList_ {};
    // The ID of the image from which the applications are to be dissociated. The image must be a custom image or community image manageable by the current account.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The ID of the image version from which the applications are to be dissociated. If omitted, the current active version of the image is used. If specified, the version must belong to the image specified by ImageId.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
