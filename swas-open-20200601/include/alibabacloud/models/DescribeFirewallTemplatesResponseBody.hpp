// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATESRESPONSEBODY_HPP_
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
  class DescribeFirewallTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallTemplates, firewallTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallTemplates, firewallTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFirewallTemplatesResponseBody() = default ;
    DescribeFirewallTemplatesResponseBody(const DescribeFirewallTemplatesResponseBody &) = default ;
    DescribeFirewallTemplatesResponseBody(DescribeFirewallTemplatesResponseBody &&) = default ;
    DescribeFirewallTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTemplatesResponseBody() = default ;
    DescribeFirewallTemplatesResponseBody& operator=(const DescribeFirewallTemplatesResponseBody &) = default ;
    DescribeFirewallTemplatesResponseBody& operator=(DescribeFirewallTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
        DARABONBA_PTR_TO_JSON(FirewallTemplateRules, firewallTemplateRules_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
        DARABONBA_PTR_FROM_JSON(FirewallTemplateRules, firewallTemplateRules_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      FirewallTemplates() = default ;
      FirewallTemplates(const FirewallTemplates &) = default ;
      FirewallTemplates(FirewallTemplates &&) = default ;
      FirewallTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallTemplates() = default ;
      FirewallTemplates& operator=(const FirewallTemplates &) = default ;
      FirewallTemplates& operator=(FirewallTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FirewallTemplateRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FirewallTemplateRules& obj) { 
          DARABONBA_PTR_TO_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
          DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        };
        friend void from_json(const Darabonba::Json& j, FirewallTemplateRules& obj) { 
          DARABONBA_PTR_FROM_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
          DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        };
        FirewallTemplateRules() = default ;
        FirewallTemplateRules(const FirewallTemplateRules &) = default ;
        FirewallTemplateRules(FirewallTemplateRules &&) = default ;
        FirewallTemplateRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FirewallTemplateRules() = default ;
        FirewallTemplateRules& operator=(const FirewallTemplateRules &) = default ;
        FirewallTemplateRules& operator=(FirewallTemplateRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firewallTemplateRuleId_ == nullptr
        && this->port_ == nullptr && this->remark_ == nullptr && this->ruleProtocol_ == nullptr && this->sourceCidrIp_ == nullptr; };
        // firewallTemplateRuleId Field Functions 
        bool hasFirewallTemplateRuleId() const { return this->firewallTemplateRuleId_ != nullptr;};
        void deleteFirewallTemplateRuleId() { this->firewallTemplateRuleId_ = nullptr;};
        inline string getFirewallTemplateRuleId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateRuleId_, "") };
        inline FirewallTemplateRules& setFirewallTemplateRuleId(string firewallTemplateRuleId) { DARABONBA_PTR_SET_VALUE(firewallTemplateRuleId_, firewallTemplateRuleId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline FirewallTemplateRules& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline FirewallTemplateRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // ruleProtocol Field Functions 
        bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
        void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
        inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
        inline FirewallTemplateRules& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


        // sourceCidrIp Field Functions 
        bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
        void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
        inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
        inline FirewallTemplateRules& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      protected:
        // The ID of the firewall template rule.
        shared_ptr<string> firewallTemplateRuleId_ {};
        // The port range. Valid values: 1 to 65535. Specify a port range in the format of \\<start port number>/\\<end port number>. Example: `1024/1055`, which indicates that the port range of 1024 to 1055.
        // 
        // >  If you set RuleProtocol to ICMP, you must set Port to -1/-1.
        shared_ptr<string> port_ {};
        // The remarks of the firewall template rule.
        shared_ptr<string> remark_ {};
        // The transport layer protocol that the rule supports. Valid values:
        // 
        // *   TCP
        // *   UDP
        // *   TCP+UDP
        // *   ICMP
        shared_ptr<string> ruleProtocol_ {};
        // The source address to which you want to grant access permissions. CIDR blocks and IPv4 addresses are supported.
        shared_ptr<string> sourceCidrIp_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->firewallTemplateId_ == nullptr && this->firewallTemplateRules_ == nullptr && this->name_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FirewallTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline FirewallTemplates& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FirewallTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // firewallTemplateId Field Functions 
      bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
      void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
      inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
      inline FirewallTemplates& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


      // firewallTemplateRules Field Functions 
      bool hasFirewallTemplateRules() const { return this->firewallTemplateRules_ != nullptr;};
      void deleteFirewallTemplateRules() { this->firewallTemplateRules_ = nullptr;};
      inline const vector<FirewallTemplates::FirewallTemplateRules> & getFirewallTemplateRules() const { DARABONBA_PTR_GET_CONST(firewallTemplateRules_, vector<FirewallTemplates::FirewallTemplateRules>) };
      inline vector<FirewallTemplates::FirewallTemplateRules> getFirewallTemplateRules() { DARABONBA_PTR_GET(firewallTemplateRules_, vector<FirewallTemplates::FirewallTemplateRules>) };
      inline FirewallTemplates& setFirewallTemplateRules(const vector<FirewallTemplates::FirewallTemplateRules> & firewallTemplateRules) { DARABONBA_PTR_SET_VALUE(firewallTemplateRules_, firewallTemplateRules) };
      inline FirewallTemplates& setFirewallTemplateRules(vector<FirewallTemplates::FirewallTemplateRules> && firewallTemplateRules) { DARABONBA_PTR_SET_RVALUE(firewallTemplateRules_, firewallTemplateRules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FirewallTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The time when the firewall template was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      // 
      // >  The time displayed in the Simple Application Server console is in the format of UTC+8.
      shared_ptr<string> createTime_ {};
      // The time when the firewall template was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the firewall template.
      shared_ptr<string> description_ {};
      // The ID of the firewall template.
      shared_ptr<string> firewallTemplateId_ {};
      // The details of the firewall template rules.
      shared_ptr<vector<FirewallTemplates::FirewallTemplateRules>> firewallTemplateRules_ {};
      // The name of the firewall template.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->firewallTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // firewallTemplates Field Functions 
    bool hasFirewallTemplates() const { return this->firewallTemplates_ != nullptr;};
    void deleteFirewallTemplates() { this->firewallTemplates_ = nullptr;};
    inline const vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates> & getFirewallTemplates() const { DARABONBA_PTR_GET_CONST(firewallTemplates_, vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates>) };
    inline vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates> getFirewallTemplates() { DARABONBA_PTR_GET(firewallTemplates_, vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates>) };
    inline DescribeFirewallTemplatesResponseBody& setFirewallTemplates(const vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates> & firewallTemplates) { DARABONBA_PTR_SET_VALUE(firewallTemplates_, firewallTemplates) };
    inline DescribeFirewallTemplatesResponseBody& setFirewallTemplates(vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates> && firewallTemplates) { DARABONBA_PTR_SET_RVALUE(firewallTemplates_, firewallTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFirewallTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFirewallTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFirewallTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the queried firewall templates.
    shared_ptr<vector<DescribeFirewallTemplatesResponseBody::FirewallTemplates>> firewallTemplates_ {};
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
