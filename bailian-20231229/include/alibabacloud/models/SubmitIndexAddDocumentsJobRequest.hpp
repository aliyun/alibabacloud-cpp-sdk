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
    virtual bool empty() const override { this->categoryIds_ != nullptr
        && this->chunkMode_ != nullptr && this->chunkSize_ != nullptr && this->documentIds_ != nullptr && this->enableHeaders_ != nullptr && this->indexId_ != nullptr
        && this->overlapSize_ != nullptr && this->separator_ != nullptr && this->sourceType_ != nullptr; };
    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<string> & categoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<string>) };
    inline vector<string> categoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<string>) };
    inline SubmitIndexAddDocumentsJobRequest& setCategoryIds(const vector<string> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline SubmitIndexAddDocumentsJobRequest& setCategoryIds(vector<string> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string chunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline SubmitIndexAddDocumentsJobRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & documentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> documentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline SubmitIndexAddDocumentsJobRequest& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline SubmitIndexAddDocumentsJobRequest& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool enableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline SubmitIndexAddDocumentsJobRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t overlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline SubmitIndexAddDocumentsJobRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string separator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SubmitIndexAddDocumentsJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The list of primary key IDs of the category.
    std::shared_ptr<vector<string>> categoryIds_ = nullptr;
    std::shared_ptr<string> chunkMode_ = nullptr;
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    // The list of the primary key IDs of the documents.
    std::shared_ptr<vector<string>> documentIds_ = nullptr;
    std::shared_ptr<bool> enableHeaders_ = nullptr;
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexId_ = nullptr;
    std::shared_ptr<int32_t> overlapSize_ = nullptr;
    std::shared_ptr<string> separator_ = nullptr;
    // The data type of [Data Management](https://bailian.console.aliyun.com/#/data-center). For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   DATA_CENTER_CATEGORY: The category type. Import all documents from one or more categories in Data Center.
    // *   DATA_CENTER_FILE: The document type. Import one or more documents from Data Center.
    // 
    // >  If this parameter is set to DATA_CENTER_CATEGORY, you must specify the `CategoryIds` parameter. If this parameter is set to DATA_CENTER_FILE, you must specify the `DocumentIds` parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
