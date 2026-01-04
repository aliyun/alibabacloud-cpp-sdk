// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINITINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINITINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ReinitInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReinitInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, ReinitInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    ReinitInstanceRequest() = default ;
    ReinitInstanceRequest(const ReinitInstanceRequest &) = default ;
    ReinitInstanceRequest(ReinitInstanceRequest &&) = default ;
    ReinitInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReinitInstanceRequest() = default ;
    ReinitInstanceRequest& operator=(const ReinitInstanceRequest &) = default ;
    ReinitInstanceRequest& operator=(ReinitInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->instanceId_ == nullptr && this->password_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReinitInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReinitInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ReinitInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The ID of the image file that is used to reset the instance.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The password of the instance.
    // 
    // It must be 8 to 30 characters in length. It must include at least three of the following characters types: uppercase letters, lowercase letters, digits, and special characters. The following special character are supported: `()\\"~! @#$%^&*-_+={}[]:;\\"<>,.?/`
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
