// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
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
  class DescribeForwardTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody(DescribeForwardTableEntriesResponseBody &&) = default ;
    DescribeForwardTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody& operator=(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody& operator=(DescribeForwardTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardTableEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardTableEntries& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
        DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
        DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
        DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
        DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(StandbyExternalIp, standbyExternalIp_);
        DARABONBA_PTR_TO_JSON(StandbyStatus, standbyStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardTableEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
        DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
        DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
        DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(StandbyExternalIp, standbyExternalIp_);
        DARABONBA_PTR_FROM_JSON(StandbyStatus, standbyStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ForwardTableEntries() = default ;
      ForwardTableEntries(const ForwardTableEntries &) = default ;
      ForwardTableEntries(ForwardTableEntries &&) = default ;
      ForwardTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardTableEntries() = default ;
      ForwardTableEntries& operator=(const ForwardTableEntries &) = default ;
      ForwardTableEntries& operator=(ForwardTableEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->externalIp_ == nullptr
        && this->externalPort_ == nullptr && this->forwardEntryId_ == nullptr && this->forwardEntryName_ == nullptr && this->healthCheckPort_ == nullptr && this->internalIp_ == nullptr
        && this->internalPort_ == nullptr && this->ipProtocol_ == nullptr && this->natGatewayId_ == nullptr && this->standbyExternalIp_ == nullptr && this->standbyStatus_ == nullptr
        && this->status_ == nullptr; };
      // externalIp Field Functions 
      bool hasExternalIp() const { return this->externalIp_ != nullptr;};
      void deleteExternalIp() { this->externalIp_ = nullptr;};
      inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
      inline ForwardTableEntries& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


      // externalPort Field Functions 
      bool hasExternalPort() const { return this->externalPort_ != nullptr;};
      void deleteExternalPort() { this->externalPort_ = nullptr;};
      inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
      inline ForwardTableEntries& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


      // forwardEntryId Field Functions 
      bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
      void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
      inline string getForwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
      inline ForwardTableEntries& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


      // forwardEntryName Field Functions 
      bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
      void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
      inline string getForwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
      inline ForwardTableEntries& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


      // healthCheckPort Field Functions 
      bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
      void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
      inline string getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, "") };
      inline ForwardTableEntries& setHealthCheckPort(string healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


      // internalIp Field Functions 
      bool hasInternalIp() const { return this->internalIp_ != nullptr;};
      void deleteInternalIp() { this->internalIp_ = nullptr;};
      inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
      inline ForwardTableEntries& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


      // internalPort Field Functions 
      bool hasInternalPort() const { return this->internalPort_ != nullptr;};
      void deleteInternalPort() { this->internalPort_ = nullptr;};
      inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
      inline ForwardTableEntries& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline ForwardTableEntries& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline ForwardTableEntries& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // standbyExternalIp Field Functions 
      bool hasStandbyExternalIp() const { return this->standbyExternalIp_ != nullptr;};
      void deleteStandbyExternalIp() { this->standbyExternalIp_ = nullptr;};
      inline string getStandbyExternalIp() const { DARABONBA_PTR_GET_DEFAULT(standbyExternalIp_, "") };
      inline ForwardTableEntries& setStandbyExternalIp(string standbyExternalIp) { DARABONBA_PTR_SET_VALUE(standbyExternalIp_, standbyExternalIp) };


      // standbyStatus Field Functions 
      bool hasStandbyStatus() const { return this->standbyStatus_ != nullptr;};
      void deleteStandbyStatus() { this->standbyStatus_ = nullptr;};
      inline string getStandbyStatus() const { DARABONBA_PTR_GET_DEFAULT(standbyStatus_, "") };
      inline ForwardTableEntries& setStandbyStatus(string standbyStatus) { DARABONBA_PTR_SET_VALUE(standbyStatus_, standbyStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ForwardTableEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The EIP in the DNAT entry. The public IP address is used to access the Internet.
      shared_ptr<string> externalIp_ {};
      // The external port or port range that is used in port forwarding.
      shared_ptr<string> externalPort_ {};
      // The ID of the DNAT entry.
      shared_ptr<string> forwardEntryId_ {};
      // The name of the DNAT entry.
      shared_ptr<string> forwardEntryName_ {};
      // The probe port of DNAT.
      shared_ptr<string> healthCheckPort_ {};
      // The private IP address of the instance that uses the DNAT entry for Internet communication.
      shared_ptr<string> internalIp_ {};
      // The internal port or port range that is used for port forwarding.
      shared_ptr<string> internalPort_ {};
      // The protocol. Valid values:
      // 
      // *   **TCP**: forwards TCP packets.
      // *   **UDP**: forwards UDP packets.
      // *   **Any**: forwards all packets.
      shared_ptr<string> ipProtocol_ {};
      // The ID of the NAT gateway.
      shared_ptr<string> natGatewayId_ {};
      // The secondary EIP that is used to access the Internet.
      shared_ptr<string> standbyExternalIp_ {};
      // The status of the secondary EIP. Valid values:
      // 
      // *   Running
      // *   Stopping
      // *   Stopped
      // *   Starting
      shared_ptr<string> standbyStatus_ {};
      // The status of the DNAT entry. Valid values:
      // 
      // *   Pending: The DNAT entry is being created or modified.
      // *   Available: The DNAT entry is available.
      // *   Deleting: The DNAT entry is being deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->forwardTableEntries_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // forwardTableEntries Field Functions 
    bool hasForwardTableEntries() const { return this->forwardTableEntries_ != nullptr;};
    void deleteForwardTableEntries() { this->forwardTableEntries_ = nullptr;};
    inline const vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> & getForwardTableEntries() const { DARABONBA_PTR_GET_CONST(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>) };
    inline vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> getForwardTableEntries() { DARABONBA_PTR_GET(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(const vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> & forwardTableEntries) { DARABONBA_PTR_SET_VALUE(forwardTableEntries_, forwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> && forwardTableEntries) { DARABONBA_PTR_SET_RVALUE(forwardTableEntries_, forwardTableEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeForwardTableEntriesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeForwardTableEntriesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeForwardTableEntriesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of DNAT entries.
    shared_ptr<vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>> forwardTableEntries_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
