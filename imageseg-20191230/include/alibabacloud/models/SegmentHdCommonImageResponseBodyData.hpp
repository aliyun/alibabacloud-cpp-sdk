// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHDCommonImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHDCommonImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHDCommonImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    SegmentHDCommonImageResponseBodyData() = default ;
    SegmentHDCommonImageResponseBodyData(const SegmentHDCommonImageResponseBodyData &) = default ;
    SegmentHDCommonImageResponseBodyData(SegmentHDCommonImageResponseBodyData &&) = default ;
    SegmentHDCommonImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHDCommonImageResponseBodyData() = default ;
    SegmentHDCommonImageResponseBodyData& operator=(const SegmentHDCommonImageResponseBodyData &) = default ;
    SegmentHDCommonImageResponseBodyData& operator=(SegmentHDCommonImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SegmentHDCommonImageResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
