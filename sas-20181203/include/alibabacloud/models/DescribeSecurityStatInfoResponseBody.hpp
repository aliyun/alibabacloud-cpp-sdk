// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityStatInfoResponseBodyAttackEvent.hpp>
#include <alibabacloud/models/DescribeSecurityStatInfoResponseBodyHealthCheck.hpp>
#include <alibabacloud/models/DescribeSecurityStatInfoResponseBodySecurityEvent.hpp>
#include <alibabacloud/models/DescribeSecurityStatInfoResponseBodyVulnerability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityStatInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Vulnerability, vulnerability_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Vulnerability, vulnerability_);
    };
    DescribeSecurityStatInfoResponseBody() = default ;
    DescribeSecurityStatInfoResponseBody(const DescribeSecurityStatInfoResponseBody &) = default ;
    DescribeSecurityStatInfoResponseBody(DescribeSecurityStatInfoResponseBody &&) = default ;
    DescribeSecurityStatInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityStatInfoResponseBody() = default ;
    DescribeSecurityStatInfoResponseBody& operator=(const DescribeSecurityStatInfoResponseBody &) = default ;
    DescribeSecurityStatInfoResponseBody& operator=(DescribeSecurityStatInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackEvent_ != nullptr
        && this->healthCheck_ != nullptr && this->requestId_ != nullptr && this->securityEvent_ != nullptr && this->success_ != nullptr && this->vulnerability_ != nullptr; };
    // attackEvent Field Functions 
    bool hasAttackEvent() const { return this->attackEvent_ != nullptr;};
    void deleteAttackEvent() { this->attackEvent_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBodyAttackEvent & attackEvent() const { DARABONBA_PTR_GET_CONST(attackEvent_, DescribeSecurityStatInfoResponseBodyAttackEvent) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent attackEvent() { DARABONBA_PTR_GET(attackEvent_, DescribeSecurityStatInfoResponseBodyAttackEvent) };
    inline DescribeSecurityStatInfoResponseBody& setAttackEvent(const DescribeSecurityStatInfoResponseBodyAttackEvent & attackEvent) { DARABONBA_PTR_SET_VALUE(attackEvent_, attackEvent) };
    inline DescribeSecurityStatInfoResponseBody& setAttackEvent(DescribeSecurityStatInfoResponseBodyAttackEvent && attackEvent) { DARABONBA_PTR_SET_RVALUE(attackEvent_, attackEvent) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBodyHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, DescribeSecurityStatInfoResponseBodyHealthCheck) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, DescribeSecurityStatInfoResponseBodyHealthCheck) };
    inline DescribeSecurityStatInfoResponseBody& setHealthCheck(const DescribeSecurityStatInfoResponseBodyHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline DescribeSecurityStatInfoResponseBody& setHealthCheck(DescribeSecurityStatInfoResponseBodyHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityStatInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEvent Field Functions 
    bool hasSecurityEvent() const { return this->securityEvent_ != nullptr;};
    void deleteSecurityEvent() { this->securityEvent_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBodySecurityEvent & securityEvent() const { DARABONBA_PTR_GET_CONST(securityEvent_, DescribeSecurityStatInfoResponseBodySecurityEvent) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent securityEvent() { DARABONBA_PTR_GET(securityEvent_, DescribeSecurityStatInfoResponseBodySecurityEvent) };
    inline DescribeSecurityStatInfoResponseBody& setSecurityEvent(const DescribeSecurityStatInfoResponseBodySecurityEvent & securityEvent) { DARABONBA_PTR_SET_VALUE(securityEvent_, securityEvent) };
    inline DescribeSecurityStatInfoResponseBody& setSecurityEvent(DescribeSecurityStatInfoResponseBodySecurityEvent && securityEvent) { DARABONBA_PTR_SET_RVALUE(securityEvent_, securityEvent) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSecurityStatInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vulnerability Field Functions 
    bool hasVulnerability() const { return this->vulnerability_ != nullptr;};
    void deleteVulnerability() { this->vulnerability_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBodyVulnerability & vulnerability() const { DARABONBA_PTR_GET_CONST(vulnerability_, DescribeSecurityStatInfoResponseBodyVulnerability) };
    inline DescribeSecurityStatInfoResponseBodyVulnerability vulnerability() { DARABONBA_PTR_GET(vulnerability_, DescribeSecurityStatInfoResponseBodyVulnerability) };
    inline DescribeSecurityStatInfoResponseBody& setVulnerability(const DescribeSecurityStatInfoResponseBodyVulnerability & vulnerability) { DARABONBA_PTR_SET_VALUE(vulnerability_, vulnerability) };
    inline DescribeSecurityStatInfoResponseBody& setVulnerability(DescribeSecurityStatInfoResponseBodyVulnerability && vulnerability) { DARABONBA_PTR_SET_RVALUE(vulnerability_, vulnerability) };


  protected:
    // The detailed statistics of attacks.
    std::shared_ptr<DescribeSecurityStatInfoResponseBodyAttackEvent> attackEvent_ = nullptr;
    // The detailed statistics of baseline risk items.
    std::shared_ptr<DescribeSecurityStatInfoResponseBodyHealthCheck> healthCheck_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed statistics of unhandled alerts.
    std::shared_ptr<DescribeSecurityStatInfoResponseBodySecurityEvent> securityEvent_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The detailed statistics of unfixed vulnerabilities.
    std::shared_ptr<DescribeSecurityStatInfoResponseBodyVulnerability> vulnerability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
