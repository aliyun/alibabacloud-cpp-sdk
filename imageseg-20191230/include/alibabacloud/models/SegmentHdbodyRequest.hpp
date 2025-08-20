// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHDBODYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHDBODYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHDBodyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHDBodyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHDBodyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    SegmentHDBodyRequest() = default ;
    SegmentHDBodyRequest(const SegmentHDBodyRequest &) = default ;
    SegmentHDBodyRequest(SegmentHDBodyRequest &&) = default ;
    SegmentHDBodyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHDBodyRequest() = default ;
    SegmentHDBodyRequest& operator=(const SegmentHDBodyRequest &) = default ;
    SegmentHDBodyRequest& operator=(SegmentHDBodyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline SegmentHDBodyRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
