// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYDOMAINDETAILITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYDOMAINDETAILITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainDetailResponseBodyDomainDetailItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodyDomainDetailItems& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodyDomainDetailItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeDomainDetailResponseBodyDomainDetailItems() = default ;
    DescribeDomainDetailResponseBodyDomainDetailItems(const DescribeDomainDetailResponseBodyDomainDetailItems &) = default ;
    DescribeDomainDetailResponseBodyDomainDetailItems(DescribeDomainDetailResponseBodyDomainDetailItems &&) = default ;
    DescribeDomainDetailResponseBodyDomainDetailItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodyDomainDetailItems() = default ;
    DescribeDomainDetailResponseBodyDomainDetailItems& operator=(const DescribeDomainDetailResponseBodyDomainDetailItems &) = default ;
    DescribeDomainDetailResponseBodyDomainDetailItems& operator=(DescribeDomainDetailResponseBodyDomainDetailItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->uuid_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeDomainDetailResponseBodyDomainDetailItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of the domain asset. Valid values:
    // 
    // *   **0**: an Elastic Compute Service (ECS) instance
    // *   **1**: a Server Load Balancer (SLB) instance
    // *   **2**: a Network Address Translation (NAT) gateway
    // *   **3**: an ApsaraDB RDS instance
    // *   **4**: an ApsaraDB for MongoDB instance
    std::shared_ptr<string> assetType_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The instance UUID of the domain asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
