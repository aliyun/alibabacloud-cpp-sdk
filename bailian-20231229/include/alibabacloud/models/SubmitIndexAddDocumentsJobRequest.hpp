// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINDEXADDDOCUMENTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINDEXADDDOCUMENTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class SubmitIndexAddDocumentsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIndexAddDocumentsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_TO_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_TO_JSON(Separator, separator_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIndexAddDocumentsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_FROM_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_FROM_JSON(Separator, separator_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SubmitIndexAddDocumentsJobRequest() = default ;
    SubmitIndexAddDocumentsJobRequest(const SubmitIndexAddDocumentsJobRequest &) = default ;
    SubmitIndexAddDocumentsJobRequest(SubmitIndexAddDocumentsJobRequest &&) = default ;
    SubmitIndexAddDocumentsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIndexAddDocumentsJobRequest() = default ;
    SubmitIndexAddDocumentsJobRequest& operator=(const SubmitIndexAddDocumentsJobRequest &) = default ;
    SubmitIndexAddDocumentsJobRequest& operator=(SubmitIndexAddDocumentsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extra : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extra& obj) { 
        DARABONBA_PTR_TO_JSON(uniqueId, uniqueId_);
      };
      friend void from_json(const Darabonba::Json& j, Extra& obj) { 
        DARABONBA_PTR_FROM_JSON(uniqueId, uniqueId_);
      };
      Extra() = default ;
      Extra(const Extra &) = default ;
      Extra(Extra &&) = default ;
      Extra(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extra() = default ;
      Extra& operator=(const Extra &) = default ;
      Extra& operator=(Extra &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uniqueId_ == nullptr; };
      // uniqueId Field Functions 
      bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
      void deleteUniqueId() { this->uniqueId_ = nullptr;};
      inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
      inline Extra& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    protected:
      shared_ptr<string> uniqueId_ {};
    };

    virtual bool empty() const override { return this->categoryIds_ == nullptr
        && this->chunkMode_ == nullptr && this->chunkSize_ == nullptr && this->documentIds_ == nullptr && this->enableHeaders_ == nullptr && this->extra_ == nullptr
        && this->indexId_ == nullptr && this->overlapSize_ == nullptr && this->separator_ == nullptr && this->sourceType_ == nullptr; };
    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<string> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<string>) };
    inline vector<string> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<string>) };
    inline SubmitIndexAddDocumentsJobRequest& setCategoryIds(const vector<string> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline SubmitIndexAddDocumentsJobRequest& setCategoryIds(vector<string> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string getChunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline SubmitIndexAddDocumentsJobRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline SubmitIndexAddDocumentsJobRequest& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline SubmitIndexAddDocumentsJobRequest& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool getEnableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline SubmitIndexAddDocumentsJobRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const SubmitIndexAddDocumentsJobRequest::Extra & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, SubmitIndexAddDocumentsJobRequest::Extra) };
    inline SubmitIndexAddDocumentsJobRequest::Extra getExtra() { DARABONBA_PTR_GET(extra_, SubmitIndexAddDocumentsJobRequest::Extra) };
    inline SubmitIndexAddDocumentsJobRequest& setExtra(const SubmitIndexAddDocumentsJobRequest::Extra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline SubmitIndexAddDocumentsJobRequest& setExtra(SubmitIndexAddDocumentsJobRequest::Extra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t getOverlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline SubmitIndexAddDocumentsJobRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string getSeparator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // A list of category IDs.
    shared_ptr<vector<string>> categoryIds_ {};
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
    shared_ptr<vector<string>> documentIds_ {};
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
    shared_ptr<SubmitIndexAddDocumentsJobRequest::Extra> extra_ {};
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
