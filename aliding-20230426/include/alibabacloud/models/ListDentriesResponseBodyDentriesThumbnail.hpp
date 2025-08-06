// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODYDENTRIESTHUMBNAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODYDENTRIESTHUMBNAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDentriesResponseBodyDentriesThumbnail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDentriesResponseBodyDentriesThumbnail& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListDentriesResponseBodyDentriesThumbnail& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListDentriesResponseBodyDentriesThumbnail() = default ;
    ListDentriesResponseBodyDentriesThumbnail(const ListDentriesResponseBodyDentriesThumbnail &) = default ;
    ListDentriesResponseBodyDentriesThumbnail(ListDentriesResponseBodyDentriesThumbnail &&) = default ;
    ListDentriesResponseBodyDentriesThumbnail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDentriesResponseBodyDentriesThumbnail() = default ;
    ListDentriesResponseBodyDentriesThumbnail& operator=(const ListDentriesResponseBodyDentriesThumbnail &) = default ;
    ListDentriesResponseBodyDentriesThumbnail& operator=(ListDentriesResponseBodyDentriesThumbnail &&) = default ;
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
    inline ListDentriesResponseBodyDentriesThumbnail& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListDentriesResponseBodyDentriesThumbnail& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListDentriesResponseBodyDentriesThumbnail& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
