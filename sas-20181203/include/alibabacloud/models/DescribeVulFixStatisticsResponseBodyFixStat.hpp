// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODYFIXSTAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODYFIXSTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulFixStatisticsResponseBodyFixStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulFixStatisticsResponseBodyFixStat& obj) { 
      DARABONBA_PTR_TO_JSON(FixedTodayNum, fixedTodayNum_);
      DARABONBA_PTR_TO_JSON(FixedTotalNum, fixedTotalNum_);
      DARABONBA_PTR_TO_JSON(FixingNum, fixingNum_);
      DARABONBA_PTR_TO_JSON(NeedFixNum, needFixNum_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulFixStatisticsResponseBodyFixStat& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedTodayNum, fixedTodayNum_);
      DARABONBA_PTR_FROM_JSON(FixedTotalNum, fixedTotalNum_);
      DARABONBA_PTR_FROM_JSON(FixingNum, fixingNum_);
      DARABONBA_PTR_FROM_JSON(NeedFixNum, needFixNum_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulFixStatisticsResponseBodyFixStat() = default ;
    DescribeVulFixStatisticsResponseBodyFixStat(const DescribeVulFixStatisticsResponseBodyFixStat &) = default ;
    DescribeVulFixStatisticsResponseBodyFixStat(DescribeVulFixStatisticsResponseBodyFixStat &&) = default ;
    DescribeVulFixStatisticsResponseBodyFixStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulFixStatisticsResponseBodyFixStat() = default ;
    DescribeVulFixStatisticsResponseBodyFixStat& operator=(const DescribeVulFixStatisticsResponseBodyFixStat &) = default ;
    DescribeVulFixStatisticsResponseBodyFixStat& operator=(DescribeVulFixStatisticsResponseBodyFixStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fixedTodayNum_ != nullptr
        && this->fixedTotalNum_ != nullptr && this->fixingNum_ != nullptr && this->needFixNum_ != nullptr && this->type_ != nullptr; };
    // fixedTodayNum Field Functions 
    bool hasFixedTodayNum() const { return this->fixedTodayNum_ != nullptr;};
    void deleteFixedTodayNum() { this->fixedTodayNum_ = nullptr;};
    inline int32_t fixedTodayNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTodayNum_, 0) };
    inline DescribeVulFixStatisticsResponseBodyFixStat& setFixedTodayNum(int32_t fixedTodayNum) { DARABONBA_PTR_SET_VALUE(fixedTodayNum_, fixedTodayNum) };


    // fixedTotalNum Field Functions 
    bool hasFixedTotalNum() const { return this->fixedTotalNum_ != nullptr;};
    void deleteFixedTotalNum() { this->fixedTotalNum_ = nullptr;};
    inline int32_t fixedTotalNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTotalNum_, 0) };
    inline DescribeVulFixStatisticsResponseBodyFixStat& setFixedTotalNum(int32_t fixedTotalNum) { DARABONBA_PTR_SET_VALUE(fixedTotalNum_, fixedTotalNum) };


    // fixingNum Field Functions 
    bool hasFixingNum() const { return this->fixingNum_ != nullptr;};
    void deleteFixingNum() { this->fixingNum_ = nullptr;};
    inline int32_t fixingNum() const { DARABONBA_PTR_GET_DEFAULT(fixingNum_, 0) };
    inline DescribeVulFixStatisticsResponseBodyFixStat& setFixingNum(int32_t fixingNum) { DARABONBA_PTR_SET_VALUE(fixingNum_, fixingNum) };


    // needFixNum Field Functions 
    bool hasNeedFixNum() const { return this->needFixNum_ != nullptr;};
    void deleteNeedFixNum() { this->needFixNum_ = nullptr;};
    inline int32_t needFixNum() const { DARABONBA_PTR_GET_DEFAULT(needFixNum_, 0) };
    inline DescribeVulFixStatisticsResponseBodyFixStat& setNeedFixNum(int32_t needFixNum) { DARABONBA_PTR_SET_VALUE(needFixNum_, needFixNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulFixStatisticsResponseBodyFixStat& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of vulnerabilities that are fixed on the current day.
    std::shared_ptr<int32_t> fixedTodayNum_ = nullptr;
    // The total number of fixed vulnerabilities.
    std::shared_ptr<int32_t> fixedTotalNum_ = nullptr;
    // The number of vulnerabilities that are being fixed.
    std::shared_ptr<int32_t> fixingNum_ = nullptr;
    // The number of unfixed vulnerabilities.
    std::shared_ptr<int32_t> needFixNum_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **app**: application vulnerability
    // *   **emg**: urgent vulnerability
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
