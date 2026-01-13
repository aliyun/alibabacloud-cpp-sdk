// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_TO_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_TO_JSON(DocumentLoader, documentLoader_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FileMtime, fileMtime_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TextSplitter, textSplitter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_FROM_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_FROM_JSON(DocumentLoader, documentLoader_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FileMtime, fileMtime_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TextSplitter, textSplitter_);
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
    virtual bool empty() const override { return this->chunkFileUrl_ == nullptr
        && this->docsCount_ == nullptr && this->documentLoader_ == nullptr && this->documentLoaderResultFileUrl_ == nullptr && this->fileExt_ == nullptr && this->fileMd5_ == nullptr
        && this->fileMtime_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileUrl_ == nullptr && this->fileVersion_ == nullptr
        && this->message_ == nullptr && this->plainChunkFileUrl_ == nullptr && this->requestId_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->textSplitter_ == nullptr; };
    // chunkFileUrl Field Functions 
    bool hasChunkFileUrl() const { return this->chunkFileUrl_ != nullptr;};
    void deleteChunkFileUrl() { this->chunkFileUrl_ = nullptr;};
    inline string getChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkFileUrl_, "") };
    inline DescribeDocumentResponseBody& setChunkFileUrl(string chunkFileUrl) { DARABONBA_PTR_SET_VALUE(chunkFileUrl_, chunkFileUrl) };


    // docsCount Field Functions 
    bool hasDocsCount() const { return this->docsCount_ != nullptr;};
    void deleteDocsCount() { this->docsCount_ = nullptr;};
    inline int32_t getDocsCount() const { DARABONBA_PTR_GET_DEFAULT(docsCount_, 0) };
    inline DescribeDocumentResponseBody& setDocsCount(int32_t docsCount) { DARABONBA_PTR_SET_VALUE(docsCount_, docsCount) };


    // documentLoader Field Functions 
    bool hasDocumentLoader() const { return this->documentLoader_ != nullptr;};
    void deleteDocumentLoader() { this->documentLoader_ = nullptr;};
    inline string getDocumentLoader() const { DARABONBA_PTR_GET_DEFAULT(documentLoader_, "") };
    inline DescribeDocumentResponseBody& setDocumentLoader(string documentLoader) { DARABONBA_PTR_SET_VALUE(documentLoader_, documentLoader) };


    // documentLoaderResultFileUrl Field Functions 
    bool hasDocumentLoaderResultFileUrl() const { return this->documentLoaderResultFileUrl_ != nullptr;};
    void deleteDocumentLoaderResultFileUrl() { this->documentLoaderResultFileUrl_ = nullptr;};
    inline string getDocumentLoaderResultFileUrl() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderResultFileUrl_, "") };
    inline DescribeDocumentResponseBody& setDocumentLoaderResultFileUrl(string documentLoaderResultFileUrl) { DARABONBA_PTR_SET_VALUE(documentLoaderResultFileUrl_, documentLoaderResultFileUrl) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline DescribeDocumentResponseBody& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline DescribeDocumentResponseBody& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // fileMtime Field Functions 
    bool hasFileMtime() const { return this->fileMtime_ != nullptr;};
    void deleteFileMtime() { this->fileMtime_ = nullptr;};
    inline string getFileMtime() const { DARABONBA_PTR_GET_DEFAULT(fileMtime_, "") };
    inline DescribeDocumentResponseBody& setFileMtime(string fileMtime) { DARABONBA_PTR_SET_VALUE(fileMtime_, fileMtime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeDocumentResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeDocumentResponseBody& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline DescribeDocumentResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline DescribeDocumentResponseBody& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // plainChunkFileUrl Field Functions 
    bool hasPlainChunkFileUrl() const { return this->plainChunkFileUrl_ != nullptr;};
    void deletePlainChunkFileUrl() { this->plainChunkFileUrl_ = nullptr;};
    inline string getPlainChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(plainChunkFileUrl_, "") };
    inline DescribeDocumentResponseBody& setPlainChunkFileUrl(string plainChunkFileUrl) { DARABONBA_PTR_SET_VALUE(plainChunkFileUrl_, plainChunkFileUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDocumentResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDocumentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textSplitter Field Functions 
    bool hasTextSplitter() const { return this->textSplitter_ != nullptr;};
    void deleteTextSplitter() { this->textSplitter_ = nullptr;};
    inline string getTextSplitter() const { DARABONBA_PTR_GET_DEFAULT(textSplitter_, "") };
    inline DescribeDocumentResponseBody& setTextSplitter(string textSplitter) { DARABONBA_PTR_SET_VALUE(textSplitter_, textSplitter) };


  protected:
    // The URL of the file after chunking. The validity period of the URL is 2 hours. The file is in the JSONL format. Each line is in the `{"page_content":"*****", "metadata": {"**":"***","**":"***"}` format.
    shared_ptr<string> chunkFileUrl_ {};
    // The number of chunks into which the document is splitted.
    shared_ptr<int32_t> docsCount_ {};
    // The name of the document loader.
    shared_ptr<string> documentLoader_ {};
    // The markdown output file that is generated by the ADBPGLoader. The validity period is 2 hours.
    shared_ptr<string> documentLoaderResultFileUrl_ {};
    // The extension of the document.
    shared_ptr<string> fileExt_ {};
    // The MD5 hash of the document.
    shared_ptr<string> fileMd5_ {};
    // The time when the document was last modified.
    shared_ptr<string> fileMtime_ {};
    // The name of the document.
    shared_ptr<string> fileName_ {};
    // The size of the document. Unit: bytes.
    shared_ptr<int64_t> fileSize_ {};
    // The download URL of the document. The validity period of the URL is 2 hours.
    shared_ptr<string> fileUrl_ {};
    // The version of the document. This value increments by 1 each time the same document is uploaded.
    shared_ptr<int32_t> fileVersion_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The URL of the TEXT that does not contain metadata after chunking. Each line is a chunk. The validity period of the URL is 2 hours.
    shared_ptr<string> plainChunkFileUrl_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The source of the document.
    shared_ptr<string> source_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // The name of the document splitter.
    shared_ptr<string> textSplitter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
