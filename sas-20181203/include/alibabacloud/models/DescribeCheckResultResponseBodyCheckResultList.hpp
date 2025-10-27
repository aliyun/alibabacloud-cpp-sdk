// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODYCHECKRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODYCHECKRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckResultResponseBodyCheckResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckResultResponseBodyCheckResultList& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceStatus, complianceStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckResultResponseBodyCheckResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceStatus, complianceStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeCheckResultResponseBodyCheckResultList() = default ;
    DescribeCheckResultResponseBodyCheckResultList(const DescribeCheckResultResponseBodyCheckResultList &) = default ;
    DescribeCheckResultResponseBodyCheckResultList(DescribeCheckResultResponseBodyCheckResultList &&) = default ;
    DescribeCheckResultResponseBodyCheckResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckResultResponseBodyCheckResultList() = default ;
    DescribeCheckResultResponseBodyCheckResultList& operator=(const DescribeCheckResultResponseBodyCheckResultList &) = default ;
    DescribeCheckResultResponseBodyCheckResultList& operator=(DescribeCheckResultResponseBodyCheckResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceStatus_ == nullptr
        && return this->name_ == nullptr; };
    // complianceStatus Field Functions 
    bool hasComplianceStatus() const { return this->complianceStatus_ != nullptr;};
    void deleteComplianceStatus() { this->complianceStatus_ = nullptr;};
    inline int32_t complianceStatus() const { DARABONBA_PTR_GET_DEFAULT(complianceStatus_, 0) };
    inline DescribeCheckResultResponseBodyCheckResultList& setComplianceStatus(int32_t complianceStatus) { DARABONBA_PTR_SET_VALUE(complianceStatus_, complianceStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCheckResultResponseBodyCheckResultList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The compliance status. Valid values:
    // 
    // *   **1**: compliant
    // *   **0**: non-compliant
    std::shared_ptr<int32_t> complianceStatus_ = nullptr;
    // The name of the corresponding section. Valid values:
    // 
    // *   **information_classification**: information classification
    // *   **information_mark**: information labeling
    // *   **network_security_policy**: access to networks and network services
    // *   **login_control**: secure logon procedures
    // *   **week_password**: password management system
    // *   **key_manage**: key management
    // *   **malicious_software**: protection against malware
    // *   **information_backup**: information backup
    // *   **audit_policy**: information system audit control mechanisms
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
