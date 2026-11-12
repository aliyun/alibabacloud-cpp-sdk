// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFIREWALLRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFIREWALLRULESRESPONSEBODY_HPP_
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
  class ListFirewallRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFirewallRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallRules, firewallRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFirewallRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallRules, firewallRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFirewallRulesResponseBody() = default ;
    ListFirewallRulesResponseBody(const ListFirewallRulesResponseBody &) = default ;
    ListFirewallRulesResponseBody(ListFirewallRulesResponseBody &&) = default ;
    ListFirewallRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFirewallRulesResponseBody() = default ;
    ListFirewallRulesResponseBody& operator=(const ListFirewallRulesResponseBody &) = default ;
    ListFirewallRulesResponseBody& operator=(ListFirewallRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallRules& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallRules& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      FirewallRules() = default ;
      FirewallRules(const FirewallRules &) = default ;
      FirewallRules(FirewallRules &&) = default ;
      FirewallRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallRules() = default ;
      FirewallRules& operator=(const FirewallRules &) = default ;
      FirewallRules& operator=(FirewallRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the firewall rule.
        shared_ptr<string> key_ {};
        // The tag value of the firewall rule.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->policy_ == nullptr && this->port_ == nullptr && this->remark_ == nullptr && this->ruleId_ == nullptr && this->ruleProtocol_ == nullptr
        && this->sourceCidrIp_ == nullptr && this->tags_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FirewallRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline FirewallRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline FirewallRules& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline FirewallRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline FirewallRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline FirewallRules& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline FirewallRules& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<FirewallRules::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<FirewallRules::Tags>) };
      inline vector<FirewallRules::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<FirewallRules::Tags>) };
      inline FirewallRules& setTags(const vector<FirewallRules::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline FirewallRules& setTags(vector<FirewallRules::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the simple application server to which the firewall rule belongs.
      shared_ptr<string> instanceId_ {};
      // The firewall policy. Valid values:
      // 
      // - accept: Allow.
      // 
      // - drop: Deny.
      shared_ptr<string> policy_ {};
      // The port range.
      shared_ptr<string> port_ {};
      // The remark of the firewall rule.
      shared_ptr<string> remark_ {};
      // The ID of the firewall rule.
      shared_ptr<string> ruleId_ {};
      // The transport layer protocol. Valid values:
      // 
      // - TCP: TCP.
      // - UDP: UDP.
      // - TCP+UDP: TCP and UDP.
      shared_ptr<string> ruleProtocol_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidrIp_ {};
      // The tags of the firewall rules.
      shared_ptr<vector<FirewallRules::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->firewallRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // firewallRules Field Functions 
    bool hasFirewallRules() const { return this->firewallRules_ != nullptr;};
    void deleteFirewallRules() { this->firewallRules_ = nullptr;};
    inline const vector<ListFirewallRulesResponseBody::FirewallRules> & getFirewallRules() const { DARABONBA_PTR_GET_CONST(firewallRules_, vector<ListFirewallRulesResponseBody::FirewallRules>) };
    inline vector<ListFirewallRulesResponseBody::FirewallRules> getFirewallRules() { DARABONBA_PTR_GET(firewallRules_, vector<ListFirewallRulesResponseBody::FirewallRules>) };
    inline ListFirewallRulesResponseBody& setFirewallRules(const vector<ListFirewallRulesResponseBody::FirewallRules> & firewallRules) { DARABONBA_PTR_SET_VALUE(firewallRules_, firewallRules) };
    inline ListFirewallRulesResponseBody& setFirewallRules(vector<ListFirewallRulesResponseBody::FirewallRules> && firewallRules) { DARABONBA_PTR_SET_RVALUE(firewallRules_, firewallRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFirewallRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFirewallRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFirewallRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFirewallRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of firewall rules.
    shared_ptr<vector<ListFirewallRulesResponseBody::FirewallRules>> firewallRules_ {};
    // The page number of the firewall rule list.
    shared_ptr<int32_t> pageNumber_ {};
    // The paging Settings for the number of entries per page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of firewall rules.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
