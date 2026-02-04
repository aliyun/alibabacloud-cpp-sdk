// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODEDIRECTVIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODEDIRECTVIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeDBNodeDirectVipInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodeDirectVipInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DirectVipInfo, directVipInfo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodeDirectVipInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectVipInfo, directVipInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBNodeDirectVipInfoResponseBody() = default ;
    DescribeDBNodeDirectVipInfoResponseBody(const DescribeDBNodeDirectVipInfoResponseBody &) = default ;
    DescribeDBNodeDirectVipInfoResponseBody(DescribeDBNodeDirectVipInfoResponseBody &&) = default ;
    DescribeDBNodeDirectVipInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodeDirectVipInfoResponseBody() = default ;
    DescribeDBNodeDirectVipInfoResponseBody& operator=(const DescribeDBNodeDirectVipInfoResponseBody &) = default ;
    DescribeDBNodeDirectVipInfoResponseBody& operator=(DescribeDBNodeDirectVipInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DirectVipInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DirectVipInfo& obj) { 
        DARABONBA_PTR_TO_JSON(VipInfo, vipInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DirectVipInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(VipInfo, vipInfo_);
      };
      DirectVipInfo() = default ;
      DirectVipInfo(const DirectVipInfo &) = default ;
      DirectVipInfo(DirectVipInfo &&) = default ;
      DirectVipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DirectVipInfo() = default ;
      DirectVipInfo& operator=(const DirectVipInfo &) = default ;
      DirectVipInfo& operator=(DirectVipInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VipInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VipInfo& obj) { 
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Vip, vip_);
        };
        friend void from_json(const Darabonba::Json& j, VipInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Vip, vip_);
        };
        VipInfo() = default ;
        VipInfo(const VipInfo &) = default ;
        VipInfo(VipInfo &&) = default ;
        VipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VipInfo() = default ;
        VipInfo& operator=(const VipInfo &) = default ;
        VipInfo& operator=(VipInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->netType_ == nullptr
        && this->nodeId_ == nullptr && this->port_ == nullptr && this->vip_ == nullptr; };
        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline VipInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline VipInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline VipInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // vip Field Functions 
        bool hasVip() const { return this->vip_ != nullptr;};
        void deleteVip() { this->vip_ = nullptr;};
        inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
        inline VipInfo& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


      protected:
        // The network type of the security group. Valid values:
        // 
        // *   **vpc**: Virtual Private Cloud (VPC)
        shared_ptr<string> netType_ {};
        // The shard ID.
        shared_ptr<string> nodeId_ {};
        // The port number. Valid values: **1024** to **65535**. Default value: **6379**.
        shared_ptr<string> port_ {};
        // The VIP of the shard.
        shared_ptr<string> vip_ {};
      };

      virtual bool empty() const override { return this->vipInfo_ == nullptr; };
      // vipInfo Field Functions 
      bool hasVipInfo() const { return this->vipInfo_ != nullptr;};
      void deleteVipInfo() { this->vipInfo_ = nullptr;};
      inline const vector<DirectVipInfo::VipInfo> & getVipInfo() const { DARABONBA_PTR_GET_CONST(vipInfo_, vector<DirectVipInfo::VipInfo>) };
      inline vector<DirectVipInfo::VipInfo> getVipInfo() { DARABONBA_PTR_GET(vipInfo_, vector<DirectVipInfo::VipInfo>) };
      inline DirectVipInfo& setVipInfo(const vector<DirectVipInfo::VipInfo> & vipInfo) { DARABONBA_PTR_SET_VALUE(vipInfo_, vipInfo) };
      inline DirectVipInfo& setVipInfo(vector<DirectVipInfo::VipInfo> && vipInfo) { DARABONBA_PTR_SET_RVALUE(vipInfo_, vipInfo) };


    protected:
      shared_ptr<vector<DirectVipInfo::VipInfo>> vipInfo_ {};
    };

    virtual bool empty() const override { return this->directVipInfo_ == nullptr
        && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // directVipInfo Field Functions 
    bool hasDirectVipInfo() const { return this->directVipInfo_ != nullptr;};
    void deleteDirectVipInfo() { this->directVipInfo_ = nullptr;};
    inline const DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo & getDirectVipInfo() const { DARABONBA_PTR_GET_CONST(directVipInfo_, DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo) };
    inline DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo getDirectVipInfo() { DARABONBA_PTR_GET(directVipInfo_, DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo) };
    inline DescribeDBNodeDirectVipInfoResponseBody& setDirectVipInfo(const DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo & directVipInfo) { DARABONBA_PTR_SET_VALUE(directVipInfo_, directVipInfo) };
    inline DescribeDBNodeDirectVipInfoResponseBody& setDirectVipInfo(DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo && directVipInfo) { DARABONBA_PTR_SET_RVALUE(directVipInfo_, directVipInfo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDBNodeDirectVipInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBNodeDirectVipInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The VIP information of shards in the cluster instance.
    shared_ptr<DescribeDBNodeDirectVipInfoResponseBody::DirectVipInfo> directVipInfo_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
