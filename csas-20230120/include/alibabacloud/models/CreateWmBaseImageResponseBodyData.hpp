// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ImageUrlExp, imageUrlExp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ImageUrlExp, imageUrlExp_);
    };
    CreateWmBaseImageResponseBodyData() = default ;
    CreateWmBaseImageResponseBodyData(const CreateWmBaseImageResponseBodyData &) = default ;
    CreateWmBaseImageResponseBodyData(CreateWmBaseImageResponseBodyData &&) = default ;
    CreateWmBaseImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageResponseBodyData() = default ;
    CreateWmBaseImageResponseBodyData& operator=(const CreateWmBaseImageResponseBodyData &) = default ;
    CreateWmBaseImageResponseBodyData& operator=(CreateWmBaseImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->imageUrl_ == nullptr && return this->imageUrlExp_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateWmBaseImageResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateWmBaseImageResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // imageUrlExp Field Functions 
    bool hasImageUrlExp() const { return this->imageUrlExp_ != nullptr;};
    void deleteImageUrlExp() { this->imageUrlExp_ = nullptr;};
    inline int64_t imageUrlExp() const { DARABONBA_PTR_GET_DEFAULT(imageUrlExp_, 0L) };
    inline CreateWmBaseImageResponseBodyData& setImageUrlExp(int64_t imageUrlExp) { DARABONBA_PTR_SET_VALUE(imageUrlExp_, imageUrlExp) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<int64_t> imageUrlExp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
