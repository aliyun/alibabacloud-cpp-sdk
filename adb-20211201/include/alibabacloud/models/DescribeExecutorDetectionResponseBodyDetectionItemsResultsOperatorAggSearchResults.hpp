// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGGSEARCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORAGGSEARCHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& obj) { 
      DARABONBA_PTR_TO_JSON(AvgValue, avgValue_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(OperatorCount, operatorCount_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(TotalValue, totalValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgValue, avgValue_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(OperatorCount, operatorCount_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(TotalValue, totalValue_);
    };
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults &&) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& operator=(const DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& operator=(DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgValue_ == nullptr
        && return this->maxValue_ == nullptr && return this->operatorCount_ == nullptr && return this->operatorName_ == nullptr && return this->totalValue_ == nullptr; };
    // avgValue Field Functions 
    bool hasAvgValue() const { return this->avgValue_ != nullptr;};
    void deleteAvgValue() { this->avgValue_ = nullptr;};
    inline double avgValue() const { DARABONBA_PTR_GET_DEFAULT(avgValue_, 0.0) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& setAvgValue(double avgValue) { DARABONBA_PTR_SET_VALUE(avgValue_, avgValue) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int64_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // operatorCount Field Functions 
    bool hasOperatorCount() const { return this->operatorCount_ != nullptr;};
    void deleteOperatorCount() { this->operatorCount_ = nullptr;};
    inline int64_t operatorCount() const { DARABONBA_PTR_GET_DEFAULT(operatorCount_, 0L) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& setOperatorCount(int64_t operatorCount) { DARABONBA_PTR_SET_VALUE(operatorCount_, operatorCount) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // totalValue Field Functions 
    bool hasTotalValue() const { return this->totalValue_ != nullptr;};
    void deleteTotalValue() { this->totalValue_ = nullptr;};
    inline int64_t totalValue() const { DARABONBA_PTR_GET_DEFAULT(totalValue_, 0L) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAggSearchResults& setTotalValue(int64_t totalValue) { DARABONBA_PTR_SET_VALUE(totalValue_, totalValue) };


  protected:
    // The average value of the operator metric.
    std::shared_ptr<double> avgValue_ = nullptr;
    // The maximum value of the operator metric.
    std::shared_ptr<int64_t> maxValue_ = nullptr;
    // The number of occurrences of the operator.
    std::shared_ptr<int64_t> operatorCount_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operatorName_ = nullptr;
    // The cumulative value of the operator metric.
    std::shared_ptr<int64_t> totalValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
