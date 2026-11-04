// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEUSERPICTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEUSERPICTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class DeleteFaceUserPictureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceUserPictureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FacePicMd5, facePicMd5_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceUserPictureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePicMd5, facePicMd5_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteFaceUserPictureRequest() = default ;
    DeleteFaceUserPictureRequest(const DeleteFaceUserPictureRequest &) = default ;
    DeleteFaceUserPictureRequest(DeleteFaceUserPictureRequest &&) = default ;
    DeleteFaceUserPictureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceUserPictureRequest() = default ;
    DeleteFaceUserPictureRequest& operator=(const DeleteFaceUserPictureRequest &) = default ;
    DeleteFaceUserPictureRequest& operator=(DeleteFaceUserPictureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->facePicMd5_ == nullptr
        && this->isolationId_ == nullptr && this->userId_ == nullptr; };
    // facePicMd5 Field Functions 
    bool hasFacePicMd5() const { return this->facePicMd5_ != nullptr;};
    void deleteFacePicMd5() { this->facePicMd5_ = nullptr;};
    inline string getFacePicMd5() const { DARABONBA_PTR_GET_DEFAULT(facePicMd5_, "") };
    inline DeleteFaceUserPictureRequest& setFacePicMd5(string facePicMd5) { DARABONBA_PTR_SET_VALUE(facePicMd5_, facePicMd5) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline DeleteFaceUserPictureRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteFaceUserPictureRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The unique identifier of the user\\"s face image. Set this parameter to the **Data** value that you obtained and saved locally after you called the [AddFaceUserPicutre](https://help.aliyun.com/document_detail/312040.html) operation to add the face image for the user.
    // 
    // This parameter is required.
    shared_ptr<string> facePicMd5_ {};
    // The business isolation ID. It is used to isolate data between different business applications under the same Alibaba Cloud account. Set this parameter to the same value as the **IsolationId** that you specified when you called the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add the user.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The user ID. Set this parameter to the **UserId** value that you obtained and saved locally after you called the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add the user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
