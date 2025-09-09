// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATAFULL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATAFULL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeShardTaskInfoResponseBodyDataFull : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShardTaskInfoResponseBodyDataFull& obj) { 
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(Tps, tps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShardTaskInfoResponseBodyDataFull& obj) { 
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(Tps, tps_);
    };
    DescribeShardTaskInfoResponseBodyDataFull() = default ;
    DescribeShardTaskInfoResponseBodyDataFull(const DescribeShardTaskInfoResponseBodyDataFull &) = default ;
    DescribeShardTaskInfoResponseBodyDataFull(DescribeShardTaskInfoResponseBodyDataFull &&) = default ;
    DescribeShardTaskInfoResponseBodyDataFull(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShardTaskInfoResponseBodyDataFull() = default ;
    DescribeShardTaskInfoResponseBodyDataFull& operator=(const DescribeShardTaskInfoResponseBodyDataFull &) = default ;
    DescribeShardTaskInfoResponseBodyDataFull& operator=(DescribeShardTaskInfoResponseBodyDataFull &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expired_ != nullptr
        && this->progress_ != nullptr && this->startTime_ != nullptr && this->total_ != nullptr && this->tps_ != nullptr; };
    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline int32_t expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataFull& setExpired(int32_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataFull& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeShardTaskInfoResponseBodyDataFull& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataFull& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // tps Field Functions 
    bool hasTps() const { return this->tps_ != nullptr;};
    void deleteTps() { this->tps_ = nullptr;};
    inline int32_t tps() const { DARABONBA_PTR_GET_DEFAULT(tps_, 0) };
    inline DescribeShardTaskInfoResponseBodyDataFull& setTps(int32_t tps) { DARABONBA_PTR_SET_VALUE(tps_, tps) };


  protected:
    // Indicates the number of remaining days before the tasks expire.
    std::shared_ptr<int32_t> expired_ = nullptr;
    // Indicates the progress of the tasks.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // Indicates the start time when the tasks are performed.
    std::shared_ptr<string> startTime_ = nullptr;
    // Indicates the number of tasks.
    std::shared_ptr<int32_t> total_ = nullptr;
    // Indicates the number of transactions processed by the database per second.
    std::shared_ptr<int32_t> tps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
