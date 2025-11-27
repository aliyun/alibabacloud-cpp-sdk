// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTRACTDOCUMENTTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXTRACTDOCUMENTTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ExtractDocumentTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtractDocumentTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentText, documentText_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExtractDocumentTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentText, documentText_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExtractDocumentTextResponseBody() = default ;
    ExtractDocumentTextResponseBody(const ExtractDocumentTextResponseBody &) = default ;
    ExtractDocumentTextResponseBody(ExtractDocumentTextResponseBody &&) = default ;
    ExtractDocumentTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtractDocumentTextResponseBody() = default ;
    ExtractDocumentTextResponseBody& operator=(const ExtractDocumentTextResponseBody &) = default ;
    ExtractDocumentTextResponseBody& operator=(ExtractDocumentTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentText_ == nullptr
        && return this->requestId_ == nullptr; };
    // documentText Field Functions 
    bool hasDocumentText() const { return this->documentText_ != nullptr;};
    void deleteDocumentText() { this->documentText_ = nullptr;};
    inline string documentText() const { DARABONBA_PTR_GET_DEFAULT(documentText_, "") };
    inline ExtractDocumentTextResponseBody& setDocumentText(string documentText) { DARABONBA_PTR_SET_VALUE(documentText_, documentText) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExtractDocumentTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The text content of the document.
    std::shared_ptr<string> documentText_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
