// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEIMAGESIZEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEIMAGESIZEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ChangeImageSizeAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeImageSizeAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_TO_JSON(Url, urlObject_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeImageSizeAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_FROM_JSON(Url, urlObject_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ChangeImageSizeAdvanceRequest() = default ;
    ChangeImageSizeAdvanceRequest(const ChangeImageSizeAdvanceRequest &) = default ;
    ChangeImageSizeAdvanceRequest(ChangeImageSizeAdvanceRequest &&) = default ;
    ChangeImageSizeAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeImageSizeAdvanceRequest() = default ;
    ChangeImageSizeAdvanceRequest& operator=(const ChangeImageSizeAdvanceRequest &) = default ;
    ChangeImageSizeAdvanceRequest& operator=(ChangeImageSizeAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->urlObject_ != nullptr && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ChangeImageSizeAdvanceRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline ChangeImageSizeAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ChangeImageSizeAdvanceRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> height_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
