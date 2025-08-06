// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageFromFamilyResponseBodyImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageFromFamilyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFromFamilyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFromFamilyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageFromFamilyResponseBody() = default ;
    DescribeImageFromFamilyResponseBody(const DescribeImageFromFamilyResponseBody &) = default ;
    DescribeImageFromFamilyResponseBody(DescribeImageFromFamilyResponseBody &&) = default ;
    DescribeImageFromFamilyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFromFamilyResponseBody() = default ;
    DescribeImageFromFamilyResponseBody& operator=(const DescribeImageFromFamilyResponseBody &) = default ;
    DescribeImageFromFamilyResponseBody& operator=(DescribeImageFromFamilyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr
        && this->requestId_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const DescribeImageFromFamilyResponseBodyImage & image() const { DARABONBA_PTR_GET_CONST(image_, DescribeImageFromFamilyResponseBodyImage) };
    inline DescribeImageFromFamilyResponseBodyImage image() { DARABONBA_PTR_GET(image_, DescribeImageFromFamilyResponseBodyImage) };
    inline DescribeImageFromFamilyResponseBody& setImage(const DescribeImageFromFamilyResponseBodyImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeImageFromFamilyResponseBody& setImage(DescribeImageFromFamilyResponseBodyImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageFromFamilyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image information.
    std::shared_ptr<DescribeImageFromFamilyResponseBodyImage> image_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
