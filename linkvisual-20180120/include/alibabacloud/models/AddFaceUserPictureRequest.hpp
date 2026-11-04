// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERPICTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERPICTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserPictureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserPictureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserPictureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddFaceUserPictureRequest() = default ;
    AddFaceUserPictureRequest(const AddFaceUserPictureRequest &) = default ;
    AddFaceUserPictureRequest(AddFaceUserPictureRequest &&) = default ;
    AddFaceUserPictureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserPictureRequest() = default ;
    AddFaceUserPictureRequest& operator=(const AddFaceUserPictureRequest &) = default ;
    AddFaceUserPictureRequest& operator=(AddFaceUserPictureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->facePicUrl_ == nullptr
        && this->isolationId_ == nullptr && this->userId_ == nullptr; };
    // facePicUrl Field Functions 
    bool hasFacePicUrl() const { return this->facePicUrl_ != nullptr;};
    void deleteFacePicUrl() { this->facePicUrl_ = nullptr;};
    inline string getFacePicUrl() const { DARABONBA_PTR_GET_DEFAULT(facePicUrl_, "") };
    inline AddFaceUserPictureRequest& setFacePicUrl(string facePicUrl) { DARABONBA_PTR_SET_VALUE(facePicUrl_, facePicUrl) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceUserPictureRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddFaceUserPictureRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The download URL of the user\\"s face image. Only JPEG and JPG images are supported, and the image URL cannot contain Chinese characters.
    // 
    // This parameter is required.
    shared_ptr<string> facePicUrl_ {};
    // The business isolation ID, which is used to isolate data between different business applications under the same Alibaba Cloud account. Keep this value consistent with the **IsolationId** set when calling the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) API operation to add a user.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The user ID. Pass in the **UserId** value that was obtained and saved locally after calling the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) API operation to add a user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
