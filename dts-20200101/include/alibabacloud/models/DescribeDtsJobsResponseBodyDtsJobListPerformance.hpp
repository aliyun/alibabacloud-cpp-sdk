// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTPERFORMANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTPERFORMANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListPerformance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListPerformance& obj) { 
      DARABONBA_PTR_TO_JSON(Flow, flow_);
      DARABONBA_PTR_TO_JSON(Rps, rps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListPerformance& obj) { 
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
      DARABONBA_PTR_FROM_JSON(Rps, rps_);
    };
    DescribeDtsJobsResponseBodyDtsJobListPerformance() = default ;
    DescribeDtsJobsResponseBodyDtsJobListPerformance(const DescribeDtsJobsResponseBodyDtsJobListPerformance &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPerformance(DescribeDtsJobsResponseBodyDtsJobListPerformance &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListPerformance() = default ;
    DescribeDtsJobsResponseBodyDtsJobListPerformance& operator=(const DescribeDtsJobsResponseBodyDtsJobListPerformance &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPerformance& operator=(DescribeDtsJobsResponseBodyDtsJobListPerformance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flow_ != nullptr
        && this->rps_ != nullptr; };
    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline string flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPerformance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


    // rps Field Functions 
    bool hasRps() const { return this->rps_ != nullptr;};
    void deleteRps() { this->rps_ = nullptr;};
    inline string rps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPerformance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


  protected:
    // The size of data that is migrated or synchronized per second. Unit: MB/s.
    std::shared_ptr<string> flow_ = nullptr;
    // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
    std::shared_ptr<string> rps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
