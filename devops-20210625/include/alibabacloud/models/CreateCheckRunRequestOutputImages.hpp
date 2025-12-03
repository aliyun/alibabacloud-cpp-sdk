// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKRUNREQUESTOUTPUTIMAGES_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKRUNREQUESTOUTPUTIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCheckRunRequestOutputImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckRunRequestOutputImages& obj) { 
      DARABONBA_PTR_TO_JSON(alt, alt_);
      DARABONBA_PTR_TO_JSON(caption, caption_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckRunRequestOutputImages& obj) { 
      DARABONBA_PTR_FROM_JSON(alt, alt_);
      DARABONBA_PTR_FROM_JSON(caption, caption_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
    };
    CreateCheckRunRequestOutputImages() = default ;
    CreateCheckRunRequestOutputImages(const CreateCheckRunRequestOutputImages &) = default ;
    CreateCheckRunRequestOutputImages(CreateCheckRunRequestOutputImages &&) = default ;
    CreateCheckRunRequestOutputImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckRunRequestOutputImages() = default ;
    CreateCheckRunRequestOutputImages& operator=(const CreateCheckRunRequestOutputImages &) = default ;
    CreateCheckRunRequestOutputImages& operator=(CreateCheckRunRequestOutputImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alt_ == nullptr
        && return this->caption_ == nullptr && return this->imageUrl_ == nullptr; };
    // alt Field Functions 
    bool hasAlt() const { return this->alt_ != nullptr;};
    void deleteAlt() { this->alt_ = nullptr;};
    inline string alt() const { DARABONBA_PTR_GET_DEFAULT(alt_, "") };
    inline CreateCheckRunRequestOutputImages& setAlt(string alt) { DARABONBA_PTR_SET_VALUE(alt_, alt) };


    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline CreateCheckRunRequestOutputImages& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateCheckRunRequestOutputImages& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> alt_ = nullptr;
    std::shared_ptr<string> caption_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
