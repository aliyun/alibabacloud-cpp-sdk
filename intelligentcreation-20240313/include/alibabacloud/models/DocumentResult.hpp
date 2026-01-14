// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocumentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class DocumentResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentResult& obj) { 
      DARABONBA_PTR_TO_JSON(documentInfo, documentInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentResult& obj) { 
      DARABONBA_PTR_FROM_JSON(documentInfo, documentInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DocumentResult() = default ;
    DocumentResult(const DocumentResult &) = default ;
    DocumentResult(DocumentResult &&) = default ;
    DocumentResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentResult() = default ;
    DocumentResult& operator=(const DocumentResult &) = default ;
    DocumentResult& operator=(DocumentResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // documentInfo Field Functions 
    bool hasDocumentInfo() const { return this->documentInfo_ != nullptr;};
    void deleteDocumentInfo() { this->documentInfo_ = nullptr;};
    inline const DocumentInfo & getDocumentInfo() const { DARABONBA_PTR_GET_CONST(documentInfo_, DocumentInfo) };
    inline DocumentInfo getDocumentInfo() { DARABONBA_PTR_GET(documentInfo_, DocumentInfo) };
    inline DocumentResult& setDocumentInfo(const DocumentInfo & documentInfo) { DARABONBA_PTR_SET_VALUE(documentInfo_, documentInfo) };
    inline DocumentResult& setDocumentInfo(DocumentInfo && documentInfo) { DARABONBA_PTR_SET_RVALUE(documentInfo_, documentInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DocumentResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DocumentInfo> documentInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
