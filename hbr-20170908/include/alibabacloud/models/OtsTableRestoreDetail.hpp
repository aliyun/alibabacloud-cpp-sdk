// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OTSTABLERESTOREDETAIL_HPP_
#define ALIBABACLOUD_MODELS_OTSTABLERESTOREDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class OtsTableRestoreDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OtsTableRestoreDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BatchChannelCount, batchChannelCount_);
      DARABONBA_PTR_TO_JSON(IndexNameSuffix, indexNameSuffix_);
      DARABONBA_PTR_TO_JSON(OverwriteExisting, overwriteExisting_);
      DARABONBA_PTR_TO_JSON(ReGenerateAutoIncrementPK, reGenerateAutoIncrementPK_);
      DARABONBA_PTR_TO_JSON(RestoreIndex, restoreIndex_);
      DARABONBA_PTR_TO_JSON(RestoreSearchIndex, restoreSearchIndex_);
      DARABONBA_PTR_TO_JSON(SearchIndexNameSuffix, searchIndexNameSuffix_);
    };
    friend void from_json(const Darabonba::Json& j, OtsTableRestoreDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchChannelCount, batchChannelCount_);
      DARABONBA_PTR_FROM_JSON(IndexNameSuffix, indexNameSuffix_);
      DARABONBA_PTR_FROM_JSON(OverwriteExisting, overwriteExisting_);
      DARABONBA_PTR_FROM_JSON(ReGenerateAutoIncrementPK, reGenerateAutoIncrementPK_);
      DARABONBA_PTR_FROM_JSON(RestoreIndex, restoreIndex_);
      DARABONBA_PTR_FROM_JSON(RestoreSearchIndex, restoreSearchIndex_);
      DARABONBA_PTR_FROM_JSON(SearchIndexNameSuffix, searchIndexNameSuffix_);
    };
    OtsTableRestoreDetail() = default ;
    OtsTableRestoreDetail(const OtsTableRestoreDetail &) = default ;
    OtsTableRestoreDetail(OtsTableRestoreDetail &&) = default ;
    OtsTableRestoreDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OtsTableRestoreDetail() = default ;
    OtsTableRestoreDetail& operator=(const OtsTableRestoreDetail &) = default ;
    OtsTableRestoreDetail& operator=(OtsTableRestoreDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchChannelCount_ == nullptr
        && return this->indexNameSuffix_ == nullptr && return this->overwriteExisting_ == nullptr && return this->reGenerateAutoIncrementPK_ == nullptr && return this->restoreIndex_ == nullptr && return this->restoreSearchIndex_ == nullptr
        && return this->searchIndexNameSuffix_ == nullptr; };
    // batchChannelCount Field Functions 
    bool hasBatchChannelCount() const { return this->batchChannelCount_ != nullptr;};
    void deleteBatchChannelCount() { this->batchChannelCount_ = nullptr;};
    inline int32_t batchChannelCount() const { DARABONBA_PTR_GET_DEFAULT(batchChannelCount_, 0) };
    inline OtsTableRestoreDetail& setBatchChannelCount(int32_t batchChannelCount) { DARABONBA_PTR_SET_VALUE(batchChannelCount_, batchChannelCount) };


    // indexNameSuffix Field Functions 
    bool hasIndexNameSuffix() const { return this->indexNameSuffix_ != nullptr;};
    void deleteIndexNameSuffix() { this->indexNameSuffix_ = nullptr;};
    inline string indexNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(indexNameSuffix_, "") };
    inline OtsTableRestoreDetail& setIndexNameSuffix(string indexNameSuffix) { DARABONBA_PTR_SET_VALUE(indexNameSuffix_, indexNameSuffix) };


    // overwriteExisting Field Functions 
    bool hasOverwriteExisting() const { return this->overwriteExisting_ != nullptr;};
    void deleteOverwriteExisting() { this->overwriteExisting_ = nullptr;};
    inline bool overwriteExisting() const { DARABONBA_PTR_GET_DEFAULT(overwriteExisting_, false) };
    inline OtsTableRestoreDetail& setOverwriteExisting(bool overwriteExisting) { DARABONBA_PTR_SET_VALUE(overwriteExisting_, overwriteExisting) };


    // reGenerateAutoIncrementPK Field Functions 
    bool hasReGenerateAutoIncrementPK() const { return this->reGenerateAutoIncrementPK_ != nullptr;};
    void deleteReGenerateAutoIncrementPK() { this->reGenerateAutoIncrementPK_ = nullptr;};
    inline bool reGenerateAutoIncrementPK() const { DARABONBA_PTR_GET_DEFAULT(reGenerateAutoIncrementPK_, false) };
    inline OtsTableRestoreDetail& setReGenerateAutoIncrementPK(bool reGenerateAutoIncrementPK) { DARABONBA_PTR_SET_VALUE(reGenerateAutoIncrementPK_, reGenerateAutoIncrementPK) };


    // restoreIndex Field Functions 
    bool hasRestoreIndex() const { return this->restoreIndex_ != nullptr;};
    void deleteRestoreIndex() { this->restoreIndex_ = nullptr;};
    inline bool restoreIndex() const { DARABONBA_PTR_GET_DEFAULT(restoreIndex_, false) };
    inline OtsTableRestoreDetail& setRestoreIndex(bool restoreIndex) { DARABONBA_PTR_SET_VALUE(restoreIndex_, restoreIndex) };


    // restoreSearchIndex Field Functions 
    bool hasRestoreSearchIndex() const { return this->restoreSearchIndex_ != nullptr;};
    void deleteRestoreSearchIndex() { this->restoreSearchIndex_ = nullptr;};
    inline bool restoreSearchIndex() const { DARABONBA_PTR_GET_DEFAULT(restoreSearchIndex_, false) };
    inline OtsTableRestoreDetail& setRestoreSearchIndex(bool restoreSearchIndex) { DARABONBA_PTR_SET_VALUE(restoreSearchIndex_, restoreSearchIndex) };


    // searchIndexNameSuffix Field Functions 
    bool hasSearchIndexNameSuffix() const { return this->searchIndexNameSuffix_ != nullptr;};
    void deleteSearchIndexNameSuffix() { this->searchIndexNameSuffix_ = nullptr;};
    inline string searchIndexNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(searchIndexNameSuffix_, "") };
    inline OtsTableRestoreDetail& setSearchIndexNameSuffix(string searchIndexNameSuffix) { DARABONBA_PTR_SET_VALUE(searchIndexNameSuffix_, searchIndexNameSuffix) };


  protected:
    std::shared_ptr<int32_t> batchChannelCount_ = nullptr;
    std::shared_ptr<string> indexNameSuffix_ = nullptr;
    std::shared_ptr<bool> overwriteExisting_ = nullptr;
    std::shared_ptr<bool> reGenerateAutoIncrementPK_ = nullptr;
    std::shared_ptr<bool> restoreIndex_ = nullptr;
    std::shared_ptr<bool> restoreSearchIndex_ = nullptr;
    std::shared_ptr<string> searchIndexNameSuffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
