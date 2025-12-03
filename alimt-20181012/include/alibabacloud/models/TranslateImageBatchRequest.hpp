// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATEIMAGEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATEIMAGEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateImageBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateImageBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTaskId, customTaskId_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateImageBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTaskId, customTaskId_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    TranslateImageBatchRequest() = default ;
    TranslateImageBatchRequest(const TranslateImageBatchRequest &) = default ;
    TranslateImageBatchRequest(TranslateImageBatchRequest &&) = default ;
    TranslateImageBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateImageBatchRequest() = default ;
    TranslateImageBatchRequest& operator=(const TranslateImageBatchRequest &) = default ;
    TranslateImageBatchRequest& operator=(TranslateImageBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTaskId_ == nullptr
        && return this->ext_ == nullptr && return this->field_ == nullptr && return this->imageUrls_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr; };
    // customTaskId Field Functions 
    bool hasCustomTaskId() const { return this->customTaskId_ != nullptr;};
    void deleteCustomTaskId() { this->customTaskId_ = nullptr;};
    inline string customTaskId() const { DARABONBA_PTR_GET_DEFAULT(customTaskId_, "") };
    inline TranslateImageBatchRequest& setCustomTaskId(string customTaskId) { DARABONBA_PTR_SET_VALUE(customTaskId_, customTaskId) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline TranslateImageBatchRequest& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline TranslateImageBatchRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline string imageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
    inline TranslateImageBatchRequest& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslateImageBatchRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslateImageBatchRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    std::shared_ptr<string> customTaskId_ = nullptr;
    std::shared_ptr<string> ext_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageUrls_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
