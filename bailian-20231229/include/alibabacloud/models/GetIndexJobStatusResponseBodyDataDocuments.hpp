// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODYDATADOCUMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODYDATADOCUMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexJobStatusResponseBodyDataDocuments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexJobStatusResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexJobStatusResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetIndexJobStatusResponseBodyDataDocuments() = default ;
    GetIndexJobStatusResponseBodyDataDocuments(const GetIndexJobStatusResponseBodyDataDocuments &) = default ;
    GetIndexJobStatusResponseBodyDataDocuments(GetIndexJobStatusResponseBodyDataDocuments &&) = default ;
    GetIndexJobStatusResponseBodyDataDocuments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexJobStatusResponseBodyDataDocuments() = default ;
    GetIndexJobStatusResponseBodyDataDocuments& operator=(const GetIndexJobStatusResponseBodyDataDocuments &) = default ;
    GetIndexJobStatusResponseBodyDataDocuments& operator=(GetIndexJobStatusResponseBodyDataDocuments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->docId_ != nullptr && this->docName_ != nullptr && this->gmtModified_ != nullptr && this->message_ != nullptr && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIndexJobStatusResponseBodyDataDocuments& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetIndexJobStatusResponseBodyDataDocuments& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline GetIndexJobStatusResponseBodyDataDocuments& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetIndexJobStatusResponseBodyDataDocuments& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIndexJobStatusResponseBodyDataDocuments& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIndexJobStatusResponseBodyDataDocuments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // HTTP status code
    std::shared_ptr<string> code_ = nullptr;
    // The primary key ID of the document.
    std::shared_ptr<string> docId_ = nullptr;
    // The name of the document.
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
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
