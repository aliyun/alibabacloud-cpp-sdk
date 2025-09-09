// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATAINCREMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATAINCREMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeShardTaskInfoResponseBodyDataIncrement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShardTaskInfoResponseBodyDataIncrement& obj) { 
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tps, tps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShardTaskInfoResponseBodyDataIncrement& obj) { 
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tps, tps_);
    };
    DescribeShardTaskInfoResponseBodyDataIncrement() = default ;
    DescribeShardTaskInfoResponseBodyDataIncrement(const DescribeShardTaskInfoResponseBodyDataIncrement &) = default ;
    DescribeShardTaskInfoResponseBodyDataIncrement(DescribeShardTaskInfoResponseBodyDataIncrement &&) = default ;
    DescribeShardTaskInfoResponseBodyDataIncrement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShardTaskInfoResponseBodyDataIncrement() = default ;
    DescribeShardTaskInfoResponseBodyDataIncrement& operator=(const DescribeShardTaskInfoResponseBodyDataIncrement &) = default ;
    DescribeShardTaskInfoResponseBodyDataIncrement& operator=(DescribeShardTaskInfoResponseBodyDataIncrement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delay_ != nullptr
        && this->startTime_ != nullptr && this->tps_ != nullptr; };
    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int32_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataIncrement& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeShardTaskInfoResponseBodyDataIncrement& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tps Field Functions 
    bool hasTps() const { return this->tps_ != nullptr;};
    void deleteTps() { this->tps_ = nullptr;};
    inline int32_t tps() const { DARABONBA_PTR_GET_DEFAULT(tps_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataIncrement& setTps(int32_t tps) { DARABONBA_PTR_SET_VALUE(tps_, tps) };


  protected:
    // Indicates the latency of the incremental data synchronization.
    std::shared_ptr<int32_t> delay_ = nullptr;
    // Indicates the start time when the incremental data synchronization is performed.
    std::shared_ptr<string> startTime_ = nullptr;
    // Indicates the number of transactions processed by the database per second.
    std::shared_ptr<int32_t> tps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
