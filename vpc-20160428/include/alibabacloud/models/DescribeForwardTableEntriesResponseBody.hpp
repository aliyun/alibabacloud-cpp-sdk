// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(ForwardTableEntry, forwardTableEntry_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardTableEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardTableEntry, forwardTableEntry_);
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
      class ForwardTableEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForwardTableEntry& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
          DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
          DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
          DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
          DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ForwardTableEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
          DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
          DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
          DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
          DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ForwardTableEntry() = default ;
        ForwardTableEntry(const ForwardTableEntry &) = default ;
        ForwardTableEntry(ForwardTableEntry &&) = default ;
        ForwardTableEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForwardTableEntry() = default ;
        ForwardTableEntry& operator=(const ForwardTableEntry &) = default ;
        ForwardTableEntry& operator=(ForwardTableEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalIp_ == nullptr
        && this->externalPort_ == nullptr && this->forwardEntryId_ == nullptr && this->forwardEntryName_ == nullptr && this->forwardTableId_ == nullptr && this->internalIp_ == nullptr
        && this->internalPort_ == nullptr && this->ipProtocol_ == nullptr && this->natGatewayId_ == nullptr && this->status_ == nullptr; };
        // externalIp Field Functions 
        bool hasExternalIp() const { return this->externalIp_ != nullptr;};
        void deleteExternalIp() { this->externalIp_ = nullptr;};
        inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
        inline ForwardTableEntry& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


        // externalPort Field Functions 
        bool hasExternalPort() const { return this->externalPort_ != nullptr;};
        void deleteExternalPort() { this->externalPort_ = nullptr;};
        inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
        inline ForwardTableEntry& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


        // forwardEntryId Field Functions 
        bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
        void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
        inline string getForwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
        inline ForwardTableEntry& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


        // forwardEntryName Field Functions 
        bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
        void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
        inline string getForwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
        inline ForwardTableEntry& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


        // forwardTableId Field Functions 
        bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
        void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
        inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
        inline ForwardTableEntry& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


        // internalIp Field Functions 
        bool hasInternalIp() const { return this->internalIp_ != nullptr;};
        void deleteInternalIp() { this->internalIp_ = nullptr;};
        inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
        inline ForwardTableEntry& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


        // internalPort Field Functions 
        bool hasInternalPort() const { return this->internalPort_ != nullptr;};
        void deleteInternalPort() { this->internalPort_ = nullptr;};
        inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
        inline ForwardTableEntry& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline ForwardTableEntry& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline ForwardTableEntry& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ForwardTableEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // *   The EIPs that can be accessed over the Internet when you query DNAT entries of Internet NAT gateways.
        // *   The NAT IP addresses that can be accessed by external networks when you query DNAT entries of VPC NAT gateways.
        shared_ptr<string> externalIp_ {};
        // *   The external port or port range that is used for port forwarding when you query DNAT entries of Internet NAT gateways.
        // *   The port that is used when the NAT IP address can be accessed by external networks when you query DNAT entries of VPC NAT gateways.
        shared_ptr<string> externalPort_ {};
        // The ID of the DNAT entry.
        shared_ptr<string> forwardEntryId_ {};
        // The name of the DNAT entry.
        shared_ptr<string> forwardEntryName_ {};
        // The ID of the DNAT table to which the DNAT entry belongs.
        shared_ptr<string> forwardTableId_ {};
        // The private IP address.
        // 
        // *   The private IP address of the ECS instance that uses DNAT entries to communicate with the Internet when you query DNAT entries of Internet NAT gateways.
        // *   The private IP address that uses DNAT entries when you query DNAT entries of VPC NAT gateways.
        shared_ptr<string> internalIp_ {};
        // *   The internal port or port range that is used for port forwarding when you query DNAT entries of Internet NAT gateways.
        // *   The destination ECS instance port to be mapped when you query DNAT entries of VPC NAT gateways.
        shared_ptr<string> internalPort_ {};
        // The protocol. Valid values:
        // 
        // *   **TCP**
        // *   **UDP**
        // *   **Any**
        shared_ptr<string> ipProtocol_ {};
        // The ID of the NAT gateway to which the DNAT entry belongs.
        shared_ptr<string> natGatewayId_ {};
        // The status of the DNAT entry. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        // *   **Deleting**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->forwardTableEntry_ == nullptr; };
      // forwardTableEntry Field Functions 
      bool hasForwardTableEntry() const { return this->forwardTableEntry_ != nullptr;};
      void deleteForwardTableEntry() { this->forwardTableEntry_ = nullptr;};
      inline const vector<ForwardTableEntries::ForwardTableEntry> & getForwardTableEntry() const { DARABONBA_PTR_GET_CONST(forwardTableEntry_, vector<ForwardTableEntries::ForwardTableEntry>) };
      inline vector<ForwardTableEntries::ForwardTableEntry> getForwardTableEntry() { DARABONBA_PTR_GET(forwardTableEntry_, vector<ForwardTableEntries::ForwardTableEntry>) };
      inline ForwardTableEntries& setForwardTableEntry(const vector<ForwardTableEntries::ForwardTableEntry> & forwardTableEntry) { DARABONBA_PTR_SET_VALUE(forwardTableEntry_, forwardTableEntry) };
      inline ForwardTableEntries& setForwardTableEntry(vector<ForwardTableEntries::ForwardTableEntry> && forwardTableEntry) { DARABONBA_PTR_SET_RVALUE(forwardTableEntry_, forwardTableEntry) };


    protected:
      shared_ptr<vector<ForwardTableEntries::ForwardTableEntry>> forwardTableEntry_ {};
    };

    virtual bool empty() const override { return this->forwardTableEntries_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // forwardTableEntries Field Functions 
    bool hasForwardTableEntries() const { return this->forwardTableEntries_ != nullptr;};
    void deleteForwardTableEntries() { this->forwardTableEntries_ = nullptr;};
    inline const DescribeForwardTableEntriesResponseBody::ForwardTableEntries & getForwardTableEntries() const { DARABONBA_PTR_GET_CONST(forwardTableEntries_, DescribeForwardTableEntriesResponseBody::ForwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody::ForwardTableEntries getForwardTableEntries() { DARABONBA_PTR_GET(forwardTableEntries_, DescribeForwardTableEntriesResponseBody::ForwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(const DescribeForwardTableEntriesResponseBody::ForwardTableEntries & forwardTableEntries) { DARABONBA_PTR_SET_VALUE(forwardTableEntries_, forwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(DescribeForwardTableEntriesResponseBody::ForwardTableEntries && forwardTableEntries) { DARABONBA_PTR_SET_RVALUE(forwardTableEntries_, forwardTableEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of DNAT entries.
    shared_ptr<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> forwardTableEntries_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
