// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMITATEPHOTOSTYLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMITATEPHOTOSTYLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImitatePhotoStyleAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImitatePhotoStyleAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_TO_JSON(StyleUrl, styleUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, ImitatePhotoStyleAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_FROM_JSON(StyleUrl, styleUrlObject_);
    };
    ImitatePhotoStyleAdvanceRequest() = default ;
    ImitatePhotoStyleAdvanceRequest(const ImitatePhotoStyleAdvanceRequest &) = default ;
    ImitatePhotoStyleAdvanceRequest(ImitatePhotoStyleAdvanceRequest &&) = default ;
    ImitatePhotoStyleAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImitatePhotoStyleAdvanceRequest() = default ;
    ImitatePhotoStyleAdvanceRequest& operator=(const ImitatePhotoStyleAdvanceRequest &) = default ;
    ImitatePhotoStyleAdvanceRequest& operator=(ImitatePhotoStyleAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr
        && this->styleUrlObject_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline ImitatePhotoStyleAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // styleUrlObject Field Functions 
    bool hasStyleUrlObject() const { return this->styleUrlObject_ != nullptr;};
    void deleteStyleUrlObject() { this->styleUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> styleUrlObject() const { DARABONBA_GET(styleUrlObject_) };
    inline ImitatePhotoStyleAdvanceRequest& setStyleUrlObject(shared_ptr<Darabonba::IStream> styleUrlObject) { DARABONBA_SET_VALUE(styleUrlObject_, styleUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> styleUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
