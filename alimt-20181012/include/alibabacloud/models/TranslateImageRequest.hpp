// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(ImageBase64, imageBase64_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(ImageBase64, imageBase64_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    TranslateImageRequest() = default ;
    TranslateImageRequest(const TranslateImageRequest &) = default ;
    TranslateImageRequest(TranslateImageRequest &&) = default ;
    TranslateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateImageRequest() = default ;
    TranslateImageRequest& operator=(const TranslateImageRequest &) = default ;
    TranslateImageRequest& operator=(TranslateImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && return this->field_ == nullptr && return this->imageBase64_ == nullptr && return this->imageUrl_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline TranslateImageRequest& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline TranslateImageRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // imageBase64 Field Functions 
    bool hasImageBase64() const { return this->imageBase64_ != nullptr;};
    void deleteImageBase64() { this->imageBase64_ = nullptr;};
    inline string imageBase64() const { DARABONBA_PTR_GET_DEFAULT(imageBase64_, "") };
    inline TranslateImageRequest& setImageBase64(string imageBase64) { DARABONBA_PTR_SET_VALUE(imageBase64_, imageBase64) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline TranslateImageRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslateImageRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslateImageRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    std::shared_ptr<string> ext_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> imageBase64_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    std::shared_ptr<string> targetLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
