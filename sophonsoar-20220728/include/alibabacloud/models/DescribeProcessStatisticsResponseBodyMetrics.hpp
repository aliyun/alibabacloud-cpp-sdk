// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessStatisticsResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessStatisticsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(BanFileNum, banFileNum_);
      DARABONBA_PTR_TO_JSON(BanIpNum, banIpNum_);
      DARABONBA_PTR_TO_JSON(BanProcessNum, banProcessNum_);
      DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessStatisticsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(BanFileNum, banFileNum_);
      DARABONBA_PTR_FROM_JSON(BanIpNum, banIpNum_);
      DARABONBA_PTR_FROM_JSON(BanProcessNum, banProcessNum_);
      DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
    };
    DescribeProcessStatisticsResponseBodyMetrics() = default ;
    DescribeProcessStatisticsResponseBodyMetrics(const DescribeProcessStatisticsResponseBodyMetrics &) = default ;
    DescribeProcessStatisticsResponseBodyMetrics(DescribeProcessStatisticsResponseBodyMetrics &&) = default ;
    DescribeProcessStatisticsResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessStatisticsResponseBodyMetrics() = default ;
    DescribeProcessStatisticsResponseBodyMetrics& operator=(const DescribeProcessStatisticsResponseBodyMetrics &) = default ;
    DescribeProcessStatisticsResponseBodyMetrics& operator=(DescribeProcessStatisticsResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->banFileNum_ == nullptr
        && return this->banIpNum_ == nullptr && return this->banProcessNum_ == nullptr && return this->taskNum_ == nullptr; };
    // banFileNum Field Functions 
    bool hasBanFileNum() const { return this->banFileNum_ != nullptr;};
    void deleteBanFileNum() { this->banFileNum_ = nullptr;};
    inline int32_t banFileNum() const { DARABONBA_PTR_GET_DEFAULT(banFileNum_, 0) };
    inline DescribeProcessStatisticsResponseBodyMetrics& setBanFileNum(int32_t banFileNum) { DARABONBA_PTR_SET_VALUE(banFileNum_, banFileNum) };


    // banIpNum Field Functions 
    bool hasBanIpNum() const { return this->banIpNum_ != nullptr;};
    void deleteBanIpNum() { this->banIpNum_ = nullptr;};
    inline int32_t banIpNum() const { DARABONBA_PTR_GET_DEFAULT(banIpNum_, 0) };
    inline DescribeProcessStatisticsResponseBodyMetrics& setBanIpNum(int32_t banIpNum) { DARABONBA_PTR_SET_VALUE(banIpNum_, banIpNum) };


    // banProcessNum Field Functions 
    bool hasBanProcessNum() const { return this->banProcessNum_ != nullptr;};
    void deleteBanProcessNum() { this->banProcessNum_ = nullptr;};
    inline int32_t banProcessNum() const { DARABONBA_PTR_GET_DEFAULT(banProcessNum_, 0) };
    inline DescribeProcessStatisticsResponseBodyMetrics& setBanProcessNum(int32_t banProcessNum) { DARABONBA_PTR_SET_VALUE(banProcessNum_, banProcessNum) };


    // taskNum Field Functions 
    bool hasTaskNum() const { return this->taskNum_ != nullptr;};
    void deleteTaskNum() { this->taskNum_ = nullptr;};
    inline int32_t taskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
    inline DescribeProcessStatisticsResponseBodyMetrics& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


  protected:
    // The number of blocked files.
    std::shared_ptr<int32_t> banFileNum_ = nullptr;
    // The number of blocked IP addresses.
    std::shared_ptr<int32_t> banIpNum_ = nullptr;
    // The number of blocked processes.
    std::shared_ptr<int32_t> banProcessNum_ = nullptr;
    // The number of handling tasks.
    std::shared_ptr<int32_t> taskNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
