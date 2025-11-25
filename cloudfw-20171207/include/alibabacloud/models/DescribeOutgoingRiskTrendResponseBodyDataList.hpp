// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingRiskTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingRiskTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskDomain, riskDomain_);
      DARABONBA_PTR_TO_JSON(RiskIp, riskIp_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingRiskTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskDomain, riskDomain_);
      DARABONBA_PTR_FROM_JSON(RiskIp, riskIp_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeOutgoingRiskTrendResponseBodyDataList() = default ;
    DescribeOutgoingRiskTrendResponseBodyDataList(const DescribeOutgoingRiskTrendResponseBodyDataList &) = default ;
    DescribeOutgoingRiskTrendResponseBodyDataList(DescribeOutgoingRiskTrendResponseBodyDataList &&) = default ;
    DescribeOutgoingRiskTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingRiskTrendResponseBodyDataList() = default ;
    DescribeOutgoingRiskTrendResponseBodyDataList& operator=(const DescribeOutgoingRiskTrendResponseBodyDataList &) = default ;
    DescribeOutgoingRiskTrendResponseBodyDataList& operator=(DescribeOutgoingRiskTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskDomain_ == nullptr
        && return this->riskIp_ == nullptr && return this->time_ == nullptr; };
    // riskDomain Field Functions 
    bool hasRiskDomain() const { return this->riskDomain_ != nullptr;};
    void deleteRiskDomain() { this->riskDomain_ = nullptr;};
    inline int32_t riskDomain() const { DARABONBA_PTR_GET_DEFAULT(riskDomain_, 0) };
    inline DescribeOutgoingRiskTrendResponseBodyDataList& setRiskDomain(int32_t riskDomain) { DARABONBA_PTR_SET_VALUE(riskDomain_, riskDomain) };


    // riskIp Field Functions 
    bool hasRiskIp() const { return this->riskIp_ != nullptr;};
    void deleteRiskIp() { this->riskIp_ = nullptr;};
    inline int32_t riskIp() const { DARABONBA_PTR_GET_DEFAULT(riskIp_, 0) };
    inline DescribeOutgoingRiskTrendResponseBodyDataList& setRiskIp(int32_t riskIp) { DARABONBA_PTR_SET_VALUE(riskIp_, riskIp) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeOutgoingRiskTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> riskDomain_ = nullptr;
    std::shared_ptr<int32_t> riskIp_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
