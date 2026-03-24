// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopClientIpVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopClientIpVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopClientIpVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopClientIpVisitResponseBody() = default ;
    DescribeDomainTopClientIpVisitResponseBody(const DescribeDomainTopClientIpVisitResponseBody &) = default ;
    DescribeDomainTopClientIpVisitResponseBody(DescribeDomainTopClientIpVisitResponseBody &&) = default ;
    DescribeDomainTopClientIpVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopClientIpVisitResponseBody() = default ;
    DescribeDomainTopClientIpVisitResponseBody& operator=(const DescribeDomainTopClientIpVisitResponseBody &) = default ;
    DescribeDomainTopClientIpVisitResponseBody& operator=(DescribeDomainTopClientIpVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientIpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientIpList& obj) { 
        DARABONBA_PTR_TO_JSON(Acc, acc_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(Rank, rank_);
        DARABONBA_PTR_TO_JSON(Traffic, traffic_);
      };
      friend void from_json(const Darabonba::Json& j, ClientIpList& obj) { 
        DARABONBA_PTR_FROM_JSON(Acc, acc_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(Rank, rank_);
        DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
      };
      ClientIpList() = default ;
      ClientIpList(const ClientIpList &) = default ;
      ClientIpList(ClientIpList &&) = default ;
      ClientIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientIpList() = default ;
      ClientIpList& operator=(const ClientIpList &) = default ;
      ClientIpList& operator=(ClientIpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acc_ == nullptr
        && this->clientIp_ == nullptr && this->rank_ == nullptr && this->traffic_ == nullptr; };
      // acc Field Functions 
      bool hasAcc() const { return this->acc_ != nullptr;};
      void deleteAcc() { this->acc_ = nullptr;};
      inline int64_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
      inline ClientIpList& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline ClientIpList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // rank Field Functions 
      bool hasRank() const { return this->rank_ != nullptr;};
      void deleteRank() { this->rank_ = nullptr;};
      inline int32_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
      inline ClientIpList& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


      // traffic Field Functions 
      bool hasTraffic() const { return this->traffic_ != nullptr;};
      void deleteTraffic() { this->traffic_ = nullptr;};
      inline int64_t getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0L) };
      inline ClientIpList& setTraffic(int64_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


    protected:
      // The total number of requests.
      shared_ptr<int64_t> acc_ {};
      // The client IP address returned. Only IPv4 addressed are supported.
      shared_ptr<string> clientIp_ {};
      // The ranking of the client IP address returned.
      shared_ptr<int32_t> rank_ {};
      // The total amount of network traffic consumed. Unit: bytes.
      shared_ptr<int64_t> traffic_ {};
    };

    virtual bool empty() const override { return this->clientIpList_ == nullptr
        && this->requestId_ == nullptr; };
    // clientIpList Field Functions 
    bool hasClientIpList() const { return this->clientIpList_ != nullptr;};
    void deleteClientIpList() { this->clientIpList_ = nullptr;};
    inline const vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList> & getClientIpList() const { DARABONBA_PTR_GET_CONST(clientIpList_, vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList>) };
    inline vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList> getClientIpList() { DARABONBA_PTR_GET(clientIpList_, vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList>) };
    inline DescribeDomainTopClientIpVisitResponseBody& setClientIpList(const vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList> & clientIpList) { DARABONBA_PTR_SET_VALUE(clientIpList_, clientIpList) };
    inline DescribeDomainTopClientIpVisitResponseBody& setClientIpList(vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList> && clientIpList) { DARABONBA_PTR_SET_RVALUE(clientIpList_, clientIpList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopClientIpVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of client IP addresses.
    shared_ptr<vector<DescribeDomainTopClientIpVisitResponseBody::ClientIpList>> clientIpList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
