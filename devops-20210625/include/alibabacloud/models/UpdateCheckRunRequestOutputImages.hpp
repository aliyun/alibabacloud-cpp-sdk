// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKRUNREQUESTOUTPUTIMAGES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKRUNREQUESTOUTPUTIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateCheckRunRequestOutputImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckRunRequestOutputImages& obj) { 
      DARABONBA_PTR_TO_JSON(alt, alt_);
      DARABONBA_PTR_TO_JSON(caption, caption_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckRunRequestOutputImages& obj) { 
      DARABONBA_PTR_FROM_JSON(alt, alt_);
      DARABONBA_PTR_FROM_JSON(caption, caption_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
    };
    UpdateCheckRunRequestOutputImages() = default ;
    UpdateCheckRunRequestOutputImages(const UpdateCheckRunRequestOutputImages &) = default ;
    UpdateCheckRunRequestOutputImages(UpdateCheckRunRequestOutputImages &&) = default ;
    UpdateCheckRunRequestOutputImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckRunRequestOutputImages() = default ;
    UpdateCheckRunRequestOutputImages& operator=(const UpdateCheckRunRequestOutputImages &) = default ;
    UpdateCheckRunRequestOutputImages& operator=(UpdateCheckRunRequestOutputImages &&) = default ;
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
    inline UpdateCheckRunRequestOutputImages& setAlt(string alt) { DARABONBA_PTR_SET_VALUE(alt_, alt) };


    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline UpdateCheckRunRequestOutputImages& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateCheckRunRequestOutputImages& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


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
