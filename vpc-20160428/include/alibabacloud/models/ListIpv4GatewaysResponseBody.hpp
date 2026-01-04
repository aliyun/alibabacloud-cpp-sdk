// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODY_HPP_
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
  class ListIpv4GatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpv4GatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4GatewayModels, ipv4GatewayModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpv4GatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayModels, ipv4GatewayModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpv4GatewaysResponseBody() = default ;
    ListIpv4GatewaysResponseBody(const ListIpv4GatewaysResponseBody &) = default ;
    ListIpv4GatewaysResponseBody(ListIpv4GatewaysResponseBody &&) = default ;
    ListIpv4GatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpv4GatewaysResponseBody() = default ;
    ListIpv4GatewaysResponseBody& operator=(const ListIpv4GatewaysResponseBody &) = default ;
    ListIpv4GatewaysResponseBody& operator=(ListIpv4GatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv4GatewayModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv4GatewayModels& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
        DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
        DARABONBA_PTR_TO_JSON(Ipv4GatewayName, ipv4GatewayName_);
        DARABONBA_PTR_TO_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv4GatewayModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
        DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
        DARABONBA_PTR_FROM_JSON(Ipv4GatewayName, ipv4GatewayName_);
        DARABONBA_PTR_FROM_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Ipv4GatewayModels() = default ;
      Ipv4GatewayModels(const Ipv4GatewayModels &) = default ;
      Ipv4GatewayModels(Ipv4GatewayModels &&) = default ;
      Ipv4GatewayModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv4GatewayModels() = default ;
      Ipv4GatewayModels& operator=(const Ipv4GatewayModels &) = default ;
      Ipv4GatewayModels& operator=(Ipv4GatewayModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->gmtCreate_ == nullptr && this->ipv4GatewayDescription_ == nullptr && this->ipv4GatewayId_ == nullptr && this->ipv4GatewayName_ == nullptr && this->ipv4GatewayRouteTableId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Ipv4GatewayModels& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Ipv4GatewayModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // ipv4GatewayDescription Field Functions 
      bool hasIpv4GatewayDescription() const { return this->ipv4GatewayDescription_ != nullptr;};
      void deleteIpv4GatewayDescription() { this->ipv4GatewayDescription_ = nullptr;};
      inline string getIpv4GatewayDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayDescription_, "") };
      inline Ipv4GatewayModels& setIpv4GatewayDescription(string ipv4GatewayDescription) { DARABONBA_PTR_SET_VALUE(ipv4GatewayDescription_, ipv4GatewayDescription) };


      // ipv4GatewayId Field Functions 
      bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
      void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
      inline string getIpv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
      inline Ipv4GatewayModels& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


      // ipv4GatewayName Field Functions 
      bool hasIpv4GatewayName() const { return this->ipv4GatewayName_ != nullptr;};
      void deleteIpv4GatewayName() { this->ipv4GatewayName_ = nullptr;};
      inline string getIpv4GatewayName() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayName_, "") };
      inline Ipv4GatewayModels& setIpv4GatewayName(string ipv4GatewayName) { DARABONBA_PTR_SET_VALUE(ipv4GatewayName_, ipv4GatewayName) };


      // ipv4GatewayRouteTableId Field Functions 
      bool hasIpv4GatewayRouteTableId() const { return this->ipv4GatewayRouteTableId_ != nullptr;};
      void deleteIpv4GatewayRouteTableId() { this->ipv4GatewayRouteTableId_ = nullptr;};
      inline string getIpv4GatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayRouteTableId_, "") };
      inline Ipv4GatewayModels& setIpv4GatewayRouteTableId(string ipv4GatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayRouteTableId_, ipv4GatewayRouteTableId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Ipv4GatewayModels& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Ipv4GatewayModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Ipv4GatewayModels::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Ipv4GatewayModels::Tags>) };
      inline vector<Ipv4GatewayModels::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Ipv4GatewayModels::Tags>) };
      inline Ipv4GatewayModels& setTags(const vector<Ipv4GatewayModels::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Ipv4GatewayModels& setTags(vector<Ipv4GatewayModels::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Ipv4GatewayModels& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Indicates whether the IPv4 gateway is activated. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> enabled_ {};
      // The time when the IPv4 gateway was created.
      shared_ptr<string> gmtCreate_ {};
      // The description of the IPv4 gateway.
      shared_ptr<string> ipv4GatewayDescription_ {};
      // The ID of the IPv4 gateway.
      shared_ptr<string> ipv4GatewayId_ {};
      // The name of the IPv4 gateway.
      shared_ptr<string> ipv4GatewayName_ {};
      // The ID of the route table associated with the IPv4 gateway.
      shared_ptr<string> ipv4GatewayRouteTableId_ {};
      // The ID of the resource group to which the IPv4 gateway belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the IPv4 gateway. Valid values:
      // 
      // *   **Creating**
      // *   **Created**
      // *   **Modifying**
      // *   **Deleting**
      // *   **Deleted**
      shared_ptr<string> status_ {};
      // The list of tags that are added to the resource group.
      shared_ptr<vector<Ipv4GatewayModels::Tags>> tags_ {};
      // The ID of the VPC with which the IPv4 gateways are associated.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->ipv4GatewayModels_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv4GatewayModels Field Functions 
    bool hasIpv4GatewayModels() const { return this->ipv4GatewayModels_ != nullptr;};
    void deleteIpv4GatewayModels() { this->ipv4GatewayModels_ = nullptr;};
    inline const vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels> & getIpv4GatewayModels() const { DARABONBA_PTR_GET_CONST(ipv4GatewayModels_, vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels>) };
    inline vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels> getIpv4GatewayModels() { DARABONBA_PTR_GET(ipv4GatewayModels_, vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels>) };
    inline ListIpv4GatewaysResponseBody& setIpv4GatewayModels(const vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels> & ipv4GatewayModels) { DARABONBA_PTR_SET_VALUE(ipv4GatewayModels_, ipv4GatewayModels) };
    inline ListIpv4GatewaysResponseBody& setIpv4GatewayModels(vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels> && ipv4GatewayModels) { DARABONBA_PTR_SET_RVALUE(ipv4GatewayModels_, ipv4GatewayModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpv4GatewaysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpv4GatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListIpv4GatewaysResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPv4 gateways.
    shared_ptr<vector<ListIpv4GatewaysResponseBody::Ipv4GatewayModels>> ipv4GatewayModels_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value of **NextToken** is returned, the value is the token that is used for the subsequent query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
