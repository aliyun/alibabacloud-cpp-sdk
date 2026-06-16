// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(BlackholeThreshold, blackholeThreshold_);
          DARABONBA_PTR_TO_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
          DARABONBA_PTR_TO_JSON(DefensePpsThreshold, defensePpsThreshold_);
          DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(IsBgppack, isBgppack_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(BlackholeThreshold, blackholeThreshold_);
          DARABONBA_PTR_FROM_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
          DARABONBA_PTR_FROM_JSON(DefensePpsThreshold, defensePpsThreshold_);
          DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(IsBgppack, isBgppack_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blackholeThreshold_ == nullptr
        && this->defenseBpsThreshold_ == nullptr && this->defensePpsThreshold_ == nullptr && this->elasticThreshold_ == nullptr && this->instanceId_ == nullptr && this->instanceIp_ == nullptr
        && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr && this->ipVersion_ == nullptr && this->isBgppack_ == nullptr; };
        // blackholeThreshold Field Functions 
        bool hasBlackholeThreshold() const { return this->blackholeThreshold_ != nullptr;};
        void deleteBlackholeThreshold() { this->blackholeThreshold_ = nullptr;};
        inline int32_t getBlackholeThreshold() const { DARABONBA_PTR_GET_DEFAULT(blackholeThreshold_, 0) };
        inline Instance& setBlackholeThreshold(int32_t blackholeThreshold) { DARABONBA_PTR_SET_VALUE(blackholeThreshold_, blackholeThreshold) };


        // defenseBpsThreshold Field Functions 
        bool hasDefenseBpsThreshold() const { return this->defenseBpsThreshold_ != nullptr;};
        void deleteDefenseBpsThreshold() { this->defenseBpsThreshold_ = nullptr;};
        inline int32_t getDefenseBpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defenseBpsThreshold_, 0) };
        inline Instance& setDefenseBpsThreshold(int32_t defenseBpsThreshold) { DARABONBA_PTR_SET_VALUE(defenseBpsThreshold_, defenseBpsThreshold) };


        // defensePpsThreshold Field Functions 
        bool hasDefensePpsThreshold() const { return this->defensePpsThreshold_ != nullptr;};
        void deleteDefensePpsThreshold() { this->defensePpsThreshold_ = nullptr;};
        inline int32_t getDefensePpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defensePpsThreshold_, 0) };
        inline Instance& setDefensePpsThreshold(int32_t defensePpsThreshold) { DARABONBA_PTR_SET_VALUE(defensePpsThreshold_, defensePpsThreshold) };


        // elasticThreshold Field Functions 
        bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
        void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
        inline int32_t getElasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
        inline Instance& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceIp Field Functions 
        bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
        void deleteInstanceIp() { this->instanceIp_ = nullptr;};
        inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
        inline Instance& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline Instance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline Instance& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // isBgppack Field Functions 
        bool hasIsBgppack() const { return this->isBgppack_ != nullptr;};
        void deleteIsBgppack() { this->isBgppack_ = nullptr;};
        inline bool getIsBgppack() const { DARABONBA_PTR_GET_DEFAULT(isBgppack_, false) };
        inline Instance& setIsBgppack(bool isBgppack) { DARABONBA_PTR_SET_VALUE(isBgppack_, isBgppack) };


      protected:
        shared_ptr<int32_t> blackholeThreshold_ {};
        shared_ptr<int32_t> defenseBpsThreshold_ {};
        shared_ptr<int32_t> defensePpsThreshold_ {};
        shared_ptr<int32_t> elasticThreshold_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceIp_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> instanceStatus_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> ipVersion_ {};
        shared_ptr<bool> isBgppack_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<InstanceList::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<InstanceList::Instance>) };
      inline vector<InstanceList::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<InstanceList::Instance>) };
      inline InstanceList& setInstance(const vector<InstanceList::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline InstanceList& setInstance(vector<InstanceList::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<InstanceList::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const DescribeInstanceResponseBody::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, DescribeInstanceResponseBody::InstanceList) };
    inline DescribeInstanceResponseBody::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, DescribeInstanceResponseBody::InstanceList) };
    inline DescribeInstanceResponseBody& setInstanceList(const DescribeInstanceResponseBody::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceResponseBody& setInstanceList(DescribeInstanceResponseBody::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstanceResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeInstanceResponseBody::InstanceList> instanceList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the assets.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
