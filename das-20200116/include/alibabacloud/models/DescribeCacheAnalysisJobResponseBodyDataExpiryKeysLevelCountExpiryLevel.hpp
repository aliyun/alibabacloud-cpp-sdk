// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAEXPIRYKEYSLEVELCOUNTEXPIRYLEVEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAEXPIRYKEYSLEVELCOUNTEXPIRYLEVEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTs, analysisTs_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TotalKeys, totalKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTs, analysisTs_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TotalKeys, totalKeys_);
    };
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel() = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel(const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel(DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel() = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& operator=(const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& operator=(DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisTs_ == nullptr
        && return this->level_ == nullptr && return this->totalBytes_ == nullptr && return this->totalKeys_ == nullptr; };
    // analysisTs Field Functions 
    bool hasAnalysisTs() const { return this->analysisTs_ != nullptr;};
    void deleteAnalysisTs() { this->analysisTs_ = nullptr;};
    inline int64_t analysisTs() const { DARABONBA_PTR_GET_DEFAULT(analysisTs_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& setAnalysisTs(int64_t analysisTs) { DARABONBA_PTR_SET_VALUE(analysisTs_, analysisTs) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalKeys Field Functions 
    bool hasTotalKeys() const { return this->totalKeys_ != nullptr;};
    void deleteTotalKeys() { this->totalKeys_ = nullptr;};
    inline int64_t totalKeys() const { DARABONBA_PTR_GET_DEFAULT(totalKeys_, 0L) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel& setTotalKeys(int64_t totalKeys) { DARABONBA_PTR_SET_VALUE(totalKeys_, totalKeys) };


  protected:
    // The time when the cache analysis task was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> analysisTs_ = nullptr;
    // The expiration level. Valid values:
    // 
    // *   **0**: The key never expires.
    // *   **1**: The key has expired.
    // *   **2**: The key has expired for 0 to 1 hour.
    // *   **3**: The key has expired for 1 to 3 hours.
    // *   **4**: The key has expired for 3 to 12 hours.
    // *   **5**: The key has expired for 12 to 24 hours.
    // *   **6**: The key has expired for one to two days.
    // *   **7**: The key has expired for three to seven days.
    // *   **8**: The key has expired for more than seven days.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The number of bytes occupied by the keys that have expired.
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
    // The total number of the keys that have expired.
    std::shared_ptr<int64_t> totalKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
