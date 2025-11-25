// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKDOMAINANDIPCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKDOMAINANDIPCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingRiskDomainAndIpCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingRiskDomainAndIpCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskDomainCount, riskDomainCount_);
      DARABONBA_PTR_TO_JSON(RiskIpCount, riskIpCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingRiskDomainAndIpCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskDomainCount, riskDomainCount_);
      DARABONBA_PTR_FROM_JSON(RiskIpCount, riskIpCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingRiskDomainAndIpCountResponseBody() = default ;
    DescribeOutgoingRiskDomainAndIpCountResponseBody(const DescribeOutgoingRiskDomainAndIpCountResponseBody &) = default ;
    DescribeOutgoingRiskDomainAndIpCountResponseBody(DescribeOutgoingRiskDomainAndIpCountResponseBody &&) = default ;
    DescribeOutgoingRiskDomainAndIpCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingRiskDomainAndIpCountResponseBody() = default ;
    DescribeOutgoingRiskDomainAndIpCountResponseBody& operator=(const DescribeOutgoingRiskDomainAndIpCountResponseBody &) = default ;
    DescribeOutgoingRiskDomainAndIpCountResponseBody& operator=(DescribeOutgoingRiskDomainAndIpCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskDomainCount_ == nullptr && return this->riskIpCount_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingRiskDomainAndIpCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskDomainCount Field Functions 
    bool hasRiskDomainCount() const { return this->riskDomainCount_ != nullptr;};
    void deleteRiskDomainCount() { this->riskDomainCount_ = nullptr;};
    inline int64_t riskDomainCount() const { DARABONBA_PTR_GET_DEFAULT(riskDomainCount_, 0L) };
    inline DescribeOutgoingRiskDomainAndIpCountResponseBody& setRiskDomainCount(int64_t riskDomainCount) { DARABONBA_PTR_SET_VALUE(riskDomainCount_, riskDomainCount) };


    // riskIpCount Field Functions 
    bool hasRiskIpCount() const { return this->riskIpCount_ != nullptr;};
    void deleteRiskIpCount() { this->riskIpCount_ = nullptr;};
    inline int64_t riskIpCount() const { DARABONBA_PTR_GET_DEFAULT(riskIpCount_, 0L) };
    inline DescribeOutgoingRiskDomainAndIpCountResponseBody& setRiskIpCount(int64_t riskIpCount) { DARABONBA_PTR_SET_VALUE(riskIpCount_, riskIpCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeOutgoingRiskDomainAndIpCountResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> riskDomainCount_ = nullptr;
    std::shared_ptr<int64_t> riskIpCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
