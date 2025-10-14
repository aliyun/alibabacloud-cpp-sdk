// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstanceResponseBodyConfigAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PubicZoneName, pubicZoneName_);
      DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PubicZoneName, pubicZoneName_);
      DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    DescribeDnsGtmInstanceResponseBodyConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfig(const DescribeDnsGtmInstanceResponseBodyConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfig(DescribeDnsGtmInstanceResponseBodyConfig &&) = default ;
    DescribeDnsGtmInstanceResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBodyConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfig& operator=(const DescribeDnsGtmInstanceResponseBodyConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfig& operator=(DescribeDnsGtmInstanceResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->alertGroup_ == nullptr && return this->cnameType_ == nullptr && return this->instanceName_ == nullptr && return this->pubicZoneName_ == nullptr && return this->publicCnameMode_ == nullptr
        && return this->publicRr_ == nullptr && return this->publicUserDomainName_ == nullptr && return this->strategyMode_ == nullptr && return this->ttl_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig) };
    inline Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig) };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setAlertConfig(const Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setAlertConfig(Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cnameType Field Functions 
    bool hasCnameType() const { return this->cnameType_ != nullptr;};
    void deleteCnameType() { this->cnameType_ = nullptr;};
    inline string cnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pubicZoneName Field Functions 
    bool hasPubicZoneName() const { return this->pubicZoneName_ != nullptr;};
    void deletePubicZoneName() { this->pubicZoneName_ = nullptr;};
    inline string pubicZoneName() const { DARABONBA_PTR_GET_DEFAULT(pubicZoneName_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setPubicZoneName(string pubicZoneName) { DARABONBA_PTR_SET_VALUE(pubicZoneName_, pubicZoneName) };


    // publicCnameMode Field Functions 
    bool hasPublicCnameMode() const { return this->publicCnameMode_ != nullptr;};
    void deletePublicCnameMode() { this->publicCnameMode_ = nullptr;};
    inline string publicCnameMode() const { DARABONBA_PTR_GET_DEFAULT(publicCnameMode_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setPublicCnameMode(string publicCnameMode) { DARABONBA_PTR_SET_VALUE(publicCnameMode_, publicCnameMode) };


    // publicRr Field Functions 
    bool hasPublicRr() const { return this->publicRr_ != nullptr;};
    void deletePublicRr() { this->publicRr_ = nullptr;};
    inline string publicRr() const { DARABONBA_PTR_GET_DEFAULT(publicRr_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setPublicRr(string publicRr) { DARABONBA_PTR_SET_VALUE(publicRr_, publicRr) };


    // publicUserDomainName Field Functions 
    bool hasPublicUserDomainName() const { return this->publicUserDomainName_ != nullptr;};
    void deletePublicUserDomainName() { this->publicUserDomainName_ = nullptr;};
    inline string publicUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(publicUserDomainName_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setPublicUserDomainName(string publicUserDomainName) { DARABONBA_PTR_SET_VALUE(publicUserDomainName_, publicUserDomainName) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeDnsGtmInstanceResponseBodyConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The alert notification method.
    std::shared_ptr<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfig> alertConfig_ = nullptr;
    // The name of the alert group.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // The type of the CNAME domain name that is used to access the instance. Valid value:
    // 
    // *   PUBLIC: The CNAME domain name is used to access the instance over the Internet.
    std::shared_ptr<string> cnameType_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The domain name that is used to access the instance over the Internet.
    std::shared_ptr<string> pubicZoneName_ = nullptr;
    // Indicates whether a custom CNAME domain name or a CNAME domain name assigned by the system is used to access the instance over the Internet. Valid values:
    // 
    // *   CUSTOM: A custom CNAME domain name is used.
    // *   SYSTEM_ASSIGN: A CNAME domain name assigned by the system is used.
    std::shared_ptr<string> publicCnameMode_ = nullptr;
    // The hostname corresponding to the CNAME domain name that is used to access the instance over the Internet.
    std::shared_ptr<string> publicRr_ = nullptr;
    // The service domain name that is used over the Internet.
    std::shared_ptr<string> publicUserDomainName_ = nullptr;
    // The type of the access policy. Valid values:
    // 
    // *   LATENCY: Latency-based
    // *   GEO: Geographical location-based
    std::shared_ptr<string> strategyMode_ = nullptr;
    // The global time to live (TTL).
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
