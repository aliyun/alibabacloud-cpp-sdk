// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTORDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg.hpp>
#include <alibabacloud/models/DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExecutorDetectionResponseBodyDetectionItemsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutorDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_TO_JSON(OperatorAgg, operatorAgg_);
      DARABONBA_PTR_TO_JSON(OperatorDetails, operatorDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutorDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(OperatorAgg, operatorAgg_);
      DARABONBA_PTR_FROM_JSON(OperatorDetails, operatorDetails_);
    };
    DescribeExecutorDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResults(const DescribeExecutorDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResults(DescribeExecutorDetectionResponseBodyDetectionItemsResults &&) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutorDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResults& operator=(const DescribeExecutorDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeExecutorDetectionResponseBodyDetectionItemsResults& operator=(DescribeExecutorDetectionResponseBodyDetectionItemsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatorAgg_ != nullptr
        && this->operatorDetails_ != nullptr; };
    // operatorAgg Field Functions 
    bool hasOperatorAgg() const { return this->operatorAgg_ != nullptr;};
    void deleteOperatorAgg() { this->operatorAgg_ = nullptr;};
    inline const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg> & operatorAgg() const { DARABONBA_PTR_GET_CONST(operatorAgg_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg>) };
    inline vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg> operatorAgg() { DARABONBA_PTR_GET(operatorAgg_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg>) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResults& setOperatorAgg(const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg> & operatorAgg) { DARABONBA_PTR_SET_VALUE(operatorAgg_, operatorAgg) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResults& setOperatorAgg(vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg> && operatorAgg) { DARABONBA_PTR_SET_RVALUE(operatorAgg_, operatorAgg) };


    // operatorDetails Field Functions 
    bool hasOperatorDetails() const { return this->operatorDetails_ != nullptr;};
    void deleteOperatorDetails() { this->operatorDetails_ = nullptr;};
    inline const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails> & operatorDetails() const { DARABONBA_PTR_GET_CONST(operatorDetails_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails>) };
    inline vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails> operatorDetails() { DARABONBA_PTR_GET(operatorDetails_, vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails>) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResults& setOperatorDetails(const vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails> & operatorDetails) { DARABONBA_PTR_SET_VALUE(operatorDetails_, operatorDetails) };
    inline DescribeExecutorDetectionResponseBodyDetectionItemsResults& setOperatorDetails(vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails> && operatorDetails) { DARABONBA_PTR_SET_RVALUE(operatorDetails_, operatorDetails) };


  protected:
    // The detection result items of operator metric aggregation.
    std::shared_ptr<vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorAgg>> operatorAgg_ = nullptr;
    // The detection result items of abnormal operators.
    std::shared_ptr<vector<Models::DescribeExecutorDetectionResponseBodyDetectionItemsResultsOperatorDetails>> operatorDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
