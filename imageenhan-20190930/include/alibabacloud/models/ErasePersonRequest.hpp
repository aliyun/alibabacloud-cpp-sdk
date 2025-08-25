// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEPERSONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ERASEPERSONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ErasePersonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ErasePersonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(UserMask, userMask_);
    };
    friend void from_json(const Darabonba::Json& j, ErasePersonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(UserMask, userMask_);
    };
    ErasePersonRequest() = default ;
    ErasePersonRequest(const ErasePersonRequest &) = default ;
    ErasePersonRequest(ErasePersonRequest &&) = default ;
    ErasePersonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ErasePersonRequest() = default ;
    ErasePersonRequest& operator=(const ErasePersonRequest &) = default ;
    ErasePersonRequest& operator=(ErasePersonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->userMask_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ErasePersonRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // userMask Field Functions 
    bool hasUserMask() const { return this->userMask_ != nullptr;};
    void deleteUserMask() { this->userMask_ = nullptr;};
    inline string userMask() const { DARABONBA_PTR_GET_DEFAULT(userMask_, "") };
    inline ErasePersonRequest& setUserMask(string userMask) { DARABONBA_PTR_SET_VALUE(userMask_, userMask) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userMask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
