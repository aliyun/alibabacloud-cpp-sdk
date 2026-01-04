// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESRESPONSEBODY_HPP_
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
  class DescribeSecondaryPublicIpAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecondaryPublicIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecondaryPublicIpAddresses, secondaryPublicIpAddresses_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecondaryPublicIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecondaryPublicIpAddresses, secondaryPublicIpAddresses_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecondaryPublicIpAddressesResponseBody() = default ;
    DescribeSecondaryPublicIpAddressesResponseBody(const DescribeSecondaryPublicIpAddressesResponseBody &) = default ;
    DescribeSecondaryPublicIpAddressesResponseBody(DescribeSecondaryPublicIpAddressesResponseBody &&) = default ;
    DescribeSecondaryPublicIpAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecondaryPublicIpAddressesResponseBody() = default ;
    DescribeSecondaryPublicIpAddressesResponseBody& operator=(const DescribeSecondaryPublicIpAddressesResponseBody &) = default ;
    DescribeSecondaryPublicIpAddressesResponseBody& operator=(DescribeSecondaryPublicIpAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecondaryPublicIpAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecondaryPublicIpAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(CidrMask, cidrMask_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(Gateway, gateway_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
        DARABONBA_PTR_TO_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
      };
      friend void from_json(const Darabonba::Json& j, SecondaryPublicIpAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrMask, cidrMask_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
        DARABONBA_PTR_FROM_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
      };
      SecondaryPublicIpAddresses() = default ;
      SecondaryPublicIpAddresses(const SecondaryPublicIpAddresses &) = default ;
      SecondaryPublicIpAddresses(SecondaryPublicIpAddresses &&) = default ;
      SecondaryPublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecondaryPublicIpAddresses() = default ;
      SecondaryPublicIpAddresses& operator=(const SecondaryPublicIpAddresses &) = default ;
      SecondaryPublicIpAddresses& operator=(SecondaryPublicIpAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrMask_ == nullptr
        && this->creationTime_ == nullptr && this->ensRegionId_ == nullptr && this->gateway_ == nullptr && this->ipVersion_ == nullptr && this->isp_ == nullptr
        && this->secondaryPublicIpAddress_ == nullptr && this->secondaryPublicIpId_ == nullptr; };
      // cidrMask Field Functions 
      bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
      void deleteCidrMask() { this->cidrMask_ = nullptr;};
      inline int32_t getCidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
      inline SecondaryPublicIpAddresses& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SecondaryPublicIpAddresses& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline SecondaryPublicIpAddresses& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // gateway Field Functions 
      bool hasGateway() const { return this->gateway_ != nullptr;};
      void deleteGateway() { this->gateway_ = nullptr;};
      inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
      inline SecondaryPublicIpAddresses& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline SecondaryPublicIpAddresses& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline SecondaryPublicIpAddresses& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // secondaryPublicIpAddress Field Functions 
      bool hasSecondaryPublicIpAddress() const { return this->secondaryPublicIpAddress_ != nullptr;};
      void deleteSecondaryPublicIpAddress() { this->secondaryPublicIpAddress_ = nullptr;};
      inline string getSecondaryPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpAddress_, "") };
      inline SecondaryPublicIpAddresses& setSecondaryPublicIpAddress(string secondaryPublicIpAddress) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpAddress_, secondaryPublicIpAddress) };


      // secondaryPublicIpId Field Functions 
      bool hasSecondaryPublicIpId() const { return this->secondaryPublicIpId_ != nullptr;};
      void deleteSecondaryPublicIpId() { this->secondaryPublicIpId_ = nullptr;};
      inline string getSecondaryPublicIpId() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpId_, "") };
      inline SecondaryPublicIpAddresses& setSecondaryPublicIpId(string secondaryPublicIpId) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpId_, secondaryPublicIpId) };


    protected:
      // The subnet mask of the CIDR block.
      shared_ptr<int32_t> cidrMask_ {};
      // The time when the secondary public IP address was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the edge node.
      shared_ptr<string> ensRegionId_ {};
      // The gateway.
      shared_ptr<string> gateway_ {};
      // The version of the IP address. Valid values:
      // 
      // *   **ipv4**
      // *   **ipv6**
      shared_ptr<string> ipVersion_ {};
      // The Internet service provider. Valid values:
      // 
      // *   cmcc: China Mobile.
      // *   unicom: China Unicom.
      // *   telecom: China Telecom.
      shared_ptr<string> isp_ {};
      // The secondary public IP address.
      shared_ptr<string> secondaryPublicIpAddress_ {};
      // The ID of the secondary public IP address.
      shared_ptr<string> secondaryPublicIpId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->secondaryPublicIpAddresses_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secondaryPublicIpAddresses Field Functions 
    bool hasSecondaryPublicIpAddresses() const { return this->secondaryPublicIpAddresses_ != nullptr;};
    void deleteSecondaryPublicIpAddresses() { this->secondaryPublicIpAddresses_ = nullptr;};
    inline const vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses> & getSecondaryPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(secondaryPublicIpAddresses_, vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses>) };
    inline vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses> getSecondaryPublicIpAddresses() { DARABONBA_PTR_GET(secondaryPublicIpAddresses_, vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses>) };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setSecondaryPublicIpAddresses(const vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses> & secondaryPublicIpAddresses) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpAddresses_, secondaryPublicIpAddresses) };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setSecondaryPublicIpAddresses(vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses> && secondaryPublicIpAddresses) { DARABONBA_PTR_SET_RVALUE(secondaryPublicIpAddresses_, secondaryPublicIpAddresses) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecondaryPublicIpAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The array of returned secondary IP addresses.
    shared_ptr<vector<DescribeSecondaryPublicIpAddressesResponseBody::SecondaryPublicIpAddresses>> secondaryPublicIpAddresses_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
