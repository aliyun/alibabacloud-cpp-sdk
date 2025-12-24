// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNUMBERMETRICSRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNUMBERMETRICSRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookNumberMetricsResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookNumberMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(StartUpNum, startUpNum_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookNumberMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(StartUpNum, startUpNum_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribePlaybookNumberMetricsResponseBodyMetrics() = default ;
    DescribePlaybookNumberMetricsResponseBodyMetrics(const DescribePlaybookNumberMetricsResponseBodyMetrics &) = default ;
    DescribePlaybookNumberMetricsResponseBodyMetrics(DescribePlaybookNumberMetricsResponseBodyMetrics &&) = default ;
    DescribePlaybookNumberMetricsResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookNumberMetricsResponseBodyMetrics() = default ;
    DescribePlaybookNumberMetricsResponseBodyMetrics& operator=(const DescribePlaybookNumberMetricsResponseBodyMetrics &) = default ;
    DescribePlaybookNumberMetricsResponseBodyMetrics& operator=(DescribePlaybookNumberMetricsResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->startUpNum_ == nullptr
        && return this->totalNum_ == nullptr; };
    // startUpNum Field Functions 
    bool hasStartUpNum() const { return this->startUpNum_ != nullptr;};
    void deleteStartUpNum() { this->startUpNum_ = nullptr;};
    inline int32_t startUpNum() const { DARABONBA_PTR_GET_DEFAULT(startUpNum_, 0) };
    inline DescribePlaybookNumberMetricsResponseBodyMetrics& setStartUpNum(int32_t startUpNum) { DARABONBA_PTR_SET_VALUE(startUpNum_, startUpNum) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribePlaybookNumberMetricsResponseBodyMetrics& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The number of enabled playbooks.
    std::shared_ptr<int32_t> startUpNum_ = nullptr;
    // The total number of playbooks.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
