// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODY_HPP_
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
  class GetVSwitchCidrReservationUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVSwitchCidrReservationUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrReservationUsages, cidrReservationUsages_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVSwitchCidrReservationUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrReservationUsages, cidrReservationUsages_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetVSwitchCidrReservationUsageResponseBody() = default ;
    GetVSwitchCidrReservationUsageResponseBody(const GetVSwitchCidrReservationUsageResponseBody &) = default ;
    GetVSwitchCidrReservationUsageResponseBody(GetVSwitchCidrReservationUsageResponseBody &&) = default ;
    GetVSwitchCidrReservationUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVSwitchCidrReservationUsageResponseBody() = default ;
    GetVSwitchCidrReservationUsageResponseBody& operator=(const GetVSwitchCidrReservationUsageResponseBody &) = default ;
    GetVSwitchCidrReservationUsageResponseBody& operator=(GetVSwitchCidrReservationUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CidrReservationUsages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CidrReservationUsages& obj) { 
        DARABONBA_PTR_TO_JSON(IpPrefixCidr, ipPrefixCidr_);
        DARABONBA_PTR_TO_JSON(IpPrefixId, ipPrefixId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, CidrReservationUsages& obj) { 
        DARABONBA_PTR_FROM_JSON(IpPrefixCidr, ipPrefixCidr_);
        DARABONBA_PTR_FROM_JSON(IpPrefixId, ipPrefixId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      CidrReservationUsages() = default ;
      CidrReservationUsages(const CidrReservationUsages &) = default ;
      CidrReservationUsages(CidrReservationUsages &&) = default ;
      CidrReservationUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CidrReservationUsages() = default ;
      CidrReservationUsages& operator=(const CidrReservationUsages &) = default ;
      CidrReservationUsages& operator=(CidrReservationUsages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipPrefixCidr_ == nullptr
        && this->ipPrefixId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->vSwitchCidrReservationId_ == nullptr && this->vSwitchId_ == nullptr; };
      // ipPrefixCidr Field Functions 
      bool hasIpPrefixCidr() const { return this->ipPrefixCidr_ != nullptr;};
      void deleteIpPrefixCidr() { this->ipPrefixCidr_ = nullptr;};
      inline string getIpPrefixCidr() const { DARABONBA_PTR_GET_DEFAULT(ipPrefixCidr_, "") };
      inline CidrReservationUsages& setIpPrefixCidr(string ipPrefixCidr) { DARABONBA_PTR_SET_VALUE(ipPrefixCidr_, ipPrefixCidr) };


      // ipPrefixId Field Functions 
      bool hasIpPrefixId() const { return this->ipPrefixId_ != nullptr;};
      void deleteIpPrefixId() { this->ipPrefixId_ = nullptr;};
      inline string getIpPrefixId() const { DARABONBA_PTR_GET_DEFAULT(ipPrefixId_, "") };
      inline CidrReservationUsages& setIpPrefixId(string ipPrefixId) { DARABONBA_PTR_SET_VALUE(ipPrefixId_, ipPrefixId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline CidrReservationUsages& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline CidrReservationUsages& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // vSwitchCidrReservationId Field Functions 
      bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
      void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
      inline string getVSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
      inline CidrReservationUsages& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline CidrReservationUsages& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The CIDR block allocated to the ENI from the reserved CIDR block.
      shared_ptr<string> ipPrefixCidr_ {};
      // The ID of the reserved CIDR block.
      shared_ptr<string> ipPrefixId_ {};
      // The ID of the elastic network interface (ENI) whose CIDR block is allocated from the reserved CIDR block.
      shared_ptr<string> resourceId_ {};
      // The type of the resource to which a CIDR block is allocated from the reserved CIDR block. Only **NetworkInterface** may be returned, which indicates an ENI.
      shared_ptr<string> resourceType_ {};
      // The ID of the reserved CIDR block.
      shared_ptr<string> vSwitchCidrReservationId_ {};
      // The ID of the vSwitch to which the reserved CIDR block belongs.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->cidrReservationUsages_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cidrReservationUsages Field Functions 
    bool hasCidrReservationUsages() const { return this->cidrReservationUsages_ != nullptr;};
    void deleteCidrReservationUsages() { this->cidrReservationUsages_ = nullptr;};
    inline const vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages> & getCidrReservationUsages() const { DARABONBA_PTR_GET_CONST(cidrReservationUsages_, vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages>) };
    inline vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages> getCidrReservationUsages() { DARABONBA_PTR_GET(cidrReservationUsages_, vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages>) };
    inline GetVSwitchCidrReservationUsageResponseBody& setCidrReservationUsages(const vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages> & cidrReservationUsages) { DARABONBA_PTR_SET_VALUE(cidrReservationUsages_, cidrReservationUsages) };
    inline GetVSwitchCidrReservationUsageResponseBody& setCidrReservationUsages(vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages> && cidrReservationUsages) { DARABONBA_PTR_SET_RVALUE(cidrReservationUsages_, cidrReservationUsages) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetVSwitchCidrReservationUsageResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVSwitchCidrReservationUsageResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVSwitchCidrReservationUsageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of reserved CIDR blocks that are in use.
    shared_ptr<vector<GetVSwitchCidrReservationUsageResponseBody::CidrReservationUsages>> cidrReservationUsages_ {};
    // The number of entries to return per page.
    shared_ptr<int64_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
