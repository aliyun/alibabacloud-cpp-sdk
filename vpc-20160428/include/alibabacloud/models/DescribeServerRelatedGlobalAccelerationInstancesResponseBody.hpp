// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeServerRelatedGlobalAccelerationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerRelatedGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerRelatedGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(const DescribeServerRelatedGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(DescribeServerRelatedGlobalAccelerationInstancesResponseBody &&) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerRelatedGlobalAccelerationInstancesResponseBody() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody& operator=(const DescribeServerRelatedGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody& operator=(DescribeServerRelatedGlobalAccelerationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalAccelerationInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalAccelerationInstances& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalAccelerationInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
      };
      GlobalAccelerationInstances() = default ;
      GlobalAccelerationInstances(const GlobalAccelerationInstances &) = default ;
      GlobalAccelerationInstances(GlobalAccelerationInstances &&) = default ;
      GlobalAccelerationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalAccelerationInstances() = default ;
      GlobalAccelerationInstances& operator=(const GlobalAccelerationInstances &) = default ;
      GlobalAccelerationInstances& operator=(GlobalAccelerationInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GlobalAccelerationInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalAccelerationInstance& obj) { 
          DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ServerIpAddress, serverIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalAccelerationInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ServerIpAddress, serverIpAddress_);
        };
        GlobalAccelerationInstance() = default ;
        GlobalAccelerationInstance(const GlobalAccelerationInstance &) = default ;
        GlobalAccelerationInstance(GlobalAccelerationInstance &&) = default ;
        GlobalAccelerationInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalAccelerationInstance() = default ;
        GlobalAccelerationInstance& operator=(const GlobalAccelerationInstance &) = default ;
        GlobalAccelerationInstance& operator=(GlobalAccelerationInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->globalAccelerationInstanceId_ == nullptr
        && this->ipAddress_ == nullptr && this->regionId_ == nullptr && this->serverIpAddress_ == nullptr; };
        // globalAccelerationInstanceId Field Functions 
        bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
        void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
        inline string getGlobalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
        inline GlobalAccelerationInstance& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline GlobalAccelerationInstance& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GlobalAccelerationInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // serverIpAddress Field Functions 
        bool hasServerIpAddress() const { return this->serverIpAddress_ != nullptr;};
        void deleteServerIpAddress() { this->serverIpAddress_ = nullptr;};
        inline string getServerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(serverIpAddress_, "") };
        inline GlobalAccelerationInstance& setServerIpAddress(string serverIpAddress) { DARABONBA_PTR_SET_VALUE(serverIpAddress_, serverIpAddress) };


      protected:
        // The ID of the GA instance.
        shared_ptr<string> globalAccelerationInstanceId_ {};
        // The public IP address of the GA instance.
        shared_ptr<string> ipAddress_ {};
        // The region ID of the GA instance.
        shared_ptr<string> regionId_ {};
        // The IP address of the backend service.
        shared_ptr<string> serverIpAddress_ {};
      };

      virtual bool empty() const override { return this->globalAccelerationInstance_ == nullptr; };
      // globalAccelerationInstance Field Functions 
      bool hasGlobalAccelerationInstance() const { return this->globalAccelerationInstance_ != nullptr;};
      void deleteGlobalAccelerationInstance() { this->globalAccelerationInstance_ = nullptr;};
      inline const vector<GlobalAccelerationInstances::GlobalAccelerationInstance> & getGlobalAccelerationInstance() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstance_, vector<GlobalAccelerationInstances::GlobalAccelerationInstance>) };
      inline vector<GlobalAccelerationInstances::GlobalAccelerationInstance> getGlobalAccelerationInstance() { DARABONBA_PTR_GET(globalAccelerationInstance_, vector<GlobalAccelerationInstances::GlobalAccelerationInstance>) };
      inline GlobalAccelerationInstances& setGlobalAccelerationInstance(const vector<GlobalAccelerationInstances::GlobalAccelerationInstance> & globalAccelerationInstance) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstance_, globalAccelerationInstance) };
      inline GlobalAccelerationInstances& setGlobalAccelerationInstance(vector<GlobalAccelerationInstances::GlobalAccelerationInstance> && globalAccelerationInstance) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstance_, globalAccelerationInstance) };


    protected:
      shared_ptr<vector<GlobalAccelerationInstances::GlobalAccelerationInstance>> globalAccelerationInstance_ {};
    };

    virtual bool empty() const override { return this->globalAccelerationInstances_ == nullptr
        && this->requestId_ == nullptr; };
    // globalAccelerationInstances Field Functions 
    bool hasGlobalAccelerationInstances() const { return this->globalAccelerationInstances_ != nullptr;};
    void deleteGlobalAccelerationInstances() { this->globalAccelerationInstances_ = nullptr;};
    inline const DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances & getGlobalAccelerationInstances() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstances_, DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances getGlobalAccelerationInstances() { DARABONBA_PTR_GET(globalAccelerationInstances_, DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(const DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances & globalAccelerationInstances) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstances_, globalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances && globalAccelerationInstances) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstances_, globalAccelerationInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of GA instances.
    shared_ptr<DescribeServerRelatedGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances> globalAccelerationInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
