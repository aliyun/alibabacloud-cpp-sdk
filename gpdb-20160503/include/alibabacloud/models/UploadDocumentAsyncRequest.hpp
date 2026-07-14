// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCUMENTASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCUMENTASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UploadDocumentAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDocumentAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Separators, separators_);
      DARABONBA_PTR_TO_JSON(SplitterModel, splitterModel_);
      DARABONBA_PTR_TO_JSON(TextSplitterName, textSplitterName_);
      DARABONBA_PTR_TO_JSON(VlEnhance, vlEnhance_);
      DARABONBA_PTR_TO_JSON(ZhTitleEnhance, zhTitleEnhance_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDocumentAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Separators, separators_);
      DARABONBA_PTR_FROM_JSON(SplitterModel, splitterModel_);
      DARABONBA_PTR_FROM_JSON(TextSplitterName, textSplitterName_);
      DARABONBA_PTR_FROM_JSON(VlEnhance, vlEnhance_);
      DARABONBA_PTR_FROM_JSON(ZhTitleEnhance, zhTitleEnhance_);
    };
    UploadDocumentAsyncRequest() = default ;
    UploadDocumentAsyncRequest(const UploadDocumentAsyncRequest &) = default ;
    UploadDocumentAsyncRequest(UploadDocumentAsyncRequest &&) = default ;
    UploadDocumentAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDocumentAsyncRequest() = default ;
    UploadDocumentAsyncRequest& operator=(const UploadDocumentAsyncRequest &) = default ;
    UploadDocumentAsyncRequest& operator=(UploadDocumentAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkOverlap_ == nullptr
        && this->chunkSize_ == nullptr && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->documentLoaderName_ == nullptr && this->dryRun_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->metadata_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->separators_ == nullptr && this->splitterModel_ == nullptr && this->textSplitterName_ == nullptr
        && this->vlEnhance_ == nullptr && this->zhTitleEnhance_ == nullptr; };
    // chunkOverlap Field Functions 
    bool hasChunkOverlap() const { return this->chunkOverlap_ != nullptr;};
    void deleteChunkOverlap() { this->chunkOverlap_ = nullptr;};
    inline int32_t getChunkOverlap() const { DARABONBA_PTR_GET_DEFAULT(chunkOverlap_, 0) };
    inline UploadDocumentAsyncRequest& setChunkOverlap(int32_t chunkOverlap) { DARABONBA_PTR_SET_VALUE(chunkOverlap_, chunkOverlap) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline UploadDocumentAsyncRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UploadDocumentAsyncRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UploadDocumentAsyncRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // documentLoaderName Field Functions 
    bool hasDocumentLoaderName() const { return this->documentLoaderName_ != nullptr;};
    void deleteDocumentLoaderName() { this->documentLoaderName_ = nullptr;};
    inline string getDocumentLoaderName() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderName_, "") };
    inline UploadDocumentAsyncRequest& setDocumentLoaderName(string documentLoaderName) { DARABONBA_PTR_SET_VALUE(documentLoaderName_, documentLoaderName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UploadDocumentAsyncRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadDocumentAsyncRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadDocumentAsyncRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline UploadDocumentAsyncRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UploadDocumentAsyncRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UploadDocumentAsyncRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UploadDocumentAsyncRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadDocumentAsyncRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadDocumentAsyncRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // separators Field Functions 
    bool hasSeparators() const { return this->separators_ != nullptr;};
    void deleteSeparators() { this->separators_ = nullptr;};
    inline const vector<string> & getSeparators() const { DARABONBA_PTR_GET_CONST(separators_, vector<string>) };
    inline vector<string> getSeparators() { DARABONBA_PTR_GET(separators_, vector<string>) };
    inline UploadDocumentAsyncRequest& setSeparators(const vector<string> & separators) { DARABONBA_PTR_SET_VALUE(separators_, separators) };
    inline UploadDocumentAsyncRequest& setSeparators(vector<string> && separators) { DARABONBA_PTR_SET_RVALUE(separators_, separators) };


    // splitterModel Field Functions 
    bool hasSplitterModel() const { return this->splitterModel_ != nullptr;};
    void deleteSplitterModel() { this->splitterModel_ = nullptr;};
    inline string getSplitterModel() const { DARABONBA_PTR_GET_DEFAULT(splitterModel_, "") };
    inline UploadDocumentAsyncRequest& setSplitterModel(string splitterModel) { DARABONBA_PTR_SET_VALUE(splitterModel_, splitterModel) };


    // textSplitterName Field Functions 
    bool hasTextSplitterName() const { return this->textSplitterName_ != nullptr;};
    void deleteTextSplitterName() { this->textSplitterName_ = nullptr;};
    inline string getTextSplitterName() const { DARABONBA_PTR_GET_DEFAULT(textSplitterName_, "") };
    inline UploadDocumentAsyncRequest& setTextSplitterName(string textSplitterName) { DARABONBA_PTR_SET_VALUE(textSplitterName_, textSplitterName) };


    // vlEnhance Field Functions 
    bool hasVlEnhance() const { return this->vlEnhance_ != nullptr;};
    void deleteVlEnhance() { this->vlEnhance_ = nullptr;};
    inline bool getVlEnhance() const { DARABONBA_PTR_GET_DEFAULT(vlEnhance_, false) };
    inline UploadDocumentAsyncRequest& setVlEnhance(bool vlEnhance) { DARABONBA_PTR_SET_VALUE(vlEnhance_, vlEnhance) };


    // zhTitleEnhance Field Functions 
    bool hasZhTitleEnhance() const { return this->zhTitleEnhance_ != nullptr;};
    void deleteZhTitleEnhance() { this->zhTitleEnhance_ = nullptr;};
    inline bool getZhTitleEnhance() const { DARABONBA_PTR_GET_DEFAULT(zhTitleEnhance_, false) };
    inline UploadDocumentAsyncRequest& setZhTitleEnhance(bool zhTitleEnhance) { DARABONBA_PTR_SET_VALUE(zhTitleEnhance_, zhTitleEnhance) };


  protected:
    // The size of overlapping data between consecutive chunks. The maximum value of this parameter cannot be greater than the value of the ChunkSize parameter.
    // >  This parameter prevents context loss caused by data truncation. For example, when you upload long text, you can retain specific overlapping text content between consecutive chunks for better context understanding.
    shared_ptr<int32_t> chunkOverlap_ {};
    // The strategy for processing large data: the size of each chunk when data is split into smaller parts. Maximum value: 2048.
    shared_ptr<int32_t> chunkSize_ {};
    // The name of the document collection.
    // >Created by the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation. You can call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to query the created document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The ID of the instance that has vector engine optimization enabled. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in the target region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the document loader. If you do not specify this parameter, the system automatically selects the corresponding document loader based on the file name extension in the following order. Valid values:
    // *   UnstructuredHTMLLoader: .html
    // *   UnstructuredMarkdownLoader: .md
    // *   PyMuPDFLoader: .pdf
    // *   PyPDFLoader: .pdf
    // *   RapidOCRPDFLoader: .pdf
    // *   PDFWithImageRefLoader: .pdf (with the text-image association feature)
    // *   JSONLoader: .json
    // *   CSVLoader: .csv
    // *   RapidOCRLoader: .png, .jpg, .jpeg, and .bmp
    // *   UnstructuredFileLoader: .eml, .msg, .rst, .txt, .docx, .epub, .odt, .pptx, and .tsv
    // *   ADBPGLoader (paid, first 3,000 pages free): .pdf, .doc, .docx, .ppt, .pptx, .xls, .xlsx, .xlsm, .csv, .txt, .jpg, .jpeg, .png, .bmp, .gif, .md, .html, .epub, .mobi, and .rtf
    shared_ptr<string> documentLoaderName_ {};
    // Specifies whether to perform only document understanding and chunking without vectorization and storage. Default value: false.
    // 
    // >  You can set this parameter to true to check the chunking results and then optimize as needed.
    shared_ptr<bool> dryRun_ {};
    // The file name of the document.
    // 
    // >* The file name must include file name extension, such as .json, .md, or .pdf.
    // >* Supported image file extensions include .bmp, .jpg, .jpeg, .png, and .tiff.
    // >* You can upload images by using an archive. The archive file name must include file name extension. Supported archive extensions include .tar, .gz, and .zip.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The publicly accessible URL of the document.
    // > Use the SDK to call this operation. The SDK provides a method named UploadDocumentAsyncAdvance that allows you to directly upload local files.
    // If the URL points to an image archive, the number of images in the archive cannot exceed 100.
    // 
    // >Notice: 
    // The maximum size of an image uploaded by using multimodal-embedding-v1 is 3 MB.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The metadata. The value of this parameter must be the same as the Metadata parameter specified when you call the CreateDocumentCollection operation.
    Darabonba::Json metadata_ {};
    // The namespace. Default value: public. You can call the CreateNamespace operation to create a namespace and call the ListNamespaces operation to query the list of namespaces.
    shared_ptr<string> namespace_ {};
    // The password of the namespace. The value is specified by the CreateNamespace operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The separators used to split large data.
    // > *   This is an important parameter that determines the effectiveness of data chunking. This parameter is related to the splitter specified by the TextSplitterName parameter.
    // >*  In most cases, you do not need to specify this parameter. The server assigns separators based on the value of the TextSplitterName parameter.
    shared_ptr<vector<string>> separators_ {};
    // The splitting model to use when DocumentLoaderName is set to ADBPGLoader and TextSplitterName is set to LLMSplitter. Default value: qwen3-8b.
    // > 
    // > Currently supported splitting models:
    // > qwq-plus, qwq-plus-latest,
    // > qwen-max, qwen-max-latest,
    // > qwen-plus, qwen-plus-latest,
    // > qwen-turbo, qwen-turbo-latest,
    // > qwen3-235b-a22b, qwen3-32b, qwen3-30b-a3b,
    // > qwen3-14b, qwen3-8b, qwen3-4b, qwen3-1.7b, qwen3-0.6b,
    // > qwq-32b
    // > qwen2.5-14b-instruct-1m, qwen2.5-7b-instruct-1m
    // > qwen2.5-72b-instruct, qwen2.5-32b-instruct,
    // > qwen2.5-14b-instruct, qwen2.5-7b-instruct,
    // > qwen2.5-3b-instruct, qwen2.5-1.5b-instruct, qwen2.5-0.5b-instruct
    shared_ptr<string> splitterModel_ {};
    // The name of the text splitter. Valid values:
    // *   **ChineseRecursiveTextSplitter**: inherits from RecursiveCharacterTextSplitter and uses `["
    // 
    // ","
    // ", "。|!|?", "\\.\\s|\\!\\s|\\?\\s", ";|;\\s", ",|,\\s"]` as the default separators with regular expression matching.
    // *   **RecursiveCharacterTextSplitter**: uses `["
    // 
    // ", "
    // ", " ", ""]` as the default separators. This splitter supports splitting code in languages such as C++, Go, Java, JS, PHP, Proto, Python, RST, Ruby, Rust, Scala, Swift, Markdown, LaTeX, HTML, Sol, and C Sharp.
    // *   **SpacyTextSplitter**: uses `
    // 
    // ` as the default separator and the spaCy en_core_web_sm model. This splitter provides better splitting results.
    // *   **MarkdownHeaderTextSplitter**: splits text in the format of [("#", "head1"), ("##", "head2"), ("###", "head3"), ("####", "head4")]. This splitter is suitable for Markdown text.
    // *   **LLMSplitter**: uses an LLM to split text. The default model is qwen3-8b. This splitter takes effect only when ADBPGLoader is selected as the document loader.
    shared_ptr<string> textSplitterName_ {};
    // Specifies whether to enable VL-enhanced content recognition for complex documents. Default value: false.
    // 
    // > 
    // > - For complex documents with disorganized layouts and formats, enable VL-enhanced content recognition.
    // > - After VL-enhanced content recognition is enabled, document processing takes longer.
    // > - After VL-enhanced content recognition is enabled, images in the document cannot be stored or recalled.
    shared_ptr<bool> vlEnhance_ {};
    // Specifies whether to enable title enhancement.
    // >You can identify the title text, mark the text in the metadata, and then combine the text with the upper-level title for text enhancement.
    shared_ptr<bool> zhTitleEnhance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
