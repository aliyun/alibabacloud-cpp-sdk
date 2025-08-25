// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateImageWithTextAndImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageWithTextAndImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatioMode, aspectRatioMode_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(RefImageUrl, refImageUrl_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageWithTextAndImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatioMode, aspectRatioMode_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(RefImageUrl, refImageUrl_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GenerateImageWithTextAndImageRequest() = default ;
    GenerateImageWithTextAndImageRequest(const GenerateImageWithTextAndImageRequest &) = default ;
    GenerateImageWithTextAndImageRequest(GenerateImageWithTextAndImageRequest &&) = default ;
    GenerateImageWithTextAndImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageWithTextAndImageRequest() = default ;
    GenerateImageWithTextAndImageRequest& operator=(const GenerateImageWithTextAndImageRequest &) = default ;
    GenerateImageWithTextAndImageRequest& operator=(GenerateImageWithTextAndImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aspectRatioMode_ != nullptr
        && this->number_ != nullptr && this->refImageUrl_ != nullptr && this->resolution_ != nullptr && this->similarity_ != nullptr && this->text_ != nullptr; };
    // aspectRatioMode Field Functions 
    bool hasAspectRatioMode() const { return this->aspectRatioMode_ != nullptr;};
    void deleteAspectRatioMode() { this->aspectRatioMode_ = nullptr;};
    inline string aspectRatioMode() const { DARABONBA_PTR_GET_DEFAULT(aspectRatioMode_, "") };
    inline GenerateImageWithTextAndImageRequest& setAspectRatioMode(string aspectRatioMode) { DARABONBA_PTR_SET_VALUE(aspectRatioMode_, aspectRatioMode) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline GenerateImageWithTextAndImageRequest& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // refImageUrl Field Functions 
    bool hasRefImageUrl() const { return this->refImageUrl_ != nullptr;};
    void deleteRefImageUrl() { this->refImageUrl_ = nullptr;};
    inline string refImageUrl() const { DARABONBA_PTR_GET_DEFAULT(refImageUrl_, "") };
    inline GenerateImageWithTextAndImageRequest& setRefImageUrl(string refImageUrl) { DARABONBA_PTR_SET_VALUE(refImageUrl_, refImageUrl) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GenerateImageWithTextAndImageRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline float similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
    inline GenerateImageWithTextAndImageRequest& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GenerateImageWithTextAndImageRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> aspectRatioMode_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refImageUrl_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<float> similarity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
