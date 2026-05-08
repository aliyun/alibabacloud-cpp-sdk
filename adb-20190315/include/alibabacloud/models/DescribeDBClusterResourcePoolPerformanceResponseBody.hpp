// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterResourcePoolPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterResourcePoolPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterResourcePoolPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBClusterResourcePoolPerformanceResponseBody() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBody(const DescribeDBClusterResourcePoolPerformanceResponseBody &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBody(DescribeDBClusterResourcePoolPerformanceResponseBody &&) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterResourcePoolPerformanceResponseBody() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBody& operator=(const DescribeDBClusterResourcePoolPerformanceResponseBody &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBody& operator=(DescribeDBClusterResourcePoolPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(ResourcePoolPerformances, resourcePoolPerformances_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(ResourcePoolPerformances, resourcePoolPerformances_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Performances() = default ;
      Performances(const Performances &) = default ;
      Performances(Performances &&) = default ;
      Performances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Performances() = default ;
      Performances& operator=(const Performances &) = default ;
      Performances& operator=(Performances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourcePoolPerformances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePoolPerformances& obj) { 
          DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
          DARABONBA_PTR_TO_JSON(ResourcePoolSeries, resourcePoolSeries_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePoolPerformances& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
          DARABONBA_PTR_FROM_JSON(ResourcePoolSeries, resourcePoolSeries_);
        };
        ResourcePoolPerformances() = default ;
        ResourcePoolPerformances(const ResourcePoolPerformances &) = default ;
        ResourcePoolPerformances(ResourcePoolPerformances &&) = default ;
        ResourcePoolPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePoolPerformances() = default ;
        ResourcePoolPerformances& operator=(const ResourcePoolPerformances &) = default ;
        ResourcePoolPerformances& operator=(ResourcePoolPerformances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourcePoolSeries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourcePoolSeries& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, ResourcePoolSeries& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          ResourcePoolSeries() = default ;
          ResourcePoolSeries(const ResourcePoolSeries &) = default ;
          ResourcePoolSeries(ResourcePoolSeries &&) = default ;
          ResourcePoolSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourcePoolSeries() = default ;
          ResourcePoolSeries& operator=(const ResourcePoolSeries &) = default ;
          ResourcePoolSeries& operator=(ResourcePoolSeries &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResourcePoolSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline ResourcePoolSeries& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline ResourcePoolSeries& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The value of the metric.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->resourcePoolName_ == nullptr
        && this->resourcePoolSeries_ == nullptr; };
        // resourcePoolName Field Functions 
        bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
        void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
        inline string getResourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
        inline ResourcePoolPerformances& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


        // resourcePoolSeries Field Functions 
        bool hasResourcePoolSeries() const { return this->resourcePoolSeries_ != nullptr;};
        void deleteResourcePoolSeries() { this->resourcePoolSeries_ = nullptr;};
        inline const vector<ResourcePoolPerformances::ResourcePoolSeries> & getResourcePoolSeries() const { DARABONBA_PTR_GET_CONST(resourcePoolSeries_, vector<ResourcePoolPerformances::ResourcePoolSeries>) };
        inline vector<ResourcePoolPerformances::ResourcePoolSeries> getResourcePoolSeries() { DARABONBA_PTR_GET(resourcePoolSeries_, vector<ResourcePoolPerformances::ResourcePoolSeries>) };
        inline ResourcePoolPerformances& setResourcePoolSeries(const vector<ResourcePoolPerformances::ResourcePoolSeries> & resourcePoolSeries) { DARABONBA_PTR_SET_VALUE(resourcePoolSeries_, resourcePoolSeries) };
        inline ResourcePoolPerformances& setResourcePoolSeries(vector<ResourcePoolPerformances::ResourcePoolSeries> && resourcePoolSeries) { DARABONBA_PTR_SET_RVALUE(resourcePoolSeries_, resourcePoolSeries) };


      protected:
        // The name of the resource group.
        shared_ptr<string> resourcePoolName_ {};
        // The sequential monitoring information about the resource groups.
        shared_ptr<vector<ResourcePoolPerformances::ResourcePoolSeries>> resourcePoolSeries_ {};
      };

      virtual bool empty() const override { return this->key_ == nullptr
        && this->resourcePoolPerformances_ == nullptr && this->unit_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Performances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // resourcePoolPerformances Field Functions 
      bool hasResourcePoolPerformances() const { return this->resourcePoolPerformances_ != nullptr;};
      void deleteResourcePoolPerformances() { this->resourcePoolPerformances_ = nullptr;};
      inline const vector<Performances::ResourcePoolPerformances> & getResourcePoolPerformances() const { DARABONBA_PTR_GET_CONST(resourcePoolPerformances_, vector<Performances::ResourcePoolPerformances>) };
      inline vector<Performances::ResourcePoolPerformances> getResourcePoolPerformances() { DARABONBA_PTR_GET(resourcePoolPerformances_, vector<Performances::ResourcePoolPerformances>) };
      inline Performances& setResourcePoolPerformances(const vector<Performances::ResourcePoolPerformances> & resourcePoolPerformances) { DARABONBA_PTR_SET_VALUE(resourcePoolPerformances_, resourcePoolPerformances) };
      inline Performances& setResourcePoolPerformances(vector<Performances::ResourcePoolPerformances> && resourcePoolPerformances) { DARABONBA_PTR_SET_RVALUE(resourcePoolPerformances_, resourcePoolPerformances) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Performances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The metric of the resource group.
      shared_ptr<string> key_ {};
      // The queried monitoring information about the resource groups.
      shared_ptr<vector<Performances::ResourcePoolPerformances>> resourcePoolPerformances_ {};
      // The unit of the metric value.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->performances_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances> & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances>) };
    inline vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances> getPerformances() { DARABONBA_PTR_GET(performances_, vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances>) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setPerformances(const vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setPerformances(vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The end of the time range for monitoring the resource group. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The queried monitoring information about the metrics.
    shared_ptr<vector<DescribeDBClusterResourcePoolPerformanceResponseBody::Performances>> performances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for monitoring the resource group. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
