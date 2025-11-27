// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEURL_HPP_
#define ALIBABACLOUD_MODELS_IMAGEURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ImageURL : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageURL& obj) { 
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, ImageURL& obj) { 
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    ImageURL() = default ;
    ImageURL(const ImageURL &) = default ;
    ImageURL(ImageURL &&) = default ;
    ImageURL(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageURL() = default ;
    ImageURL& operator=(const ImageURL &) = default ;
    ImageURL& operator=(ImageURL &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->thumbnail_ == nullptr
        && return this->URL_ == nullptr; };
    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline ImageURL& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline ImageURL& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    std::shared_ptr<string> thumbnail_ = nullptr;
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
