// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTCORRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTCORRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextCorrectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextCorrectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
    };
    friend void from_json(const Darabonba::Json& j, TextCorrectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
    };
    TextCorrectRequest() = default ;
    TextCorrectRequest(const TextCorrectRequest &) = default ;
    TextCorrectRequest(TextCorrectRequest &&) = default ;
    TextCorrectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextCorrectRequest() = default ;
    TextCorrectRequest& operator=(const TextCorrectRequest &) = default ;
    TextCorrectRequest& operator=(TextCorrectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceLanguage_ == nullptr
        && this->sourceText_ == nullptr; };
    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TextCorrectRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string getSourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline TextCorrectRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


  protected:
    // Source language code. Required. You can pass "auto" for automatic language detection. Supports 14 languages.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // Text to be corrected. Required.
    // 
    // This parameter is required.
    shared_ptr<string> sourceText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
