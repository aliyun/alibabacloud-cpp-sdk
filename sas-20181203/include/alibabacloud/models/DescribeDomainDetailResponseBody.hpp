// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainDetailItems, domainDetailItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainDetailItems, domainDetailItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody(DescribeDomainDetailResponseBody &&) = default ;
    DescribeDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody& operator=(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody& operator=(DescribeDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainDetailItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainDetailItems& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, DomainDetailItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      DomainDetailItems() = default ;
      DomainDetailItems(const DomainDetailItems &) = default ;
      DomainDetailItems(DomainDetailItems &&) = default ;
      DomainDetailItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainDetailItems() = default ;
      DomainDetailItems& operator=(const DomainDetailItems &) = default ;
      DomainDetailItems& operator=(DomainDetailItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->uuid_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline DomainDetailItems& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DomainDetailItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline DomainDetailItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline DomainDetailItems& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline DomainDetailItems& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline DomainDetailItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The type of the domain asset. Valid values:
      // 
      // *   **0**: an Elastic Compute Service (ECS) instance
      // *   **1**: a Server Load Balancer (SLB) instance
      // *   **2**: a Network Address Translation (NAT) gateway
      // *   **3**: an ApsaraDB RDS instance
      // *   **4**: an ApsaraDB for MongoDB instance
      shared_ptr<string> assetType_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The instance UUID of the domain asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->domain_ == nullptr && this->domainDetailItems_ == nullptr && this->requestId_ == nullptr && this->rootDomain_ == nullptr && this->vulCount_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeDomainDetailResponseBody& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainDetailItems Field Functions 
    bool hasDomainDetailItems() const { return this->domainDetailItems_ != nullptr;};
    void deleteDomainDetailItems() { this->domainDetailItems_ = nullptr;};
    inline const vector<DescribeDomainDetailResponseBody::DomainDetailItems> & getDomainDetailItems() const { DARABONBA_PTR_GET_CONST(domainDetailItems_, vector<DescribeDomainDetailResponseBody::DomainDetailItems>) };
    inline vector<DescribeDomainDetailResponseBody::DomainDetailItems> getDomainDetailItems() { DARABONBA_PTR_GET(domainDetailItems_, vector<DescribeDomainDetailResponseBody::DomainDetailItems>) };
    inline DescribeDomainDetailResponseBody& setDomainDetailItems(const vector<DescribeDomainDetailResponseBody::DomainDetailItems> & domainDetailItems) { DARABONBA_PTR_SET_VALUE(domainDetailItems_, domainDetailItems) };
    inline DescribeDomainDetailResponseBody& setDomainDetailItems(vector<DescribeDomainDetailResponseBody::DomainDetailItems> && domainDetailItems) { DARABONBA_PTR_SET_RVALUE(domainDetailItems_, domainDetailItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootDomain Field Functions 
    bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
    void deleteRootDomain() { this->rootDomain_ = nullptr;};
    inline string getRootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
    inline DescribeDomainDetailResponseBody& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeDomainDetailResponseBody& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The total number of alerts in your website assets.
    shared_ptr<int32_t> alarmCount_ {};
    // The domain name.
    shared_ptr<string> domain_ {};
    // An array that consists of the details about the domain asset.
    shared_ptr<vector<DescribeDomainDetailResponseBody::DomainDetailItems>> domainDetailItems_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The name of the root domain that corresponds to the domain.
    shared_ptr<string> rootDomain_ {};
    // The total number of vulnerabilities in your website assets.
    shared_ptr<int32_t> vulCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
