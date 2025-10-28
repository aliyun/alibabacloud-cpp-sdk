// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColdSqlSize, coldSqlSize_);
      DARABONBA_PTR_TO_JSON(FreeColdSqlSize, freeColdSqlSize_);
      DARABONBA_PTR_TO_JSON(FreeHotSqlSize, freeHotSqlSize_);
      DARABONBA_PTR_TO_JSON(HotSqlSize, hotSqlSize_);
      DARABONBA_PTR_TO_JSON(ImportSqlSize, importSqlSize_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalSqlSize, totalSqlSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdSqlSize, coldSqlSize_);
      DARABONBA_PTR_FROM_JSON(FreeColdSqlSize, freeColdSqlSize_);
      DARABONBA_PTR_FROM_JSON(FreeHotSqlSize, freeHotSqlSize_);
      DARABONBA_PTR_FROM_JSON(HotSqlSize, hotSqlSize_);
      DARABONBA_PTR_FROM_JSON(ImportSqlSize, importSqlSize_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalSqlSize, totalSqlSize_);
    };
    DescribeSqlLogStatisticResponseBodyData() = default ;
    DescribeSqlLogStatisticResponseBodyData(const DescribeSqlLogStatisticResponseBodyData &) = default ;
    DescribeSqlLogStatisticResponseBodyData(DescribeSqlLogStatisticResponseBodyData &&) = default ;
    DescribeSqlLogStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogStatisticResponseBodyData() = default ;
    DescribeSqlLogStatisticResponseBodyData& operator=(const DescribeSqlLogStatisticResponseBodyData &) = default ;
    DescribeSqlLogStatisticResponseBodyData& operator=(DescribeSqlLogStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldSqlSize_ == nullptr
        && return this->freeColdSqlSize_ == nullptr && return this->freeHotSqlSize_ == nullptr && return this->hotSqlSize_ == nullptr && return this->importSqlSize_ == nullptr && return this->timestamp_ == nullptr
        && return this->totalSqlSize_ == nullptr; };
    // coldSqlSize Field Functions 
    bool hasColdSqlSize() const { return this->coldSqlSize_ != nullptr;};
    void deleteColdSqlSize() { this->coldSqlSize_ = nullptr;};
    inline int64_t coldSqlSize() const { DARABONBA_PTR_GET_DEFAULT(coldSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setColdSqlSize(int64_t coldSqlSize) { DARABONBA_PTR_SET_VALUE(coldSqlSize_, coldSqlSize) };


    // freeColdSqlSize Field Functions 
    bool hasFreeColdSqlSize() const { return this->freeColdSqlSize_ != nullptr;};
    void deleteFreeColdSqlSize() { this->freeColdSqlSize_ = nullptr;};
    inline int64_t freeColdSqlSize() const { DARABONBA_PTR_GET_DEFAULT(freeColdSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setFreeColdSqlSize(int64_t freeColdSqlSize) { DARABONBA_PTR_SET_VALUE(freeColdSqlSize_, freeColdSqlSize) };


    // freeHotSqlSize Field Functions 
    bool hasFreeHotSqlSize() const { return this->freeHotSqlSize_ != nullptr;};
    void deleteFreeHotSqlSize() { this->freeHotSqlSize_ = nullptr;};
    inline int64_t freeHotSqlSize() const { DARABONBA_PTR_GET_DEFAULT(freeHotSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setFreeHotSqlSize(int64_t freeHotSqlSize) { DARABONBA_PTR_SET_VALUE(freeHotSqlSize_, freeHotSqlSize) };


    // hotSqlSize Field Functions 
    bool hasHotSqlSize() const { return this->hotSqlSize_ != nullptr;};
    void deleteHotSqlSize() { this->hotSqlSize_ = nullptr;};
    inline int64_t hotSqlSize() const { DARABONBA_PTR_GET_DEFAULT(hotSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setHotSqlSize(int64_t hotSqlSize) { DARABONBA_PTR_SET_VALUE(hotSqlSize_, hotSqlSize) };


    // importSqlSize Field Functions 
    bool hasImportSqlSize() const { return this->importSqlSize_ != nullptr;};
    void deleteImportSqlSize() { this->importSqlSize_ = nullptr;};
    inline int64_t importSqlSize() const { DARABONBA_PTR_GET_DEFAULT(importSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setImportSqlSize(int64_t importSqlSize) { DARABONBA_PTR_SET_VALUE(importSqlSize_, importSqlSize) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalSqlSize Field Functions 
    bool hasTotalSqlSize() const { return this->totalSqlSize_ != nullptr;};
    void deleteTotalSqlSize() { this->totalSqlSize_ = nullptr;};
    inline int64_t totalSqlSize() const { DARABONBA_PTR_GET_DEFAULT(totalSqlSize_, 0L) };
    inline DescribeSqlLogStatisticResponseBodyData& setTotalSqlSize(int64_t totalSqlSize) { DARABONBA_PTR_SET_VALUE(totalSqlSize_, totalSqlSize) };


  protected:
    // The size of the SQL Explorer and Audit data that is stored in cold storage. Unit: bytes.
    std::shared_ptr<int64_t> coldSqlSize_ = nullptr;
    // The free quota for cold data storage. Unit: bytes.
    std::shared_ptr<int64_t> freeColdSqlSize_ = nullptr;
    // The free quota for hot data storage. Unit: bytes.
    std::shared_ptr<int64_t> freeHotSqlSize_ = nullptr;
    // The size of the SQL Explorer and Audit data that is stored in hot storage. Unit: bytes.
    std::shared_ptr<int64_t> hotSqlSize_ = nullptr;
    // The size of the SQL Explorer and Audit data that was generated in the most recent day. Unit: bytes.
    std::shared_ptr<int64_t> importSqlSize_ = nullptr;
    // The timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<int64_t> totalSqlSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
