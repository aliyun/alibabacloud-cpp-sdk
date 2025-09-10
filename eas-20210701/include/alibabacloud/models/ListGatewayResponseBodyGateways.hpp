// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYGATEWAYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayResponseBodyGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyGateways& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_TO_JSON(InternetEnabled, internetEnabled_);
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(SSLRedirectionEnabled, SSLRedirectionEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_FROM_JSON(InternetEnabled, internetEnabled_);
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(SSLRedirectionEnabled, SSLRedirectionEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListGatewayResponseBodyGateways() = default ;
    ListGatewayResponseBodyGateways(const ListGatewayResponseBodyGateways &) = default ;
    ListGatewayResponseBodyGateways(ListGatewayResponseBodyGateways &&) = default ;
    ListGatewayResponseBodyGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyGateways() = default ;
    ListGatewayResponseBodyGateways& operator=(const ListGatewayResponseBodyGateways &) = default ;
    ListGatewayResponseBodyGateways& operator=(ListGatewayResponseBodyGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->createTime_ != nullptr && this->gatewayId_ != nullptr && this->gatewayName_ != nullptr && this->instanceType_ != nullptr && this->internetDomain_ != nullptr
        && this->internetEnabled_ != nullptr && this->intranetDomain_ != nullptr && this->isDefault_ != nullptr && this->replicas_ != nullptr && this->SSLRedirectionEnabled_ != nullptr
        && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListGatewayResponseBodyGateways& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListGatewayResponseBodyGateways& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayResponseBodyGateways& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline ListGatewayResponseBodyGateways& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListGatewayResponseBodyGateways& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetDomain Field Functions 
    bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
    void deleteInternetDomain() { this->internetDomain_ = nullptr;};
    inline string internetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
    inline ListGatewayResponseBodyGateways& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


    // internetEnabled Field Functions 
    bool hasInternetEnabled() const { return this->internetEnabled_ != nullptr;};
    void deleteInternetEnabled() { this->internetEnabled_ = nullptr;};
    inline bool internetEnabled() const { DARABONBA_PTR_GET_DEFAULT(internetEnabled_, false) };
    inline ListGatewayResponseBodyGateways& setInternetEnabled(bool internetEnabled) { DARABONBA_PTR_SET_VALUE(internetEnabled_, internetEnabled) };


    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline ListGatewayResponseBodyGateways& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListGatewayResponseBodyGateways& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline ListGatewayResponseBodyGateways& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // SSLRedirectionEnabled Field Functions 
    bool hasSSLRedirectionEnabled() const { return this->SSLRedirectionEnabled_ != nullptr;};
    void deleteSSLRedirectionEnabled() { this->SSLRedirectionEnabled_ = nullptr;};
    inline bool SSLRedirectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLRedirectionEnabled_, false) };
    inline ListGatewayResponseBodyGateways& setSSLRedirectionEnabled(bool SSLRedirectionEnabled) { DARABONBA_PTR_SET_VALUE(SSLRedirectionEnabled_, SSLRedirectionEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayResponseBodyGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListGatewayResponseBodyGateways& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The billing method. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the private gateway was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The private gateway ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The private gateway alias.
    std::shared_ptr<string> gatewayName_ = nullptr;
    // The type of instances used for the private gateway.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The public endpoint.
    std::shared_ptr<string> internetDomain_ = nullptr;
    // Indicates whether Internet access is enabled.
    std::shared_ptr<bool> internetEnabled_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> intranetDomain_ = nullptr;
    // Indicates whether it is the default private gateway.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The number of nodes in the private gateway.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // Specifies whether to enable HTTP to HTTPS redirection.
    std::shared_ptr<bool> SSLRedirectionEnabled_ = nullptr;
    // The state of the private gateway.
    // 
    // Valid values:
    // 
    // *   Creating
    // *   Stopped
    // *   Failed
    // *   Running
    // *   Deleted
    // *   Deleting
    // *   Waiting
    std::shared_ptr<string> status_ = nullptr;
    // The time when the private gateway was updated. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
