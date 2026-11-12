// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATERULESAPPLYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATERULESAPPLYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeFirewallTemplateRulesApplyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTemplateRulesApplyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTemplateRulesApplyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeFirewallTemplateRulesApplyResultResponseBody() = default ;
    DescribeFirewallTemplateRulesApplyResultResponseBody(const DescribeFirewallTemplateRulesApplyResultResponseBody &) = default ;
    DescribeFirewallTemplateRulesApplyResultResponseBody(DescribeFirewallTemplateRulesApplyResultResponseBody &&) = default ;
    DescribeFirewallTemplateRulesApplyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTemplateRulesApplyResultResponseBody() = default ;
    DescribeFirewallTemplateRulesApplyResultResponseBody& operator=(const DescribeFirewallTemplateRulesApplyResultResponseBody &) = default ;
    DescribeFirewallTemplateRulesApplyResultResponseBody& operator=(DescribeFirewallTemplateRulesApplyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorInfo_ == nullptr && this->port_ == nullptr && this->remark_ == nullptr && this->ruleProtocol_ == nullptr && this->sourceCidrIp_ == nullptr
        && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline Data& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Data& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline Data& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline Data& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error codes when the firewall template rule fails to be applied.
      shared_ptr<string> errorCode_ {};
      // The error message that is displayed when the firewall template rule fails to be applied.
      shared_ptr<string> errorInfo_ {};
      // The port range. Valid values: 1 to 65535. Specify a port range in the format of \\<start port number>/\\<end port number>. Example: `1024/1055`, which indicates that the port range of 1024 to 1055.
      // 
      // > If you set RuleProtocol to ICMP, you must set Port to -1/-1.
      shared_ptr<string> port_ {};
      // The remarks of the firewall rule.
      shared_ptr<string> remark_ {};
      // The transport layer protocol that the rule supports. Valid values:
      // 
      // - TCP
      // 
      // - UDP
      // 
      // - TCP+UDP
      // 
      // - ICMP
      shared_ptr<string> ruleProtocol_ {};
      // The source address to which you want to grant access permissions. CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The status of applying the firewall template rule to the simple application servers.
      // 
      // - Pending: The template rule does not start to be applied to the simple application servers.
      // 
      // - Applying: The template rule is being applied to the simple application servers.
      // 
      // - Success: The template rule is successfully applied to the simple application servers.
      // 
      // - PartFailed: The template rule fails to be applied to some simple application servers.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallTemplateRulesApplyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data>) };
    inline vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data>) };
    inline DescribeFirewallTemplateRulesApplyResultResponseBody& setData(const vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFirewallTemplateRulesApplyResultResponseBody& setData(vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<DescribeFirewallTemplateRulesApplyResultResponseBody::Data>> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
