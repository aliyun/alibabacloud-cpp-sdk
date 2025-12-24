// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCOMMONIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCOMMONIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentCommonImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentCommonImageAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(ReturnForm, returnForm_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentCommonImageAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(ReturnForm, returnForm_);
    };
    SegmentCommonImageAdvanceRequest() = default ;
    SegmentCommonImageAdvanceRequest(const SegmentCommonImageAdvanceRequest &) = default ;
    SegmentCommonImageAdvanceRequest(SegmentCommonImageAdvanceRequest &&) = default ;
    SegmentCommonImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentCommonImageAdvanceRequest() = default ;
    SegmentCommonImageAdvanceRequest& operator=(const SegmentCommonImageAdvanceRequest &) = default ;
    SegmentCommonImageAdvanceRequest& operator=(SegmentCommonImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->returnForm_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline SegmentCommonImageAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // returnForm Field Functions 
    bool hasReturnForm() const { return this->returnForm_ != nullptr;};
    void deleteReturnForm() { this->returnForm_ = nullptr;};
    inline string returnForm() const { DARABONBA_PTR_GET_DEFAULT(returnForm_, "") };
    inline SegmentCommonImageAdvanceRequest& setReturnForm(string returnForm) { DARABONBA_PTR_SET_VALUE(returnForm_, returnForm) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<string> returnForm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
