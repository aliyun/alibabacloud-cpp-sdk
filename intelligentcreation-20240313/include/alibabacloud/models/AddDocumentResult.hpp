// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOCUMENTRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDDOCUMENTRESULT_HPP_
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
  class AddDocumentResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDocumentResult& obj) { 
      DARABONBA_PTR_TO_JSON(docName, docName_);
      DARABONBA_PTR_TO_JSON(documentInfo, documentInfo_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddDocumentResult& obj) { 
      DARABONBA_PTR_FROM_JSON(docName, docName_);
      DARABONBA_PTR_FROM_JSON(documentInfo, documentInfo_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AddDocumentResult() = default ;
    AddDocumentResult(const AddDocumentResult &) = default ;
    AddDocumentResult(AddDocumentResult &&) = default ;
    AddDocumentResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDocumentResult() = default ;
    AddDocumentResult& operator=(const AddDocumentResult &) = default ;
    AddDocumentResult& operator=(AddDocumentResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docName_ == nullptr
        && return this->documentInfo_ == nullptr && return this->errorMessage_ == nullptr && return this->success_ == nullptr; };
    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline AddDocumentResult& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // documentInfo Field Functions 
    bool hasDocumentInfo() const { return this->documentInfo_ != nullptr;};
    void deleteDocumentInfo() { this->documentInfo_ = nullptr;};
    inline const DocumentInfo & documentInfo() const { DARABONBA_PTR_GET_CONST(documentInfo_, DocumentInfo) };
    inline DocumentInfo documentInfo() { DARABONBA_PTR_GET(documentInfo_, DocumentInfo) };
    inline AddDocumentResult& setDocumentInfo(const DocumentInfo & documentInfo) { DARABONBA_PTR_SET_VALUE(documentInfo_, documentInfo) };
    inline AddDocumentResult& setDocumentInfo(DocumentInfo && documentInfo) { DARABONBA_PTR_SET_RVALUE(documentInfo_, documentInfo) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AddDocumentResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddDocumentResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<DocumentInfo> documentInfo_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
