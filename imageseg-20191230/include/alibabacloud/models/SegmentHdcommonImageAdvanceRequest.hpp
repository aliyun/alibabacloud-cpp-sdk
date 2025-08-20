// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHDCommonImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHDCommonImageAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHDCommonImageAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
    };
    SegmentHDCommonImageAdvanceRequest() = default ;
    SegmentHDCommonImageAdvanceRequest(const SegmentHDCommonImageAdvanceRequest &) = default ;
    SegmentHDCommonImageAdvanceRequest(SegmentHDCommonImageAdvanceRequest &&) = default ;
    SegmentHDCommonImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHDCommonImageAdvanceRequest() = default ;
    SegmentHDCommonImageAdvanceRequest& operator=(const SegmentHDCommonImageAdvanceRequest &) = default ;
    SegmentHDCommonImageAdvanceRequest& operator=(SegmentHDCommonImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUrlObject_ != nullptr; };
    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline SegmentHDCommonImageAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
