// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckTaskInfos, checkTaskInfos_);
      DARABONBA_PTR_TO_JSON(Prerequisites, prerequisites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckTaskInfos, checkTaskInfos_);
      DARABONBA_PTR_FROM_JSON(Prerequisites, prerequisites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyPlaybookResponseBody() = default ;
    VerifyPlaybookResponseBody(const VerifyPlaybookResponseBody &) = default ;
    VerifyPlaybookResponseBody(VerifyPlaybookResponseBody &&) = default ;
    VerifyPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPlaybookResponseBody() = default ;
    VerifyPlaybookResponseBody& operator=(const VerifyPlaybookResponseBody &) = default ;
    VerifyPlaybookResponseBody& operator=(VerifyPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Prerequisites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Prerequisites& obj) { 
        DARABONBA_PTR_TO_JSON(PrerequisiteType, prerequisiteType_);
        DARABONBA_PTR_TO_JSON(PrerequisiteValue, prerequisiteValue_);
      };
      friend void from_json(const Darabonba::Json& j, Prerequisites& obj) { 
        DARABONBA_PTR_FROM_JSON(PrerequisiteType, prerequisiteType_);
        DARABONBA_PTR_FROM_JSON(PrerequisiteValue, prerequisiteValue_);
      };
      Prerequisites() = default ;
      Prerequisites(const Prerequisites &) = default ;
      Prerequisites(Prerequisites &&) = default ;
      Prerequisites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Prerequisites() = default ;
      Prerequisites& operator=(const Prerequisites &) = default ;
      Prerequisites& operator=(Prerequisites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->prerequisiteType_ == nullptr
        && this->prerequisiteValue_ == nullptr; };
      // prerequisiteType Field Functions 
      bool hasPrerequisiteType() const { return this->prerequisiteType_ != nullptr;};
      void deletePrerequisiteType() { this->prerequisiteType_ = nullptr;};
      inline string getPrerequisiteType() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteType_, "") };
      inline Prerequisites& setPrerequisiteType(string prerequisiteType) { DARABONBA_PTR_SET_VALUE(prerequisiteType_, prerequisiteType) };


      // prerequisiteValue Field Functions 
      bool hasPrerequisiteValue() const { return this->prerequisiteValue_ != nullptr;};
      void deletePrerequisiteValue() { this->prerequisiteValue_ = nullptr;};
      inline string getPrerequisiteValue() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteValue_, "") };
      inline Prerequisites& setPrerequisiteValue(string prerequisiteValue) { DARABONBA_PTR_SET_VALUE(prerequisiteValue_, prerequisiteValue) };


    protected:
      // The check type. Valid values:
      // 
      // - **role**: The name of the custom RAM role.
      // 
      // - **policies**: The list of RAM system policies.
      shared_ptr<string> prerequisiteType_ {};
      // The check content. The value is determined as follows:
      // 
      // - If PrerequisiteType is **role**, the value is the static field AliyunSiemSoarExecutionDefaultRole.
      // 
      // - If PrerequisiteType is **policies**, the value is a collection of policy names.
      shared_ptr<string> prerequisiteValue_ {};
    };

    class CheckTaskInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckTaskInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, CheckTaskInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      CheckTaskInfos() = default ;
      CheckTaskInfos(const CheckTaskInfos &) = default ;
      CheckTaskInfos(CheckTaskInfos &&) = default ;
      CheckTaskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckTaskInfos() = default ;
      CheckTaskInfos& operator=(const CheckTaskInfos &) = default ;
      CheckTaskInfos& operator=(CheckTaskInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->nodeName_ == nullptr && this->riskLevel_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline CheckTaskInfos& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline CheckTaskInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline CheckTaskInfos& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The specific error message that is returned if the verification fails.
      shared_ptr<string> detail_ {};
      // The name of the playbook node.
      shared_ptr<string> nodeName_ {};
      // The severity level of the verification message. Valid values:
      // 
      // - **warn**: A warning message. An issue may occur when the playbook runs.
      // 
      // - **error**: An error message. The playbook fails to be compiled.
      // 
      // - **remind**: A suggestion. This does not affect publishing or running the playbook. Optimize the playbook format.
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->checkTaskInfos_ == nullptr
        && this->prerequisites_ == nullptr && this->requestId_ == nullptr; };
    // checkTaskInfos Field Functions 
    bool hasCheckTaskInfos() const { return this->checkTaskInfos_ != nullptr;};
    void deleteCheckTaskInfos() { this->checkTaskInfos_ = nullptr;};
    inline const vector<VerifyPlaybookResponseBody::CheckTaskInfos> & getCheckTaskInfos() const { DARABONBA_PTR_GET_CONST(checkTaskInfos_, vector<VerifyPlaybookResponseBody::CheckTaskInfos>) };
    inline vector<VerifyPlaybookResponseBody::CheckTaskInfos> getCheckTaskInfos() { DARABONBA_PTR_GET(checkTaskInfos_, vector<VerifyPlaybookResponseBody::CheckTaskInfos>) };
    inline VerifyPlaybookResponseBody& setCheckTaskInfos(const vector<VerifyPlaybookResponseBody::CheckTaskInfos> & checkTaskInfos) { DARABONBA_PTR_SET_VALUE(checkTaskInfos_, checkTaskInfos) };
    inline VerifyPlaybookResponseBody& setCheckTaskInfos(vector<VerifyPlaybookResponseBody::CheckTaskInfos> && checkTaskInfos) { DARABONBA_PTR_SET_RVALUE(checkTaskInfos_, checkTaskInfos) };


    // prerequisites Field Functions 
    bool hasPrerequisites() const { return this->prerequisites_ != nullptr;};
    void deletePrerequisites() { this->prerequisites_ = nullptr;};
    inline const vector<VerifyPlaybookResponseBody::Prerequisites> & getPrerequisites() const { DARABONBA_PTR_GET_CONST(prerequisites_, vector<VerifyPlaybookResponseBody::Prerequisites>) };
    inline vector<VerifyPlaybookResponseBody::Prerequisites> getPrerequisites() { DARABONBA_PTR_GET(prerequisites_, vector<VerifyPlaybookResponseBody::Prerequisites>) };
    inline VerifyPlaybookResponseBody& setPrerequisites(const vector<VerifyPlaybookResponseBody::Prerequisites> & prerequisites) { DARABONBA_PTR_SET_VALUE(prerequisites_, prerequisites) };
    inline VerifyPlaybookResponseBody& setPrerequisites(vector<VerifyPlaybookResponseBody::Prerequisites> && prerequisites) { DARABONBA_PTR_SET_RVALUE(prerequisites_, prerequisites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The verification results.
    shared_ptr<vector<VerifyPlaybookResponseBody::CheckTaskInfos>> checkTaskInfos_ {};
    // The prerequisite check information for the playbook.
    shared_ptr<vector<VerifyPlaybookResponseBody::Prerequisites>> prerequisites_ {};
    // The ID of the request. Alibaba Cloud generates this unique identifier for the request. Use this ID to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
