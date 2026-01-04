// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSnatAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DestCIDR, destCIDR_);
      DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SnatIps, snatIps_);
      DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_TO_JSON(StandbySnatIp, standbySnatIp_);
      DARABONBA_PTR_TO_JSON(StandbyStatus, standbyStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DestCIDR, destCIDR_);
      DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SnatIps, snatIps_);
      DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_FROM_JSON(StandbySnatIp, standbySnatIp_);
      DARABONBA_PTR_FROM_JSON(StandbyStatus, standbyStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSnatAttributeResponseBody() = default ;
    DescribeSnatAttributeResponseBody(const DescribeSnatAttributeResponseBody &) = default ;
    DescribeSnatAttributeResponseBody(DescribeSnatAttributeResponseBody &&) = default ;
    DescribeSnatAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatAttributeResponseBody() = default ;
    DescribeSnatAttributeResponseBody& operator=(const DescribeSnatAttributeResponseBody &) = default ;
    DescribeSnatAttributeResponseBody& operator=(DescribeSnatAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnatIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatIps& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SnatIps& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SnatIps() = default ;
      SnatIps(const SnatIps &) = default ;
      SnatIps(SnatIps &&) = default ;
      SnatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatIps() = default ;
      SnatIps& operator=(const SnatIps &) = default ;
      SnatIps& operator=(SnatIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->ip_ == nullptr && this->status_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SnatIps& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline SnatIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SnatIps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the IP address was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The status of the IP address.
      // 
      // *   Running
      // *   Stopping
      // *   Stopped
      // *   Starting
      // *   Releasing
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->destCIDR_ == nullptr && this->eipAffinity_ == nullptr && this->idleTimeout_ == nullptr && this->ispAffinity_ == nullptr && this->natGatewayId_ == nullptr
        && this->requestId_ == nullptr && this->snatEntryId_ == nullptr && this->snatEntryName_ == nullptr && this->snatIp_ == nullptr && this->snatIps_ == nullptr
        && this->sourceCIDR_ == nullptr && this->standbySnatIp_ == nullptr && this->standbyStatus_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnatAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // destCIDR Field Functions 
    bool hasDestCIDR() const { return this->destCIDR_ != nullptr;};
    void deleteDestCIDR() { this->destCIDR_ = nullptr;};
    inline string getDestCIDR() const { DARABONBA_PTR_GET_DEFAULT(destCIDR_, "") };
    inline DescribeSnatAttributeResponseBody& setDestCIDR(string destCIDR) { DARABONBA_PTR_SET_VALUE(destCIDR_, destCIDR) };


    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline bool getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, false) };
    inline DescribeSnatAttributeResponseBody& setEipAffinity(bool eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeSnatAttributeResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // ispAffinity Field Functions 
    bool hasIspAffinity() const { return this->ispAffinity_ != nullptr;};
    void deleteIspAffinity() { this->ispAffinity_ = nullptr;};
    inline bool getIspAffinity() const { DARABONBA_PTR_GET_DEFAULT(ispAffinity_, false) };
    inline DescribeSnatAttributeResponseBody& setIspAffinity(bool ispAffinity) { DARABONBA_PTR_SET_VALUE(ispAffinity_, ispAffinity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSnatAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatAttributeResponseBody& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline DescribeSnatAttributeResponseBody& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline DescribeSnatAttributeResponseBody& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatIps Field Functions 
    bool hasSnatIps() const { return this->snatIps_ != nullptr;};
    void deleteSnatIps() { this->snatIps_ = nullptr;};
    inline const vector<DescribeSnatAttributeResponseBody::SnatIps> & getSnatIps() const { DARABONBA_PTR_GET_CONST(snatIps_, vector<DescribeSnatAttributeResponseBody::SnatIps>) };
    inline vector<DescribeSnatAttributeResponseBody::SnatIps> getSnatIps() { DARABONBA_PTR_GET(snatIps_, vector<DescribeSnatAttributeResponseBody::SnatIps>) };
    inline DescribeSnatAttributeResponseBody& setSnatIps(const vector<DescribeSnatAttributeResponseBody::SnatIps> & snatIps) { DARABONBA_PTR_SET_VALUE(snatIps_, snatIps) };
    inline DescribeSnatAttributeResponseBody& setSnatIps(vector<DescribeSnatAttributeResponseBody::SnatIps> && snatIps) { DARABONBA_PTR_SET_RVALUE(snatIps_, snatIps) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string getSourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline DescribeSnatAttributeResponseBody& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // standbySnatIp Field Functions 
    bool hasStandbySnatIp() const { return this->standbySnatIp_ != nullptr;};
    void deleteStandbySnatIp() { this->standbySnatIp_ = nullptr;};
    inline string getStandbySnatIp() const { DARABONBA_PTR_GET_DEFAULT(standbySnatIp_, "") };
    inline DescribeSnatAttributeResponseBody& setStandbySnatIp(string standbySnatIp) { DARABONBA_PTR_SET_VALUE(standbySnatIp_, standbySnatIp) };


    // standbyStatus Field Functions 
    bool hasStandbyStatus() const { return this->standbyStatus_ != nullptr;};
    void deleteStandbyStatus() { this->standbyStatus_ = nullptr;};
    inline string getStandbyStatus() const { DARABONBA_PTR_GET_DEFAULT(standbyStatus_, "") };
    inline DescribeSnatAttributeResponseBody& setStandbyStatus(string standbyStatus) { DARABONBA_PTR_SET_VALUE(standbyStatus_, standbyStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnatAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSnatAttributeResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the entry was created. The time is displayed in UTC.
    shared_ptr<string> creationTime_ {};
    // The destination CIDR block. The rule takes effect only on requests that access the destination CIDR block.
    shared_ptr<string> destCIDR_ {};
    // Specifies whether to enable IP affinity. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // >  After you enable IP affinity, if multiple EIPs are associated with an SNAT entry, one client uses the same EIP to for communication. If IP affinity is disabled, the client uses a random EIP for communication.
    shared_ptr<bool> eipAffinity_ {};
    // The timeout period. Unit: seconds.
    shared_ptr<int32_t> idleTimeout_ {};
    // Whether to enable operator affinity. Value taking:
    // - false:Do not open.
    // - true:Open.
    shared_ptr<bool> ispAffinity_ {};
    // The ID of the Network Address Translation (NAT) gateway.
    shared_ptr<string> natGatewayId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the SNAT entry.
    shared_ptr<string> snatEntryId_ {};
    // The name of the SNAT entry.
    shared_ptr<string> snatEntryName_ {};
    // The EIP specified in the SNAT entry. Multiple EIPs are separated by commas (,).
    shared_ptr<string> snatIp_ {};
    // The information about the EIP specified in the SNAT entry.
    shared_ptr<vector<DescribeSnatAttributeResponseBody::SnatIps>> snatIps_ {};
    // The source CIDR block specified in the SNAT entry.
    shared_ptr<string> sourceCIDR_ {};
    // The secondary EIP specified in the SNAT entry. Multiple secondary EIPs are separated by commas (,).
    shared_ptr<string> standbySnatIp_ {};
    // The status of the secondary EIP.
    // 
    // *   Running
    // *   Stopping
    // *   Stopped
    // *   Starting
    shared_ptr<string> standbyStatus_ {};
    // The status of the SNAT entry.
    // 
    // *   Pending: The SNAT entry is being created or modified.
    // *   Available: The SNAT entry is available.
    // *   Deleting: The SNAT entry is being deleted.
    shared_ptr<string> status_ {};
    // The type of the NAT.
    // 
    // *   Empty: symmetric NAT.
    // *   FullCone: full cone NAT.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
