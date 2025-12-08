// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECARTOONIZEDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECARTOONIZEDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateCartoonizedImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCartoonizedImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCartoonizedImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    GenerateCartoonizedImageRequest() = default ;
    GenerateCartoonizedImageRequest(const GenerateCartoonizedImageRequest &) = default ;
    GenerateCartoonizedImageRequest(GenerateCartoonizedImageRequest &&) = default ;
    GenerateCartoonizedImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCartoonizedImageRequest() = default ;
    GenerateCartoonizedImageRequest& operator=(const GenerateCartoonizedImageRequest &) = default ;
    GenerateCartoonizedImageRequest& operator=(GenerateCartoonizedImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageType_ == nullptr
        && return this->imageUrl_ == nullptr && return this->index_ == nullptr; };
    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GenerateCartoonizedImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GenerateCartoonizedImageRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GenerateCartoonizedImageRequest& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    std::shared_ptr<string> imageType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
