// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkZonesResponseBody() = default ;
    ListNetworkZonesResponseBody(const ListNetworkZonesResponseBody &) = default ;
    ListNetworkZonesResponseBody(ListNetworkZonesResponseBody &&) = default ;
    ListNetworkZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkZonesResponseBody() = default ;
    ListNetworkZonesResponseBody& operator=(const ListNetworkZonesResponseBody &) = default ;
    ListNetworkZonesResponseBody& operator=(ListNetworkZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkZones& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
        DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
        DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
        DARABONBA_PTR_TO_JSON(NetworkZoneName, networkZoneName_);
        DARABONBA_PTR_TO_JSON(NetworkZoneType, networkZoneType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkZones& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
        DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneName, networkZoneName_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneType, networkZoneType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      NetworkZones() = default ;
      NetworkZones(const NetworkZones &) = default ;
      NetworkZones(NetworkZones &&) = default ;
      NetworkZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkZones() = default ;
      NetworkZones& operator=(const NetworkZones &) = default ;
      NetworkZones& operator=(NetworkZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->ipv4Cidrs_ == nullptr && this->ipv6Cidrs_ == nullptr && this->networkZoneId_ == nullptr && this->networkZoneName_ == nullptr
        && this->networkZoneType_ == nullptr && this->vpcId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkZones& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkZones& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ipv4Cidrs Field Functions 
      bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
      void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
      inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
      inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
      inline NetworkZones& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
      inline NetworkZones& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


      // ipv6Cidrs Field Functions 
      bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
      void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
      inline const vector<string> & getIpv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
      inline vector<string> getIpv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
      inline NetworkZones& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
      inline NetworkZones& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


      // networkZoneId Field Functions 
      bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
      void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
      inline string getNetworkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
      inline NetworkZones& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


      // networkZoneName Field Functions 
      bool hasNetworkZoneName() const { return this->networkZoneName_ != nullptr;};
      void deleteNetworkZoneName() { this->networkZoneName_ = nullptr;};
      inline string getNetworkZoneName() const { DARABONBA_PTR_GET_DEFAULT(networkZoneName_, "") };
      inline NetworkZones& setNetworkZoneName(string networkZoneName) { DARABONBA_PTR_SET_VALUE(networkZoneName_, networkZoneName) };


      // networkZoneType Field Functions 
      bool hasNetworkZoneType() const { return this->networkZoneType_ != nullptr;};
      void deleteNetworkZoneType() { this->networkZoneType_ = nullptr;};
      inline string getNetworkZoneType() const { DARABONBA_PTR_GET_DEFAULT(networkZoneType_, "") };
      inline NetworkZones& setNetworkZoneType(string networkZoneType) { DARABONBA_PTR_SET_VALUE(networkZoneType_, networkZoneType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkZones& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // IDaaS EIAM 网络区域描述
      shared_ptr<string> description_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<string>> ipv4Cidrs_ {};
      shared_ptr<vector<string>> ipv6Cidrs_ {};
      // IDaaS EIAM 网络区域Id
      shared_ptr<string> networkZoneId_ {};
      // IDaaS EIAM 网络区域名称
      shared_ptr<string> networkZoneName_ {};
      // IDaaS EIAM 网络区域类型
      shared_ptr<string> networkZoneType_ {};
      // IDaaS EIAM 专有网络VpcId
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->networkZones_ == nullptr
        && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const vector<ListNetworkZonesResponseBody::NetworkZones> & getNetworkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, vector<ListNetworkZonesResponseBody::NetworkZones>) };
    inline vector<ListNetworkZonesResponseBody::NetworkZones> getNetworkZones() { DARABONBA_PTR_GET(networkZones_, vector<ListNetworkZonesResponseBody::NetworkZones>) };
    inline ListNetworkZonesResponseBody& setNetworkZones(const vector<ListNetworkZonesResponseBody::NetworkZones> & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline ListNetworkZonesResponseBody& setNetworkZones(vector<ListNetworkZonesResponseBody::NetworkZones> && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListNetworkZonesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkZonesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListNetworkZonesResponseBody::NetworkZones>> networkZones_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
