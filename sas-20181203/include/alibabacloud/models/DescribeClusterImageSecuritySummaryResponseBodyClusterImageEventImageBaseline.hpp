// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODYCLUSTERIMAGEEVENTIMAGEBASELINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODYCLUSTERIMAGEEVENTIMAGEBASELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline() = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline(const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline &) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline(DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline &&) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline() = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& operator=(const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline &) = default ;
    DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& operator=(DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEventImageBaseline& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The number of baselines.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
