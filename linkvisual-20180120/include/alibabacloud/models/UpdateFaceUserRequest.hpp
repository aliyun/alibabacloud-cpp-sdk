// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFACEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFACEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UpdateFaceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFaceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_TO_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFaceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_FROM_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateFaceUserRequest() = default ;
    UpdateFaceUserRequest(const UpdateFaceUserRequest &) = default ;
    UpdateFaceUserRequest(UpdateFaceUserRequest &&) = default ;
    UpdateFaceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFaceUserRequest() = default ;
    UpdateFaceUserRequest& operator=(const UpdateFaceUserRequest &) = default ;
    UpdateFaceUserRequest& operator=(UpdateFaceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customUserId_ == nullptr
        && this->facePicUrl_ == nullptr && this->isolationId_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->userId_ == nullptr; };
    // customUserId Field Functions 
    bool hasCustomUserId() const { return this->customUserId_ != nullptr;};
    void deleteCustomUserId() { this->customUserId_ = nullptr;};
    inline string getCustomUserId() const { DARABONBA_PTR_GET_DEFAULT(customUserId_, "") };
    inline UpdateFaceUserRequest& setCustomUserId(string customUserId) { DARABONBA_PTR_SET_VALUE(customUserId_, customUserId) };


    // facePicUrl Field Functions 
    bool hasFacePicUrl() const { return this->facePicUrl_ != nullptr;};
    void deleteFacePicUrl() { this->facePicUrl_ = nullptr;};
    inline string getFacePicUrl() const { DARABONBA_PTR_GET_DEFAULT(facePicUrl_, "") };
    inline UpdateFaceUserRequest& setFacePicUrl(string facePicUrl) { DARABONBA_PTR_SET_VALUE(facePicUrl_, facePicUrl) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline UpdateFaceUserRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFaceUserRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline UpdateFaceUserRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateFaceUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The unique ID of the user in the caller\\"s business system, such as an ID card number or student ID.
    shared_ptr<string> customUserId_ {};
    // The image download URL. Currently, JPG and JPEG formats are supported.
    shared_ptr<string> facePicUrl_ {};
    // The isolation ID.<br>It is used for data isolation between different applications under a tenant. For example, if a user has business operations in both Zhejiang and Shaanxi, you can create two isolation IDs for the operations in Zhejiang and Xi\\"an respectively.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The username.
    shared_ptr<string> name_ {};
    // The user information.
    shared_ptr<string> params_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
