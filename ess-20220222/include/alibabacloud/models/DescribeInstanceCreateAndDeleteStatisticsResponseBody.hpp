// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceCreateAndDeleteStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceCreateAndDeleteStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCreateAndDeleteStatistics, instanceCreateAndDeleteStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceCreateAndDeleteStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCreateAndDeleteStatistics, instanceCreateAndDeleteStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceCreateAndDeleteStatisticsResponseBody() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(const DescribeInstanceCreateAndDeleteStatisticsResponseBody &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(DescribeInstanceCreateAndDeleteStatisticsResponseBody &&) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceCreateAndDeleteStatisticsResponseBody() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody& operator=(const DescribeInstanceCreateAndDeleteStatisticsResponseBody &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody& operator=(DescribeInstanceCreateAndDeleteStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceCreateAndDeleteStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceCreateAndDeleteStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceCreateAndDeleteStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      };
      InstanceCreateAndDeleteStatistics() = default ;
      InstanceCreateAndDeleteStatistics(const InstanceCreateAndDeleteStatistics &) = default ;
      InstanceCreateAndDeleteStatistics(InstanceCreateAndDeleteStatistics &&) = default ;
      InstanceCreateAndDeleteStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceCreateAndDeleteStatistics() = default ;
      InstanceCreateAndDeleteStatistics& operator=(const InstanceCreateAndDeleteStatistics &) = default ;
      InstanceCreateAndDeleteStatistics& operator=(InstanceCreateAndDeleteStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedVmCount, createdVmCount_);
          DARABONBA_PTR_TO_JSON(DestroyedVmCount, destroyedVmCount_);
          DARABONBA_PTR_TO_JSON(StartedVmCount, startedVmCount_);
          DARABONBA_PTR_TO_JSON(StoppedVmCount, stoppedVmCount_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedVmCount, createdVmCount_);
          DARABONBA_PTR_FROM_JSON(DestroyedVmCount, destroyedVmCount_);
          DARABONBA_PTR_FROM_JSON(StartedVmCount, startedVmCount_);
          DARABONBA_PTR_FROM_JSON(StoppedVmCount, stoppedVmCount_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        Statistic() = default ;
        Statistic(const Statistic &) = default ;
        Statistic(Statistic &&) = default ;
        Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistic() = default ;
        Statistic& operator=(const Statistic &) = default ;
        Statistic& operator=(Statistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdVmCount_ == nullptr
        && this->destroyedVmCount_ == nullptr && this->startedVmCount_ == nullptr && this->stoppedVmCount_ == nullptr && this->time_ == nullptr; };
        // createdVmCount Field Functions 
        bool hasCreatedVmCount() const { return this->createdVmCount_ != nullptr;};
        void deleteCreatedVmCount() { this->createdVmCount_ = nullptr;};
        inline int32_t getCreatedVmCount() const { DARABONBA_PTR_GET_DEFAULT(createdVmCount_, 0) };
        inline Statistic& setCreatedVmCount(int32_t createdVmCount) { DARABONBA_PTR_SET_VALUE(createdVmCount_, createdVmCount) };


        // destroyedVmCount Field Functions 
        bool hasDestroyedVmCount() const { return this->destroyedVmCount_ != nullptr;};
        void deleteDestroyedVmCount() { this->destroyedVmCount_ = nullptr;};
        inline int32_t getDestroyedVmCount() const { DARABONBA_PTR_GET_DEFAULT(destroyedVmCount_, 0) };
        inline Statistic& setDestroyedVmCount(int32_t destroyedVmCount) { DARABONBA_PTR_SET_VALUE(destroyedVmCount_, destroyedVmCount) };


        // startedVmCount Field Functions 
        bool hasStartedVmCount() const { return this->startedVmCount_ != nullptr;};
        void deleteStartedVmCount() { this->startedVmCount_ = nullptr;};
        inline int32_t getStartedVmCount() const { DARABONBA_PTR_GET_DEFAULT(startedVmCount_, 0) };
        inline Statistic& setStartedVmCount(int32_t startedVmCount) { DARABONBA_PTR_SET_VALUE(startedVmCount_, startedVmCount) };


        // stoppedVmCount Field Functions 
        bool hasStoppedVmCount() const { return this->stoppedVmCount_ != nullptr;};
        void deleteStoppedVmCount() { this->stoppedVmCount_ = nullptr;};
        inline int32_t getStoppedVmCount() const { DARABONBA_PTR_GET_DEFAULT(stoppedVmCount_, 0) };
        inline Statistic& setStoppedVmCount(int32_t stoppedVmCount) { DARABONBA_PTR_SET_VALUE(stoppedVmCount_, stoppedVmCount) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Statistic& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The number of new instances.
        shared_ptr<int32_t> createdVmCount_ {};
        // The number of released instances.
        shared_ptr<int32_t> destroyedVmCount_ {};
        // The number of instances that are started from economical mode.
        shared_ptr<int32_t> startedVmCount_ {};
        // The number of instances that are stopped in economical mode.
        shared_ptr<int32_t> stoppedVmCount_ {};
        // The time when the statistics are generated. The time is in UTC. Format: yyyyMMddHH.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->statistic_ == nullptr; };
      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline const vector<InstanceCreateAndDeleteStatistics::Statistic> & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<InstanceCreateAndDeleteStatistics::Statistic>) };
      inline vector<InstanceCreateAndDeleteStatistics::Statistic> getStatistic() { DARABONBA_PTR_GET(statistic_, vector<InstanceCreateAndDeleteStatistics::Statistic>) };
      inline InstanceCreateAndDeleteStatistics& setStatistic(const vector<InstanceCreateAndDeleteStatistics::Statistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
      inline InstanceCreateAndDeleteStatistics& setStatistic(vector<InstanceCreateAndDeleteStatistics::Statistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    protected:
      shared_ptr<vector<InstanceCreateAndDeleteStatistics::Statistic>> statistic_ {};
    };

    virtual bool empty() const override { return this->instanceCreateAndDeleteStatistics_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceCreateAndDeleteStatistics Field Functions 
    bool hasInstanceCreateAndDeleteStatistics() const { return this->instanceCreateAndDeleteStatistics_ != nullptr;};
    void deleteInstanceCreateAndDeleteStatistics() { this->instanceCreateAndDeleteStatistics_ = nullptr;};
    inline const DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics & getInstanceCreateAndDeleteStatistics() const { DARABONBA_PTR_GET_CONST(instanceCreateAndDeleteStatistics_, DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics getInstanceCreateAndDeleteStatistics() { DARABONBA_PTR_GET(instanceCreateAndDeleteStatistics_, DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setInstanceCreateAndDeleteStatistics(const DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics & instanceCreateAndDeleteStatistics) { DARABONBA_PTR_SET_VALUE(instanceCreateAndDeleteStatistics_, instanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setInstanceCreateAndDeleteStatistics(DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics && instanceCreateAndDeleteStatistics) { DARABONBA_PTR_SET_RVALUE(instanceCreateAndDeleteStatistics_, instanceCreateAndDeleteStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Metrics for instance creation and deletion.
    shared_ptr<DescribeInstanceCreateAndDeleteStatisticsResponseBody::InstanceCreateAndDeleteStatistics> instanceCreateAndDeleteStatistics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
