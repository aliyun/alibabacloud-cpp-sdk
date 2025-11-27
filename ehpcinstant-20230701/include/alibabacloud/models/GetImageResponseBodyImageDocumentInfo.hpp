// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEDOCUMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEDOCUMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImageDocumentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImageDocumentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(EncodingMode, encodingMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImageDocumentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(EncodingMode, encodingMode_);
    };
    GetImageResponseBodyImageDocumentInfo() = default ;
    GetImageResponseBodyImageDocumentInfo(const GetImageResponseBodyImageDocumentInfo &) = default ;
    GetImageResponseBodyImageDocumentInfo(GetImageResponseBodyImageDocumentInfo &&) = default ;
    GetImageResponseBodyImageDocumentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImageDocumentInfo() = default ;
    GetImageResponseBodyImageDocumentInfo& operator=(const GetImageResponseBodyImageDocumentInfo &) = default ;
    GetImageResponseBodyImageDocumentInfo& operator=(GetImageResponseBodyImageDocumentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->document_ == nullptr
        && return this->documentId_ == nullptr && return this->encodingMode_ == nullptr; };
    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string document() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline GetImageResponseBodyImageDocumentInfo& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline GetImageResponseBodyImageDocumentInfo& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // encodingMode Field Functions 
    bool hasEncodingMode() const { return this->encodingMode_ != nullptr;};
    void deleteEncodingMode() { this->encodingMode_ = nullptr;};
    inline string encodingMode() const { DARABONBA_PTR_GET_DEFAULT(encodingMode_, "") };
    inline GetImageResponseBodyImageDocumentInfo& setEncodingMode(string encodingMode) { DARABONBA_PTR_SET_VALUE(encodingMode_, encodingMode) };


  protected:
    std::shared_ptr<string> document_ = nullptr;
    std::shared_ptr<string> documentId_ = nullptr;
    std::shared_ptr<string> encodingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
