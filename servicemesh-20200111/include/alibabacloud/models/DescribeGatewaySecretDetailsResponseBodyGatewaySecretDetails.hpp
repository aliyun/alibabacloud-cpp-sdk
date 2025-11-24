// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGATEWAYSECRETDETAILSRESPONSEBODYGATEWAYSECRETDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGATEWAYSECRETDETAILSRESPONSEBODYGATEWAYSECRETDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(IssueTime, issueTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SNI, SNI_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(IssueTime, issueTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SNI, SNI_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails() = default ;
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails(const DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails &) = default ;
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails(DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails &&) = default ;
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails() = default ;
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& operator=(const DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails &) = default ;
    DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& operator=(DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && return this->gatewayName_ == nullptr && return this->issueTime_ == nullptr && return this->message_ == nullptr && return this->SNI_ == nullptr && return this->secretName_ == nullptr
        && return this->state_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // issueTime Field Functions 
    bool hasIssueTime() const { return this->issueTime_ != nullptr;};
    void deleteIssueTime() { this->issueTime_ = nullptr;};
    inline string issueTime() const { DARABONBA_PTR_GET_DEFAULT(issueTime_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setIssueTime(string issueTime) { DARABONBA_PTR_SET_VALUE(issueTime_, issueTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // SNI Field Functions 
    bool hasSNI() const { return this->SNI_ != nullptr;};
    void deleteSNI() { this->SNI_ = nullptr;};
    inline string SNI() const { DARABONBA_PTR_GET_DEFAULT(SNI_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setSNI(string SNI) { DARABONBA_PTR_SET_VALUE(SNI_, SNI) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the certificate expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The name of the gateway.
    std::shared_ptr<string> gatewayName_ = nullptr;
    // The time when the certificate was issued.
    std::shared_ptr<string> issueTime_ = nullptr;
    // *   An error message is returned if the status of the gateway is abnormal. Examples: `tls.crt not exist`, `tls.key not exist`, and `secret type must be kubernetes.io/tls`.
    // *   An empty value is returned if the status of the gateway is normal.
    std::shared_ptr<string> message_ = nullptr;
    // The Server Name Indication (SNI) value.
    std::shared_ptr<string> SNI_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   `normal`
    // *   `abnormal`
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
