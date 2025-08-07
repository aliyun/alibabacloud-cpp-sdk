// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODYDATADOCUMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODYDATADOCUMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexDocumentsResponseBodyDataDocuments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexDocumentsResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexDocumentsResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIndexDocumentsResponseBodyDataDocuments() = default ;
    ListIndexDocumentsResponseBodyDataDocuments(const ListIndexDocumentsResponseBodyDataDocuments &) = default ;
    ListIndexDocumentsResponseBodyDataDocuments(ListIndexDocumentsResponseBodyDataDocuments &&) = default ;
    ListIndexDocumentsResponseBodyDataDocuments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexDocumentsResponseBodyDataDocuments() = default ;
    ListIndexDocumentsResponseBodyDataDocuments& operator=(const ListIndexDocumentsResponseBodyDataDocuments &) = default ;
    ListIndexDocumentsResponseBodyDataDocuments& operator=(ListIndexDocumentsResponseBodyDataDocuments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->documentType_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->message_ != nullptr && this->name_ != nullptr
        && this->size_ != nullptr && this->sourceId_ != nullptr && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListIndexDocumentsResponseBodyDataDocuments& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListIndexDocumentsResponseBodyDataDocuments& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndexDocumentsResponseBodyDataDocuments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error status code of document import.
    std::shared_ptr<string> code_ = nullptr;
    // The format of the document. Valid values: pdf, docx, doc, txt, md, pptx, ppt, and EXCEL.
    std::shared_ptr<string> documentType_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The primary key ID of the document.
    std::shared_ptr<string> id_ = nullptr;
    // The error message of document import.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the document.
    std::shared_ptr<string> name_ = nullptr;
    // The size of the document. Unit: bytes.
    std::shared_ptr<int32_t> size_ = nullptr;
    // For unstructured knowledge base, this parameter is the category ID. To view the category ID, you can click the ID icon next to the category name on the Unstructured Data tab of the [Data Management](https://bailian.console.aliyun.com/#/data-center) page.
    // 
    // For structured knowledge base, this parameter is the data table ID. To view the table ID, you can click the ID icon next to the table name on the Structured Data tab of the [Data Management](https://bailian.console.aliyun.com/#/data-center) page.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The import status of the document. Valid values:
    // 
    // *   INSERT_ERROR
    // *   RUNNING
    // *   DELETED
    // *   FINISH
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
