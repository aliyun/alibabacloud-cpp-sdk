// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTTRANSLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTTRANSLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DocumentTranslateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentTranslateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentTranslateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DocumentTranslateRequest() = default ;
    DocumentTranslateRequest(const DocumentTranslateRequest &) = default ;
    DocumentTranslateRequest(DocumentTranslateRequest &&) = default ;
    DocumentTranslateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentTranslateRequest() = default ;
    DocumentTranslateRequest& operator=(const DocumentTranslateRequest &) = default ;
    DocumentTranslateRequest& operator=(DocumentTranslateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr
        && this->glossary_ == nullptr && this->targetLanguage_ == nullptr && this->url_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DocumentTranslateRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline DocumentTranslateRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline DocumentTranslateRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DocumentTranslateRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The supported document types: PDF or Word. Size limits: Word 200 MB/300 pages, PDF 200 MB/300 pages, maximum 200 MB per file.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The glossary ID to use when the glossary feature is required. Supports custom translation results, including do-not-translate (ABC-ABC), specified translation (ABC-DEF), and skip translation (ABC-empty value). Commonly used for brand name protection scenarios.
    shared_ptr<string> glossary_ {};
    // The target language. The language code uses the two-letter ISO 639-1 standard.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // The OSS URL path of the document to be translated.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
