// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODYOPERATORLISTSORTEDBYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODYOPERATORLISTSORTEDBYMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkOperatorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(OperatorListSortedByExclusiveTime, operatorListSortedByExclusiveTime_);
      DARABONBA_PTR_TO_JSON(OperatorListSortedByMaxMemory, operatorListSortedByMaxMemory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(OperatorListSortedByExclusiveTime, operatorListSortedByExclusiveTime_);
      DARABONBA_PTR_FROM_JSON(OperatorListSortedByMaxMemory, operatorListSortedByMaxMemory_);
    };
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics() = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics(const DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics &) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics(DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics &&) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics() = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& operator=(const DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics &) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& operator=(DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatorListSortedByExclusiveTime_ != nullptr
        && this->operatorListSortedByMaxMemory_ != nullptr; };
    // operatorListSortedByExclusiveTime Field Functions 
    bool hasOperatorListSortedByExclusiveTime() const { return this->operatorListSortedByExclusiveTime_ != nullptr;};
    void deleteOperatorListSortedByExclusiveTime() { this->operatorListSortedByExclusiveTime_ = nullptr;};
    inline const vector<Models::SparkOperatorInfo> & operatorListSortedByExclusiveTime() const { DARABONBA_PTR_GET_CONST(operatorListSortedByExclusiveTime_, vector<Models::SparkOperatorInfo>) };
    inline vector<Models::SparkOperatorInfo> operatorListSortedByExclusiveTime() { DARABONBA_PTR_GET(operatorListSortedByExclusiveTime_, vector<Models::SparkOperatorInfo>) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& setOperatorListSortedByExclusiveTime(const vector<Models::SparkOperatorInfo> & operatorListSortedByExclusiveTime) { DARABONBA_PTR_SET_VALUE(operatorListSortedByExclusiveTime_, operatorListSortedByExclusiveTime) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& setOperatorListSortedByExclusiveTime(vector<Models::SparkOperatorInfo> && operatorListSortedByExclusiveTime) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByExclusiveTime_, operatorListSortedByExclusiveTime) };


    // operatorListSortedByMaxMemory Field Functions 
    bool hasOperatorListSortedByMaxMemory() const { return this->operatorListSortedByMaxMemory_ != nullptr;};
    void deleteOperatorListSortedByMaxMemory() { this->operatorListSortedByMaxMemory_ = nullptr;};
    inline const vector<Models::SparkOperatorInfo> & operatorListSortedByMaxMemory() const { DARABONBA_PTR_GET_CONST(operatorListSortedByMaxMemory_, vector<Models::SparkOperatorInfo>) };
    inline vector<Models::SparkOperatorInfo> operatorListSortedByMaxMemory() { DARABONBA_PTR_GET(operatorListSortedByMaxMemory_, vector<Models::SparkOperatorInfo>) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& setOperatorListSortedByMaxMemory(const vector<Models::SparkOperatorInfo> & operatorListSortedByMaxMemory) { DARABONBA_PTR_SET_VALUE(operatorListSortedByMaxMemory_, operatorListSortedByMaxMemory) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics& setOperatorListSortedByMaxMemory(vector<Models::SparkOperatorInfo> && operatorListSortedByMaxMemory) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByMaxMemory_, operatorListSortedByMaxMemory) };


  protected:
    // The operators sorted by the execution duration.
    std::shared_ptr<vector<Models::SparkOperatorInfo>> operatorListSortedByExclusiveTime_ = nullptr;
    // The operators sorted by the maximum memory used.
    std::shared_ptr<vector<Models::SparkOperatorInfo>> operatorListSortedByMaxMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
