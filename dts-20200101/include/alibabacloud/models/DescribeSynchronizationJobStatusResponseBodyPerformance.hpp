// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYPERFORMANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYPERFORMANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusResponseBodyPerformance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusResponseBodyPerformance& obj) { 
      DARABONBA_PTR_TO_JSON(FLOW, FLOW_);
      DARABONBA_PTR_TO_JSON(RPS, RPS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusResponseBodyPerformance& obj) { 
      DARABONBA_PTR_FROM_JSON(FLOW, FLOW_);
      DARABONBA_PTR_FROM_JSON(RPS, RPS_);
    };
    DescribeSynchronizationJobStatusResponseBodyPerformance() = default ;
    DescribeSynchronizationJobStatusResponseBodyPerformance(const DescribeSynchronizationJobStatusResponseBodyPerformance &) = default ;
    DescribeSynchronizationJobStatusResponseBodyPerformance(DescribeSynchronizationJobStatusResponseBodyPerformance &&) = default ;
    DescribeSynchronizationJobStatusResponseBodyPerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusResponseBodyPerformance() = default ;
    DescribeSynchronizationJobStatusResponseBodyPerformance& operator=(const DescribeSynchronizationJobStatusResponseBodyPerformance &) = default ;
    DescribeSynchronizationJobStatusResponseBodyPerformance& operator=(DescribeSynchronizationJobStatusResponseBodyPerformance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->FLOW_ == nullptr
        && return this->RPS_ == nullptr; };
    // FLOW Field Functions 
    bool hasFLOW() const { return this->FLOW_ != nullptr;};
    void deleteFLOW() { this->FLOW_ = nullptr;};
    inline string FLOW() const { DARABONBA_PTR_GET_DEFAULT(FLOW_, "") };
    inline DescribeSynchronizationJobStatusResponseBodyPerformance& setFLOW(string FLOW) { DARABONBA_PTR_SET_VALUE(FLOW_, FLOW) };


    // RPS Field Functions 
    bool hasRPS() const { return this->RPS_ != nullptr;};
    void deleteRPS() { this->RPS_ = nullptr;};
    inline string RPS() const { DARABONBA_PTR_GET_DEFAULT(RPS_, "") };
    inline DescribeSynchronizationJobStatusResponseBodyPerformance& setRPS(string RPS) { DARABONBA_PTR_SET_VALUE(RPS_, RPS) };


  protected:
    // The data traffic that is synchronized per second. Unit: MB/s.
    std::shared_ptr<string> FLOW_ = nullptr;
    // The number of times SQL statements are synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
    std::shared_ptr<string> RPS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
