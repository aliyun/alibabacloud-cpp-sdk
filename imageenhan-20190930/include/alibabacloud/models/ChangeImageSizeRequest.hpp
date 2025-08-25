// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEIMAGESIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEIMAGESIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ChangeImageSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeImageSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeImageSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ChangeImageSizeRequest() = default ;
    ChangeImageSizeRequest(const ChangeImageSizeRequest &) = default ;
    ChangeImageSizeRequest(ChangeImageSizeRequest &&) = default ;
    ChangeImageSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeImageSizeRequest() = default ;
    ChangeImageSizeRequest& operator=(const ChangeImageSizeRequest &) = default ;
    ChangeImageSizeRequest& operator=(ChangeImageSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->url_ != nullptr && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ChangeImageSizeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ChangeImageSizeRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ChangeImageSizeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> height_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
