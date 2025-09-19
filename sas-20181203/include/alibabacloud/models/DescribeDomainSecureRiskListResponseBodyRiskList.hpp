// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODYRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODYRISKLIST_HPP_
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
  class DescribeDomainSecureRiskListResponseBodyRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureRiskListResponseBodyRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(SslBrand, sslBrand_);
      DARABONBA_PTR_TO_JSON(SslStatus, sslStatus_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureRiskListResponseBodyRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(SslBrand, sslBrand_);
      DARABONBA_PTR_FROM_JSON(SslStatus, sslStatus_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeDomainSecureRiskListResponseBodyRiskList() = default ;
    DescribeDomainSecureRiskListResponseBodyRiskList(const DescribeDomainSecureRiskListResponseBodyRiskList &) = default ;
    DescribeDomainSecureRiskListResponseBodyRiskList(DescribeDomainSecureRiskListResponseBodyRiskList &&) = default ;
    DescribeDomainSecureRiskListResponseBodyRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureRiskListResponseBodyRiskList() = default ;
    DescribeDomainSecureRiskListResponseBodyRiskList& operator=(const DescribeDomainSecureRiskListResponseBodyRiskList &) = default ;
    DescribeDomainSecureRiskListResponseBodyRiskList& operator=(DescribeDomainSecureRiskListResponseBodyRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmCount_ != nullptr
        && this->domain_ != nullptr && this->sslBrand_ != nullptr && this->sslStatus_ != nullptr && this->uuidList_ != nullptr && this->vulCount_ != nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // sslBrand Field Functions 
    bool hasSslBrand() const { return this->sslBrand_ != nullptr;};
    void deleteSslBrand() { this->sslBrand_ = nullptr;};
    inline string sslBrand() const { DARABONBA_PTR_GET_DEFAULT(sslBrand_, "") };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setSslBrand(string sslBrand) { DARABONBA_PTR_SET_VALUE(sslBrand_, sslBrand) };


    // sslStatus Field Functions 
    bool hasSslStatus() const { return this->sslStatus_ != nullptr;};
    void deleteSslStatus() { this->sslStatus_ = nullptr;};
    inline int32_t sslStatus() const { DARABONBA_PTR_GET_DEFAULT(sslStatus_, 0) };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setSslStatus(int32_t sslStatus) { DARABONBA_PTR_SET_VALUE(sslStatus_, sslStatus) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBodyRiskList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of alerts.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The issuer of the certificate.
    std::shared_ptr<string> sslBrand_ = nullptr;
    // Indicates whether the certificate is configured. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> sslStatus_ = nullptr;
    // The UUIDs of the backend servers of the website.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
    // The number of vulnerabilities.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
