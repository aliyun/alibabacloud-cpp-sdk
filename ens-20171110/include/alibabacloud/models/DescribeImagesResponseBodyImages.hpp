// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    DescribeImagesResponseBodyImages() = default ;
    DescribeImagesResponseBodyImages(const DescribeImagesResponseBodyImages &) = default ;
    DescribeImagesResponseBodyImages(DescribeImagesResponseBodyImages &&) = default ;
    DescribeImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImages() = default ;
    DescribeImagesResponseBodyImages& operator=(const DescribeImagesResponseBodyImages &) = default ;
    DescribeImagesResponseBodyImages& operator=(DescribeImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<Models::DescribeImagesResponseBodyImagesImage> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<Models::DescribeImagesResponseBodyImagesImage>) };
    inline vector<Models::DescribeImagesResponseBodyImagesImage> image() { DARABONBA_PTR_GET(image_, vector<Models::DescribeImagesResponseBodyImagesImage>) };
    inline DescribeImagesResponseBodyImages& setImage(const vector<Models::DescribeImagesResponseBodyImagesImage> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeImagesResponseBodyImages& setImage(vector<Models::DescribeImagesResponseBodyImagesImage> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagesResponseBodyImagesImage>> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
