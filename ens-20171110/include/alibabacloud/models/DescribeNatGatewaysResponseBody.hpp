// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNatGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody(DescribeNatGatewaysResponseBody &&) = default ;
    DescribeNatGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody& operator=(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody& operator=(DescribeNatGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGateways& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      NatGateways() = default ;
      NatGateways(const NatGateways &) = default ;
      NatGateways(NatGateways &&) = default ;
      NatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGateways() = default ;
      NatGateways& operator=(const NatGateways &) = default ;
      NatGateways& operator=(NatGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
        shared_ptr<string> value_ {};
      };

      class IpLists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpLists& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
        };
        friend void from_json(const Darabonba::Json& j, IpLists& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
        };
        IpLists() = default ;
        IpLists(const IpLists &) = default ;
        IpLists(IpLists &&) = default ;
        IpLists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpLists() = default ;
        IpLists& operator=(const IpLists &) = default ;
        IpLists& operator=(IpLists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->ipAddress_ == nullptr && this->usingStatus_ == nullptr; };
        // allocationId Field Functions 
        bool hasAllocationId() const { return this->allocationId_ != nullptr;};
        void deleteAllocationId() { this->allocationId_ = nullptr;};
        inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
        inline IpLists& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline IpLists& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // usingStatus Field Functions 
        bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
        void deleteUsingStatus() { this->usingStatus_ = nullptr;};
        inline string getUsingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
        inline IpLists& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


      protected:
        // The ID of the EIP.
        shared_ptr<string> allocationId_ {};
        // The EIP.
        shared_ptr<string> ipAddress_ {};
        // The association between the EIP and the Internet NAT gateway. Valid values:
        // 
        // *   **UsedByForwardTable**: The EIP is specified in a DNAT entry.
        // *   **UsedBySnatTable**: The EIP is specified in an SNAT entry.
        // *   **Idle**: The EIP is not specified in an SNAT entry or a DNAT entry.
        shared_ptr<string> usingStatus_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->ensRegionId_ == nullptr && this->ipLists_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->networkId_ == nullptr
        && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline NatGateways& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline NatGateways& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // ipLists Field Functions 
      bool hasIpLists() const { return this->ipLists_ != nullptr;};
      void deleteIpLists() { this->ipLists_ = nullptr;};
      inline const vector<NatGateways::IpLists> & getIpLists() const { DARABONBA_PTR_GET_CONST(ipLists_, vector<NatGateways::IpLists>) };
      inline vector<NatGateways::IpLists> getIpLists() { DARABONBA_PTR_GET(ipLists_, vector<NatGateways::IpLists>) };
      inline NatGateways& setIpLists(const vector<NatGateways::IpLists> & ipLists) { DARABONBA_PTR_SET_VALUE(ipLists_, ipLists) };
      inline NatGateways& setIpLists(vector<NatGateways::IpLists> && ipLists) { DARABONBA_PTR_SET_RVALUE(ipLists_, ipLists) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NatGateways& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline NatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline NatGateways& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline NatGateways& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<NatGateways::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<NatGateways::Tags>) };
      inline vector<NatGateways::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<NatGateways::Tags>) };
      inline NatGateways& setTags(const vector<NatGateways::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline NatGateways& setTags(vector<NatGateways::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NatGateways& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The time when the NAT gateway was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the ENS node.
      shared_ptr<string> ensRegionId_ {};
      // The EIPs that are associated with the NAT gateway.
      shared_ptr<vector<NatGateways::IpLists>> ipLists_ {};
      // The name of the NAT gateway.
      shared_ptr<string> name_ {};
      // The ID of the NAT gateway.
      shared_ptr<string> natGatewayId_ {};
      // The ID of the network.
      shared_ptr<string> networkId_ {};
      // The type of the NAT gateway.
      shared_ptr<string> spec_ {};
      // The status of the NAT gateway. Valid values:
      // 
      // *   **Creating**: After you send a request to create a NAT gateway, the system creates the NAT gateway in the background. The NAT gateway remains in the Creating state until the operation is completed.
      // *   **Available**: The NAT gateway is in the Available state after the creation is complete.
      // *   **Deleting**: After you send a request to delete a NAT gateway, the system deletes the NAT gateway in the background. The NAT gateway remains in the Deleting state until the operation is completed.
      shared_ptr<string> status_ {};
      shared_ptr<vector<NatGateways::Tags>> tags_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->natGateways_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const vector<DescribeNatGatewaysResponseBody::NatGateways> & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<DescribeNatGatewaysResponseBody::NatGateways>) };
    inline vector<DescribeNatGatewaysResponseBody::NatGateways> getNatGateways() { DARABONBA_PTR_GET(natGateways_, vector<DescribeNatGatewaysResponseBody::NatGateways>) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(const vector<DescribeNatGatewaysResponseBody::NatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(vector<DescribeNatGatewaysResponseBody::NatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the NAT gateways.
    shared_ptr<vector<DescribeNatGatewaysResponseBody::NatGateways>> natGateways_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of NAT gateways that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
