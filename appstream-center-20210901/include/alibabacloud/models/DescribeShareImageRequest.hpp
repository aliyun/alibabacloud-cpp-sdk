// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHAREIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHAREIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeShareImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShareImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShareImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    DescribeShareImageRequest() = default ;
    DescribeShareImageRequest(const DescribeShareImageRequest &) = default ;
    DescribeShareImageRequest(DescribeShareImageRequest &&) = default ;
    DescribeShareImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShareImageRequest() = default ;
    DescribeShareImageRequest& operator=(const DescribeShareImageRequest &) = default ;
    DescribeShareImageRequest& operator=(DescribeShareImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeShareImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The image ID.
    shared_ptr<string> imageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
