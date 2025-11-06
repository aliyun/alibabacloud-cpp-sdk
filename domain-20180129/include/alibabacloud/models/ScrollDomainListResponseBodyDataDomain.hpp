// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#define ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScrollDomainListResponseBodyDataDomainDnsList.hpp>
#include <alibabacloud/models/ScrollDomainListResponseBodyDataDomainTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ScrollDomainListResponseBodyDataDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScrollDomainListResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, ScrollDomainListResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    ScrollDomainListResponseBodyDataDomain() = default ;
    ScrollDomainListResponseBodyDataDomain(const ScrollDomainListResponseBodyDataDomain &) = default ;
    ScrollDomainListResponseBodyDataDomain(ScrollDomainListResponseBodyDataDomain &&) = default ;
    ScrollDomainListResponseBodyDataDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScrollDomainListResponseBodyDataDomain() = default ;
    ScrollDomainListResponseBodyDataDomain& operator=(const ScrollDomainListResponseBodyDataDomain &) = default ;
    ScrollDomainListResponseBodyDataDomain& operator=(ScrollDomainListResponseBodyDataDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsList_ == nullptr
        && return this->domainAuditStatus_ == nullptr && return this->domainGroupId_ == nullptr && return this->domainGroupName_ == nullptr && return this->domainName_ == nullptr && return this->domainStatus_ == nullptr
        && return this->domainType_ == nullptr && return this->email_ == nullptr && return this->expirationCurrDateDiff_ == nullptr && return this->expirationDate_ == nullptr && return this->expirationDateLong_ == nullptr
        && return this->expirationDateStatus_ == nullptr && return this->instanceId_ == nullptr && return this->premium_ == nullptr && return this->productId_ == nullptr && return this->registrantOrganization_ == nullptr
        && return this->registrantType_ == nullptr && return this->registrationDate_ == nullptr && return this->registrationDateLong_ == nullptr && return this->remark_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr && return this->zhRegistrantOrganization_ == nullptr; };
    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const Models::ScrollDomainListResponseBodyDataDomainDnsList & dnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, Models::ScrollDomainListResponseBodyDataDomainDnsList) };
    inline Models::ScrollDomainListResponseBodyDataDomainDnsList dnsList() { DARABONBA_PTR_GET(dnsList_, Models::ScrollDomainListResponseBodyDataDomainDnsList) };
    inline ScrollDomainListResponseBodyDataDomain& setDnsList(const Models::ScrollDomainListResponseBodyDataDomainDnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline ScrollDomainListResponseBodyDataDomain& setDnsList(Models::ScrollDomainListResponseBodyDataDomainDnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // domainAuditStatus Field Functions 
    bool hasDomainAuditStatus() const { return this->domainAuditStatus_ != nullptr;};
    void deleteDomainAuditStatus() { this->domainAuditStatus_ = nullptr;};
    inline string domainAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(domainAuditStatus_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainAuditStatus(string domainAuditStatus) { DARABONBA_PTR_SET_VALUE(domainAuditStatus_, domainAuditStatus) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline string domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string domainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // expirationCurrDateDiff Field Functions 
    bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
    void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
    inline int32_t expirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
    inline ScrollDomainListResponseBodyDataDomain& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // expirationDateLong Field Functions 
    bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
    void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
    inline int64_t expirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
    inline ScrollDomainListResponseBodyDataDomain& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


    // expirationDateStatus Field Functions 
    bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
    void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
    inline string expirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline ScrollDomainListResponseBodyDataDomain& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // registrationDate Field Functions 
    bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
    void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
    inline string registrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


    // registrationDateLong Field Functions 
    bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
    void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
    inline int64_t registrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
    inline ScrollDomainListResponseBodyDataDomain& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const Models::ScrollDomainListResponseBodyDataDomainTag & tag() const { DARABONBA_PTR_GET_CONST(tag_, Models::ScrollDomainListResponseBodyDataDomainTag) };
    inline Models::ScrollDomainListResponseBodyDataDomainTag tag() { DARABONBA_PTR_GET(tag_, Models::ScrollDomainListResponseBodyDataDomainTag) };
    inline ScrollDomainListResponseBodyDataDomain& setTag(const Models::ScrollDomainListResponseBodyDataDomainTag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ScrollDomainListResponseBodyDataDomain& setTag(Models::ScrollDomainListResponseBodyDataDomainTag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline ScrollDomainListResponseBodyDataDomain& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    // The Domain Name System (DNS) servers of the domain name.
    std::shared_ptr<Models::ScrollDomainListResponseBodyDataDomainDnsList> dnsList_ = nullptr;
    // The status of real-name verification for the domain name. Valid values:
    // 
    // *   **FAILED**: Real-name verification for the domain name fails.
    // *   **SUCCEED**: Real-name verification for the domain name is successful.
    // *   **NONAUDIT**: Real-name verification for the domain name is not performed.
    // *   **AUDITING**: Real-name verification for the domain name is in progress.
    std::shared_ptr<string> domainAuditStatus_ = nullptr;
    // The ID of the domain name group.
    std::shared_ptr<string> domainGroupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> domainGroupName_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **1**: The domain name needs to be renewed.
    // *   **2**: The domain name needs to be redeemed.
    // *   **3**: The domain name is normal.
    // *   **4**: The domain name is being transferred out.
    // *   **5**: The information about the domain name registrant is being modified.
    // *   **6**: Real-name verification is not performed on the domain name.
    // *   **7**: Real-name verification for the domain name fails.
    // *   **8**: The real-name verification is being reviewed.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **New gTLD**
    // *   **gTLD**
    // *   **ccTLD**
    std::shared_ptr<string> domainType_ = nullptr;
    // The email address.
    std::shared_ptr<string> email_ = nullptr;
    // The number of days from the expiration date of the domain name to the current date.
    std::shared_ptr<int32_t> expirationCurrDateDiff_ = nullptr;
    // The time when the domain name expires.
    std::shared_ptr<string> expirationDate_ = nullptr;
    // The time when the domain name expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expirationDateLong_ = nullptr;
    // Indicates whether the domain name expires. Valid values:
    // 
    // *   **1**: The domain name does not expire.
    // *   **2**: The domain name expires.
    std::shared_ptr<string> expirationDateStatus_ = nullptr;
    // The instance ID of the domain name.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the domain name is a premium domain name.
    std::shared_ptr<bool> premium_ = nullptr;
    // The service ID.
    std::shared_ptr<string> productId_ = nullptr;
    // The registrant of the domain name.
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    // The registration type of the domain name. Valid values:
    // 
    // *   **1**: individual.
    // *   **2**: enterprise.
    std::shared_ptr<string> registrantType_ = nullptr;
    // The time when the domain name was registered.
    std::shared_ptr<string> registrationDate_ = nullptr;
    // The time when the domain name was registered. This value is a UNIX timestamp that indicates the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> registrationDateLong_ = nullptr;
    // The remarks on the domain name.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource tag.
    std::shared_ptr<Models::ScrollDomainListResponseBodyDataDomainTag> tag_ = nullptr;
    // The Chinese name of the domain name registrant.
    std::shared_ptr<string> zhRegistrantOrganization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
