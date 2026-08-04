// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINDEXADDDOCUMENTSJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINDEXADDDOCUMENTSJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class SubmitIndexAddDocumentsJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIndexAddDocumentsJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_TO_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_TO_JSON(Separator, separator_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIndexAddDocumentsJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_FROM_JSON(Separator, separator_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SubmitIndexAddDocumentsJobShrinkRequest() = default ;
    SubmitIndexAddDocumentsJobShrinkRequest(const SubmitIndexAddDocumentsJobShrinkRequest &) = default ;
    SubmitIndexAddDocumentsJobShrinkRequest(SubmitIndexAddDocumentsJobShrinkRequest &&) = default ;
    SubmitIndexAddDocumentsJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIndexAddDocumentsJobShrinkRequest() = default ;
    SubmitIndexAddDocumentsJobShrinkRequest& operator=(const SubmitIndexAddDocumentsJobShrinkRequest &) = default ;
    SubmitIndexAddDocumentsJobShrinkRequest& operator=(SubmitIndexAddDocumentsJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryIdsShrink_ == nullptr
        && this->chunkMode_ == nullptr && this->chunkSize_ == nullptr && this->documentIdsShrink_ == nullptr && this->enableHeaders_ == nullptr && this->extraShrink_ == nullptr
        && this->indexId_ == nullptr && this->overlapSize_ == nullptr && this->separator_ == nullptr && this->sourceType_ == nullptr; };
    // categoryIdsShrink Field Functions 
    bool hasCategoryIdsShrink() const { return this->categoryIdsShrink_ != nullptr;};
    void deleteCategoryIdsShrink() { this->categoryIdsShrink_ = nullptr;};
    inline string getCategoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryIdsShrink_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setCategoryIdsShrink(string categoryIdsShrink) { DARABONBA_PTR_SET_VALUE(categoryIdsShrink_, categoryIdsShrink) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string getChunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // documentIdsShrink Field Functions 
    bool hasDocumentIdsShrink() const { return this->documentIdsShrink_ != nullptr;};
    void deleteDocumentIdsShrink() { this->documentIdsShrink_ = nullptr;};
    inline string getDocumentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentIdsShrink_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setDocumentIdsShrink(string documentIdsShrink) { DARABONBA_PTR_SET_VALUE(documentIdsShrink_, documentIdsShrink) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool getEnableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t getOverlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string getSeparator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SubmitIndexAddDocumentsJobShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The list of category IDs.
    shared_ptr<string> categoryIdsShrink_ {};
    // <props="china">
    // Enables custom chunking (applies only to files appended in this request). For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values (only one value can be specified at a time):
    // 
    // - **length**: chunk by length. Strictly chunks according to the specified `ChunkSize` and `OverlapSize`. If these two parameters are not specified, the system uses default values (`ChunkSize` of 500 and `OverlapSize` of 100). Chunking by length does not support `Separator` (even if specified, it does not take effect).
    // - **page**: chunk by page. If `ChunkSize` is specified, it is also considered during chunking (if not specified, the default value of 500 is used). Chunking by page does not support `OverlapSize` or `Separator` (even if specified, they do not take effect).
    // - **h1**~**h5**: chunk by headings at the corresponding level (`h1` is the first-level heading, and so on, with support up to `h5` fifth-level heading). If `ChunkSize` is specified, it is also considered during chunking (if not specified, the default value of 500 is used). Chunking by heading does not support `OverlapSize` or `Separator` (even if specified, they do not take effect).
    // - **regex**: chunk by regular expression. The `Separator` parameter must be specified. If `ChunkSize` is specified, it is also considered during chunking (if not specified, the default value of 500 is used). Chunking by regex does not support `OverlapSize` (even if specified, it does not take effect).
    // 
    // Default value: empty, which uses intelligent chunking.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify this parameter.
    shared_ptr<string> chunkMode_ {};
    // <props="china">
    // The chunk length, which is the maximum number of characters per text chunk (applies only to files appended in this request). When this length is exceeded:
    // 
    // - **Intelligent chunking** (without specifying `chunkMode`): the text is likely to be truncated.
    // - **Custom chunking** (with `chunkMode` specified): the text is forcibly split.
    // 
    // Valid values: 1 to 6000. If this parameter is not specified, the default value of 500 is used.
    // 
    // For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // > If you specify `ChunkSize` with a value less than 100, you must also specify `OverlapSize`. You can also leave both parameters unspecified (the system uses default values).
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify this parameter.
    shared_ptr<int32_t> chunkSize_ {};
    // The list of file IDs.
    shared_ptr<string> documentIdsShrink_ {};
    // Specifies whether to enable header assembly for Excel files. When enabled, the knowledge base treats the first row of all xlsx and xls files as headers and automatically appends them to each text chunk (data row), preventing the large language model from treating headers as regular data rows.
    // 
    // 
    // > Enable this feature only when all imported files are in xlsx or xls format and contain headers. Otherwise, leave it disabled.
    // >
    // 
    // Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: false.
    shared_ptr<bool> enableHeaders_ {};
    shared_ptr<string> extraShrink_ {};
    // The knowledge base ID, which is the `Data.Id` returned by the **CreateIndex** operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // <props="china">
    // The chunk overlap length (applies only to files appended in this request). It indicates the number of overlapping characters between the current text chunk and the previous text chunk. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values: 0 to 1024.
    // 
    // If this parameter is not specified, the default value of 100 is used.
    // > The value of `OverlapSize` must be less than the value of `ChunkSize`. Otherwise, chunking exceptions may occur.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify this parameter.
    shared_ptr<int32_t> overlapSize_ {};
    // <props="china">
    // The sentence separator, which takes effect only when `chunkMode` is set to **regex** (otherwise, it does not take effect even if specified). You can specify a regular expression (only one is supported) to split the file into small text chunks. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // When using intelligent chunking (without specifying `chunkMode`), keep the default empty value.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify this parameter.
    shared_ptr<string> separator_ {};
    // The data source type. Valid values:
    // - DATA_CENTER_CATEGORY: category type. Imports all documents under specified categories in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). Multiple categories are supported.
    // - DATA_CENTER_FILE: document type. Imports specified files from <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). Multiple files are supported.
    // 
    // > If this parameter is set to DATA_CENTER_CATEGORY, you must specify the `CategoryIds` parameter. If this parameter is set to DATA_CENTER_FILE, you must specify the `DocumentIds` parameter.
    // >
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
