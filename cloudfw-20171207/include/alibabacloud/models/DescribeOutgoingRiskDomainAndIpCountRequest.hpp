// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKDOMAINANDIPCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKDOMAINANDIPCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingRiskDomainAndIpCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingRiskDomainAndIpCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingRiskDomainAndIpCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeOutgoingRiskDomainAndIpCountRequest() = default ;
    DescribeOutgoingRiskDomainAndIpCountRequest(const DescribeOutgoingRiskDomainAndIpCountRequest &) = default ;
    DescribeOutgoingRiskDomainAndIpCountRequest(DescribeOutgoingRiskDomainAndIpCountRequest &&) = default ;
    DescribeOutgoingRiskDomainAndIpCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingRiskDomainAndIpCountRequest() = default ;
    DescribeOutgoingRiskDomainAndIpCountRequest& operator=(const DescribeOutgoingRiskDomainAndIpCountRequest &) = default ;
    DescribeOutgoingRiskDomainAndIpCountRequest& operator=(DescribeOutgoingRiskDomainAndIpCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeOutgoingRiskDomainAndIpCountRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeOutgoingRiskDomainAndIpCountRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
