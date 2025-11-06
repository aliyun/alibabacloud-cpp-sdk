// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZINFOBYDOMAINRESPONSEBODYMODULEDOMAINSPECIALBIZCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZINFOBYDOMAINRESPONSEBODYMODULEDOMAINSPECIALBIZCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(CredentialUrl, credentialUrl_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(HolderCert, holderCert_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(CredentialUrl, credentialUrl_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(HolderCert, holderCert_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
    };
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials() = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials(const QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials &) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials(QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials &&) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials() = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& operator=(const QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials &) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& operator=(QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->credentialNo_ == nullptr && return this->credentialType_ == nullptr && return this->credentialUrl_ == nullptr && return this->domainName_ == nullptr && return this->holderCert_ == nullptr
        && return this->saleId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string credentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // credentialUrl Field Functions 
    bool hasCredentialUrl() const { return this->credentialUrl_ != nullptr;};
    void deleteCredentialUrl() { this->credentialUrl_ = nullptr;};
    inline string credentialUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialUrl_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setCredentialUrl(string credentialUrl) { DARABONBA_PTR_SET_VALUE(credentialUrl_, credentialUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // holderCert Field Functions 
    bool hasHolderCert() const { return this->holderCert_ != nullptr;};
    void deleteHolderCert() { this->holderCert_ = nullptr;};
    inline int32_t holderCert() const { DARABONBA_PTR_GET_DEFAULT(holderCert_, 0) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setHolderCert(int32_t holderCert) { DARABONBA_PTR_SET_VALUE(holderCert_, holderCert) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string saleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


  protected:
    // The ID of the associated workflow.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The certificate number.
    std::shared_ptr<string> credentialNo_ = nullptr;
    // The certificate type.
    std::shared_ptr<string> credentialType_ = nullptr;
    // The certificate URL.
    std::shared_ptr<string> credentialUrl_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // Indicates whether the certificate belongs to the registrant.
    std::shared_ptr<int32_t> holderCert_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> saleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
