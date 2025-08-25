// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateImageWithTextAndImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageWithTextAndImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatioMode, aspectRatioMode_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_TO_JSON(RefImageUrl, refImageUrlObject_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageWithTextAndImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatioMode, aspectRatioMode_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_FROM_JSON(RefImageUrl, refImageUrlObject_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GenerateImageWithTextAndImageAdvanceRequest() = default ;
    GenerateImageWithTextAndImageAdvanceRequest(const GenerateImageWithTextAndImageAdvanceRequest &) = default ;
    GenerateImageWithTextAndImageAdvanceRequest(GenerateImageWithTextAndImageAdvanceRequest &&) = default ;
    GenerateImageWithTextAndImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageWithTextAndImageAdvanceRequest() = default ;
    GenerateImageWithTextAndImageAdvanceRequest& operator=(const GenerateImageWithTextAndImageAdvanceRequest &) = default ;
    GenerateImageWithTextAndImageAdvanceRequest& operator=(GenerateImageWithTextAndImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aspectRatioMode_ != nullptr
        && this->number_ != nullptr && this->refImageUrlObject_ != nullptr && this->resolution_ != nullptr && this->similarity_ != nullptr && this->text_ != nullptr; };
    // aspectRatioMode Field Functions 
    bool hasAspectRatioMode() const { return this->aspectRatioMode_ != nullptr;};
    void deleteAspectRatioMode() { this->aspectRatioMode_ = nullptr;};
    inline string aspectRatioMode() const { DARABONBA_PTR_GET_DEFAULT(aspectRatioMode_, "") };
    inline GenerateImageWithTextAndImageAdvanceRequest& setAspectRatioMode(string aspectRatioMode) { DARABONBA_PTR_SET_VALUE(aspectRatioMode_, aspectRatioMode) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline GenerateImageWithTextAndImageAdvanceRequest& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // refImageUrlObject Field Functions 
    bool hasRefImageUrlObject() const { return this->refImageUrlObject_ != nullptr;};
    void deleteRefImageUrlObject() { this->refImageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> refImageUrlObject() const { DARABONBA_GET(refImageUrlObject_) };
    inline GenerateImageWithTextAndImageAdvanceRequest& setRefImageUrlObject(shared_ptr<Darabonba::IStream> refImageUrlObject) { DARABONBA_SET_VALUE(refImageUrlObject_, refImageUrlObject) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GenerateImageWithTextAndImageAdvanceRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline float similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
    inline GenerateImageWithTextAndImageAdvanceRequest& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GenerateImageWithTextAndImageAdvanceRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> aspectRatioMode_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> refImageUrlObject_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<float> similarity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
