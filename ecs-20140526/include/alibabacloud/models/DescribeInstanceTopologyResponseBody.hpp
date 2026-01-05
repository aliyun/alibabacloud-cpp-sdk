// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Topologys, topologys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Topologys, topologys_);
    };
    DescribeInstanceTopologyResponseBody() = default ;
    DescribeInstanceTopologyResponseBody(const DescribeInstanceTopologyResponseBody &) = default ;
    DescribeInstanceTopologyResponseBody(DescribeInstanceTopologyResponseBody &&) = default ;
    DescribeInstanceTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTopologyResponseBody() = default ;
    DescribeInstanceTopologyResponseBody& operator=(const DescribeInstanceTopologyResponseBody &) = default ;
    DescribeInstanceTopologyResponseBody& operator=(DescribeInstanceTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Topologys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Topologys& obj) { 
        DARABONBA_PTR_TO_JSON(Topology, topology_);
      };
      friend void from_json(const Darabonba::Json& j, Topologys& obj) { 
        DARABONBA_PTR_FROM_JSON(Topology, topology_);
      };
      Topologys() = default ;
      Topologys(const Topologys &) = default ;
      Topologys(Topologys &&) = default ;
      Topologys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Topologys() = default ;
      Topologys& operator=(const Topologys &) = default ;
      Topologys& operator=(Topologys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Topology : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topology& obj) { 
          DARABONBA_PTR_TO_JSON(HostId, hostId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Topology& obj) { 
          DARABONBA_PTR_FROM_JSON(HostId, hostId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        Topology() = default ;
        Topology(const Topology &) = default ;
        Topology(Topology &&) = default ;
        Topology(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topology() = default ;
        Topology& operator=(const Topology &) = default ;
        Topology& operator=(Topology &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instanceId_ == nullptr; };
        // hostId Field Functions 
        bool hasHostId() const { return this->hostId_ != nullptr;};
        void deleteHostId() { this->hostId_ = nullptr;};
        inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
        inline Topology& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Topology& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The ID of the host where the ECS instance resides. This parameter is encrypted and cannot match the ID of the ECS instance. However, if the values of this parameter for different ECS instances are the same, the ECS instances reside on the same host.
        shared_ptr<string> hostId_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->topology_ == nullptr; };
      // topology Field Functions 
      bool hasTopology() const { return this->topology_ != nullptr;};
      void deleteTopology() { this->topology_ = nullptr;};
      inline const vector<Topologys::Topology> & getTopology() const { DARABONBA_PTR_GET_CONST(topology_, vector<Topologys::Topology>) };
      inline vector<Topologys::Topology> getTopology() { DARABONBA_PTR_GET(topology_, vector<Topologys::Topology>) };
      inline Topologys& setTopology(const vector<Topologys::Topology> & topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };
      inline Topologys& setTopology(vector<Topologys::Topology> && topology) { DARABONBA_PTR_SET_RVALUE(topology_, topology) };


    protected:
      shared_ptr<vector<Topologys::Topology>> topology_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topologys_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topologys Field Functions 
    bool hasTopologys() const { return this->topologys_ != nullptr;};
    void deleteTopologys() { this->topologys_ = nullptr;};
    inline const DescribeInstanceTopologyResponseBody::Topologys & getTopologys() const { DARABONBA_PTR_GET_CONST(topologys_, DescribeInstanceTopologyResponseBody::Topologys) };
    inline DescribeInstanceTopologyResponseBody::Topologys getTopologys() { DARABONBA_PTR_GET(topologys_, DescribeInstanceTopologyResponseBody::Topologys) };
    inline DescribeInstanceTopologyResponseBody& setTopologys(const DescribeInstanceTopologyResponseBody::Topologys & topologys) { DARABONBA_PTR_SET_VALUE(topologys_, topologys) };
    inline DescribeInstanceTopologyResponseBody& setTopologys(DescribeInstanceTopologyResponseBody::Topologys && topologys) { DARABONBA_PTR_SET_RVALUE(topologys_, topologys) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the topology.
    shared_ptr<DescribeInstanceTopologyResponseBody::Topologys> topologys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
