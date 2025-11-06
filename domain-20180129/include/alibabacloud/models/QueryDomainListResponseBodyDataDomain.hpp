// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDomainListResponseBodyDataDomainTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainListResponseBodyDataDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_TO_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_TO_JSON(ChgholderStatus, chgholderStatus_);
      DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(Registrar, registrar_);
      DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_FROM_JSON(ChgholderStatus, chgholderStatus_);
      DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
      DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryDomainListResponseBodyDataDomain() = default ;
    QueryDomainListResponseBodyDataDomain(const QueryDomainListResponseBodyDataDomain &) = default ;
    QueryDomainListResponseBodyDataDomain(QueryDomainListResponseBodyDataDomain &&) = default ;
    QueryDomainListResponseBodyDataDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListResponseBodyDataDomain() = default ;
    QueryDomainListResponseBodyDataDomain& operator=(const QueryDomainListResponseBodyDataDomain &) = default ;
    QueryDomainListResponseBodyDataDomain& operator=(QueryDomainListResponseBodyDataDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccompany_ == nullptr
        && return this->chgholderStatus_ == nullptr && return this->domainAuditStatus_ == nullptr && return this->domainGroupId_ == nullptr && return this->domainGroupName_ == nullptr && return this->domainName_ == nullptr
        && return this->domainStatus_ == nullptr && return this->domainType_ == nullptr && return this->expirationCurrDateDiff_ == nullptr && return this->expirationDate_ == nullptr && return this->expirationDateLong_ == nullptr
        && return this->expirationDateStatus_ == nullptr && return this->instanceId_ == nullptr && return this->premium_ == nullptr && return this->productId_ == nullptr && return this->registrantType_ == nullptr
        && return this->registrar_ == nullptr && return this->registrationDate_ == nullptr && return this->registrationDateLong_ == nullptr && return this->remark_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr; };
    // ccompany Field Functions 
    bool hasCcompany() const { return this->ccompany_ != nullptr;};
    void deleteCcompany() { this->ccompany_ = nullptr;};
    inline string ccompany() const { DARABONBA_PTR_GET_DEFAULT(ccompany_, "") };
    inline QueryDomainListResponseBodyDataDomain& setCcompany(string ccompany) { DARABONBA_PTR_SET_VALUE(ccompany_, ccompany) };


    // chgholderStatus Field Functions 
    bool hasChgholderStatus() const { return this->chgholderStatus_ != nullptr;};
    void deleteChgholderStatus() { this->chgholderStatus_ = nullptr;};
    inline string chgholderStatus() const { DARABONBA_PTR_GET_DEFAULT(chgholderStatus_, "") };
    inline QueryDomainListResponseBodyDataDomain& setChgholderStatus(string chgholderStatus) { DARABONBA_PTR_SET_VALUE(chgholderStatus_, chgholderStatus) };


    // domainAuditStatus Field Functions 
    bool hasDomainAuditStatus() const { return this->domainAuditStatus_ != nullptr;};
    void deleteDomainAuditStatus() { this->domainAuditStatus_ = nullptr;};
    inline string domainAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(domainAuditStatus_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainAuditStatus(string domainAuditStatus) { DARABONBA_PTR_SET_VALUE(domainAuditStatus_, domainAuditStatus) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline string domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string domainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryDomainListResponseBodyDataDomain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // expirationCurrDateDiff Field Functions 
    bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
    void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
    inline int32_t expirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
    inline QueryDomainListResponseBodyDataDomain& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryDomainListResponseBodyDataDomain& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // expirationDateLong Field Functions 
    bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
    void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
    inline int64_t expirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
    inline QueryDomainListResponseBodyDataDomain& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


    // expirationDateStatus Field Functions 
    bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
    void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
    inline string expirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
    inline QueryDomainListResponseBodyDataDomain& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDomainListResponseBodyDataDomain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline QueryDomainListResponseBodyDataDomain& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryDomainListResponseBodyDataDomain& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline QueryDomainListResponseBodyDataDomain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // registrar Field Functions 
    bool hasRegistrar() const { return this->registrar_ != nullptr;};
    void deleteRegistrar() { this->registrar_ = nullptr;};
    inline string registrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
    inline QueryDomainListResponseBodyDataDomain& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


    // registrationDate Field Functions 
    bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
    void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
    inline string registrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
    inline QueryDomainListResponseBodyDataDomain& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


    // registrationDateLong Field Functions 
    bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
    void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
    inline int64_t registrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
    inline QueryDomainListResponseBodyDataDomain& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryDomainListResponseBodyDataDomain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryDomainListResponseBodyDataDomain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const Models::QueryDomainListResponseBodyDataDomainTag & tag() const { DARABONBA_PTR_GET_CONST(tag_, Models::QueryDomainListResponseBodyDataDomainTag) };
    inline Models::QueryDomainListResponseBodyDataDomainTag tag() { DARABONBA_PTR_GET(tag_, Models::QueryDomainListResponseBodyDataDomainTag) };
    inline QueryDomainListResponseBodyDataDomain& setTag(const Models::QueryDomainListResponseBodyDataDomainTag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryDomainListResponseBodyDataDomain& setTag(Models::QueryDomainListResponseBodyDataDomainTag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the domain name registrant.
    std::shared_ptr<string> ccompany_ = nullptr;
    // domain transfer status. value:
    // - 0: domain status normal.
    // - 1: domain is pending change holder.
    // - 2: change holder failed.
    std::shared_ptr<string> chgholderStatus_ = nullptr;
    // The state of real-name verification for the domain name. Valid values:
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
    // The state of the domain name. Valid values:
    // 
    // *   **1**: The domain name needs to be renewed.
    // *   **2**: The domain name needs to be redeemed.
    // *   **3**: The domain name is normal.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **New gTLD**
    // *   **gTLD**
    // *   **ccTLD**
    std::shared_ptr<string> domainType_ = nullptr;
    // The number of days from the expiration date of the domain name to the current date.
    std::shared_ptr<int32_t> expirationCurrDateDiff_ = nullptr;
    // The time when the domain name expires.
    std::shared_ptr<string> expirationDate_ = nullptr;
    // The validity period of the domain name. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expirationDateLong_ = nullptr;
    // Indicates whether the domain name expires. Valid values:
    // 
    // *   **1**: The domain name does not expire.
    // *   **2**: The domain name expires.
    std::shared_ptr<string> expirationDateStatus_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the domain name is a premium domain name.
    std::shared_ptr<bool> premium_ = nullptr;
    // The service ID.
    std::shared_ptr<string> productId_ = nullptr;
    // The registration type of the domain name. Valid values:
    // 
    // *   **1**: individual
    // *   **2**: enterprise
    std::shared_ptr<string> registrantType_ = nullptr;
    std::shared_ptr<string> registrar_ = nullptr;
    // The time when the domain name was registered.
    std::shared_ptr<string> registrationDate_ = nullptr;
    // Indicates how long the domain name has been registered. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> registrationDateLong_ = nullptr;
    // The remarks of the domain name.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group to which the domain name belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags added to the resource.
    std::shared_ptr<Models::QueryDomainListResponseBodyDataDomainTag> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
