// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VServerGroups, VServerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VServerGroups, VServerGroups_);
    };
    DescribeVServerGroupsResponseBody() = default ;
    DescribeVServerGroupsResponseBody(const DescribeVServerGroupsResponseBody &) = default ;
    DescribeVServerGroupsResponseBody(DescribeVServerGroupsResponseBody &&) = default ;
    DescribeVServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBody() = default ;
    DescribeVServerGroupsResponseBody& operator=(const DescribeVServerGroupsResponseBody &) = default ;
    DescribeVServerGroupsResponseBody& operator=(DescribeVServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(VServerGroup, VServerGroup_);
      };
      friend void from_json(const Darabonba::Json& j, VServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(VServerGroup, VServerGroup_);
      };
      VServerGroups() = default ;
      VServerGroups(const VServerGroups &) = default ;
      VServerGroups(VServerGroups &&) = default ;
      VServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VServerGroups() = default ;
      VServerGroups& operator=(const VServerGroups &) = default ;
      VServerGroups& operator=(VServerGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VServerGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VServerGroup& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedObjects, associatedObjects_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
          DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, VServerGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedObjects, associatedObjects_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
          DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
        };
        VServerGroup() = default ;
        VServerGroup(const VServerGroup &) = default ;
        VServerGroup(VServerGroup &&) = default ;
        VServerGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VServerGroup() = default ;
        VServerGroup& operator=(const VServerGroup &) = default ;
        VServerGroup& operator=(VServerGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class AssociatedObjects : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedObjects& obj) { 
            DARABONBA_PTR_TO_JSON(Listeners, listeners_);
            DARABONBA_PTR_TO_JSON(Rules, rules_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedObjects& obj) { 
            DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
            DARABONBA_PTR_FROM_JSON(Rules, rules_);
          };
          AssociatedObjects() = default ;
          AssociatedObjects(const AssociatedObjects &) = default ;
          AssociatedObjects(AssociatedObjects &&) = default ;
          AssociatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedObjects() = default ;
          AssociatedObjects& operator=(const AssociatedObjects &) = default ;
          AssociatedObjects& operator=(AssociatedObjects &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rules& obj) { 
              DARABONBA_PTR_TO_JSON(Rule, rule_);
            };
            friend void from_json(const Darabonba::Json& j, Rules& obj) { 
              DARABONBA_PTR_FROM_JSON(Rule, rule_);
            };
            Rules() = default ;
            Rules(const Rules &) = default ;
            Rules(Rules &&) = default ;
            Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rules() = default ;
            Rules& operator=(const Rules &) = default ;
            Rules& operator=(Rules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Rule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Rule& obj) { 
                DARABONBA_PTR_TO_JSON(Domain, domain_);
                DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
                DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
                DARABONBA_PTR_TO_JSON(Url, url_);
              };
              friend void from_json(const Darabonba::Json& j, Rule& obj) { 
                DARABONBA_PTR_FROM_JSON(Domain, domain_);
                DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
                DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
                DARABONBA_PTR_FROM_JSON(Url, url_);
              };
              Rule() = default ;
              Rule(const Rule &) = default ;
              Rule(Rule &&) = default ;
              Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Rule() = default ;
              Rule& operator=(const Rule &) = default ;
              Rule& operator=(Rule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->domain_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->url_ == nullptr; };
              // domain Field Functions 
              bool hasDomain() const { return this->domain_ != nullptr;};
              void deleteDomain() { this->domain_ = nullptr;};
              inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
              inline Rule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


              // ruleId Field Functions 
              bool hasRuleId() const { return this->ruleId_ != nullptr;};
              void deleteRuleId() { this->ruleId_ = nullptr;};
              inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
              inline Rule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


              // ruleName Field Functions 
              bool hasRuleName() const { return this->ruleName_ != nullptr;};
              void deleteRuleName() { this->ruleName_ = nullptr;};
              inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
              inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline Rule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            protected:
              shared_ptr<string> domain_ {};
              shared_ptr<string> ruleId_ {};
              shared_ptr<string> ruleName_ {};
              shared_ptr<string> url_ {};
            };

            virtual bool empty() const override { return this->rule_ == nullptr; };
            // rule Field Functions 
            bool hasRule() const { return this->rule_ != nullptr;};
            void deleteRule() { this->rule_ = nullptr;};
            inline const vector<Rules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Rules::Rule>) };
            inline vector<Rules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<Rules::Rule>) };
            inline Rules& setRule(const vector<Rules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
            inline Rules& setRule(vector<Rules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


          protected:
            shared_ptr<vector<Rules::Rule>> rule_ {};
          };

          class Listeners : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
              DARABONBA_PTR_TO_JSON(Listener, listener_);
            };
            friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
              DARABONBA_PTR_FROM_JSON(Listener, listener_);
            };
            Listeners() = default ;
            Listeners(const Listeners &) = default ;
            Listeners(Listeners &&) = default ;
            Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Listeners() = default ;
            Listeners& operator=(const Listeners &) = default ;
            Listeners& operator=(Listeners &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Listener : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Listener& obj) { 
                DARABONBA_PTR_TO_JSON(Port, port_);
                DARABONBA_PTR_TO_JSON(Protocol, protocol_);
              };
              friend void from_json(const Darabonba::Json& j, Listener& obj) { 
                DARABONBA_PTR_FROM_JSON(Port, port_);
                DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
              };
              Listener() = default ;
              Listener(const Listener &) = default ;
              Listener(Listener &&) = default ;
              Listener(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Listener() = default ;
              Listener& operator=(const Listener &) = default ;
              Listener& operator=(Listener &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
              // port Field Functions 
              bool hasPort() const { return this->port_ != nullptr;};
              void deletePort() { this->port_ = nullptr;};
              inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
              inline Listener& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


              // protocol Field Functions 
              bool hasProtocol() const { return this->protocol_ != nullptr;};
              void deleteProtocol() { this->protocol_ = nullptr;};
              inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
              inline Listener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


            protected:
              shared_ptr<int32_t> port_ {};
              shared_ptr<string> protocol_ {};
            };

            virtual bool empty() const override { return this->listener_ == nullptr; };
            // listener Field Functions 
            bool hasListener() const { return this->listener_ != nullptr;};
            void deleteListener() { this->listener_ = nullptr;};
            inline const vector<Listeners::Listener> & getListener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Listeners::Listener>) };
            inline vector<Listeners::Listener> getListener() { DARABONBA_PTR_GET(listener_, vector<Listeners::Listener>) };
            inline Listeners& setListener(const vector<Listeners::Listener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
            inline Listeners& setListener(vector<Listeners::Listener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


          protected:
            shared_ptr<vector<Listeners::Listener>> listener_ {};
          };

          virtual bool empty() const override { return this->listeners_ == nullptr
        && this->rules_ == nullptr; };
          // listeners Field Functions 
          bool hasListeners() const { return this->listeners_ != nullptr;};
          void deleteListeners() { this->listeners_ = nullptr;};
          inline const AssociatedObjects::Listeners & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, AssociatedObjects::Listeners) };
          inline AssociatedObjects::Listeners getListeners() { DARABONBA_PTR_GET(listeners_, AssociatedObjects::Listeners) };
          inline AssociatedObjects& setListeners(const AssociatedObjects::Listeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
          inline AssociatedObjects& setListeners(AssociatedObjects::Listeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


          // rules Field Functions 
          bool hasRules() const { return this->rules_ != nullptr;};
          void deleteRules() { this->rules_ = nullptr;};
          inline const AssociatedObjects::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, AssociatedObjects::Rules) };
          inline AssociatedObjects::Rules getRules() { DARABONBA_PTR_GET(rules_, AssociatedObjects::Rules) };
          inline AssociatedObjects& setRules(const AssociatedObjects::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
          inline AssociatedObjects& setRules(AssociatedObjects::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        protected:
          shared_ptr<AssociatedObjects::Listeners> listeners_ {};
          shared_ptr<AssociatedObjects::Rules> rules_ {};
        };

        virtual bool empty() const override { return this->associatedObjects_ == nullptr
        && this->createTime_ == nullptr && this->serverCount_ == nullptr && this->tags_ == nullptr && this->VServerGroupId_ == nullptr && this->VServerGroupName_ == nullptr; };
        // associatedObjects Field Functions 
        bool hasAssociatedObjects() const { return this->associatedObjects_ != nullptr;};
        void deleteAssociatedObjects() { this->associatedObjects_ = nullptr;};
        inline const VServerGroup::AssociatedObjects & getAssociatedObjects() const { DARABONBA_PTR_GET_CONST(associatedObjects_, VServerGroup::AssociatedObjects) };
        inline VServerGroup::AssociatedObjects getAssociatedObjects() { DARABONBA_PTR_GET(associatedObjects_, VServerGroup::AssociatedObjects) };
        inline VServerGroup& setAssociatedObjects(const VServerGroup::AssociatedObjects & associatedObjects) { DARABONBA_PTR_SET_VALUE(associatedObjects_, associatedObjects) };
        inline VServerGroup& setAssociatedObjects(VServerGroup::AssociatedObjects && associatedObjects) { DARABONBA_PTR_SET_RVALUE(associatedObjects_, associatedObjects) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline VServerGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // serverCount Field Functions 
        bool hasServerCount() const { return this->serverCount_ != nullptr;};
        void deleteServerCount() { this->serverCount_ = nullptr;};
        inline int64_t getServerCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0L) };
        inline VServerGroup& setServerCount(int64_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const VServerGroup::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, VServerGroup::Tags) };
        inline VServerGroup::Tags getTags() { DARABONBA_PTR_GET(tags_, VServerGroup::Tags) };
        inline VServerGroup& setTags(const VServerGroup::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline VServerGroup& setTags(VServerGroup::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline VServerGroup& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


        // VServerGroupName Field Functions 
        bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
        void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
        inline string getVServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
        inline VServerGroup& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


      protected:
        shared_ptr<VServerGroup::AssociatedObjects> associatedObjects_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> serverCount_ {};
        shared_ptr<VServerGroup::Tags> tags_ {};
        shared_ptr<string> VServerGroupId_ {};
        shared_ptr<string> VServerGroupName_ {};
      };

      virtual bool empty() const override { return this->VServerGroup_ == nullptr; };
      // VServerGroup Field Functions 
      bool hasVServerGroup() const { return this->VServerGroup_ != nullptr;};
      void deleteVServerGroup() { this->VServerGroup_ = nullptr;};
      inline const vector<VServerGroups::VServerGroup> & getVServerGroup() const { DARABONBA_PTR_GET_CONST(VServerGroup_, vector<VServerGroups::VServerGroup>) };
      inline vector<VServerGroups::VServerGroup> getVServerGroup() { DARABONBA_PTR_GET(VServerGroup_, vector<VServerGroups::VServerGroup>) };
      inline VServerGroups& setVServerGroup(const vector<VServerGroups::VServerGroup> & vServerGroup) { DARABONBA_PTR_SET_VALUE(VServerGroup_, vServerGroup) };
      inline VServerGroups& setVServerGroup(vector<VServerGroups::VServerGroup> && vServerGroup) { DARABONBA_PTR_SET_RVALUE(VServerGroup_, vServerGroup) };


    protected:
      shared_ptr<vector<VServerGroups::VServerGroup>> VServerGroup_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->VServerGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const DescribeVServerGroupsResponseBody::VServerGroups & getVServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, DescribeVServerGroupsResponseBody::VServerGroups) };
    inline DescribeVServerGroupsResponseBody::VServerGroups getVServerGroups() { DARABONBA_PTR_GET(VServerGroups_, DescribeVServerGroupsResponseBody::VServerGroups) };
    inline DescribeVServerGroupsResponseBody& setVServerGroups(const DescribeVServerGroupsResponseBody::VServerGroups & vServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, vServerGroups) };
    inline DescribeVServerGroupsResponseBody& setVServerGroups(DescribeVServerGroupsResponseBody::VServerGroups && vServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, vServerGroups) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeVServerGroupsResponseBody::VServerGroups> VServerGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
