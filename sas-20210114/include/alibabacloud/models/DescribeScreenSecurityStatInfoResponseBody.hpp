// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScreenSecurityStatInfoResponseBodyAttackEvent.hpp>
#include <alibabacloud/models/DescribeScreenSecurityStatInfoResponseBodyHealthCheck.hpp>
#include <alibabacloud/models/DescribeScreenSecurityStatInfoResponseBodySecurityEvent.hpp>
#include <alibabacloud/models/DescribeScreenSecurityStatInfoResponseBodyVulnerability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenSecurityStatInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_TO_JSON(Vulnerability, vulnerability_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_FROM_JSON(Vulnerability, vulnerability_);
    };
    DescribeScreenSecurityStatInfoResponseBody() = default ;
    DescribeScreenSecurityStatInfoResponseBody(const DescribeScreenSecurityStatInfoResponseBody &) = default ;
    DescribeScreenSecurityStatInfoResponseBody(DescribeScreenSecurityStatInfoResponseBody &&) = default ;
    DescribeScreenSecurityStatInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSecurityStatInfoResponseBody() = default ;
    DescribeScreenSecurityStatInfoResponseBody& operator=(const DescribeScreenSecurityStatInfoResponseBody &) = default ;
    DescribeScreenSecurityStatInfoResponseBody& operator=(DescribeScreenSecurityStatInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackEvent_ == nullptr
        && return this->healthCheck_ == nullptr && return this->requestId_ == nullptr && return this->securityEvent_ == nullptr && return this->vulnerability_ == nullptr; };
    // attackEvent Field Functions 
    bool hasAttackEvent() const { return this->attackEvent_ != nullptr;};
    void deleteAttackEvent() { this->attackEvent_ = nullptr;};
    inline const DescribeScreenSecurityStatInfoResponseBodyAttackEvent & attackEvent() const { DARABONBA_PTR_GET_CONST(attackEvent_, DescribeScreenSecurityStatInfoResponseBodyAttackEvent) };
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent attackEvent() { DARABONBA_PTR_GET(attackEvent_, DescribeScreenSecurityStatInfoResponseBodyAttackEvent) };
    inline DescribeScreenSecurityStatInfoResponseBody& setAttackEvent(const DescribeScreenSecurityStatInfoResponseBodyAttackEvent & attackEvent) { DARABONBA_PTR_SET_VALUE(attackEvent_, attackEvent) };
    inline DescribeScreenSecurityStatInfoResponseBody& setAttackEvent(DescribeScreenSecurityStatInfoResponseBodyAttackEvent && attackEvent) { DARABONBA_PTR_SET_RVALUE(attackEvent_, attackEvent) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const DescribeScreenSecurityStatInfoResponseBodyHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, DescribeScreenSecurityStatInfoResponseBodyHealthCheck) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, DescribeScreenSecurityStatInfoResponseBodyHealthCheck) };
    inline DescribeScreenSecurityStatInfoResponseBody& setHealthCheck(const DescribeScreenSecurityStatInfoResponseBodyHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline DescribeScreenSecurityStatInfoResponseBody& setHealthCheck(DescribeScreenSecurityStatInfoResponseBodyHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenSecurityStatInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEvent Field Functions 
    bool hasSecurityEvent() const { return this->securityEvent_ != nullptr;};
    void deleteSecurityEvent() { this->securityEvent_ = nullptr;};
    inline const DescribeScreenSecurityStatInfoResponseBodySecurityEvent & securityEvent() const { DARABONBA_PTR_GET_CONST(securityEvent_, DescribeScreenSecurityStatInfoResponseBodySecurityEvent) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent securityEvent() { DARABONBA_PTR_GET(securityEvent_, DescribeScreenSecurityStatInfoResponseBodySecurityEvent) };
    inline DescribeScreenSecurityStatInfoResponseBody& setSecurityEvent(const DescribeScreenSecurityStatInfoResponseBodySecurityEvent & securityEvent) { DARABONBA_PTR_SET_VALUE(securityEvent_, securityEvent) };
    inline DescribeScreenSecurityStatInfoResponseBody& setSecurityEvent(DescribeScreenSecurityStatInfoResponseBodySecurityEvent && securityEvent) { DARABONBA_PTR_SET_RVALUE(securityEvent_, securityEvent) };


    // vulnerability Field Functions 
    bool hasVulnerability() const { return this->vulnerability_ != nullptr;};
    void deleteVulnerability() { this->vulnerability_ = nullptr;};
    inline const DescribeScreenSecurityStatInfoResponseBodyVulnerability & vulnerability() const { DARABONBA_PTR_GET_CONST(vulnerability_, DescribeScreenSecurityStatInfoResponseBodyVulnerability) };
    inline DescribeScreenSecurityStatInfoResponseBodyVulnerability vulnerability() { DARABONBA_PTR_GET(vulnerability_, DescribeScreenSecurityStatInfoResponseBodyVulnerability) };
    inline DescribeScreenSecurityStatInfoResponseBody& setVulnerability(const DescribeScreenSecurityStatInfoResponseBodyVulnerability & vulnerability) { DARABONBA_PTR_SET_VALUE(vulnerability_, vulnerability) };
    inline DescribeScreenSecurityStatInfoResponseBody& setVulnerability(DescribeScreenSecurityStatInfoResponseBodyVulnerability && vulnerability) { DARABONBA_PTR_SET_RVALUE(vulnerability_, vulnerability) };


  protected:
    std::shared_ptr<DescribeScreenSecurityStatInfoResponseBodyAttackEvent> attackEvent_ = nullptr;
    std::shared_ptr<DescribeScreenSecurityStatInfoResponseBodyHealthCheck> healthCheck_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeScreenSecurityStatInfoResponseBodySecurityEvent> securityEvent_ = nullptr;
    std::shared_ptr<DescribeScreenSecurityStatInfoResponseBodyVulnerability> vulnerability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
