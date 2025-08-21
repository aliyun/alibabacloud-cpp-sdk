// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyImagesImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    DescribeAvailableResourceResponseBodyImages() = default ;
    DescribeAvailableResourceResponseBodyImages(const DescribeAvailableResourceResponseBodyImages &) = default ;
    DescribeAvailableResourceResponseBodyImages(DescribeAvailableResourceResponseBodyImages &&) = default ;
    DescribeAvailableResourceResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyImages() = default ;
    DescribeAvailableResourceResponseBodyImages& operator=(const DescribeAvailableResourceResponseBodyImages &) = default ;
    DescribeAvailableResourceResponseBodyImages& operator=(DescribeAvailableResourceResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyImagesImage> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<Models::DescribeAvailableResourceResponseBodyImagesImage>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyImagesImage> image() { DARABONBA_PTR_GET(image_, vector<Models::DescribeAvailableResourceResponseBodyImagesImage>) };
    inline DescribeAvailableResourceResponseBodyImages& setImage(const vector<Models::DescribeAvailableResourceResponseBodyImagesImage> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeAvailableResourceResponseBodyImages& setImage(vector<Models::DescribeAvailableResourceResponseBodyImagesImage> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyImagesImage>> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
