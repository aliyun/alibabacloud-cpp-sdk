// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageInfosResponseBodyImagesImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageInfosResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    DescribeImageInfosResponseBodyImages() = default ;
    DescribeImageInfosResponseBodyImages(const DescribeImageInfosResponseBodyImages &) = default ;
    DescribeImageInfosResponseBodyImages(DescribeImageInfosResponseBodyImages &&) = default ;
    DescribeImageInfosResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosResponseBodyImages() = default ;
    DescribeImageInfosResponseBodyImages& operator=(const DescribeImageInfosResponseBodyImages &) = default ;
    DescribeImageInfosResponseBodyImages& operator=(DescribeImageInfosResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<Models::DescribeImageInfosResponseBodyImagesImage> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<Models::DescribeImageInfosResponseBodyImagesImage>) };
    inline vector<Models::DescribeImageInfosResponseBodyImagesImage> image() { DARABONBA_PTR_GET(image_, vector<Models::DescribeImageInfosResponseBodyImagesImage>) };
    inline DescribeImageInfosResponseBodyImages& setImage(const vector<Models::DescribeImageInfosResponseBodyImagesImage> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeImageInfosResponseBodyImages& setImage(vector<Models::DescribeImageInfosResponseBodyImagesImage> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageInfosResponseBodyImagesImage>> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
