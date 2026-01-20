// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureDBInfo, featureDBInfo_);
        DARABONBA_PTR_TO_JSON(FeatureDBInstanceInfo, featureDBInstanceInfo_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureDBInfo, featureDBInfo_);
        DARABONBA_PTR_FROM_JSON(FeatureDBInstanceInfo, featureDBInstanceInfo_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FeatureDBInstanceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeatureDBInstanceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, FeatureDBInstanceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        FeatureDBInstanceInfo() = default ;
        FeatureDBInstanceInfo(const FeatureDBInstanceInfo &) = default ;
        FeatureDBInstanceInfo(FeatureDBInstanceInfo &&) = default ;
        FeatureDBInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeatureDBInstanceInfo() = default ;
        FeatureDBInstanceInfo& operator=(const FeatureDBInstanceInfo &) = default ;
        FeatureDBInstanceInfo& operator=(FeatureDBInstanceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FeatureDBInstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> status_ {};
      };

      class FeatureDBInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeatureDBInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, FeatureDBInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        FeatureDBInfo() = default ;
        FeatureDBInfo(const FeatureDBInfo &) = default ;
        FeatureDBInfo(FeatureDBInfo &&) = default ;
        FeatureDBInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeatureDBInfo() = default ;
        FeatureDBInfo& operator=(const FeatureDBInfo &) = default ;
        FeatureDBInfo& operator=(FeatureDBInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FeatureDBInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->featureDBInfo_ == nullptr
        && this->featureDBInstanceInfo_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // featureDBInfo Field Functions 
      bool hasFeatureDBInfo() const { return this->featureDBInfo_ != nullptr;};
      void deleteFeatureDBInfo() { this->featureDBInfo_ = nullptr;};
      inline const Instances::FeatureDBInfo & getFeatureDBInfo() const { DARABONBA_PTR_GET_CONST(featureDBInfo_, Instances::FeatureDBInfo) };
      inline Instances::FeatureDBInfo getFeatureDBInfo() { DARABONBA_PTR_GET(featureDBInfo_, Instances::FeatureDBInfo) };
      inline Instances& setFeatureDBInfo(const Instances::FeatureDBInfo & featureDBInfo) { DARABONBA_PTR_SET_VALUE(featureDBInfo_, featureDBInfo) };
      inline Instances& setFeatureDBInfo(Instances::FeatureDBInfo && featureDBInfo) { DARABONBA_PTR_SET_RVALUE(featureDBInfo_, featureDBInfo) };


      // featureDBInstanceInfo Field Functions 
      bool hasFeatureDBInstanceInfo() const { return this->featureDBInstanceInfo_ != nullptr;};
      void deleteFeatureDBInstanceInfo() { this->featureDBInstanceInfo_ = nullptr;};
      inline const Instances::FeatureDBInstanceInfo & getFeatureDBInstanceInfo() const { DARABONBA_PTR_GET_CONST(featureDBInstanceInfo_, Instances::FeatureDBInstanceInfo) };
      inline Instances::FeatureDBInstanceInfo getFeatureDBInstanceInfo() { DARABONBA_PTR_GET(featureDBInstanceInfo_, Instances::FeatureDBInstanceInfo) };
      inline Instances& setFeatureDBInstanceInfo(const Instances::FeatureDBInstanceInfo & featureDBInstanceInfo) { DARABONBA_PTR_SET_VALUE(featureDBInstanceInfo_, featureDBInstanceInfo) };
      inline Instances& setFeatureDBInstanceInfo(Instances::FeatureDBInstanceInfo && featureDBInstanceInfo) { DARABONBA_PTR_SET_RVALUE(featureDBInstanceInfo_, featureDBInstanceInfo) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Instances& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Instances& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Instances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Instances::FeatureDBInfo> featureDBInfo_ {};
      shared_ptr<Instances::FeatureDBInstanceInfo> featureDBInstanceInfo_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline vector<ListInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline ListInstancesResponseBody& setInstances(const vector<ListInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBody& setInstances(vector<ListInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListInstancesResponseBody::Instances>> instances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
