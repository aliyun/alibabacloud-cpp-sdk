// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#define ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATADOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAdvancedDomainListResponseBodyDataDomainDnsList.hpp>
#include <alibabacloud/models/QueryAdvancedDomainListResponseBodyDataDomainTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryAdvancedDomainListResponseBodyDataDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAdvancedDomainListResponseBodyDataDomain& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryAdvancedDomainListResponseBodyDataDomain& obj) { 
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
    QueryAdvancedDomainListResponseBodyDataDomain() = default ;
    QueryAdvancedDomainListResponseBodyDataDomain(const QueryAdvancedDomainListResponseBodyDataDomain &) = default ;
    QueryAdvancedDomainListResponseBodyDataDomain(QueryAdvancedDomainListResponseBodyDataDomain &&) = default ;
    QueryAdvancedDomainListResponseBodyDataDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAdvancedDomainListResponseBodyDataDomain() = default ;
    QueryAdvancedDomainListResponseBodyDataDomain& operator=(const QueryAdvancedDomainListResponseBodyDataDomain &) = default ;
    QueryAdvancedDomainListResponseBodyDataDomain& operator=(QueryAdvancedDomainListResponseBodyDataDomain &&) = default ;
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
    inline const Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList & dnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList) };
    inline Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList dnsList() { DARABONBA_PTR_GET(dnsList_, Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDnsList(const Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDnsList(Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // domainAuditStatus Field Functions 
    bool hasDomainAuditStatus() const { return this->domainAuditStatus_ != nullptr;};
    void deleteDomainAuditStatus() { this->domainAuditStatus_ = nullptr;};
    inline string domainAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(domainAuditStatus_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainAuditStatus(string domainAuditStatus) { DARABONBA_PTR_SET_VALUE(domainAuditStatus_, domainAuditStatus) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline string domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string domainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // expirationCurrDateDiff Field Functions 
    bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
    void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
    inline int32_t expirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // expirationDateLong Field Functions 
    bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
    void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
    inline int64_t expirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


    // expirationDateStatus Field Functions 
    bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
    void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
    inline string expirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // registrationDate Field Functions 
    bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
    void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
    inline string registrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


    // registrationDateLong Field Functions 
    bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
    void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
    inline int64_t registrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const Models::QueryAdvancedDomainListResponseBodyDataDomainTag & tag() const { DARABONBA_PTR_GET_CONST(tag_, Models::QueryAdvancedDomainListResponseBodyDataDomainTag) };
    inline Models::QueryAdvancedDomainListResponseBodyDataDomainTag tag() { DARABONBA_PTR_GET(tag_, Models::QueryAdvancedDomainListResponseBodyDataDomainTag) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setTag(const Models::QueryAdvancedDomainListResponseBodyDataDomainTag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setTag(Models::QueryAdvancedDomainListResponseBodyDataDomainTag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline QueryAdvancedDomainListResponseBodyDataDomain& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    std::shared_ptr<Models::QueryAdvancedDomainListResponseBodyDataDomainDnsList> dnsList_ = nullptr;
    std::shared_ptr<string> domainAuditStatus_ = nullptr;
    std::shared_ptr<string> domainGroupId_ = nullptr;
    std::shared_ptr<string> domainGroupName_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainStatus_ = nullptr;
    std::shared_ptr<string> domainType_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int32_t> expirationCurrDateDiff_ = nullptr;
    std::shared_ptr<string> expirationDate_ = nullptr;
    std::shared_ptr<int64_t> expirationDateLong_ = nullptr;
    std::shared_ptr<string> expirationDateStatus_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> premium_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    std::shared_ptr<string> registrantType_ = nullptr;
    std::shared_ptr<string> registrationDate_ = nullptr;
    std::shared_ptr<int64_t> registrationDateLong_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<Models::QueryAdvancedDomainListResponseBodyDataDomainTag> tag_ = nullptr;
    std::shared_ptr<string> zhRegistrantOrganization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
