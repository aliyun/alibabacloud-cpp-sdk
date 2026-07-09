// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class DetectImageBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
    };
    DetectImageBasicInfoRequest() = default ;
    DetectImageBasicInfoRequest(const DetectImageBasicInfoRequest &) = default ;
    DetectImageBasicInfoRequest(DetectImageBasicInfoRequest &&) = default ;
    DetectImageBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageBasicInfoRequest() = default ;
    DetectImageBasicInfoRequest& operator=(const DetectImageBasicInfoRequest &) = default ;
    DetectImageBasicInfoRequest& operator=(DetectImageBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->objectKey_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DetectImageBasicInfoRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline DetectImageBasicInfoRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


  protected:
    // The URL of the image. Only HTTP and HTTPS protocols are supported. Specify either ImageUrl or ObjectKey. At least one of them is required.
    shared_ptr<string> imageUrl_ {};
    // The ObjectKey of the image in OSS. When using ObjectKey, ensure that the key belongs to the namespace of the current caller. Specify either ImageUrl or ObjectKey. At least one of them is required.
    shared_ptr<string> objectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
