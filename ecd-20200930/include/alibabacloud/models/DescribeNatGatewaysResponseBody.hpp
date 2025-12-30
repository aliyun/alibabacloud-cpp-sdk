// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNatGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
        DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(SnatTableIds, snatTableIds_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
        DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(SnatTableIds, snatTableIds_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
      class IpLists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpLists& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(SnatEntryEnabled, snatEntryEnabled_);
          DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
        };
        friend void from_json(const Darabonba::Json& j, IpLists& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(SnatEntryEnabled, snatEntryEnabled_);
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
        && this->ipAddress_ == nullptr && this->privateIpAddress_ == nullptr && this->snatEntryEnabled_ == nullptr && this->usingStatus_ == nullptr; };
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


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline IpLists& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


        // snatEntryEnabled Field Functions 
        bool hasSnatEntryEnabled() const { return this->snatEntryEnabled_ != nullptr;};
        void deleteSnatEntryEnabled() { this->snatEntryEnabled_ = nullptr;};
        inline string getSnatEntryEnabled() const { DARABONBA_PTR_GET_DEFAULT(snatEntryEnabled_, "") };
        inline IpLists& setSnatEntryEnabled(string snatEntryEnabled) { DARABONBA_PTR_SET_VALUE(snatEntryEnabled_, snatEntryEnabled) };


        // usingStatus Field Functions 
        bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
        void deleteUsingStatus() { this->usingStatus_ = nullptr;};
        inline string getUsingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
        inline IpLists& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


      protected:
        shared_ptr<string> allocationId_ {};
        shared_ptr<string> ipAddress_ {};
        shared_ptr<string> privateIpAddress_ {};
        shared_ptr<string> snatEntryEnabled_ {};
        shared_ptr<string> usingStatus_ {};
      };

      virtual bool empty() const override { return this->forwardTableIds_ == nullptr
        && this->ipLists_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->snatTableIds_ == nullptr && this->status_ == nullptr
        && this->vpcId_ == nullptr; };
      // forwardTableIds Field Functions 
      bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
      void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
      inline const vector<string> & getForwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, vector<string>) };
      inline vector<string> getForwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, vector<string>) };
      inline NatGateways& setForwardTableIds(const vector<string> & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
      inline NatGateways& setForwardTableIds(vector<string> && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


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


      // snatTableIds Field Functions 
      bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
      void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
      inline const vector<string> & getSnatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, vector<string>) };
      inline vector<string> getSnatTableIds() { DARABONBA_PTR_GET(snatTableIds_, vector<string>) };
      inline NatGateways& setSnatTableIds(const vector<string> & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
      inline NatGateways& setSnatTableIds(vector<string> && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NatGateways& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<vector<string>> forwardTableIds_ {};
      shared_ptr<vector<NatGateways::IpLists>> ipLists_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<vector<string>> snatTableIds_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->natGateways_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNatGatewaysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const vector<DescribeNatGatewaysResponseBody::NatGateways> & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<DescribeNatGatewaysResponseBody::NatGateways>) };
    inline vector<DescribeNatGatewaysResponseBody::NatGateways> getNatGateways() { DARABONBA_PTR_GET(natGateways_, vector<DescribeNatGatewaysResponseBody::NatGateways>) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(const vector<DescribeNatGatewaysResponseBody::NatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(vector<DescribeNatGatewaysResponseBody::NatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNatGatewaysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<DescribeNatGatewaysResponseBody::NatGateways>> natGateways_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
