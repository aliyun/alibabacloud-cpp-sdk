// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFINEMASKADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFINEMASKADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class RefineMaskAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefineMaskAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_TO_JSON(MaskImageURL, maskImageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, RefineMaskAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_FROM_JSON(MaskImageURL, maskImageURLObject_);
    };
    RefineMaskAdvanceRequest() = default ;
    RefineMaskAdvanceRequest(const RefineMaskAdvanceRequest &) = default ;
    RefineMaskAdvanceRequest(RefineMaskAdvanceRequest &&) = default ;
    RefineMaskAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefineMaskAdvanceRequest() = default ;
    RefineMaskAdvanceRequest& operator=(const RefineMaskAdvanceRequest &) = default ;
    RefineMaskAdvanceRequest& operator=(RefineMaskAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr
        && this->maskImageURLObject_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RefineMaskAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // maskImageURLObject Field Functions 
    bool hasMaskImageURLObject() const { return this->maskImageURLObject_ != nullptr;};
    void deleteMaskImageURLObject() { this->maskImageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> maskImageURLObject() const { DARABONBA_GET(maskImageURLObject_) };
    inline RefineMaskAdvanceRequest& setMaskImageURLObject(shared_ptr<Darabonba::IStream> maskImageURLObject) { DARABONBA_SET_VALUE(maskImageURLObject_, maskImageURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> maskImageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
