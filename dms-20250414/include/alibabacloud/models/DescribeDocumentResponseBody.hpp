// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDocumentResponseBody() = default ;
    DescribeDocumentResponseBody(const DescribeDocumentResponseBody &) = default ;
    DescribeDocumentResponseBody(DescribeDocumentResponseBody &&) = default ;
    DescribeDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocumentResponseBody() = default ;
    DescribeDocumentResponseBody& operator=(const DescribeDocumentResponseBody &) = default ;
    DescribeDocumentResponseBody& operator=(DescribeDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DocsCount, docsCount_);
        DARABONBA_PTR_TO_JSON(DocumentLoaderName, documentLoaderName_);
        DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(TextSplitterName, textSplitterName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DocsCount, docsCount_);
        DARABONBA_PTR_FROM_JSON(DocumentLoaderName, documentLoaderName_);
        DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(TextSplitterName, textSplitterName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->docsCount_ == nullptr && this->documentLoaderName_ == nullptr && this->fileExt_ == nullptr && this->fileSize_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->kbUuid_ == nullptr && this->keywords_ == nullptr && this->name_ == nullptr && this->state_ == nullptr
        && this->summary_ == nullptr && this->textSplitterName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // docsCount Field Functions 
      bool hasDocsCount() const { return this->docsCount_ != nullptr;};
      void deleteDocsCount() { this->docsCount_ = nullptr;};
      inline int64_t getDocsCount() const { DARABONBA_PTR_GET_DEFAULT(docsCount_, 0L) };
      inline Data& setDocsCount(int64_t docsCount) { DARABONBA_PTR_SET_VALUE(docsCount_, docsCount) };


      // documentLoaderName Field Functions 
      bool hasDocumentLoaderName() const { return this->documentLoaderName_ != nullptr;};
      void deleteDocumentLoaderName() { this->documentLoaderName_ = nullptr;};
      inline string getDocumentLoaderName() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderName_, "") };
      inline Data& setDocumentLoaderName(string documentLoaderName) { DARABONBA_PTR_SET_VALUE(documentLoaderName_, documentLoaderName) };


      // fileExt Field Functions 
      bool hasFileExt() const { return this->fileExt_ != nullptr;};
      void deleteFileExt() { this->fileExt_ = nullptr;};
      inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
      inline Data& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Data& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // kbUuid Field Functions 
      bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
      void deleteKbUuid() { this->kbUuid_ = nullptr;};
      inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
      inline Data& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
      inline Data& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int64_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
      inline Data& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // textSplitterName Field Functions 
      bool hasTextSplitterName() const { return this->textSplitterName_ != nullptr;};
      void deleteTextSplitterName() { this->textSplitterName_ = nullptr;};
      inline string getTextSplitterName() const { DARABONBA_PTR_GET_DEFAULT(textSplitterName_, "") };
      inline Data& setTextSplitterName(string textSplitterName) { DARABONBA_PTR_SET_VALUE(textSplitterName_, textSplitterName) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> docsCount_ {};
      shared_ptr<string> documentLoaderName_ {};
      shared_ptr<string> fileExt_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> kbUuid_ {};
      shared_ptr<string> keywords_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> state_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> textSplitterName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDocumentResponseBody::Data) };
    inline DescribeDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDocumentResponseBody::Data) };
    inline DescribeDocumentResponseBody& setData(const DescribeDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDocumentResponseBody& setData(DescribeDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDocumentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDocumentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeDocumentResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
