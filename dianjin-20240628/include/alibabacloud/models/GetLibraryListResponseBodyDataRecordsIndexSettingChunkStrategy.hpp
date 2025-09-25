// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTINGCHUNKSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTINGCHUNKSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(docTreeSplit, docTreeSplit_);
      DARABONBA_PTR_TO_JSON(docTreeSplitSize, docTreeSplitSize_);
      DARABONBA_PTR_TO_JSON(enhanceGraph, enhanceGraph_);
      DARABONBA_PTR_TO_JSON(enhanceTable, enhanceTable_);
      DARABONBA_PTR_TO_JSON(overlap, overlap_);
      DARABONBA_PTR_TO_JSON(sentenceSplit, sentenceSplit_);
      DARABONBA_PTR_TO_JSON(sentenceSplitSize, sentenceSplitSize_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(split, split_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(docTreeSplit, docTreeSplit_);
      DARABONBA_PTR_FROM_JSON(docTreeSplitSize, docTreeSplitSize_);
      DARABONBA_PTR_FROM_JSON(enhanceGraph, enhanceGraph_);
      DARABONBA_PTR_FROM_JSON(enhanceTable, enhanceTable_);
      DARABONBA_PTR_FROM_JSON(overlap, overlap_);
      DARABONBA_PTR_FROM_JSON(sentenceSplit, sentenceSplit_);
      DARABONBA_PTR_FROM_JSON(sentenceSplitSize, sentenceSplitSize_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(split, split_);
    };
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy(const GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy(GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy &&) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& operator=(const GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& operator=(GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docTreeSplit_ != nullptr
        && this->docTreeSplitSize_ != nullptr && this->enhanceGraph_ != nullptr && this->enhanceTable_ != nullptr && this->overlap_ != nullptr && this->sentenceSplit_ != nullptr
        && this->sentenceSplitSize_ != nullptr && this->size_ != nullptr && this->split_ != nullptr; };
    // docTreeSplit Field Functions 
    bool hasDocTreeSplit() const { return this->docTreeSplit_ != nullptr;};
    void deleteDocTreeSplit() { this->docTreeSplit_ = nullptr;};
    inline bool docTreeSplit() const { DARABONBA_PTR_GET_DEFAULT(docTreeSplit_, false) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setDocTreeSplit(bool docTreeSplit) { DARABONBA_PTR_SET_VALUE(docTreeSplit_, docTreeSplit) };


    // docTreeSplitSize Field Functions 
    bool hasDocTreeSplitSize() const { return this->docTreeSplitSize_ != nullptr;};
    void deleteDocTreeSplitSize() { this->docTreeSplitSize_ = nullptr;};
    inline int32_t docTreeSplitSize() const { DARABONBA_PTR_GET_DEFAULT(docTreeSplitSize_, 0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setDocTreeSplitSize(int32_t docTreeSplitSize) { DARABONBA_PTR_SET_VALUE(docTreeSplitSize_, docTreeSplitSize) };


    // enhanceGraph Field Functions 
    bool hasEnhanceGraph() const { return this->enhanceGraph_ != nullptr;};
    void deleteEnhanceGraph() { this->enhanceGraph_ = nullptr;};
    inline bool enhanceGraph() const { DARABONBA_PTR_GET_DEFAULT(enhanceGraph_, false) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setEnhanceGraph(bool enhanceGraph) { DARABONBA_PTR_SET_VALUE(enhanceGraph_, enhanceGraph) };


    // enhanceTable Field Functions 
    bool hasEnhanceTable() const { return this->enhanceTable_ != nullptr;};
    void deleteEnhanceTable() { this->enhanceTable_ = nullptr;};
    inline bool enhanceTable() const { DARABONBA_PTR_GET_DEFAULT(enhanceTable_, false) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setEnhanceTable(bool enhanceTable) { DARABONBA_PTR_SET_VALUE(enhanceTable_, enhanceTable) };


    // overlap Field Functions 
    bool hasOverlap() const { return this->overlap_ != nullptr;};
    void deleteOverlap() { this->overlap_ = nullptr;};
    inline int32_t overlap() const { DARABONBA_PTR_GET_DEFAULT(overlap_, 0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setOverlap(int32_t overlap) { DARABONBA_PTR_SET_VALUE(overlap_, overlap) };


    // sentenceSplit Field Functions 
    bool hasSentenceSplit() const { return this->sentenceSplit_ != nullptr;};
    void deleteSentenceSplit() { this->sentenceSplit_ = nullptr;};
    inline bool sentenceSplit() const { DARABONBA_PTR_GET_DEFAULT(sentenceSplit_, false) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setSentenceSplit(bool sentenceSplit) { DARABONBA_PTR_SET_VALUE(sentenceSplit_, sentenceSplit) };


    // sentenceSplitSize Field Functions 
    bool hasSentenceSplitSize() const { return this->sentenceSplitSize_ != nullptr;};
    void deleteSentenceSplitSize() { this->sentenceSplitSize_ = nullptr;};
    inline int32_t sentenceSplitSize() const { DARABONBA_PTR_GET_DEFAULT(sentenceSplitSize_, 0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setSentenceSplitSize(int32_t sentenceSplitSize) { DARABONBA_PTR_SET_VALUE(sentenceSplitSize_, sentenceSplitSize) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // split Field Functions 
    bool hasSplit() const { return this->split_ != nullptr;};
    void deleteSplit() { this->split_ = nullptr;};
    inline bool split() const { DARABONBA_PTR_GET_DEFAULT(split_, false) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy& setSplit(bool split) { DARABONBA_PTR_SET_VALUE(split_, split) };


  protected:
    std::shared_ptr<bool> docTreeSplit_ = nullptr;
    std::shared_ptr<int32_t> docTreeSplitSize_ = nullptr;
    std::shared_ptr<bool> enhanceGraph_ = nullptr;
    std::shared_ptr<bool> enhanceTable_ = nullptr;
    std::shared_ptr<int32_t> overlap_ = nullptr;
    std::shared_ptr<bool> sentenceSplit_ = nullptr;
    std::shared_ptr<int32_t> sentenceSplitSize_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<bool> split_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
