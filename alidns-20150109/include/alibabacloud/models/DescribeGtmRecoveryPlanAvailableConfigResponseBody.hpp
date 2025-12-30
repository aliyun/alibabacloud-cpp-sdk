// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGtmRecoveryPlanAvailableConfigResponseBody() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(const DescribeGtmRecoveryPlanAvailableConfigResponseBody &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(DescribeGtmRecoveryPlanAvailableConfigResponseBody &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigResponseBody() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody& operator=(const DescribeGtmRecoveryPlanAvailableConfigResponseBody &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody& operator=(DescribeGtmRecoveryPlanAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
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
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(AddrPools, addrPools_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrPools, addrPools_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
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
        class AddrPools : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AddrPools& obj) { 
            DARABONBA_PTR_TO_JSON(AddrPool, addrPool_);
          };
          friend void from_json(const Darabonba::Json& j, AddrPools& obj) { 
            DARABONBA_PTR_FROM_JSON(AddrPool, addrPool_);
          };
          AddrPools() = default ;
          AddrPools(const AddrPools &) = default ;
          AddrPools(AddrPools &&) = default ;
          AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AddrPools() = default ;
          AddrPools& operator=(const AddrPools &) = default ;
          AddrPools& operator=(AddrPools &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AddrPool : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AddrPool& obj) { 
              DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, AddrPool& obj) { 
              DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            AddrPool() = default ;
            AddrPool(const AddrPool &) = default ;
            AddrPool(AddrPool &&) = default ;
            AddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AddrPool() = default ;
            AddrPool& operator=(const AddrPool &) = default ;
            AddrPool& operator=(AddrPool &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && this->name_ == nullptr; };
            // addrPoolId Field Functions 
            bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
            void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
            inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
            inline AddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline AddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The address pool ID.
            shared_ptr<string> addrPoolId_ {};
            // The name of the address pool.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->addrPool_ == nullptr; };
          // addrPool Field Functions 
          bool hasAddrPool() const { return this->addrPool_ != nullptr;};
          void deleteAddrPool() { this->addrPool_ = nullptr;};
          inline const vector<AddrPools::AddrPool> & getAddrPool() const { DARABONBA_PTR_GET_CONST(addrPool_, vector<AddrPools::AddrPool>) };
          inline vector<AddrPools::AddrPool> getAddrPool() { DARABONBA_PTR_GET(addrPool_, vector<AddrPools::AddrPool>) };
          inline AddrPools& setAddrPool(const vector<AddrPools::AddrPool> & addrPool) { DARABONBA_PTR_SET_VALUE(addrPool_, addrPool) };
          inline AddrPools& setAddrPool(vector<AddrPools::AddrPool> && addrPool) { DARABONBA_PTR_SET_RVALUE(addrPool_, addrPool) };


        protected:
          shared_ptr<vector<AddrPools::AddrPool>> addrPool_ {};
        };

        virtual bool empty() const override { return this->addrPools_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr; };
        // addrPools Field Functions 
        bool hasAddrPools() const { return this->addrPools_ != nullptr;};
        void deleteAddrPools() { this->addrPools_ = nullptr;};
        inline const Instance::AddrPools & getAddrPools() const { DARABONBA_PTR_GET_CONST(addrPools_, Instance::AddrPools) };
        inline Instance::AddrPools getAddrPools() { DARABONBA_PTR_GET(addrPools_, Instance::AddrPools) };
        inline Instance& setAddrPools(const Instance::AddrPools & addrPools) { DARABONBA_PTR_SET_VALUE(addrPools_, addrPools) };
        inline Instance& setAddrPools(Instance::AddrPools && addrPools) { DARABONBA_PTR_SET_RVALUE(addrPools_, addrPools) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      protected:
        // The address pools.
        shared_ptr<Instance::AddrPools> addrPools_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setInstances(const DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setInstances(DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances.
    shared_ptr<DescribeGtmRecoveryPlanAvailableConfigResponseBody::Instances> instances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
