// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMITATEPHOTOSTYLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMITATEPHOTOSTYLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImitatePhotoStyleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImitatePhotoStyleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(StyleUrl, styleUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImitatePhotoStyleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(StyleUrl, styleUrl_);
    };
    ImitatePhotoStyleRequest() = default ;
    ImitatePhotoStyleRequest(const ImitatePhotoStyleRequest &) = default ;
    ImitatePhotoStyleRequest(ImitatePhotoStyleRequest &&) = default ;
    ImitatePhotoStyleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImitatePhotoStyleRequest() = default ;
    ImitatePhotoStyleRequest& operator=(const ImitatePhotoStyleRequest &) = default ;
    ImitatePhotoStyleRequest& operator=(ImitatePhotoStyleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->styleUrl_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ImitatePhotoStyleRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // styleUrl Field Functions 
    bool hasStyleUrl() const { return this->styleUrl_ != nullptr;};
    void deleteStyleUrl() { this->styleUrl_ = nullptr;};
    inline string styleUrl() const { DARABONBA_PTR_GET_DEFAULT(styleUrl_, "") };
    inline ImitatePhotoStyleRequest& setStyleUrl(string styleUrl) { DARABONBA_PTR_SET_VALUE(styleUrl_, styleUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> styleUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
