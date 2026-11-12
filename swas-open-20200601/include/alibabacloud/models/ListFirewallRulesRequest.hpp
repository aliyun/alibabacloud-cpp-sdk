// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFIREWALLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFIREWALLRULESREQUEST_HPP_
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
  class ListFirewallRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFirewallRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallRuleId, firewallRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListFirewallRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallRuleId, firewallRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListFirewallRulesRequest() = default ;
    ListFirewallRulesRequest(const ListFirewallRulesRequest &) = default ;
    ListFirewallRulesRequest(ListFirewallRulesRequest &&) = default ;
    ListFirewallRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFirewallRulesRequest() = default ;
    ListFirewallRulesRequest& operator=(const ListFirewallRulesRequest &) = default ;
    ListFirewallRulesRequest& operator=(ListFirewallRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the firewall rule. The tag key must be 1 to 64 characters in length. Valid values of N: 1 to 20.
      shared_ptr<string> key_ {};
      // The tag value of the firewall rule. The tag value must be 1 to 64 characters in length. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->firewallRuleId_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // firewallRuleId Field Functions 
    bool hasFirewallRuleId() const { return this->firewallRuleId_ != nullptr;};
    void deleteFirewallRuleId() { this->firewallRuleId_ = nullptr;};
    inline string getFirewallRuleId() const { DARABONBA_PTR_GET_DEFAULT(firewallRuleId_, "") };
    inline ListFirewallRulesRequest& setFirewallRuleId(string firewallRuleId) { DARABONBA_PTR_SET_VALUE(firewallRuleId_, firewallRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFirewallRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFirewallRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFirewallRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListFirewallRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListFirewallRulesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListFirewallRulesRequest::Tag>) };
    inline vector<ListFirewallRulesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListFirewallRulesRequest::Tag>) };
    inline ListFirewallRulesRequest& setTag(const vector<ListFirewallRulesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListFirewallRulesRequest& setTag(vector<ListFirewallRulesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the firewall rule.
    shared_ptr<string> firewallRuleId_ {};
    // The instance ID of the specified simple application server.
    shared_ptr<string> instanceId_ {};
    // The page number of the firewall rule list.
    // 
    // Starting value: 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The paging Settings for the number of entries per page in a paged query.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tags of the firewall rules.
    shared_ptr<vector<ListFirewallRulesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
