// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODYCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODYCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemResponseBodyCheckItemsCustomConfigs.hpp>
#include <alibabacloud/models/ListCheckItemResponseBodyCheckItemsDescription.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemResponseBodyCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EstimatedCount, estimatedCount_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EstimatedCount, estimatedCount_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCheckItemResponseBodyCheckItems() = default ;
    ListCheckItemResponseBodyCheckItems(const ListCheckItemResponseBodyCheckItems &) = default ;
    ListCheckItemResponseBodyCheckItems(ListCheckItemResponseBodyCheckItems &&) = default ;
    ListCheckItemResponseBodyCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemResponseBodyCheckItems() = default ;
    ListCheckItemResponseBodyCheckItems& operator=(const ListCheckItemResponseBodyCheckItems &) = default ;
    ListCheckItemResponseBodyCheckItems& operator=(ListCheckItemResponseBodyCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkShowName_ == nullptr && return this->checkType_ == nullptr && return this->customConfigs_ == nullptr && return this->description_ == nullptr && return this->estimatedCount_ == nullptr
        && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr && return this->riskLevel_ == nullptr && return this->sectionIds_ == nullptr && return this->vendor_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckItemResponseBodyCheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListCheckItemResponseBodyCheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckItemResponseBodyCheckItems& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs> & customConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs>) };
    inline vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs> customConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs>) };
    inline ListCheckItemResponseBodyCheckItems& setCustomConfigs(const vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline ListCheckItemResponseBodyCheckItems& setCustomConfigs(vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::ListCheckItemResponseBodyCheckItemsDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::ListCheckItemResponseBodyCheckItemsDescription) };
    inline Models::ListCheckItemResponseBodyCheckItemsDescription description() { DARABONBA_PTR_GET(description_, Models::ListCheckItemResponseBodyCheckItemsDescription) };
    inline ListCheckItemResponseBodyCheckItems& setDescription(const Models::ListCheckItemResponseBodyCheckItemsDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline ListCheckItemResponseBodyCheckItems& setDescription(Models::ListCheckItemResponseBodyCheckItemsDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // estimatedCount Field Functions 
    bool hasEstimatedCount() const { return this->estimatedCount_ != nullptr;};
    void deleteEstimatedCount() { this->estimatedCount_ = nullptr;};
    inline int32_t estimatedCount() const { DARABONBA_PTR_GET_DEFAULT(estimatedCount_, 0) };
    inline ListCheckItemResponseBodyCheckItems& setEstimatedCount(int32_t estimatedCount) { DARABONBA_PTR_SET_VALUE(estimatedCount_, estimatedCount) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline ListCheckItemResponseBodyCheckItems& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListCheckItemResponseBodyCheckItems& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListCheckItemResponseBodyCheckItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & sectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> sectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline ListCheckItemResponseBodyCheckItems& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline ListCheckItemResponseBodyCheckItems& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListCheckItemResponseBodyCheckItems& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The source type of the Situation Awareness check item: 
    // - **CUSTOM**: User-defined 
    // - **SYSTEM**: Predefined by the Situation Awareness platform
    std::shared_ptr<string> checkType_ = nullptr;
    // The check items.
    std::shared_ptr<vector<Models::ListCheckItemResponseBodyCheckItemsCustomConfigs>> customConfigs_ = nullptr;
    // The description of the check item.
    std::shared_ptr<Models::ListCheckItemResponseBodyCheckItemsDescription> description_ = nullptr;
    // The estimated quota that will be consumed by this check item.
    std::shared_ptr<int32_t> estimatedCount_ = nullptr;
    // The asset subtype of the cloud service. Valid values:
    // 
    // *   If **InstanceType** is set to **ECS**, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    //     *   **DISK**
    //     *   **SECURITY_GROUP**
    // 
    // *   If **InstanceType** is set to **ACR**, this parameter supports the following valid values:
    // 
    //     *   **REPOSITORY_ENTERPRISE**
    //     *   **REPOSITORY_PERSON**
    // 
    // *   If **InstanceType** is set to **RAM**, this parameter supports the following valid values:
    // 
    //     *   **ALIAS**
    //     *   **USER**
    //     *   **POLICY**
    //     *   **GROUP**
    // 
    // *   If **InstanceType** is set to **WAF**, this parameter supports the following valid value:
    // 
    //     *   **DOMAIN**
    // 
    // *   If **InstanceType** is set to other values, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // The asset type of the cloud service. Valid values:
    // 
    // *   **ECS**: Elastic Compute Service (ECS).
    // *   **SLB**: Server Load Balancer (SLB).
    // *   **RDS**: ApsaraDB RDS.
    // *   **MONGODB**: ApsaraDB for MongoDB (MongoDB).
    // *   **KVSTORE**: ApsaraDB for Redis (Redis).
    // *   **ACR**: Container Registry.
    // *   **CSK**: Container Service for Kubernetes (ACK).
    // *   **VPC**: Virtual Private Cloud (VPC).
    // *   **ACTIONTRAIL**: ActionTrail.
    // *   **CDN**: Alibaba Cloud CDN (CDN).
    // *   **CAS**: Certificate Management Service (formerly SSL Certificates Service).
    // *   **RDC**: Apsara Devops.
    // *   **RAM**: Resource Access Management (RAM).
    // *   **DDOS**: Anti-DDoS.
    // *   **WAF**: Web Application Firewall (WAF).
    // *   **OSS**: Object Storage Service (OSS).
    // *   **POLARDB**: PolarDB.
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL.
    // *   **MSE**: Microservices Engine (MSE).
    // *   **NAS**: File Storage NAS (NAS).
    // *   **SDDP**: Sensitive Data Discovery and Protection (SDDP).
    // *   **EIP**: Elastic IP Address (EIP).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The risk level of the check item. Valid values:
    // 
    // *   **HIGH**
    // *   **MEDIUM**
    // *   **LOW**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The IDs of the sections associated with the check items.
    std::shared_ptr<vector<int64_t>> sectionIds_ = nullptr;
    // The type of the cloud asset. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: an asset outside Alibaba Cloud.
    // *   **2**: an asset in a data center.
    // *   **3**, **4**, **5**, and **7**: other cloud asset.
    // *   **8**: a simple application server.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
