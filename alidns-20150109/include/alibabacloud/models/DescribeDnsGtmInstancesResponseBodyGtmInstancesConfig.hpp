// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_TO_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_FROM_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig(const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig(DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig &&) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& operator=(const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& operator=(DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertConfig_ != nullptr
        && this->alertGroup_ != nullptr && this->cnameType_ != nullptr && this->instanceName_ != nullptr && this->publicCnameMode_ != nullptr && this->publicRr_ != nullptr
        && this->publicUserDomainName_ != nullptr && this->publicZoneName_ != nullptr && this->strategyMode_ != nullptr && this->ttl_ != nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig>) };
    inline vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig>) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setAlertConfig(const vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setAlertConfig(vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cnameType Field Functions 
    bool hasCnameType() const { return this->cnameType_ != nullptr;};
    void deleteCnameType() { this->cnameType_ = nullptr;};
    inline string cnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // publicCnameMode Field Functions 
    bool hasPublicCnameMode() const { return this->publicCnameMode_ != nullptr;};
    void deletePublicCnameMode() { this->publicCnameMode_ = nullptr;};
    inline string publicCnameMode() const { DARABONBA_PTR_GET_DEFAULT(publicCnameMode_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setPublicCnameMode(string publicCnameMode) { DARABONBA_PTR_SET_VALUE(publicCnameMode_, publicCnameMode) };


    // publicRr Field Functions 
    bool hasPublicRr() const { return this->publicRr_ != nullptr;};
    void deletePublicRr() { this->publicRr_ = nullptr;};
    inline string publicRr() const { DARABONBA_PTR_GET_DEFAULT(publicRr_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setPublicRr(string publicRr) { DARABONBA_PTR_SET_VALUE(publicRr_, publicRr) };


    // publicUserDomainName Field Functions 
    bool hasPublicUserDomainName() const { return this->publicUserDomainName_ != nullptr;};
    void deletePublicUserDomainName() { this->publicUserDomainName_ = nullptr;};
    inline string publicUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(publicUserDomainName_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setPublicUserDomainName(string publicUserDomainName) { DARABONBA_PTR_SET_VALUE(publicUserDomainName_, publicUserDomainName) };


    // publicZoneName Field Functions 
    bool hasPublicZoneName() const { return this->publicZoneName_ != nullptr;};
    void deletePublicZoneName() { this->publicZoneName_ = nullptr;};
    inline string publicZoneName() const { DARABONBA_PTR_GET_DEFAULT(publicZoneName_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setPublicZoneName(string publicZoneName) { DARABONBA_PTR_SET_VALUE(publicZoneName_, publicZoneName) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The alert notification method.
    std::shared_ptr<vector<Models::DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig>> alertConfig_ = nullptr;
    // The alert contact groups. The value is in the JSON format.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // The type of the CNAME. Valid value:
    // 
    // *   PUBLIC
    std::shared_ptr<string> cnameType_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Specifies whether to use a custom CNAME or a system-assigned CNAME to access GTM over the Internet. Valid values:
    // 
    // *   CUSTOM: a custom CNAME
    // *   SYSTEM_ASSIGN: a system-assigned CNAME. You cannot set PublicCnameMode to this value.
    std::shared_ptr<string> publicCnameMode_ = nullptr;
    // The hostname of the domain name that is used to access GTM over the Internet.
    std::shared_ptr<string> publicRr_ = nullptr;
    // The domain name that is used to access GTM over the Internet.
    std::shared_ptr<string> publicUserDomainName_ = nullptr;
    // The canonical name (CNAME) that is used to access GTM over the Internet.
    std::shared_ptr<string> publicZoneName_ = nullptr;
    // The type of the access policy. Valid values:
    // 
    // *   LATENCY: latency-based access policy
    // *   GEO: geographical location-based access policy
    std::shared_ptr<string> strategyMode_ = nullptr;
    // The global time to live (TTL).
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
