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
    // A list of category IDs.
    shared_ptr<string> categoryIdsShrink_ {};
    // <props="china">
    // 
    // The custom chunking mode. This setting applies only to the documents added in the current job. For more information, see [knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values (you can specify only one value):
    // 
    // - **length**: Splits the text by a fixed length. The chunking strictly follows the specified `ChunkSize` and `OverlapSize`. If you do not specify these parameters, the system uses the default values: a `ChunkSize` of 500 and an `OverlapSize` of 100. This mode ignores the `Separator` parameter.
    // 
    // - **page**: Splits the text by page. If `ChunkSize` is specified, its value is also applied during chunking. If `ChunkSize` is not set, a default value of 500 is used. This mode ignores the `OverlapSize` and `Separator` parameters.
    // 
    // - **h1**: Splits the text by level-1 headings. If `ChunkSize` is specified, its value is also applied during chunking. If `ChunkSize` is not set, a default value of 500 is used. This mode ignores the `OverlapSize` and `Separator` parameters.
    // 
    // - **h2**: Splits the text by level-2 headings. If `ChunkSize` is specified, its value is also applied during chunking. If `ChunkSize` is not set, a default value of 500 is used. This mode ignores the `OverlapSize` and `Separator` parameters.
    // 
    // - **regex**: Splits the text by using a regular expression. The `Separator` parameter is required for this mode. If `ChunkSize` is specified, its value is also applied during chunking. If `ChunkSize` is not set, a default value of 500 is used. This mode ignores the `OverlapSize` parameter.
    // 
    // If this parameter is not set, intelligent chunking is used by default.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not specify it.
    shared_ptr<string> chunkMode_ {};
    // <props="china">
    // 
    // The chunk size. Specifies the maximum number of characters for each text chunk. This setting applies only to the documents added in the current job. If a text segment exceeds this size, the behavior depends on the chunking mode:
    // 
    // - **Intelligent chunking** (if `ChunkMode` is not set): The text may be truncated.
    // 
    // - **Custom chunking** (if `ChunkMode` is set): The text is forcibly split.
    // 
    // The value must be in the range of [1, 6000]. Defaults to 500 if not specified.
    // 
    // For more information, see [knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // > If you specify a `ChunkSize` less than 100, you must also specify the `OverlapSize` parameter. You can also omit both parameters to use the system defaults.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not specify it.
    shared_ptr<int32_t> chunkSize_ {};
    // A list of file IDs.
    shared_ptr<string> documentIdsShrink_ {};
    // Specifies whether to include Excel file headers. If set to `true`, the knowledge base treats the first row of all .xlsx and .xls files as the header and automatically prepends it to each text chunk (data row). This prevents the large language model (LLM) from misinterpreting the header as a regular data row.
    // 
    // > Enable this parameter only if all imported documents are Excel files that contain a header.
    // 
    // Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    // 
    // Default value: false.
    shared_ptr<bool> enableHeaders_ {};
    shared_ptr<string> extraShrink_ {};
    // The knowledge base ID. This is the `Data.Id` returned by the **CreateIndex** API.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // <props="china">
    // 
    // Specifies the number of overlapping characters between adjacent text chunks. This setting applies only to the documents added in the current job. For more information, see [knowledge base](https://help.aliyun.com/document_detail/2807740.html). The value must be in the range of [0, 1024].
    // 
    // Defaults to 100 if not specified.
    // 
    // > The value of `OverlapSize` must be less than the value of `ChunkSize`. Otherwise, the chunking process may fail.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not specify it.
    shared_ptr<int32_t> overlapSize_ {};
    // <props="china">
    // 
    // The separator for chunking. This parameter is used only when `ChunkMode` is set to **regex**. You can specify a single regular expression (multiple expressions are not supported) to split the file into smaller text chunks. For more information, see [knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // When you use intelligent chunking (when `ChunkMode` is not specified), leave this parameter empty.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not specify it.
    shared_ptr<string> separator_ {};
    // The type of the data source. Valid values:
    // 
    // - DATA_CENTER_CATEGORY: Imports all documents from specified categories in <props="china">[application data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[application data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). You can import documents from multiple categories.
    // 
    // - DATA_CENTER_FILE: Imports specified files from <props="china">[application data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[application data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). You can import multiple files.
    // 
    // > If you set this parameter to `DATA_CENTER_CATEGORY`, you must specify the `CategoryIds` parameter. If you set this parameter to `DATA_CENTER_FILE`, you must specify the `DocumentIds` parameter.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
