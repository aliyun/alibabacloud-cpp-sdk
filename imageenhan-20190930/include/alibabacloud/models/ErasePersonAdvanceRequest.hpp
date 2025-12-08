// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEPERSONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ERASEPERSONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ErasePersonAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ErasePersonAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_TO_JSON(UserMask, userMaskObject_);
    };
    friend void from_json(const Darabonba::Json& j, ErasePersonAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_FROM_JSON(UserMask, userMaskObject_);
    };
    ErasePersonAdvanceRequest() = default ;
    ErasePersonAdvanceRequest(const ErasePersonAdvanceRequest &) = default ;
    ErasePersonAdvanceRequest(ErasePersonAdvanceRequest &&) = default ;
    ErasePersonAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ErasePersonAdvanceRequest() = default ;
    ErasePersonAdvanceRequest& operator=(const ErasePersonAdvanceRequest &) = default ;
    ErasePersonAdvanceRequest& operator=(ErasePersonAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->userMaskObject_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline ErasePersonAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // userMaskObject Field Functions 
    bool hasUserMaskObject() const { return this->userMaskObject_ != nullptr;};
    void deleteUserMaskObject() { this->userMaskObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> userMaskObject() const { DARABONBA_GET(userMaskObject_) };
    inline ErasePersonAdvanceRequest& setUserMaskObject(shared_ptr<Darabonba::IStream> userMaskObject) { DARABONBA_SET_VALUE(userMaskObject_, userMaskObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> userMaskObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
