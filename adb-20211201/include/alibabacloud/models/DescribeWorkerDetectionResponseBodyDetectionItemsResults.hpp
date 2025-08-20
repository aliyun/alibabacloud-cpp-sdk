// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg.hpp>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails.hpp>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables.hpp>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables.hpp>
#include <alibabacloud/models/DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_TO_JSON(OperatorAgg, operatorAgg_);
      DARABONBA_PTR_TO_JSON(OperatorDetails, operatorDetails_);
      DARABONBA_PTR_TO_JSON(PartitionedTables, partitionedTables_);
      DARABONBA_PTR_TO_JSON(SkewedTables, skewedTables_);
      DARABONBA_PTR_TO_JSON(TopAccessTables, topAccessTables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(OperatorAgg, operatorAgg_);
      DARABONBA_PTR_FROM_JSON(OperatorDetails, operatorDetails_);
      DARABONBA_PTR_FROM_JSON(PartitionedTables, partitionedTables_);
      DARABONBA_PTR_FROM_JSON(SkewedTables, skewedTables_);
      DARABONBA_PTR_FROM_JSON(TopAccessTables, topAccessTables_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResults(const DescribeWorkerDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResults(DescribeWorkerDetectionResponseBodyDetectionItemsResults &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResults& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResults& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatorAgg_ != nullptr
        && this->operatorDetails_ != nullptr && this->partitionedTables_ != nullptr && this->skewedTables_ != nullptr && this->topAccessTables_ != nullptr; };
    // operatorAgg Field Functions 
    bool hasOperatorAgg() const { return this->operatorAgg_ != nullptr;};
    void deleteOperatorAgg() { this->operatorAgg_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg> & operatorAgg() const { DARABONBA_PTR_GET_CONST(operatorAgg_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg> operatorAgg() { DARABONBA_PTR_GET(operatorAgg_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setOperatorAgg(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg> & operatorAgg) { DARABONBA_PTR_SET_VALUE(operatorAgg_, operatorAgg) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setOperatorAgg(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg> && operatorAgg) { DARABONBA_PTR_SET_RVALUE(operatorAgg_, operatorAgg) };


    // operatorDetails Field Functions 
    bool hasOperatorDetails() const { return this->operatorDetails_ != nullptr;};
    void deleteOperatorDetails() { this->operatorDetails_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails> & operatorDetails() const { DARABONBA_PTR_GET_CONST(operatorDetails_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails> operatorDetails() { DARABONBA_PTR_GET(operatorDetails_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setOperatorDetails(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails> & operatorDetails) { DARABONBA_PTR_SET_VALUE(operatorDetails_, operatorDetails) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setOperatorDetails(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails> && operatorDetails) { DARABONBA_PTR_SET_RVALUE(operatorDetails_, operatorDetails) };


    // partitionedTables Field Functions 
    bool hasPartitionedTables() const { return this->partitionedTables_ != nullptr;};
    void deletePartitionedTables() { this->partitionedTables_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables> & partitionedTables() const { DARABONBA_PTR_GET_CONST(partitionedTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables> partitionedTables() { DARABONBA_PTR_GET(partitionedTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setPartitionedTables(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables> & partitionedTables) { DARABONBA_PTR_SET_VALUE(partitionedTables_, partitionedTables) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setPartitionedTables(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables> && partitionedTables) { DARABONBA_PTR_SET_RVALUE(partitionedTables_, partitionedTables) };


    // skewedTables Field Functions 
    bool hasSkewedTables() const { return this->skewedTables_ != nullptr;};
    void deleteSkewedTables() { this->skewedTables_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables> & skewedTables() const { DARABONBA_PTR_GET_CONST(skewedTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables> skewedTables() { DARABONBA_PTR_GET(skewedTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setSkewedTables(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables> & skewedTables) { DARABONBA_PTR_SET_VALUE(skewedTables_, skewedTables) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setSkewedTables(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables> && skewedTables) { DARABONBA_PTR_SET_RVALUE(skewedTables_, skewedTables) };


    // topAccessTables Field Functions 
    bool hasTopAccessTables() const { return this->topAccessTables_ != nullptr;};
    void deleteTopAccessTables() { this->topAccessTables_ = nullptr;};
    inline const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables> & topAccessTables() const { DARABONBA_PTR_GET_CONST(topAccessTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables>) };
    inline vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables> topAccessTables() { DARABONBA_PTR_GET(topAccessTables_, vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables>) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setTopAccessTables(const vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables> & topAccessTables) { DARABONBA_PTR_SET_VALUE(topAccessTables_, topAccessTables) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResults& setTopAccessTables(vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables> && topAccessTables) { DARABONBA_PTR_SET_RVALUE(topAccessTables_, topAccessTables) };


  protected:
    // The detection result items of operator metric aggregation.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorAgg>> operatorAgg_ = nullptr;
    // The detection result items of abnormal operators.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetails>> operatorDetails_ = nullptr;
    // The detection result items of improper partitioned tables.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables>> partitionedTables_ = nullptr;
    // The detection result items of skewed tables.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables>> skewedTables_ = nullptr;
    // The detection result items of table access.
    std::shared_ptr<vector<Models::DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTables>> topAccessTables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
