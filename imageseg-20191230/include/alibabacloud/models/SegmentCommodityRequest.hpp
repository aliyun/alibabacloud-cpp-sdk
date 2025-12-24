// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCOMMODITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCOMMODITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentCommodityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentCommodityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(ReturnForm, returnForm_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentCommodityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(ReturnForm, returnForm_);
    };
    SegmentCommodityRequest() = default ;
    SegmentCommodityRequest(const SegmentCommodityRequest &) = default ;
    SegmentCommodityRequest(SegmentCommodityRequest &&) = default ;
    SegmentCommodityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentCommodityRequest() = default ;
    SegmentCommodityRequest& operator=(const SegmentCommodityRequest &) = default ;
    SegmentCommodityRequest& operator=(SegmentCommodityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->returnForm_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline SegmentCommodityRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // returnForm Field Functions 
    bool hasReturnForm() const { return this->returnForm_ != nullptr;};
    void deleteReturnForm() { this->returnForm_ = nullptr;};
    inline string returnForm() const { DARABONBA_PTR_GET_DEFAULT(returnForm_, "") };
    inline SegmentCommodityRequest& setReturnForm(string returnForm) { DARABONBA_PTR_SET_VALUE(returnForm_, returnForm) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> returnForm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
