// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHAREAICIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHAREAICIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ShareAICImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShareAICImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Users, usersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ShareAICImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Users, usersShrink_);
    };
    ShareAICImageShrinkRequest() = default ;
    ShareAICImageShrinkRequest(const ShareAICImageShrinkRequest &) = default ;
    ShareAICImageShrinkRequest(ShareAICImageShrinkRequest &&) = default ;
    ShareAICImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShareAICImageShrinkRequest() = default ;
    ShareAICImageShrinkRequest& operator=(const ShareAICImageShrinkRequest &) = default ;
    ShareAICImageShrinkRequest& operator=(ShareAICImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->usersShrink_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ShareAICImageShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // usersShrink Field Functions 
    bool hasUsersShrink() const { return this->usersShrink_ != nullptr;};
    void deleteUsersShrink() { this->usersShrink_ = nullptr;};
    inline string getUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(usersShrink_, "") };
    inline ShareAICImageShrinkRequest& setUsersShrink(string usersShrink) { DARABONBA_PTR_SET_VALUE(usersShrink_, usersShrink) };


  protected:
    // The image name.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The user groups.
    // 
    // This parameter is required.
    shared_ptr<string> usersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
