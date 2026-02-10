// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODY_HPP_
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
  class DescribeCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckResultResponseBody() = default ;
    DescribeCheckResultResponseBody(const DescribeCheckResultResponseBody &) = default ;
    DescribeCheckResultResponseBody(DescribeCheckResultResponseBody &&) = default ;
    DescribeCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckResultResponseBody() = default ;
    DescribeCheckResultResponseBody& operator=(const DescribeCheckResultResponseBody &) = default ;
    DescribeCheckResultResponseBody& operator=(DescribeCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckResultList& obj) { 
        DARABONBA_PTR_TO_JSON(ComplianceStatus, complianceStatus_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CheckResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(ComplianceStatus, complianceStatus_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      CheckResultList() = default ;
      CheckResultList(const CheckResultList &) = default ;
      CheckResultList(CheckResultList &&) = default ;
      CheckResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckResultList() = default ;
      CheckResultList& operator=(const CheckResultList &) = default ;
      CheckResultList& operator=(CheckResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->complianceStatus_ == nullptr
        && this->name_ == nullptr; };
      // complianceStatus Field Functions 
      bool hasComplianceStatus() const { return this->complianceStatus_ != nullptr;};
      void deleteComplianceStatus() { this->complianceStatus_ = nullptr;};
      inline int32_t getComplianceStatus() const { DARABONBA_PTR_GET_DEFAULT(complianceStatus_, 0) };
      inline CheckResultList& setComplianceStatus(int32_t complianceStatus) { DARABONBA_PTR_SET_VALUE(complianceStatus_, complianceStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CheckResultList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The compliance status. Valid values:
      // 
      // *   **1**: compliant
      // *   **0**: non-compliant
      shared_ptr<int32_t> complianceStatus_ {};
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
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->checkResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // checkResultList Field Functions 
    bool hasCheckResultList() const { return this->checkResultList_ != nullptr;};
    void deleteCheckResultList() { this->checkResultList_ = nullptr;};
    inline const vector<DescribeCheckResultResponseBody::CheckResultList> & getCheckResultList() const { DARABONBA_PTR_GET_CONST(checkResultList_, vector<DescribeCheckResultResponseBody::CheckResultList>) };
    inline vector<DescribeCheckResultResponseBody::CheckResultList> getCheckResultList() { DARABONBA_PTR_GET(checkResultList_, vector<DescribeCheckResultResponseBody::CheckResultList>) };
    inline DescribeCheckResultResponseBody& setCheckResultList(const vector<DescribeCheckResultResponseBody::CheckResultList> & checkResultList) { DARABONBA_PTR_SET_VALUE(checkResultList_, checkResultList) };
    inline DescribeCheckResultResponseBody& setCheckResultList(vector<DescribeCheckResultResponseBody::CheckResultList> && checkResultList) { DARABONBA_PTR_SET_RVALUE(checkResultList_, checkResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check results.
    shared_ptr<vector<DescribeCheckResultResponseBody::CheckResultList>> checkResultList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
