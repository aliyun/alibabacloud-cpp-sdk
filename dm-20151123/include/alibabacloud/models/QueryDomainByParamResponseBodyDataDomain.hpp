// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODYDATADOMAIN_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODYDATADOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryDomainByParamResponseBodyDataDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByParamResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_TO_JSON(CnameAuthStatus, cnameAuthStatus_);
      DARABONBA_PTR_TO_JSON(ConfirmStatus, confirmStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainRecord, domainRecord_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(IcpStatus, icpStatus_);
      DARABONBA_PTR_TO_JSON(MxAuthStatus, mxAuthStatus_);
      DARABONBA_PTR_TO_JSON(SpfAuthStatus, spfAuthStatus_);
      DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByParamResponseBodyDataDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameAuthStatus, cnameAuthStatus_);
      DARABONBA_PTR_FROM_JSON(ConfirmStatus, confirmStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainRecord, domainRecord_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(IcpStatus, icpStatus_);
      DARABONBA_PTR_FROM_JSON(MxAuthStatus, mxAuthStatus_);
      DARABONBA_PTR_FROM_JSON(SpfAuthStatus, spfAuthStatus_);
      DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
    };
    QueryDomainByParamResponseBodyDataDomain() = default ;
    QueryDomainByParamResponseBodyDataDomain(const QueryDomainByParamResponseBodyDataDomain &) = default ;
    QueryDomainByParamResponseBodyDataDomain(QueryDomainByParamResponseBodyDataDomain &&) = default ;
    QueryDomainByParamResponseBodyDataDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByParamResponseBodyDataDomain() = default ;
    QueryDomainByParamResponseBodyDataDomain& operator=(const QueryDomainByParamResponseBodyDataDomain &) = default ;
    QueryDomainByParamResponseBodyDataDomain& operator=(QueryDomainByParamResponseBodyDataDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameAuthStatus_ != nullptr
        && this->confirmStatus_ != nullptr && this->createTime_ != nullptr && this->domainId_ != nullptr && this->domainName_ != nullptr && this->domainRecord_ != nullptr
        && this->domainStatus_ != nullptr && this->icpStatus_ != nullptr && this->mxAuthStatus_ != nullptr && this->spfAuthStatus_ != nullptr && this->utcCreateTime_ != nullptr; };
    // cnameAuthStatus Field Functions 
    bool hasCnameAuthStatus() const { return this->cnameAuthStatus_ != nullptr;};
    void deleteCnameAuthStatus() { this->cnameAuthStatus_ = nullptr;};
    inline string cnameAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(cnameAuthStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setCnameAuthStatus(string cnameAuthStatus) { DARABONBA_PTR_SET_VALUE(cnameAuthStatus_, cnameAuthStatus) };


    // confirmStatus Field Functions 
    bool hasConfirmStatus() const { return this->confirmStatus_ != nullptr;};
    void deleteConfirmStatus() { this->confirmStatus_ = nullptr;};
    inline string confirmStatus() const { DARABONBA_PTR_GET_DEFAULT(confirmStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setConfirmStatus(string confirmStatus) { DARABONBA_PTR_SET_VALUE(confirmStatus_, confirmStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRecord Field Functions 
    bool hasDomainRecord() const { return this->domainRecord_ != nullptr;};
    void deleteDomainRecord() { this->domainRecord_ = nullptr;};
    inline string domainRecord() const { DARABONBA_PTR_GET_DEFAULT(domainRecord_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setDomainRecord(string domainRecord) { DARABONBA_PTR_SET_VALUE(domainRecord_, domainRecord) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // icpStatus Field Functions 
    bool hasIcpStatus() const { return this->icpStatus_ != nullptr;};
    void deleteIcpStatus() { this->icpStatus_ = nullptr;};
    inline string icpStatus() const { DARABONBA_PTR_GET_DEFAULT(icpStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setIcpStatus(string icpStatus) { DARABONBA_PTR_SET_VALUE(icpStatus_, icpStatus) };


    // mxAuthStatus Field Functions 
    bool hasMxAuthStatus() const { return this->mxAuthStatus_ != nullptr;};
    void deleteMxAuthStatus() { this->mxAuthStatus_ = nullptr;};
    inline string mxAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(mxAuthStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setMxAuthStatus(string mxAuthStatus) { DARABONBA_PTR_SET_VALUE(mxAuthStatus_, mxAuthStatus) };


    // spfAuthStatus Field Functions 
    bool hasSpfAuthStatus() const { return this->spfAuthStatus_ != nullptr;};
    void deleteSpfAuthStatus() { this->spfAuthStatus_ = nullptr;};
    inline string spfAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(spfAuthStatus_, "") };
    inline QueryDomainByParamResponseBodyDataDomain& setSpfAuthStatus(string spfAuthStatus) { DARABONBA_PTR_SET_VALUE(spfAuthStatus_, spfAuthStatus) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline QueryDomainByParamResponseBodyDataDomain& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // Track verification
    std::shared_ptr<string> cnameAuthStatus_ = nullptr;
    // CName verification status, success: 0; failure: 1
    std::shared_ptr<string> confirmStatus_ = nullptr;
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Domain ID
    std::shared_ptr<string> domainId_ = nullptr;
    // Domain name
    std::shared_ptr<string> domainName_ = nullptr;
    // Domain record
    std::shared_ptr<string> domainRecord_ = nullptr;
    // Domain status.
    // 
    // - 0: Available, verified
    // - 1: Unavailable, verification failed
    std::shared_ptr<string> domainStatus_ = nullptr;
    // ICP filing status.
    // 
    // - 1 indicates filed
    // - 0 indicates not filed
    std::shared_ptr<string> icpStatus_ = nullptr;
    // MX authentication status, success: 0, failure: 1.
    std::shared_ptr<string> mxAuthStatus_ = nullptr;
    // SPF authentication status, success: 0, failure: 1.
    std::shared_ptr<string> spfAuthStatus_ = nullptr;
    // Creation time in UTC format.
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
