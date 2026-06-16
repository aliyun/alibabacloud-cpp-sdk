// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LANGUAGEDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LANGUAGEDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class LanguageDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LanguageDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
    };
    friend void from_json(const Darabonba::Json& j, LanguageDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
    };
    LanguageDetectRequest() = default ;
    LanguageDetectRequest(const LanguageDetectRequest &) = default ;
    LanguageDetectRequest(LanguageDetectRequest &&) = default ;
    LanguageDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LanguageDetectRequest() = default ;
    LanguageDetectRequest& operator=(const LanguageDetectRequest &) = default ;
    LanguageDetectRequest& operator=(LanguageDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceText_ == nullptr; };
    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string getSourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline LanguageDetectRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


  protected:
    // The source text for language detection. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> sourceText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
