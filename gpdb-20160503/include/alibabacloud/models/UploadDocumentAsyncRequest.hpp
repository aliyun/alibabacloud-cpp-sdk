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
        && return this->chunkSize_ == nullptr && return this->collection_ == nullptr && return this->DBInstanceId_ == nullptr && return this->documentLoaderName_ == nullptr && return this->dryRun_ == nullptr
        && return this->fileName_ == nullptr && return this->fileUrl_ == nullptr && return this->metadata_ == nullptr && return this->namespace_ == nullptr && return this->namespacePassword_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->separators_ == nullptr && return this->splitterModel_ == nullptr && return this->textSplitterName_ == nullptr
        && return this->vlEnhance_ == nullptr && return this->zhTitleEnhance_ == nullptr; };
    // chunkOverlap Field Functions 
    bool hasChunkOverlap() const { return this->chunkOverlap_ != nullptr;};
    void deleteChunkOverlap() { this->chunkOverlap_ = nullptr;};
    inline int32_t chunkOverlap() const { DARABONBA_PTR_GET_DEFAULT(chunkOverlap_, 0) };
    inline UploadDocumentAsyncRequest& setChunkOverlap(int32_t chunkOverlap) { DARABONBA_PTR_SET_VALUE(chunkOverlap_, chunkOverlap) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline UploadDocumentAsyncRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UploadDocumentAsyncRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UploadDocumentAsyncRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // documentLoaderName Field Functions 
    bool hasDocumentLoaderName() const { return this->documentLoaderName_ != nullptr;};
    void deleteDocumentLoaderName() { this->documentLoaderName_ = nullptr;};
    inline string documentLoaderName() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderName_, "") };
    inline UploadDocumentAsyncRequest& setDocumentLoaderName(string documentLoaderName) { DARABONBA_PTR_SET_VALUE(documentLoaderName_, documentLoaderName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UploadDocumentAsyncRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadDocumentAsyncRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadDocumentAsyncRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline UploadDocumentAsyncRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UploadDocumentAsyncRequest& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UploadDocumentAsyncRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UploadDocumentAsyncRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadDocumentAsyncRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadDocumentAsyncRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // separators Field Functions 
    bool hasSeparators() const { return this->separators_ != nullptr;};
    void deleteSeparators() { this->separators_ = nullptr;};
    inline const vector<string> & separators() const { DARABONBA_PTR_GET_CONST(separators_, vector<string>) };
    inline vector<string> separators() { DARABONBA_PTR_GET(separators_, vector<string>) };
    inline UploadDocumentAsyncRequest& setSeparators(const vector<string> & separators) { DARABONBA_PTR_SET_VALUE(separators_, separators) };
    inline UploadDocumentAsyncRequest& setSeparators(vector<string> && separators) { DARABONBA_PTR_SET_RVALUE(separators_, separators) };


    // splitterModel Field Functions 
    bool hasSplitterModel() const { return this->splitterModel_ != nullptr;};
    void deleteSplitterModel() { this->splitterModel_ = nullptr;};
    inline string splitterModel() const { DARABONBA_PTR_GET_DEFAULT(splitterModel_, "") };
    inline UploadDocumentAsyncRequest& setSplitterModel(string splitterModel) { DARABONBA_PTR_SET_VALUE(splitterModel_, splitterModel) };


    // textSplitterName Field Functions 
    bool hasTextSplitterName() const { return this->textSplitterName_ != nullptr;};
    void deleteTextSplitterName() { this->textSplitterName_ = nullptr;};
    inline string textSplitterName() const { DARABONBA_PTR_GET_DEFAULT(textSplitterName_, "") };
    inline UploadDocumentAsyncRequest& setTextSplitterName(string textSplitterName) { DARABONBA_PTR_SET_VALUE(textSplitterName_, textSplitterName) };


    // vlEnhance Field Functions 
    bool hasVlEnhance() const { return this->vlEnhance_ != nullptr;};
    void deleteVlEnhance() { this->vlEnhance_ = nullptr;};
    inline bool vlEnhance() const { DARABONBA_PTR_GET_DEFAULT(vlEnhance_, false) };
    inline UploadDocumentAsyncRequest& setVlEnhance(bool vlEnhance) { DARABONBA_PTR_SET_VALUE(vlEnhance_, vlEnhance) };


    // zhTitleEnhance Field Functions 
    bool hasZhTitleEnhance() const { return this->zhTitleEnhance_ != nullptr;};
    void deleteZhTitleEnhance() { this->zhTitleEnhance_ = nullptr;};
    inline bool zhTitleEnhance() const { DARABONBA_PTR_GET_DEFAULT(zhTitleEnhance_, false) };
    inline UploadDocumentAsyncRequest& setZhTitleEnhance(bool zhTitleEnhance) { DARABONBA_PTR_SET_VALUE(zhTitleEnhance_, zhTitleEnhance) };


  protected:
    // The size of data that is overlapped between consecutive chunks. The maximum value of this parameter cannot be greater than the value of the ChunkSize parameter.
    // 
    // >  This parameter is used to prevent context missing that may occur due to data truncation. For example, when you upload a long text, you can retain specific overlapped text content between consecutive chunks to better understand the context.
    std::shared_ptr<int32_t> chunkOverlap_ = nullptr;
    // Strategy for processing large data: the size of each chunk when the data is split into smaller parts. Maximum value is 2048.
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    // The name of the document library. 
    // > Created by the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) API. You can call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) API to view the document libraries that have already been created.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // Instance ID with vector engine optimization acceleration enabled. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the document loader. You do not need to specify this parameter. A document loader is automatically specified based on the file extension. Valid values:
    // 
    // *   UnstructuredHTMLLoader: `.html`
    // *   UnstructuredMarkdownLoader: `.md`
    // *   PyMuPDFLoader: `.pdf`
    // *   PyPDFLoader: `.pdf`
    // *   RapidOCRPDFLoader: `.pdf`
    // *   PDFWithImageRefLoader: `.pdf` (with the text-image association feature)
    // *   JSONLoader: `.json`
    // *   CSVLoader: `.csv`
    // *   RapidOCRLoader: `.png`, `.jpg`, `.jpeg`, and `.bmp`
    // *   UnstructuredFileLoader: `.eml`, `.msg`, `.rst`, `.txt`, `.docx`, `.epub`, `.odt`, `.pptx`, and `.tsv`
    std::shared_ptr<string> documentLoaderName_ = nullptr;
    // Specifies whether to perform only document understanding and chunking, but not vectorization and storage. Default value: false.
    // 
    // >  You can set this parameter to true, check the chunking effect, and then perform optimization if needed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The file name of the document.
    // 
    // > 
    // 
    // *   We recommend that you add an extension to the file name. Examples: `.json`, `.md`, and `.pdf`. If you do not add an extension, the default loader designed for unstructured data is used.
    // 
    // *   If an image file is involved, the file name must contain an extension. The following extensions are supported: `.bmp`, `.jpg`, `.jpeg`, `.png`, and `.tiff`.
    // 
    // *   You can use a compressed package to upload images. The package file name must contain an extension. Supported package file extensions: `.tar`, `.gz`, and `.zip`.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The URL of the publicly accessible document.
    // >  > - It is recommended to call this interface using the SDK, which provides a method called UploadDocumentAsyncAdvance for directly uploading local files. > - If the URL points to an image archive, the number of images in the archive should not exceed 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // The metadata. The value of this parameter must be the same as the Metadata parameter that is specified when you call the CreateDocumentCollection operation.
    Darabonba::Json metadata_ = nullptr;
    // Namespace, default is public. You can create one through the CreateNamespace interface and view the list via the ListNamespaces interface.
    std::shared_ptr<string> namespace_ = nullptr;
    // The password corresponding to the namespace.  > This value is specified by the CreateNamespace interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The separators that are used to split large amounts of data.
    // 
    // > 
    // 
    // *   This is an important parameter that determines the chunking effect. This parameter is related to the splitter that is specified by the TextSplitterName parameter.
    // 
    // *   In most cases, you do not need to specify this parameter. The server assigns separators based on the value of the TextSplitterName parameter.
    std::shared_ptr<vector<string>> separators_ = nullptr;
    std::shared_ptr<string> splitterModel_ = nullptr;
    // The name of the splitter. Valid values:
    // 
    // *   **ChineseRecursiveTextSplitter**: inherits from RecursiveCharacterTextSplitter, uses `["\\n\\n","\\n", "。|!|?", "\\.\\s|\\!\\s|\\?\\s", ";|;\\s", ",|,\\s"]` as separators by default, and uses regular expressions to match text.
    // *   **RecursiveCharacterTextSplitter**: uses `["\\n\\n", "\\n", " ", ""]` as separators by default. The splitter supports splitting code in languages such as `C++, Go, Java, JS, PHP, Proto, Python, RST, Ruby, Rust, Scala, Swift, Markdown, LaTeX, HTML, Sol, and C Sharp`.
    // *   **SpacyTextSplitter**: uses `\\n\\n` as separators by default and uses the en_core_web_sm model of spaCy. The splitter can obtain better splitting effect.
    // *   **MarkdownHeaderTextSplitter**: splits text in the `[("#", "head1"), ("##", "head2"), ("###", "head3"), ("####", "head4")]` format. The splitter is suitable for Markdown text.
    std::shared_ptr<string> textSplitterName_ = nullptr;
    std::shared_ptr<bool> vlEnhance_ = nullptr;
    // Specifies whether to enable title enhancement.
    // 
    // >  You can determine the title text, mark the text in the metadata, and then combine the text with the upper-level title to implement text enhancement.
    std::shared_ptr<bool> zhTitleEnhance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
