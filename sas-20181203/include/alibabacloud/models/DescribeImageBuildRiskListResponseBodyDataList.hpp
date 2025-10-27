// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBuildRiskListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBuildRiskListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_TO_JSON(RiskClassName, riskClassName_);
      DARABONBA_PTR_TO_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_TO_JSON(RiskKeyName, riskKeyName_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(UnprocessedNum, unprocessedNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBuildRiskListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_FROM_JSON(RiskClassName, riskClassName_);
      DARABONBA_PTR_FROM_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_FROM_JSON(RiskKeyName, riskKeyName_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(UnprocessedNum, unprocessedNum_);
    };
    DescribeImageBuildRiskListResponseBodyDataList() = default ;
    DescribeImageBuildRiskListResponseBodyDataList(const DescribeImageBuildRiskListResponseBodyDataList &) = default ;
    DescribeImageBuildRiskListResponseBodyDataList(DescribeImageBuildRiskListResponseBodyDataList &&) = default ;
    DescribeImageBuildRiskListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBuildRiskListResponseBodyDataList() = default ;
    DescribeImageBuildRiskListResponseBodyDataList& operator=(const DescribeImageBuildRiskListResponseBodyDataList &) = default ;
    DescribeImageBuildRiskListResponseBodyDataList& operator=(DescribeImageBuildRiskListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->firstScanTime_ == nullptr && return this->lastScanTime_ == nullptr && return this->riskClass_ == nullptr && return this->riskClassName_ == nullptr && return this->riskKey_ == nullptr
        && return this->riskKeyName_ == nullptr && return this->riskLevel_ == nullptr && return this->unprocessedNum_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeImageBuildRiskListResponseBodyDataList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageBuildRiskListResponseBodyDataList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageBuildRiskListResponseBodyDataList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // riskClass Field Functions 
    bool hasRiskClass() const { return this->riskClass_ != nullptr;};
    void deleteRiskClass() { this->riskClass_ = nullptr;};
    inline string riskClass() const { DARABONBA_PTR_GET_DEFAULT(riskClass_, "") };
    inline DescribeImageBuildRiskListResponseBodyDataList& setRiskClass(string riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };


    // riskClassName Field Functions 
    bool hasRiskClassName() const { return this->riskClassName_ != nullptr;};
    void deleteRiskClassName() { this->riskClassName_ = nullptr;};
    inline string riskClassName() const { DARABONBA_PTR_GET_DEFAULT(riskClassName_, "") };
    inline DescribeImageBuildRiskListResponseBodyDataList& setRiskClassName(string riskClassName) { DARABONBA_PTR_SET_VALUE(riskClassName_, riskClassName) };


    // riskKey Field Functions 
    bool hasRiskKey() const { return this->riskKey_ != nullptr;};
    void deleteRiskKey() { this->riskKey_ = nullptr;};
    inline string riskKey() const { DARABONBA_PTR_GET_DEFAULT(riskKey_, "") };
    inline DescribeImageBuildRiskListResponseBodyDataList& setRiskKey(string riskKey) { DARABONBA_PTR_SET_VALUE(riskKey_, riskKey) };


    // riskKeyName Field Functions 
    bool hasRiskKeyName() const { return this->riskKeyName_ != nullptr;};
    void deleteRiskKeyName() { this->riskKeyName_ = nullptr;};
    inline string riskKeyName() const { DARABONBA_PTR_GET_DEFAULT(riskKeyName_, "") };
    inline DescribeImageBuildRiskListResponseBodyDataList& setRiskKeyName(string riskKeyName) { DARABONBA_PTR_SET_VALUE(riskKeyName_, riskKeyName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageBuildRiskListResponseBodyDataList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // unprocessedNum Field Functions 
    bool hasUnprocessedNum() const { return this->unprocessedNum_ != nullptr;};
    void deleteUnprocessedNum() { this->unprocessedNum_ = nullptr;};
    inline int32_t unprocessedNum() const { DARABONBA_PTR_GET_DEFAULT(unprocessedNum_, 0) };
    inline DescribeImageBuildRiskListResponseBodyDataList& setUnprocessedNum(int32_t unprocessedNum) { DARABONBA_PTR_SET_VALUE(unprocessedNum_, unprocessedNum) };


  protected:
    // The number of affected images.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The type key of the risk.
    std::shared_ptr<string> riskClass_ = nullptr;
    // The type name of the risk.
    std::shared_ptr<string> riskClassName_ = nullptr;
    // The key of the risk. You can call the [DescribeImageBuildRiskList](~~~~) operation to obtain the value of **RiskKey**.
    std::shared_ptr<string> riskKey_ = nullptr;
    // The rule name of the risk.
    std::shared_ptr<string> riskKeyName_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The number of unprocessed images.
    std::shared_ptr<int32_t> unprocessedNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
