// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODYCLIENTIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODYCLIENTIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopClientIpVisitResponseBodyClientIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopClientIpVisitResponseBodyClientIpList& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Rank, rank_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopClientIpVisitResponseBodyClientIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Rank, rank_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    DescribeDomainTopClientIpVisitResponseBodyClientIpList() = default ;
    DescribeDomainTopClientIpVisitResponseBodyClientIpList(const DescribeDomainTopClientIpVisitResponseBodyClientIpList &) = default ;
    DescribeDomainTopClientIpVisitResponseBodyClientIpList(DescribeDomainTopClientIpVisitResponseBodyClientIpList &&) = default ;
    DescribeDomainTopClientIpVisitResponseBodyClientIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopClientIpVisitResponseBodyClientIpList() = default ;
    DescribeDomainTopClientIpVisitResponseBodyClientIpList& operator=(const DescribeDomainTopClientIpVisitResponseBodyClientIpList &) = default ;
    DescribeDomainTopClientIpVisitResponseBodyClientIpList& operator=(DescribeDomainTopClientIpVisitResponseBodyClientIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acc_ != nullptr
        && this->clientIp_ != nullptr && this->rank_ != nullptr && this->traffic_ != nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int64_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
    inline DescribeDomainTopClientIpVisitResponseBodyClientIpList& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDomainTopClientIpVisitResponseBodyClientIpList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // rank Field Functions 
    bool hasRank() const { return this->rank_ != nullptr;};
    void deleteRank() { this->rank_ = nullptr;};
    inline int32_t rank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
    inline DescribeDomainTopClientIpVisitResponseBodyClientIpList& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int64_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0L) };
    inline DescribeDomainTopClientIpVisitResponseBodyClientIpList& setTraffic(int64_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    // The total number of requests.
    std::shared_ptr<int64_t> acc_ = nullptr;
    // The client IP address returned. Only IPv4 addressed are supported.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The ranking of the client IP address returned.
    std::shared_ptr<int32_t> rank_ = nullptr;
    // The total amount of network traffic consumed. Unit: bytes.
    std::shared_ptr<int64_t> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
