// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDnsFirewallPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsFirewallPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Policys, policys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsFirewallPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Policys, policys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDnsFirewallPolicyResponseBody() = default ;
    DescribeDnsFirewallPolicyResponseBody(const DescribeDnsFirewallPolicyResponseBody &) = default ;
    DescribeDnsFirewallPolicyResponseBody(DescribeDnsFirewallPolicyResponseBody &&) = default ;
    DescribeDnsFirewallPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsFirewallPolicyResponseBody() = default ;
    DescribeDnsFirewallPolicyResponseBody& operator=(const DescribeDnsFirewallPolicyResponseBody &) = default ;
    DescribeDnsFirewallPolicyResponseBody& operator=(DescribeDnsFirewallPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policys& obj) { 
        DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
        DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Destination, destination_);
        DARABONBA_PTR_TO_JSON(DestinationAddrs, destinationAddrs_);
        DARABONBA_PTR_TO_JSON(DestinationGroupType, destinationGroupType_);
        DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(HitLastTime, hitLastTime_);
        DARABONBA_PTR_TO_JSON(HitTimes, hitTimes_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Release, release_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceAddrs, sourceAddrs_);
        DARABONBA_PTR_TO_JSON(SourceGroupType, sourceGroupType_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Policys& obj) { 
        DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
        DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Destination, destination_);
        DARABONBA_PTR_FROM_JSON(DestinationAddrs, destinationAddrs_);
        DARABONBA_PTR_FROM_JSON(DestinationGroupType, destinationGroupType_);
        DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(HitLastTime, hitLastTime_);
        DARABONBA_PTR_FROM_JSON(HitTimes, hitTimes_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Release, release_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceAddrs, sourceAddrs_);
        DARABONBA_PTR_FROM_JSON(SourceGroupType, sourceGroupType_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      Policys() = default ;
      Policys(const Policys &) = default ;
      Policys(Policys &&) = default ;
      Policys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policys() = default ;
      Policys& operator=(const Policys &) = default ;
      Policys& operator=(Policys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->description_ == nullptr && this->destination_ == nullptr && this->destinationAddrs_ == nullptr && this->destinationGroupType_ == nullptr
        && this->destinationType_ == nullptr && this->direction_ == nullptr && this->hitLastTime_ == nullptr && this->hitTimes_ == nullptr && this->ipVersion_ == nullptr
        && this->priority_ == nullptr && this->release_ == nullptr && this->source_ == nullptr && this->sourceAddrs_ == nullptr && this->sourceGroupType_ == nullptr
        && this->sourceType_ == nullptr; };
      // aclAction Field Functions 
      bool hasAclAction() const { return this->aclAction_ != nullptr;};
      void deleteAclAction() { this->aclAction_ = nullptr;};
      inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
      inline Policys& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


      // aclUuid Field Functions 
      bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
      void deleteAclUuid() { this->aclUuid_ = nullptr;};
      inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
      inline Policys& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Policys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destination Field Functions 
      bool hasDestination() const { return this->destination_ != nullptr;};
      void deleteDestination() { this->destination_ = nullptr;};
      inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
      inline Policys& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


      // destinationAddrs Field Functions 
      bool hasDestinationAddrs() const { return this->destinationAddrs_ != nullptr;};
      void deleteDestinationAddrs() { this->destinationAddrs_ = nullptr;};
      inline const vector<string> & getDestinationAddrs() const { DARABONBA_PTR_GET_CONST(destinationAddrs_, vector<string>) };
      inline vector<string> getDestinationAddrs() { DARABONBA_PTR_GET(destinationAddrs_, vector<string>) };
      inline Policys& setDestinationAddrs(const vector<string> & destinationAddrs) { DARABONBA_PTR_SET_VALUE(destinationAddrs_, destinationAddrs) };
      inline Policys& setDestinationAddrs(vector<string> && destinationAddrs) { DARABONBA_PTR_SET_RVALUE(destinationAddrs_, destinationAddrs) };


      // destinationGroupType Field Functions 
      bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
      void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
      inline string getDestinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
      inline Policys& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


      // destinationType Field Functions 
      bool hasDestinationType() const { return this->destinationType_ != nullptr;};
      void deleteDestinationType() { this->destinationType_ = nullptr;};
      inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
      inline Policys& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline Policys& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // hitLastTime Field Functions 
      bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
      void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
      inline int64_t getHitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
      inline Policys& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


      // hitTimes Field Functions 
      bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
      void deleteHitTimes() { this->hitTimes_ = nullptr;};
      inline int64_t getHitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
      inline Policys& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
      inline Policys& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Policys& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // release Field Functions 
      bool hasRelease() const { return this->release_ != nullptr;};
      void deleteRelease() { this->release_ = nullptr;};
      inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
      inline Policys& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Policys& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceAddrs Field Functions 
      bool hasSourceAddrs() const { return this->sourceAddrs_ != nullptr;};
      void deleteSourceAddrs() { this->sourceAddrs_ = nullptr;};
      inline const vector<string> & getSourceAddrs() const { DARABONBA_PTR_GET_CONST(sourceAddrs_, vector<string>) };
      inline vector<string> getSourceAddrs() { DARABONBA_PTR_GET(sourceAddrs_, vector<string>) };
      inline Policys& setSourceAddrs(const vector<string> & sourceAddrs) { DARABONBA_PTR_SET_VALUE(sourceAddrs_, sourceAddrs) };
      inline Policys& setSourceAddrs(vector<string> && sourceAddrs) { DARABONBA_PTR_SET_RVALUE(sourceAddrs_, sourceAddrs) };


      // sourceGroupType Field Functions 
      bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
      void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
      inline string getSourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
      inline Policys& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Policys& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      shared_ptr<string> aclAction_ {};
      shared_ptr<string> aclUuid_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> destination_ {};
      shared_ptr<vector<string>> destinationAddrs_ {};
      shared_ptr<string> destinationGroupType_ {};
      shared_ptr<string> destinationType_ {};
      shared_ptr<string> direction_ {};
      shared_ptr<int64_t> hitLastTime_ {};
      shared_ptr<int64_t> hitTimes_ {};
      shared_ptr<int32_t> ipVersion_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> release_ {};
      shared_ptr<string> source_ {};
      shared_ptr<vector<string>> sourceAddrs_ {};
      shared_ptr<string> sourceGroupType_ {};
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->policys_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline DescribeDnsFirewallPolicyResponseBody& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDnsFirewallPolicyResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policys Field Functions 
    bool hasPolicys() const { return this->policys_ != nullptr;};
    void deletePolicys() { this->policys_ = nullptr;};
    inline const vector<DescribeDnsFirewallPolicyResponseBody::Policys> & getPolicys() const { DARABONBA_PTR_GET_CONST(policys_, vector<DescribeDnsFirewallPolicyResponseBody::Policys>) };
    inline vector<DescribeDnsFirewallPolicyResponseBody::Policys> getPolicys() { DARABONBA_PTR_GET(policys_, vector<DescribeDnsFirewallPolicyResponseBody::Policys>) };
    inline DescribeDnsFirewallPolicyResponseBody& setPolicys(const vector<DescribeDnsFirewallPolicyResponseBody::Policys> & policys) { DARABONBA_PTR_SET_VALUE(policys_, policys) };
    inline DescribeDnsFirewallPolicyResponseBody& setPolicys(vector<DescribeDnsFirewallPolicyResponseBody::Policys> && policys) { DARABONBA_PTR_SET_RVALUE(policys_, policys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsFirewallPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeDnsFirewallPolicyResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> pageNo_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<vector<DescribeDnsFirewallPolicyResponseBody::Policys>> policys_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
