// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
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
  class DescribeForwardTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
        DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
        DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardTableEntries& obj) { 
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
        && this->externalPort_ == nullptr && this->forwardEntryId_ == nullptr && this->forwardEntryName_ == nullptr && this->forwardTableId_ == nullptr && this->internalIp_ == nullptr
        && this->internalPort_ == nullptr && this->ipProtocol_ == nullptr && this->natGatewayId_ == nullptr && this->status_ == nullptr; };
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


      // forwardTableId Field Functions 
      bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
      void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
      inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
      inline ForwardTableEntries& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ForwardTableEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> externalIp_ {};
      shared_ptr<string> externalPort_ {};
      shared_ptr<string> forwardEntryId_ {};
      shared_ptr<string> forwardEntryName_ {};
      shared_ptr<string> forwardTableId_ {};
      shared_ptr<string> internalIp_ {};
      shared_ptr<string> internalPort_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->forwardTableEntries_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // forwardTableEntries Field Functions 
    bool hasForwardTableEntries() const { return this->forwardTableEntries_ != nullptr;};
    void deleteForwardTableEntries() { this->forwardTableEntries_ = nullptr;};
    inline const vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> & getForwardTableEntries() const { DARABONBA_PTR_GET_CONST(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>) };
    inline vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> getForwardTableEntries() { DARABONBA_PTR_GET(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(const vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> & forwardTableEntries) { DARABONBA_PTR_SET_VALUE(forwardTableEntries_, forwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries> && forwardTableEntries) { DARABONBA_PTR_SET_RVALUE(forwardTableEntries_, forwardTableEntries) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeForwardTableEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeForwardTableEntriesResponseBody::ForwardTableEntries>> forwardTableEntries_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
