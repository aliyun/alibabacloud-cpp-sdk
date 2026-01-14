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
        && this->chunkMode_ == nullptr && this->chunkSize_ == nullptr && this->documentIdsShrink_ == nullptr && this->enableHeaders_ == nullptr && this->indexId_ == nullptr
        && this->overlapSize_ == nullptr && this->separator_ == nullptr && this->sourceType_ == nullptr; };
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
    // The list of primary key IDs of the category.
    shared_ptr<string> categoryIdsShrink_ {};
    shared_ptr<string> chunkMode_ {};
    shared_ptr<int32_t> chunkSize_ {};
    // The list of the primary key IDs of the documents.
    shared_ptr<string> documentIdsShrink_ {};
    shared_ptr<bool> enableHeaders_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    shared_ptr<int32_t> overlapSize_ {};
    shared_ptr<string> separator_ {};
    // The data type of [Data Management](https://bailian.console.aliyun.com/#/data-center). For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   DATA_CENTER_CATEGORY: The category type. Import all documents from one or more categories in Data Center.
    // *   DATA_CENTER_FILE: The document type. Import one or more documents from Data Center.
    // 
    // >  If this parameter is set to DATA_CENTER_CATEGORY, you must specify the `CategoryIds` parameter. If this parameter is set to DATA_CENTER_FILE, you must specify the `DocumentIds` parameter.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
