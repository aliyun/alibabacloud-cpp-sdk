// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECARTOONIZEDIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECARTOONIZEDIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateCartoonizedImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCartoonizedImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCartoonizedImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    GenerateCartoonizedImageAdvanceRequest() = default ;
    GenerateCartoonizedImageAdvanceRequest(const GenerateCartoonizedImageAdvanceRequest &) = default ;
    GenerateCartoonizedImageAdvanceRequest(GenerateCartoonizedImageAdvanceRequest &&) = default ;
    GenerateCartoonizedImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCartoonizedImageAdvanceRequest() = default ;
    GenerateCartoonizedImageAdvanceRequest& operator=(const GenerateCartoonizedImageAdvanceRequest &) = default ;
    GenerateCartoonizedImageAdvanceRequest& operator=(GenerateCartoonizedImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageType_ == nullptr
        && return this->imageUrlObject_ == nullptr && return this->index_ == nullptr; };
    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GenerateCartoonizedImageAdvanceRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline GenerateCartoonizedImageAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GenerateCartoonizedImageAdvanceRequest& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    std::shared_ptr<string> imageType_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
