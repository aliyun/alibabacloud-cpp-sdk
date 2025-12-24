// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODYINSTANCECREATEANDDELETESTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODYINSTANCECREATEANDDELETESTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedVmCount, createdVmCount_);
      DARABONBA_PTR_TO_JSON(DestroyedVmCount, destroyedVmCount_);
      DARABONBA_PTR_TO_JSON(StartedVmCount, startedVmCount_);
      DARABONBA_PTR_TO_JSON(StoppedVmCount, stoppedVmCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedVmCount, createdVmCount_);
      DARABONBA_PTR_FROM_JSON(DestroyedVmCount, destroyedVmCount_);
      DARABONBA_PTR_FROM_JSON(StartedVmCount, startedVmCount_);
      DARABONBA_PTR_FROM_JSON(StoppedVmCount, stoppedVmCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic(const DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic(DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic &&) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& operator=(const DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& operator=(DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdVmCount_ == nullptr
        && return this->destroyedVmCount_ == nullptr && return this->startedVmCount_ == nullptr && return this->stoppedVmCount_ == nullptr && return this->time_ == nullptr; };
    // createdVmCount Field Functions 
    bool hasCreatedVmCount() const { return this->createdVmCount_ != nullptr;};
    void deleteCreatedVmCount() { this->createdVmCount_ = nullptr;};
    inline int32_t createdVmCount() const { DARABONBA_PTR_GET_DEFAULT(createdVmCount_, 0) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& setCreatedVmCount(int32_t createdVmCount) { DARABONBA_PTR_SET_VALUE(createdVmCount_, createdVmCount) };


    // destroyedVmCount Field Functions 
    bool hasDestroyedVmCount() const { return this->destroyedVmCount_ != nullptr;};
    void deleteDestroyedVmCount() { this->destroyedVmCount_ = nullptr;};
    inline int32_t destroyedVmCount() const { DARABONBA_PTR_GET_DEFAULT(destroyedVmCount_, 0) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& setDestroyedVmCount(int32_t destroyedVmCount) { DARABONBA_PTR_SET_VALUE(destroyedVmCount_, destroyedVmCount) };


    // startedVmCount Field Functions 
    bool hasStartedVmCount() const { return this->startedVmCount_ != nullptr;};
    void deleteStartedVmCount() { this->startedVmCount_ = nullptr;};
    inline int32_t startedVmCount() const { DARABONBA_PTR_GET_DEFAULT(startedVmCount_, 0) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& setStartedVmCount(int32_t startedVmCount) { DARABONBA_PTR_SET_VALUE(startedVmCount_, startedVmCount) };


    // stoppedVmCount Field Functions 
    bool hasStoppedVmCount() const { return this->stoppedVmCount_ != nullptr;};
    void deleteStoppedVmCount() { this->stoppedVmCount_ = nullptr;};
    inline int32_t stoppedVmCount() const { DARABONBA_PTR_GET_DEFAULT(stoppedVmCount_, 0) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& setStoppedVmCount(int32_t stoppedVmCount) { DARABONBA_PTR_SET_VALUE(stoppedVmCount_, stoppedVmCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatisticsStatistic& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> createdVmCount_ = nullptr;
    std::shared_ptr<int32_t> destroyedVmCount_ = nullptr;
    std::shared_ptr<int32_t> startedVmCount_ = nullptr;
    std::shared_ptr<int32_t> stoppedVmCount_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
