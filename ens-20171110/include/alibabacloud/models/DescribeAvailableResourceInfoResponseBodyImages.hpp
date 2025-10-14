// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodyImagesImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    DescribeAvailableResourceInfoResponseBodyImages() = default ;
    DescribeAvailableResourceInfoResponseBodyImages(const DescribeAvailableResourceInfoResponseBodyImages &) = default ;
    DescribeAvailableResourceInfoResponseBodyImages(DescribeAvailableResourceInfoResponseBodyImages &&) = default ;
    DescribeAvailableResourceInfoResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodyImages() = default ;
    DescribeAvailableResourceInfoResponseBodyImages& operator=(const DescribeAvailableResourceInfoResponseBodyImages &) = default ;
    DescribeAvailableResourceInfoResponseBodyImages& operator=(DescribeAvailableResourceInfoResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage>) };
    inline vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage> image() { DARABONBA_PTR_GET(image_, vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage>) };
    inline DescribeAvailableResourceInfoResponseBodyImages& setImage(const vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeAvailableResourceInfoResponseBodyImages& setImage(vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceInfoResponseBodyImagesImage>> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
