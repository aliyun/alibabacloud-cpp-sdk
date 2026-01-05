// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    UpdateRuleAttributeRequest() = default ;
    UpdateRuleAttributeRequest(const UpdateRuleAttributeRequest &) = default ;
    UpdateRuleAttributeRequest(UpdateRuleAttributeRequest &&) = default ;
    UpdateRuleAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequest() = default ;
    UpdateRuleAttributeRequest& operator=(const UpdateRuleAttributeRequest &) = default ;
    UpdateRuleAttributeRequest& operator=(UpdateRuleAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleConditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleConditions& obj) { 
        DARABONBA_PTR_TO_JSON(CookieConfig, cookieConfig_);
        DARABONBA_PTR_TO_JSON(HeaderConfig, headerConfig_);
        DARABONBA_PTR_TO_JSON(HostConfig, hostConfig_);
        DARABONBA_PTR_TO_JSON(MethodConfig, methodConfig_);
        DARABONBA_PTR_TO_JSON(PathConfig, pathConfig_);
        DARABONBA_PTR_TO_JSON(QueryStringConfig, queryStringConfig_);
        DARABONBA_PTR_TO_JSON(ResponseHeaderConfig, responseHeaderConfig_);
        DARABONBA_PTR_TO_JSON(ResponseStatusCodeConfig, responseStatusCodeConfig_);
        DARABONBA_PTR_TO_JSON(SourceIpConfig, sourceIpConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RuleConditions& obj) { 
        DARABONBA_PTR_FROM_JSON(CookieConfig, cookieConfig_);
        DARABONBA_PTR_FROM_JSON(HeaderConfig, headerConfig_);
        DARABONBA_PTR_FROM_JSON(HostConfig, hostConfig_);
        DARABONBA_PTR_FROM_JSON(MethodConfig, methodConfig_);
        DARABONBA_PTR_FROM_JSON(PathConfig, pathConfig_);
        DARABONBA_PTR_FROM_JSON(QueryStringConfig, queryStringConfig_);
        DARABONBA_PTR_FROM_JSON(ResponseHeaderConfig, responseHeaderConfig_);
        DARABONBA_PTR_FROM_JSON(ResponseStatusCodeConfig, responseStatusCodeConfig_);
        DARABONBA_PTR_FROM_JSON(SourceIpConfig, sourceIpConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RuleConditions() = default ;
      RuleConditions(const RuleConditions &) = default ;
      RuleConditions(RuleConditions &&) = default ;
      RuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleConditions() = default ;
      RuleConditions& operator=(const RuleConditions &) = default ;
      RuleConditions& operator=(RuleConditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceIpConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceIpConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, SourceIpConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        SourceIpConfig() = default ;
        SourceIpConfig(const SourceIpConfig &) = default ;
        SourceIpConfig(SourceIpConfig &&) = default ;
        SourceIpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceIpConfig() = default ;
        SourceIpConfig& operator=(const SourceIpConfig &) = default ;
        SourceIpConfig& operator=(SourceIpConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline SourceIpConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline SourceIpConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // You can add one or more IP addresses, including CIDR blocks.
        shared_ptr<vector<string>> values_ {};
      };

      class ResponseStatusCodeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseStatusCodeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseStatusCodeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        ResponseStatusCodeConfig() = default ;
        ResponseStatusCodeConfig(const ResponseStatusCodeConfig &) = default ;
        ResponseStatusCodeConfig(ResponseStatusCodeConfig &&) = default ;
        ResponseStatusCodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseStatusCodeConfig() = default ;
        ResponseStatusCodeConfig& operator=(const ResponseStatusCodeConfig &) = default ;
        ResponseStatusCodeConfig& operator=(ResponseStatusCodeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline ResponseStatusCodeConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline ResponseStatusCodeConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The response status codes.
        shared_ptr<vector<string>> values_ {};
      };

      class ResponseHeaderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseHeaderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseHeaderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        ResponseHeaderConfig() = default ;
        ResponseHeaderConfig(const ResponseHeaderConfig &) = default ;
        ResponseHeaderConfig(ResponseHeaderConfig &&) = default ;
        ResponseHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseHeaderConfig() = default ;
        ResponseHeaderConfig& operator=(const ResponseHeaderConfig &) = default ;
        ResponseHeaderConfig& operator=(ResponseHeaderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ResponseHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline ResponseHeaderConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline ResponseHeaderConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The header key.
        // 
        // *   The key must be 1 to 40 characters in length.
        // *   It can contain letters, digits, hyphens (-), and underscores (_).
        // *   Cookie and Host are not supported.
        shared_ptr<string> key_ {};
        // The header values.
        shared_ptr<vector<string>> values_ {};
      };

      class QueryStringConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryStringConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, QueryStringConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        QueryStringConfig() = default ;
        QueryStringConfig(const QueryStringConfig &) = default ;
        QueryStringConfig(QueryStringConfig &&) = default ;
        QueryStringConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryStringConfig() = default ;
        QueryStringConfig& operator=(const QueryStringConfig &) = default ;
        QueryStringConfig& operator=(QueryStringConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Values() = default ;
          Values(const Values &) = default ;
          Values(Values &&) = default ;
          Values(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Values() = default ;
          Values& operator=(const Values &) = default ;
          Values& operator=(Values &&) = default ;
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
          inline Values& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the query string. The key must be 1 to 100 characters in length, and can contain printable characters such as lowercase letters, asterisks (\\*), and question marks (?). The key cannot contain uppercase letters, space characters, or the following special characters: `# [ ] { } \\ | < > & "`.
          shared_ptr<string> key_ {};
          // The value of the query string. The value must be 1 to 128 characters in length, and can contain printable characters such as lowercase letters, asterisks (\\*), and question marks (?). The value cannot contain uppercase letters, space characters, or the following special characters: `# [ ] { } \\ | < > & "`.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<QueryStringConfig::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<QueryStringConfig::Values>) };
        inline vector<QueryStringConfig::Values> getValues() { DARABONBA_PTR_GET(values_, vector<QueryStringConfig::Values>) };
        inline QueryStringConfig& setValues(const vector<QueryStringConfig::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline QueryStringConfig& setValues(vector<QueryStringConfig::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The query strings. You can specify up to 20 query strings.
        shared_ptr<vector<QueryStringConfig::Values>> values_ {};
      };

      class PathConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, PathConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        PathConfig() = default ;
        PathConfig(const PathConfig &) = default ;
        PathConfig(PathConfig &&) = default ;
        PathConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathConfig() = default ;
        PathConfig& operator=(const PathConfig &) = default ;
        PathConfig& operator=(PathConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline PathConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline PathConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The forwarding URLs.
        shared_ptr<vector<string>> values_ {};
      };

      class MethodConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MethodConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, MethodConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        MethodConfig() = default ;
        MethodConfig(const MethodConfig &) = default ;
        MethodConfig(MethodConfig &&) = default ;
        MethodConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MethodConfig() = default ;
        MethodConfig& operator=(const MethodConfig &) = default ;
        MethodConfig& operator=(MethodConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline MethodConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline MethodConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The request methods.
        shared_ptr<vector<string>> values_ {};
      };

      class HostConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, HostConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        HostConfig() = default ;
        HostConfig(const HostConfig &) = default ;
        HostConfig(HostConfig &&) = default ;
        HostConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostConfig() = default ;
        HostConfig& operator=(const HostConfig &) = default ;
        HostConfig& operator=(HostConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline HostConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline HostConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The hostnames.
        shared_ptr<vector<string>> values_ {};
      };

      class HeaderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HeaderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, HeaderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        HeaderConfig() = default ;
        HeaderConfig(const HeaderConfig &) = default ;
        HeaderConfig(HeaderConfig &&) = default ;
        HeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HeaderConfig() = default ;
        HeaderConfig& operator=(const HeaderConfig &) = default ;
        HeaderConfig& operator=(HeaderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline HeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline HeaderConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline HeaderConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The header key. The header key must be 1 to 40 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). Cookie and Host are not supported.
        shared_ptr<string> key_ {};
        // The header values.
        shared_ptr<vector<string>> values_ {};
      };

      class CookieConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CookieConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, CookieConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        CookieConfig() = default ;
        CookieConfig(const CookieConfig &) = default ;
        CookieConfig(CookieConfig &&) = default ;
        CookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CookieConfig() = default ;
        CookieConfig& operator=(const CookieConfig &) = default ;
        CookieConfig& operator=(CookieConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Values() = default ;
          Values(const Values &) = default ;
          Values(Values &&) = default ;
          Values(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Values() = default ;
          Values& operator=(const Values &) = default ;
          Values& operator=(Values &&) = default ;
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
          inline Values& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The cookie key. The key must be 1 to 100 characters in length, and can contain printable characters such as lowercase letters, asterisks (\\*), and question marks (?). The key cannot contain uppercase letters, space characters, or the following special characters: `# [ ] { } \\ | < > & " ;`.
          shared_ptr<string> key_ {};
          // The cookie value. The cookie value must be 1 to 128 characters in length, and can contain lowercase letters, printable ASCII characters, asterisks (\\*), and question marks (?). It cannot contain space characters or the following special characters: `# [ ] { } \\ | < > &`.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<CookieConfig::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<CookieConfig::Values>) };
        inline vector<CookieConfig::Values> getValues() { DARABONBA_PTR_GET(values_, vector<CookieConfig::Values>) };
        inline CookieConfig& setValues(const vector<CookieConfig::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline CookieConfig& setValues(vector<CookieConfig::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The key-value pairs of the cookie.
        shared_ptr<vector<CookieConfig::Values>> values_ {};
      };

      virtual bool empty() const override { return this->cookieConfig_ == nullptr
        && this->headerConfig_ == nullptr && this->hostConfig_ == nullptr && this->methodConfig_ == nullptr && this->pathConfig_ == nullptr && this->queryStringConfig_ == nullptr
        && this->responseHeaderConfig_ == nullptr && this->responseStatusCodeConfig_ == nullptr && this->sourceIpConfig_ == nullptr && this->type_ == nullptr; };
      // cookieConfig Field Functions 
      bool hasCookieConfig() const { return this->cookieConfig_ != nullptr;};
      void deleteCookieConfig() { this->cookieConfig_ = nullptr;};
      inline const RuleConditions::CookieConfig & getCookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, RuleConditions::CookieConfig) };
      inline RuleConditions::CookieConfig getCookieConfig() { DARABONBA_PTR_GET(cookieConfig_, RuleConditions::CookieConfig) };
      inline RuleConditions& setCookieConfig(const RuleConditions::CookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
      inline RuleConditions& setCookieConfig(RuleConditions::CookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


      // headerConfig Field Functions 
      bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
      void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
      inline const RuleConditions::HeaderConfig & getHeaderConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, RuleConditions::HeaderConfig) };
      inline RuleConditions::HeaderConfig getHeaderConfig() { DARABONBA_PTR_GET(headerConfig_, RuleConditions::HeaderConfig) };
      inline RuleConditions& setHeaderConfig(const RuleConditions::HeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
      inline RuleConditions& setHeaderConfig(RuleConditions::HeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


      // hostConfig Field Functions 
      bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
      void deleteHostConfig() { this->hostConfig_ = nullptr;};
      inline const RuleConditions::HostConfig & getHostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, RuleConditions::HostConfig) };
      inline RuleConditions::HostConfig getHostConfig() { DARABONBA_PTR_GET(hostConfig_, RuleConditions::HostConfig) };
      inline RuleConditions& setHostConfig(const RuleConditions::HostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
      inline RuleConditions& setHostConfig(RuleConditions::HostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


      // methodConfig Field Functions 
      bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
      void deleteMethodConfig() { this->methodConfig_ = nullptr;};
      inline const RuleConditions::MethodConfig & getMethodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, RuleConditions::MethodConfig) };
      inline RuleConditions::MethodConfig getMethodConfig() { DARABONBA_PTR_GET(methodConfig_, RuleConditions::MethodConfig) };
      inline RuleConditions& setMethodConfig(const RuleConditions::MethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
      inline RuleConditions& setMethodConfig(RuleConditions::MethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


      // pathConfig Field Functions 
      bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
      void deletePathConfig() { this->pathConfig_ = nullptr;};
      inline const RuleConditions::PathConfig & getPathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, RuleConditions::PathConfig) };
      inline RuleConditions::PathConfig getPathConfig() { DARABONBA_PTR_GET(pathConfig_, RuleConditions::PathConfig) };
      inline RuleConditions& setPathConfig(const RuleConditions::PathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
      inline RuleConditions& setPathConfig(RuleConditions::PathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


      // queryStringConfig Field Functions 
      bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
      void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
      inline const RuleConditions::QueryStringConfig & getQueryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, RuleConditions::QueryStringConfig) };
      inline RuleConditions::QueryStringConfig getQueryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, RuleConditions::QueryStringConfig) };
      inline RuleConditions& setQueryStringConfig(const RuleConditions::QueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
      inline RuleConditions& setQueryStringConfig(RuleConditions::QueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


      // responseHeaderConfig Field Functions 
      bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
      void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
      inline const RuleConditions::ResponseHeaderConfig & getResponseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, RuleConditions::ResponseHeaderConfig) };
      inline RuleConditions::ResponseHeaderConfig getResponseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, RuleConditions::ResponseHeaderConfig) };
      inline RuleConditions& setResponseHeaderConfig(const RuleConditions::ResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
      inline RuleConditions& setResponseHeaderConfig(RuleConditions::ResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


      // responseStatusCodeConfig Field Functions 
      bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
      void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
      inline const RuleConditions::ResponseStatusCodeConfig & getResponseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, RuleConditions::ResponseStatusCodeConfig) };
      inline RuleConditions::ResponseStatusCodeConfig getResponseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, RuleConditions::ResponseStatusCodeConfig) };
      inline RuleConditions& setResponseStatusCodeConfig(const RuleConditions::ResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
      inline RuleConditions& setResponseStatusCodeConfig(RuleConditions::ResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


      // sourceIpConfig Field Functions 
      bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
      void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
      inline const RuleConditions::SourceIpConfig & getSourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, RuleConditions::SourceIpConfig) };
      inline RuleConditions::SourceIpConfig getSourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, RuleConditions::SourceIpConfig) };
      inline RuleConditions& setSourceIpConfig(const RuleConditions::SourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
      inline RuleConditions& setSourceIpConfig(RuleConditions::SourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The key-value pairs of the cookie.
      shared_ptr<RuleConditions::CookieConfig> cookieConfig_ {};
      // The configuration of the header.
      shared_ptr<RuleConditions::HeaderConfig> headerConfig_ {};
      // The configuration of the hosts.
      shared_ptr<RuleConditions::HostConfig> hostConfig_ {};
      // The configuration of the request method.
      shared_ptr<RuleConditions::MethodConfig> methodConfig_ {};
      // The configuration of the forwarding URL.
      shared_ptr<RuleConditions::PathConfig> pathConfig_ {};
      // The configuration of the query strings.
      shared_ptr<RuleConditions::QueryStringConfig> queryStringConfig_ {};
      // The configuration of headers.
      shared_ptr<RuleConditions::ResponseHeaderConfig> responseHeaderConfig_ {};
      // The configuration of the response status codes.
      shared_ptr<RuleConditions::ResponseStatusCodeConfig> responseStatusCodeConfig_ {};
      // Traffic matching based on source IP addresses. You can specify up to five IP addresses, including CIDR blocks.
      shared_ptr<RuleConditions::SourceIpConfig> sourceIpConfig_ {};
      // The type of forwarding rule. You can specify up to seven types of forwarding rule. Valid values:
      // 
      // *   **Host**: Requests are forwarded based on hosts.
      // *   **Path**: Requests are forwarded based on URLs.
      // *   **Header**: Requests are forwarded based on HTTP headers.
      // *   **QueryString**: Requests are forwarded based on query strings.
      // *   **Method**: Requests are forwarded based on request methods.
      // *   **Cookie**: Requests are forwarded based on cookies.
      // *   **SourceIp**: Requests are forwarded based on source IP addresses.
      // *   **ResponseHeader**: Requests are forwarded based on HTTP response headers.
      // *   **ResponseStatusCode**: Requests are forwarded based on response status codes.
      shared_ptr<string> type_ {};
    };

    class RuleActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleActions& obj) { 
        DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
        DARABONBA_PTR_TO_JSON(FixedResponseConfig, fixedResponseConfig_);
        DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
        DARABONBA_PTR_TO_JSON(InsertHeaderConfig, insertHeaderConfig_);
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(RedirectConfig, redirectConfig_);
        DARABONBA_PTR_TO_JSON(RemoveHeaderConfig, removeHeaderConfig_);
        DARABONBA_PTR_TO_JSON(RewriteConfig, rewriteConfig_);
        DARABONBA_PTR_TO_JSON(TrafficLimitConfig, trafficLimitConfig_);
        DARABONBA_PTR_TO_JSON(TrafficMirrorConfig, trafficMirrorConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RuleActions& obj) { 
        DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
        DARABONBA_PTR_FROM_JSON(FixedResponseConfig, fixedResponseConfig_);
        DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
        DARABONBA_PTR_FROM_JSON(InsertHeaderConfig, insertHeaderConfig_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(RedirectConfig, redirectConfig_);
        DARABONBA_PTR_FROM_JSON(RemoveHeaderConfig, removeHeaderConfig_);
        DARABONBA_PTR_FROM_JSON(RewriteConfig, rewriteConfig_);
        DARABONBA_PTR_FROM_JSON(TrafficLimitConfig, trafficLimitConfig_);
        DARABONBA_PTR_FROM_JSON(TrafficMirrorConfig, trafficMirrorConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RuleActions() = default ;
      RuleActions(const RuleActions &) = default ;
      RuleActions(RuleActions &&) = default ;
      RuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleActions() = default ;
      RuleActions& operator=(const RuleActions &) = default ;
      RuleActions& operator=(RuleActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficMirrorConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficMirrorConfig& obj) { 
          DARABONBA_PTR_TO_JSON(MirrorGroupConfig, mirrorGroupConfig_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficMirrorConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(MirrorGroupConfig, mirrorGroupConfig_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        TrafficMirrorConfig() = default ;
        TrafficMirrorConfig(const TrafficMirrorConfig &) = default ;
        TrafficMirrorConfig(TrafficMirrorConfig &&) = default ;
        TrafficMirrorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficMirrorConfig() = default ;
        TrafficMirrorConfig& operator=(const TrafficMirrorConfig &) = default ;
        TrafficMirrorConfig& operator=(TrafficMirrorConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MirrorGroupConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MirrorGroupConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          friend void from_json(const Darabonba::Json& j, MirrorGroupConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          MirrorGroupConfig() = default ;
          MirrorGroupConfig(const MirrorGroupConfig &) = default ;
          MirrorGroupConfig(MirrorGroupConfig &&) = default ;
          MirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MirrorGroupConfig() = default ;
          MirrorGroupConfig& operator=(const MirrorGroupConfig &) = default ;
          MirrorGroupConfig& operator=(MirrorGroupConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ServerGroupTuples : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServerGroupTuples& obj) { 
              DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, ServerGroupTuples& obj) { 
              DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
            };
            ServerGroupTuples() = default ;
            ServerGroupTuples(const ServerGroupTuples &) = default ;
            ServerGroupTuples(ServerGroupTuples &&) = default ;
            ServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServerGroupTuples() = default ;
            ServerGroupTuples& operator=(const ServerGroupTuples &) = default ;
            ServerGroupTuples& operator=(ServerGroupTuples &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->serverGroupId_ == nullptr; };
            // serverGroupId Field Functions 
            bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
            void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
            inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
            inline ServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


          protected:
            // The server group ID.
            shared_ptr<string> serverGroupId_ {};
          };

          virtual bool empty() const override { return this->serverGroupTuples_ == nullptr; };
          // serverGroupTuples Field Functions 
          bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
          void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
          inline const vector<MirrorGroupConfig::ServerGroupTuples> & getServerGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<MirrorGroupConfig::ServerGroupTuples>) };
          inline vector<MirrorGroupConfig::ServerGroupTuples> getServerGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<MirrorGroupConfig::ServerGroupTuples>) };
          inline MirrorGroupConfig& setServerGroupTuples(const vector<MirrorGroupConfig::ServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
          inline MirrorGroupConfig& setServerGroupTuples(vector<MirrorGroupConfig::ServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


        protected:
          // The server group to which traffic is mirrored.
          shared_ptr<vector<MirrorGroupConfig::ServerGroupTuples>> serverGroupTuples_ {};
        };

        virtual bool empty() const override { return this->mirrorGroupConfig_ == nullptr
        && this->targetType_ == nullptr; };
        // mirrorGroupConfig Field Functions 
        bool hasMirrorGroupConfig() const { return this->mirrorGroupConfig_ != nullptr;};
        void deleteMirrorGroupConfig() { this->mirrorGroupConfig_ = nullptr;};
        inline const TrafficMirrorConfig::MirrorGroupConfig & getMirrorGroupConfig() const { DARABONBA_PTR_GET_CONST(mirrorGroupConfig_, TrafficMirrorConfig::MirrorGroupConfig) };
        inline TrafficMirrorConfig::MirrorGroupConfig getMirrorGroupConfig() { DARABONBA_PTR_GET(mirrorGroupConfig_, TrafficMirrorConfig::MirrorGroupConfig) };
        inline TrafficMirrorConfig& setMirrorGroupConfig(const TrafficMirrorConfig::MirrorGroupConfig & mirrorGroupConfig) { DARABONBA_PTR_SET_VALUE(mirrorGroupConfig_, mirrorGroupConfig) };
        inline TrafficMirrorConfig& setMirrorGroupConfig(TrafficMirrorConfig::MirrorGroupConfig && mirrorGroupConfig) { DARABONBA_PTR_SET_RVALUE(mirrorGroupConfig_, mirrorGroupConfig) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TrafficMirrorConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The server group to which network traffic is mirrored.
        shared_ptr<TrafficMirrorConfig::MirrorGroupConfig> mirrorGroupConfig_ {};
        // The type of destination to which network traffic is mirrored. Valid values:
        // 
        // *   **ForwardGroupMirror**: a server group
        shared_ptr<string> targetType_ {};
      };

      class TrafficLimitConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficLimitConfig& obj) { 
          DARABONBA_PTR_TO_JSON(PerIpQps, perIpQps_);
          DARABONBA_PTR_TO_JSON(QPS, QPS_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficLimitConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(PerIpQps, perIpQps_);
          DARABONBA_PTR_FROM_JSON(QPS, QPS_);
        };
        TrafficLimitConfig() = default ;
        TrafficLimitConfig(const TrafficLimitConfig &) = default ;
        TrafficLimitConfig(TrafficLimitConfig &&) = default ;
        TrafficLimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficLimitConfig() = default ;
        TrafficLimitConfig& operator=(const TrafficLimitConfig &) = default ;
        TrafficLimitConfig& operator=(TrafficLimitConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->perIpQps_ == nullptr
        && this->QPS_ == nullptr; };
        // perIpQps Field Functions 
        bool hasPerIpQps() const { return this->perIpQps_ != nullptr;};
        void deletePerIpQps() { this->perIpQps_ = nullptr;};
        inline int32_t getPerIpQps() const { DARABONBA_PTR_GET_DEFAULT(perIpQps_, 0) };
        inline TrafficLimitConfig& setPerIpQps(int32_t perIpQps) { DARABONBA_PTR_SET_VALUE(perIpQps_, perIpQps) };


        // QPS Field Functions 
        bool hasQPS() const { return this->QPS_ != nullptr;};
        void deleteQPS() { this->QPS_ = nullptr;};
        inline int32_t getQPS() const { DARABONBA_PTR_GET_DEFAULT(QPS_, 0) };
        inline TrafficLimitConfig& setQPS(int32_t QPS) { DARABONBA_PTR_SET_VALUE(QPS_, QPS) };


      protected:
        // The number of requests per IP address. Value range: **1 to 1,000,000**.
        // 
        // >  If both the **QPS** and **PerIpQps** parameters are specified, make sure that the value of the **QPS** parameter is smaller than the value of the PerIpQps parameter.
        shared_ptr<int32_t> perIpQps_ {};
        // The number of queries per second (QPS). Value range: **1 to 1,000,000**.
        shared_ptr<int32_t> QPS_ {};
      };

      class RewriteConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RewriteConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Query, query_);
        };
        friend void from_json(const Darabonba::Json& j, RewriteConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Query, query_);
        };
        RewriteConfig() = default ;
        RewriteConfig(const RewriteConfig &) = default ;
        RewriteConfig(RewriteConfig &&) = default ;
        RewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RewriteConfig() = default ;
        RewriteConfig& operator=(const RewriteConfig &) = default ;
        RewriteConfig& operator=(RewriteConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->path_ == nullptr && this->query_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline RewriteConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline RewriteConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline RewriteConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        // The hostname to which requests are rewritten. Valid values:
        // 
        // *   **${host}** (default): If you set the value to ${host}, you cannot append other characters.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), periods (.), asterisks (\\*), and question marks (?).
        //     *   The hostname contains at least one period (.) but does not start or end with a period (.).
        //     *   The rightmost domain label can contain only letters and wildcard characters. It cannot contain digits or hyphens (-).
        //     *   The domain labels do not start or end with a hyphen (-). You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
        shared_ptr<string> host_ {};
        // The URL to which requests are redirected. Valid values:
        // 
        // *   Default value: **${path}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The header value must be 1 to 128 characters in length.
        //     *   It must start with a forward slash (/) and can contain letters, digits, and the following special characters: `$ - _ . + / & ~ @ :`. It does not contain the following special characters: `% # ; ! ( ) [ ] ^ , \\ "`. You can use asterisks (\\*) and question marks (?) as wildcard characters.
        shared_ptr<string> path_ {};
        // The query string to which requests are redirected. Valid values:
        // 
        // *   Default value: **${query}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The header value must be 1 to 128 characters in length.
        //     *   It can contain printable characters, excluding space characters, the special characters `# [ ] { } \\ | < > "`, and uppercase letters.
        shared_ptr<string> query_ {};
      };

      class RemoveHeaderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoveHeaderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, RemoveHeaderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        RemoveHeaderConfig() = default ;
        RemoveHeaderConfig(const RemoveHeaderConfig &) = default ;
        RemoveHeaderConfig(RemoveHeaderConfig &&) = default ;
        RemoveHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoveHeaderConfig() = default ;
        RemoveHeaderConfig& operator=(const RemoveHeaderConfig &) = default ;
        RemoveHeaderConfig& operator=(RemoveHeaderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline RemoveHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The key of the header to be removed. The header key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header keys specified in RemoveHeader must be unique.
        // 
        // *   If Direction is set to Request, the following request headers cannot be removed: `slb-id`, `slb-ip`, `x-forwarded-for`, `x-forwarded-proto`, `x-forwarded-eip`, `x-forwarded-port`, `x-forwarded-client-srcport`, `x-forwarded-host`, `connection`, `upgrade`, `content-length`, `transfer-encoding`, `keep-alive`, `te`, `host`, `cookie`, `remoteip`, and `authority`. Request headers are not case-sensitive.
        // *   If Direction is set to Response, the following header keys are not supported: `connection`, `upgrade`, `content-length`, and `transfer-encoding`. The header keys are not case-sensitive.
        shared_ptr<string> key_ {};
      };

      class RedirectConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RedirectConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Query, query_);
        };
        friend void from_json(const Darabonba::Json& j, RedirectConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Query, query_);
        };
        RedirectConfig() = default ;
        RedirectConfig(const RedirectConfig &) = default ;
        RedirectConfig(RedirectConfig &&) = default ;
        RedirectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RedirectConfig() = default ;
        RedirectConfig& operator=(const RedirectConfig &) = default ;
        RedirectConfig& operator=(RedirectConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->httpCode_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->query_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline RedirectConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // httpCode Field Functions 
        bool hasHttpCode() const { return this->httpCode_ != nullptr;};
        void deleteHttpCode() { this->httpCode_ = nullptr;};
        inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
        inline RedirectConfig& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline RedirectConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline RedirectConfig& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline RedirectConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline RedirectConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        // The hostname to which requests are redirected. Valid values:
        // 
        // *   **${host}** (default): If ${host} is returned, no other character is appended.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), periods (.), asterisks (\\*), and question marks (?).
        //     *   The hostname contains at least one period (.) but does not start or end with a period (.).
        //     *   The rightmost domain label can contain only letters and wildcard characters. It cannot contain digits or hyphens (-).
        //     *   The domain labels do not start or end with a hyphen (-).
        //     *   You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
        shared_ptr<string> host_ {};
        // The forwarding method. Valid values: **301**, **302**, **303**, **307**, and **308**.
        shared_ptr<string> httpCode_ {};
        // The URL to which requests are redirected. Valid values:
        // 
        // *   Default value: **${path}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The header value must be 1 to 128 characters in length.
        //     *   It must start with a forward slash (/) and can contain letters, digits, and the following special characters: `$ - _ . + / & ~ @ :`. It does not contain the following special characters: `% # ; ! ( ) [ ] ^ , \\ "`. You can use asterisks (\\*) and question marks (?) as wildcard characters.
        shared_ptr<string> path_ {};
        // The port to which requests are redirected. Valid values:
        // 
        // *   **${port}** (default): If you set the value to ${port}, you cannot append other characters.
        // *   Other valid values: **1 to 63335**.
        shared_ptr<string> port_ {};
        // The redirect protocol. Valid values:
        // 
        // *   **${protocol}** (default): If you set the value to ${protocol}, you cannot append other characters.
        // *   **HTTP** or **HTTPS**.
        // 
        // >  HTTPS listeners support only HTTPS redirects.
        shared_ptr<string> protocol_ {};
        // The query string of the URL to which requests are forwarded. Valid values:
        // 
        // *   Default value: **${query}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
        // 
        // *   If you want to specify a custom value, make sure that the following requirements are met:
        // 
        //     *   The header value must be 1 to 128 characters in length.
        //     *   It can contain printable characters, excluding space characters, the special characters `# [ ] { } \\ | < > "`, and uppercase letters.
        shared_ptr<string> query_ {};
      };

      class InsertHeaderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsertHeaderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CoverEnabled, coverEnabled_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, InsertHeaderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CoverEnabled, coverEnabled_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        InsertHeaderConfig() = default ;
        InsertHeaderConfig(const InsertHeaderConfig &) = default ;
        InsertHeaderConfig(InsertHeaderConfig &&) = default ;
        InsertHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsertHeaderConfig() = default ;
        InsertHeaderConfig& operator=(const InsertHeaderConfig &) = default ;
        InsertHeaderConfig& operator=(InsertHeaderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coverEnabled_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr && this->valueType_ == nullptr; };
        // coverEnabled Field Functions 
        bool hasCoverEnabled() const { return this->coverEnabled_ != nullptr;};
        void deleteCoverEnabled() { this->coverEnabled_ = nullptr;};
        inline bool getCoverEnabled() const { DARABONBA_PTR_GET_DEFAULT(coverEnabled_, false) };
        inline InsertHeaderConfig& setCoverEnabled(bool coverEnabled) { DARABONBA_PTR_SET_VALUE(coverEnabled_, coverEnabled) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline InsertHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline InsertHeaderConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline InsertHeaderConfig& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        // Specifies whether to overwrite the request header values. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        shared_ptr<bool> coverEnabled_ {};
        // The key of the header. The key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header keys specified by **InsertHeaderConfig** must be unique.
        // 
        // >  You cannot specify the following header keys: `slb-id`, `slb-ip`, `x-forwarded-for`, `x-forwarded-proto`, `x-forwarded-eip`, `x-forwarded-port`, `x-forwarded-client-srcport`, `x-forwarded-host`, `connection`, `upgrade`, `content-length`, `transfer-encoding`, `keep-alive`, `te`, `host`, `cookie`, `remoteip`, and `authority`. The header keys are case-insensitive.
        shared_ptr<string> key_ {};
        // The value of the header.
        // 
        // *   If **ValueType** is set to **SystemDefined**, you can set the Value parameter to one of the following values:
        // 
        //     *   **ClientSrcPort**: the client port.
        //     *   **ClientSrcIp**: the IP address of the client.
        //     *   **Protocol**: the request protocol (HTTP or HTTPS).
        //     *   **SLBId**: the ID of the ALB instance.
        //     *   **SLBPort**: the listener port of the ALB instance.
        // 
        // *   If **ValueType** is set to **UserDefined**, a custom header value is supported. The header value must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and lower than 127`. You can use asterisks (\\*) and question marks (?) as wildcard characters. Quotation marks (`"`) are not supported. The header value cannot start or end with a space character, or end with a backslash (`\\`).
        // 
        // *   If **ValueType** is set to **ReferenceHeader**, you can reference a value from request headers. The value must be 1 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
        shared_ptr<string> value_ {};
        // The type of the header. Valid values:
        // 
        // *   **UserDefined**: a custom header.
        // *   **ReferenceHeader**: a header that references one of the request headers.
        // *   **SystemDefined**: a system-defined header value.
        shared_ptr<string> valueType_ {};
      };

      class ForwardGroupConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForwardGroupConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
          DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
        };
        friend void from_json(const Darabonba::Json& j, ForwardGroupConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
          DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
        };
        ForwardGroupConfig() = default ;
        ForwardGroupConfig(const ForwardGroupConfig &) = default ;
        ForwardGroupConfig(ForwardGroupConfig &&) = default ;
        ForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForwardGroupConfig() = default ;
        ForwardGroupConfig& operator=(const ForwardGroupConfig &) = default ;
        ForwardGroupConfig& operator=(ForwardGroupConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServerGroupTuples : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServerGroupTuples& obj) { 
            DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, ServerGroupTuples& obj) { 
            DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          ServerGroupTuples() = default ;
          ServerGroupTuples(const ServerGroupTuples &) = default ;
          ServerGroupTuples(ServerGroupTuples &&) = default ;
          ServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServerGroupTuples() = default ;
          ServerGroupTuples& operator=(const ServerGroupTuples &) = default ;
          ServerGroupTuples& operator=(ServerGroupTuples &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serverGroupId_ == nullptr
        && this->weight_ == nullptr; };
          // serverGroupId Field Functions 
          bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
          void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
          inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
          inline ServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline ServerGroupTuples& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // The ID of the server group to which requests are forwarded.
          shared_ptr<string> serverGroupId_ {};
          // The weight of the server group. A larger value specifies a higher weight. A server group with a higher weight receives more requests. Valid values: **0** to **100**.
          // 
          // *   If the number of destination server groups is 1, the default weight of the server group is **100**, unless you specify a weight.
          // *   If the number of destination server groups is larger than 1, you must specify a weight.
          shared_ptr<int32_t> weight_ {};
        };

        class ServerGroupStickySession : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServerGroupStickySession& obj) { 
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          };
          friend void from_json(const Darabonba::Json& j, ServerGroupStickySession& obj) { 
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          };
          ServerGroupStickySession() = default ;
          ServerGroupStickySession(const ServerGroupStickySession &) = default ;
          ServerGroupStickySession(ServerGroupStickySession &&) = default ;
          ServerGroupStickySession(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServerGroupStickySession() = default ;
          ServerGroupStickySession& operator=(const ServerGroupStickySession &) = default ;
          ServerGroupStickySession& operator=(ServerGroupStickySession &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->timeout_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline ServerGroupStickySession& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline ServerGroupStickySession& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        protected:
          // Specifies whether to enable session persistence. Valid values:
          // 
          // *   **true**
          // *   **false** (default)
          shared_ptr<bool> enabled_ {};
          // The timeout period for sessions. Unit: seconds. Valid values: 1 to 86400.
          shared_ptr<int32_t> timeout_ {};
        };

        virtual bool empty() const override { return this->serverGroupStickySession_ == nullptr
        && this->serverGroupTuples_ == nullptr; };
        // serverGroupStickySession Field Functions 
        bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
        void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
        inline const ForwardGroupConfig::ServerGroupStickySession & getServerGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, ForwardGroupConfig::ServerGroupStickySession) };
        inline ForwardGroupConfig::ServerGroupStickySession getServerGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, ForwardGroupConfig::ServerGroupStickySession) };
        inline ForwardGroupConfig& setServerGroupStickySession(const ForwardGroupConfig::ServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
        inline ForwardGroupConfig& setServerGroupStickySession(ForwardGroupConfig::ServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


        // serverGroupTuples Field Functions 
        bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
        void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
        inline const vector<ForwardGroupConfig::ServerGroupTuples> & getServerGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
        inline vector<ForwardGroupConfig::ServerGroupTuples> getServerGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
        inline ForwardGroupConfig& setServerGroupTuples(const vector<ForwardGroupConfig::ServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
        inline ForwardGroupConfig& setServerGroupTuples(vector<ForwardGroupConfig::ServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


      protected:
        // The configuration of session persistence for server groups.
        shared_ptr<ForwardGroupConfig::ServerGroupStickySession> serverGroupStickySession_ {};
        // The server groups to which requests are forwarded.
        shared_ptr<vector<ForwardGroupConfig::ServerGroupTuples>> serverGroupTuples_ {};
      };

      class FixedResponseConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FixedResponseConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
        };
        friend void from_json(const Darabonba::Json& j, FixedResponseConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
        };
        FixedResponseConfig() = default ;
        FixedResponseConfig(const FixedResponseConfig &) = default ;
        FixedResponseConfig(FixedResponseConfig &&) = default ;
        FixedResponseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FixedResponseConfig() = default ;
        FixedResponseConfig& operator=(const FixedResponseConfig &) = default ;
        FixedResponseConfig& operator=(FixedResponseConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->httpCode_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline FixedResponseConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline FixedResponseConfig& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // httpCode Field Functions 
        bool hasHttpCode() const { return this->httpCode_ != nullptr;};
        void deleteHttpCode() { this->httpCode_ = nullptr;};
        inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
        inline FixedResponseConfig& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


      protected:
        // The content of the response. The content can be up to 1 KB in size, and can contain only ASCII characters.
        shared_ptr<string> content_ {};
        // The content type.
        // 
        // Valid values: **text/plain**, **text/css**, **text/html**, **application/javascript**, and **application/json**.
        shared_ptr<string> contentType_ {};
        // The HTTP status code in responses. Valid values: **2xx**, **4xx**, **5xx**. The value must be a numeric string. **x** must be a digit.
        shared_ptr<string> httpCode_ {};
      };

      class CorsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CorsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
          DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
          DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
          DARABONBA_PTR_TO_JSON(AllowOrigin, allowOrigin_);
          DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
          DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
        };
        friend void from_json(const Darabonba::Json& j, CorsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
          DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
          DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
          DARABONBA_PTR_FROM_JSON(AllowOrigin, allowOrigin_);
          DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
          DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
        };
        CorsConfig() = default ;
        CorsConfig(const CorsConfig &) = default ;
        CorsConfig(CorsConfig &&) = default ;
        CorsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CorsConfig() = default ;
        CorsConfig& operator=(const CorsConfig &) = default ;
        CorsConfig& operator=(CorsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && this->allowHeaders_ == nullptr && this->allowMethods_ == nullptr && this->allowOrigin_ == nullptr && this->exposeHeaders_ == nullptr && this->maxAge_ == nullptr; };
        // allowCredentials Field Functions 
        bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
        void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
        inline string getAllowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, "") };
        inline CorsConfig& setAllowCredentials(string allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


        // allowHeaders Field Functions 
        bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
        void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
        inline const vector<string> & getAllowHeaders() const { DARABONBA_PTR_GET_CONST(allowHeaders_, vector<string>) };
        inline vector<string> getAllowHeaders() { DARABONBA_PTR_GET(allowHeaders_, vector<string>) };
        inline CorsConfig& setAllowHeaders(const vector<string> & allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };
        inline CorsConfig& setAllowHeaders(vector<string> && allowHeaders) { DARABONBA_PTR_SET_RVALUE(allowHeaders_, allowHeaders) };


        // allowMethods Field Functions 
        bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
        void deleteAllowMethods() { this->allowMethods_ = nullptr;};
        inline const vector<string> & getAllowMethods() const { DARABONBA_PTR_GET_CONST(allowMethods_, vector<string>) };
        inline vector<string> getAllowMethods() { DARABONBA_PTR_GET(allowMethods_, vector<string>) };
        inline CorsConfig& setAllowMethods(const vector<string> & allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };
        inline CorsConfig& setAllowMethods(vector<string> && allowMethods) { DARABONBA_PTR_SET_RVALUE(allowMethods_, allowMethods) };


        // allowOrigin Field Functions 
        bool hasAllowOrigin() const { return this->allowOrigin_ != nullptr;};
        void deleteAllowOrigin() { this->allowOrigin_ = nullptr;};
        inline const vector<string> & getAllowOrigin() const { DARABONBA_PTR_GET_CONST(allowOrigin_, vector<string>) };
        inline vector<string> getAllowOrigin() { DARABONBA_PTR_GET(allowOrigin_, vector<string>) };
        inline CorsConfig& setAllowOrigin(const vector<string> & allowOrigin) { DARABONBA_PTR_SET_VALUE(allowOrigin_, allowOrigin) };
        inline CorsConfig& setAllowOrigin(vector<string> && allowOrigin) { DARABONBA_PTR_SET_RVALUE(allowOrigin_, allowOrigin) };


        // exposeHeaders Field Functions 
        bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
        void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
        inline const vector<string> & getExposeHeaders() const { DARABONBA_PTR_GET_CONST(exposeHeaders_, vector<string>) };
        inline vector<string> getExposeHeaders() { DARABONBA_PTR_GET(exposeHeaders_, vector<string>) };
        inline CorsConfig& setExposeHeaders(const vector<string> & exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };
        inline CorsConfig& setExposeHeaders(vector<string> && exposeHeaders) { DARABONBA_PTR_SET_RVALUE(exposeHeaders_, exposeHeaders) };


        // maxAge Field Functions 
        bool hasMaxAge() const { return this->maxAge_ != nullptr;};
        void deleteMaxAge() { this->maxAge_ = nullptr;};
        inline int64_t getMaxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0L) };
        inline CorsConfig& setMaxAge(int64_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


      protected:
        // Specifies whether credentials can be carried in CORS requests. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> allowCredentials_ {};
        // The trusted headers of CORS requests.
        shared_ptr<vector<string>> allowHeaders_ {};
        // The trusted HTTP methods of CORS requests.
        shared_ptr<vector<string>> allowMethods_ {};
        // The trusted origins. You can specify one or more values, or only an asterisk (`*`).
        // 
        // *   The value must start with `http://` or `https://`, and be followed by a valid domain name, including top-level wildcard domain names. Example: `http://*.test.abc.example.com`.
        // *   You can specify ports for a single value. Valid values: **1** to **65535**.
        shared_ptr<vector<string>> allowOrigin_ {};
        // The headers that can be exposed.
        shared_ptr<vector<string>> exposeHeaders_ {};
        // The maximum cache time of dry runs in the browser. Unit: seconds.
        // 
        // Valid values: **-1** to **172800**.
        shared_ptr<int64_t> maxAge_ {};
      };

      virtual bool empty() const override { return this->corsConfig_ == nullptr
        && this->fixedResponseConfig_ == nullptr && this->forwardGroupConfig_ == nullptr && this->insertHeaderConfig_ == nullptr && this->order_ == nullptr && this->redirectConfig_ == nullptr
        && this->removeHeaderConfig_ == nullptr && this->rewriteConfig_ == nullptr && this->trafficLimitConfig_ == nullptr && this->trafficMirrorConfig_ == nullptr && this->type_ == nullptr; };
      // corsConfig Field Functions 
      bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
      void deleteCorsConfig() { this->corsConfig_ = nullptr;};
      inline const RuleActions::CorsConfig & getCorsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, RuleActions::CorsConfig) };
      inline RuleActions::CorsConfig getCorsConfig() { DARABONBA_PTR_GET(corsConfig_, RuleActions::CorsConfig) };
      inline RuleActions& setCorsConfig(const RuleActions::CorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
      inline RuleActions& setCorsConfig(RuleActions::CorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


      // fixedResponseConfig Field Functions 
      bool hasFixedResponseConfig() const { return this->fixedResponseConfig_ != nullptr;};
      void deleteFixedResponseConfig() { this->fixedResponseConfig_ = nullptr;};
      inline const RuleActions::FixedResponseConfig & getFixedResponseConfig() const { DARABONBA_PTR_GET_CONST(fixedResponseConfig_, RuleActions::FixedResponseConfig) };
      inline RuleActions::FixedResponseConfig getFixedResponseConfig() { DARABONBA_PTR_GET(fixedResponseConfig_, RuleActions::FixedResponseConfig) };
      inline RuleActions& setFixedResponseConfig(const RuleActions::FixedResponseConfig & fixedResponseConfig) { DARABONBA_PTR_SET_VALUE(fixedResponseConfig_, fixedResponseConfig) };
      inline RuleActions& setFixedResponseConfig(RuleActions::FixedResponseConfig && fixedResponseConfig) { DARABONBA_PTR_SET_RVALUE(fixedResponseConfig_, fixedResponseConfig) };


      // forwardGroupConfig Field Functions 
      bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
      void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
      inline const RuleActions::ForwardGroupConfig & getForwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, RuleActions::ForwardGroupConfig) };
      inline RuleActions::ForwardGroupConfig getForwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, RuleActions::ForwardGroupConfig) };
      inline RuleActions& setForwardGroupConfig(const RuleActions::ForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
      inline RuleActions& setForwardGroupConfig(RuleActions::ForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


      // insertHeaderConfig Field Functions 
      bool hasInsertHeaderConfig() const { return this->insertHeaderConfig_ != nullptr;};
      void deleteInsertHeaderConfig() { this->insertHeaderConfig_ = nullptr;};
      inline const RuleActions::InsertHeaderConfig & getInsertHeaderConfig() const { DARABONBA_PTR_GET_CONST(insertHeaderConfig_, RuleActions::InsertHeaderConfig) };
      inline RuleActions::InsertHeaderConfig getInsertHeaderConfig() { DARABONBA_PTR_GET(insertHeaderConfig_, RuleActions::InsertHeaderConfig) };
      inline RuleActions& setInsertHeaderConfig(const RuleActions::InsertHeaderConfig & insertHeaderConfig) { DARABONBA_PTR_SET_VALUE(insertHeaderConfig_, insertHeaderConfig) };
      inline RuleActions& setInsertHeaderConfig(RuleActions::InsertHeaderConfig && insertHeaderConfig) { DARABONBA_PTR_SET_RVALUE(insertHeaderConfig_, insertHeaderConfig) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline RuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // redirectConfig Field Functions 
      bool hasRedirectConfig() const { return this->redirectConfig_ != nullptr;};
      void deleteRedirectConfig() { this->redirectConfig_ = nullptr;};
      inline const RuleActions::RedirectConfig & getRedirectConfig() const { DARABONBA_PTR_GET_CONST(redirectConfig_, RuleActions::RedirectConfig) };
      inline RuleActions::RedirectConfig getRedirectConfig() { DARABONBA_PTR_GET(redirectConfig_, RuleActions::RedirectConfig) };
      inline RuleActions& setRedirectConfig(const RuleActions::RedirectConfig & redirectConfig) { DARABONBA_PTR_SET_VALUE(redirectConfig_, redirectConfig) };
      inline RuleActions& setRedirectConfig(RuleActions::RedirectConfig && redirectConfig) { DARABONBA_PTR_SET_RVALUE(redirectConfig_, redirectConfig) };


      // removeHeaderConfig Field Functions 
      bool hasRemoveHeaderConfig() const { return this->removeHeaderConfig_ != nullptr;};
      void deleteRemoveHeaderConfig() { this->removeHeaderConfig_ = nullptr;};
      inline const RuleActions::RemoveHeaderConfig & getRemoveHeaderConfig() const { DARABONBA_PTR_GET_CONST(removeHeaderConfig_, RuleActions::RemoveHeaderConfig) };
      inline RuleActions::RemoveHeaderConfig getRemoveHeaderConfig() { DARABONBA_PTR_GET(removeHeaderConfig_, RuleActions::RemoveHeaderConfig) };
      inline RuleActions& setRemoveHeaderConfig(const RuleActions::RemoveHeaderConfig & removeHeaderConfig) { DARABONBA_PTR_SET_VALUE(removeHeaderConfig_, removeHeaderConfig) };
      inline RuleActions& setRemoveHeaderConfig(RuleActions::RemoveHeaderConfig && removeHeaderConfig) { DARABONBA_PTR_SET_RVALUE(removeHeaderConfig_, removeHeaderConfig) };


      // rewriteConfig Field Functions 
      bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
      void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
      inline const RuleActions::RewriteConfig & getRewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, RuleActions::RewriteConfig) };
      inline RuleActions::RewriteConfig getRewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, RuleActions::RewriteConfig) };
      inline RuleActions& setRewriteConfig(const RuleActions::RewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
      inline RuleActions& setRewriteConfig(RuleActions::RewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


      // trafficLimitConfig Field Functions 
      bool hasTrafficLimitConfig() const { return this->trafficLimitConfig_ != nullptr;};
      void deleteTrafficLimitConfig() { this->trafficLimitConfig_ = nullptr;};
      inline const RuleActions::TrafficLimitConfig & getTrafficLimitConfig() const { DARABONBA_PTR_GET_CONST(trafficLimitConfig_, RuleActions::TrafficLimitConfig) };
      inline RuleActions::TrafficLimitConfig getTrafficLimitConfig() { DARABONBA_PTR_GET(trafficLimitConfig_, RuleActions::TrafficLimitConfig) };
      inline RuleActions& setTrafficLimitConfig(const RuleActions::TrafficLimitConfig & trafficLimitConfig) { DARABONBA_PTR_SET_VALUE(trafficLimitConfig_, trafficLimitConfig) };
      inline RuleActions& setTrafficLimitConfig(RuleActions::TrafficLimitConfig && trafficLimitConfig) { DARABONBA_PTR_SET_RVALUE(trafficLimitConfig_, trafficLimitConfig) };


      // trafficMirrorConfig Field Functions 
      bool hasTrafficMirrorConfig() const { return this->trafficMirrorConfig_ != nullptr;};
      void deleteTrafficMirrorConfig() { this->trafficMirrorConfig_ = nullptr;};
      inline const RuleActions::TrafficMirrorConfig & getTrafficMirrorConfig() const { DARABONBA_PTR_GET_CONST(trafficMirrorConfig_, RuleActions::TrafficMirrorConfig) };
      inline RuleActions::TrafficMirrorConfig getTrafficMirrorConfig() { DARABONBA_PTR_GET(trafficMirrorConfig_, RuleActions::TrafficMirrorConfig) };
      inline RuleActions& setTrafficMirrorConfig(const RuleActions::TrafficMirrorConfig & trafficMirrorConfig) { DARABONBA_PTR_SET_VALUE(trafficMirrorConfig_, trafficMirrorConfig) };
      inline RuleActions& setTrafficMirrorConfig(RuleActions::TrafficMirrorConfig && trafficMirrorConfig) { DARABONBA_PTR_SET_RVALUE(trafficMirrorConfig_, trafficMirrorConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RuleActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The CORS configuration.
      shared_ptr<RuleActions::CorsConfig> corsConfig_ {};
      // The configuration of the custom response.
      shared_ptr<RuleActions::FixedResponseConfig> fixedResponseConfig_ {};
      // The configuration of the server groups.
      shared_ptr<RuleActions::ForwardGroupConfig> forwardGroupConfig_ {};
      // The configuration of the header to be inserted.
      shared_ptr<RuleActions::InsertHeaderConfig> insertHeaderConfig_ {};
      // The priority of the action. Valid values: **1 to 50000**. A smaller value specifies a higher priority. The actions of a forwarding rule are applied in descending order of priority. This parameter cannot be left empty. The priority of each action within a forwarding rule must be unique. You can specify up to 20 forwarding rule priorities.
      shared_ptr<int32_t> order_ {};
      // The configuration of the redirect action. You can specify up to 20 redirect actions.
      shared_ptr<RuleActions::RedirectConfig> redirectConfig_ {};
      // The HTTP header to be removed.
      shared_ptr<RuleActions::RemoveHeaderConfig> removeHeaderConfig_ {};
      // The configuration of the rewrite action.
      shared_ptr<RuleActions::RewriteConfig> rewriteConfig_ {};
      // The configuration of the action to throttle traffic.
      shared_ptr<RuleActions::TrafficLimitConfig> trafficLimitConfig_ {};
      // The configuration of the traffic mirroring action.
      shared_ptr<RuleActions::TrafficMirrorConfig> trafficMirrorConfig_ {};
      // The type of the task. You can specify up to 11 types of action. Valid values:
      // 
      // *   **ForwardGroup**: forwards a request to multiple vServer groups.
      // *   **Redirect**: redirects requests.
      // *   **FixedResponse**: returns a fixed response.
      // *   **Rewrite**: rewrites requests.
      // *   **InsertHeader**: inserts a header.
      // *   **RemoveHeader**: deletes the header of a request.
      // *   **TrafficLimit**: throttles traffic.
      // *   **trafficMirror**: mirrors network traffic.
      // *   **Cors**: forwards requests based on CORS.
      // 
      // The preceding actions can be classified into two types:
      // 
      // *   **FinalType**: Each forwarding rule can contain only one FinalType action, which is performed at the end. You can specify only one of **ForwardGroup**, **Redirect**, and **FixedResponse**.
      // *   **ExtType**: Each forwarding rule can contain one or more **ExtType** actions, which are performed before the **FinalType** action. If you want to specify an ExtType action, you must also specify a **FinalType** action. You can specify multiple **InsertHeader** actions or one **Rewrite** action.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->priority_ == nullptr && this->ruleActions_ == nullptr && this->ruleConditions_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRuleAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateRuleAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRuleAttributeRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<UpdateRuleAttributeRequest::RuleActions> & getRuleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<UpdateRuleAttributeRequest::RuleActions>) };
    inline vector<UpdateRuleAttributeRequest::RuleActions> getRuleActions() { DARABONBA_PTR_GET(ruleActions_, vector<UpdateRuleAttributeRequest::RuleActions>) };
    inline UpdateRuleAttributeRequest& setRuleActions(const vector<UpdateRuleAttributeRequest::RuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline UpdateRuleAttributeRequest& setRuleActions(vector<UpdateRuleAttributeRequest::RuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<UpdateRuleAttributeRequest::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<UpdateRuleAttributeRequest::RuleConditions>) };
    inline vector<UpdateRuleAttributeRequest::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<UpdateRuleAttributeRequest::RuleConditions>) };
    inline UpdateRuleAttributeRequest& setRuleConditions(const vector<UpdateRuleAttributeRequest::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline UpdateRuleAttributeRequest& setRuleConditions(vector<UpdateRuleAttributeRequest::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateRuleAttributeRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateRuleAttributeRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx HTTP` status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The priority of the forwarding rule. Valid values: **1 to 10000**. A lower value specifies a higher priority.
    // 
    // > The priorities of the forwarding rules created for the same listener must be unique.
    shared_ptr<int32_t> priority_ {};
    // The actions of the forwarding rule.
    shared_ptr<vector<UpdateRuleAttributeRequest::RuleActions>> ruleActions_ {};
    // The match conditions of the forwarding rule.
    shared_ptr<vector<UpdateRuleAttributeRequest::RuleConditions>> ruleConditions_ {};
    // The ID of the forwarding rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the forwarding rule. The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
