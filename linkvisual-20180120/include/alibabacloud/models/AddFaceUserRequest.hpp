// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_TO_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_FROM_JSON(FacePicUrl, facePicUrl_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    AddFaceUserRequest() = default ;
    AddFaceUserRequest(const AddFaceUserRequest &) = default ;
    AddFaceUserRequest(AddFaceUserRequest &&) = default ;
    AddFaceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserRequest() = default ;
    AddFaceUserRequest& operator=(const AddFaceUserRequest &) = default ;
    AddFaceUserRequest& operator=(AddFaceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customUserId_ == nullptr
        && this->facePicUrl_ == nullptr && this->isolationId_ == nullptr && this->name_ == nullptr && this->params_ == nullptr; };
    // customUserId Field Functions 
    bool hasCustomUserId() const { return this->customUserId_ != nullptr;};
    void deleteCustomUserId() { this->customUserId_ = nullptr;};
    inline string getCustomUserId() const { DARABONBA_PTR_GET_DEFAULT(customUserId_, "") };
    inline AddFaceUserRequest& setCustomUserId(string customUserId) { DARABONBA_PTR_SET_VALUE(customUserId_, customUserId) };


    // facePicUrl Field Functions 
    bool hasFacePicUrl() const { return this->facePicUrl_ != nullptr;};
    void deleteFacePicUrl() { this->facePicUrl_ = nullptr;};
    inline string getFacePicUrl() const { DARABONBA_PTR_GET_DEFAULT(facePicUrl_, "") };
    inline AddFaceUserRequest& setFacePicUrl(string facePicUrl) { DARABONBA_PTR_SET_VALUE(facePicUrl_, facePicUrl) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceUserRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddFaceUserRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline AddFaceUserRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The user identification ID. It supports any uppercase letter and digits. Recommended Settings: the user\\"s ID card number, student ID, or similar identifier.
    // 
    // This parameter is required.
    shared_ptr<string> customUserId_ {};
    // The URL for downloading the user\\"s face image. Only JPEG and JPG image formats are supported, and the image URL cannot contain Chinese characters.
    // 
    // This parameter is required.
    shared_ptr<string> facePicUrl_ {};
    // The business isolation ID. It is used for data isolation between different business applications under the same Alibaba Cloud account. It supports uppercase and lowercase English letters and digits.
    // 
    // For example, if you have face recognition businesses in Region A and Region B, you can set different business isolation IDs to distinguish the face recognition businesses in Region A and Region B.
    // 
    // >Notice: 
    // Save the business isolation ID properly for use in subsequent calls to other API operations in this business isolation zone.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The username. It supports Chinese characters, uppercase and lowercase English letters, digits, underscores (_), and hyphens (-). The length cannot exceed 64 characters.
    shared_ptr<string> name_ {};
    // The custom user parameters.
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
