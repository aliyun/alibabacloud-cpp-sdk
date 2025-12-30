// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserProfilePathRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRule, userProfilePathRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRule, userProfilePathRule_);
    };
    DescribeUserProfilePathRulesResponseBody() = default ;
    DescribeUserProfilePathRulesResponseBody(const DescribeUserProfilePathRulesResponseBody &) = default ;
    DescribeUserProfilePathRulesResponseBody(DescribeUserProfilePathRulesResponseBody &&) = default ;
    DescribeUserProfilePathRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserProfilePathRulesResponseBody() = default ;
    DescribeUserProfilePathRulesResponseBody& operator=(const DescribeUserProfilePathRulesResponseBody &) = default ;
    DescribeUserProfilePathRulesResponseBody& operator=(DescribeUserProfilePathRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProfilePathRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProfilePathRule& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
      };
      friend void from_json(const Darabonba::Json& j, UserProfilePathRule& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(UserProfileRuleType, userProfileRuleType_);
      };
      UserProfilePathRule() = default ;
      UserProfilePathRule(const UserProfilePathRule &) = default ;
      UserProfilePathRule(UserProfilePathRule &&) = default ;
      UserProfilePathRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProfilePathRule() = default ;
      UserProfilePathRule& operator=(const UserProfilePathRule &) = default ;
      UserProfilePathRule& operator=(UserProfilePathRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(BlackPath, blackPath_);
          DARABONBA_PTR_TO_JSON(WhitePaths, whitePaths_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(BlackPath, blackPath_);
          DARABONBA_PTR_FROM_JSON(WhitePaths, whitePaths_);
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
        class WhitePaths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WhitePaths& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, WhitePaths& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          WhitePaths() = default ;
          WhitePaths(const WhitePaths &) = default ;
          WhitePaths(WhitePaths &&) = default ;
          WhitePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WhitePaths() = default ;
          WhitePaths& operator=(const WhitePaths &) = default ;
          WhitePaths& operator=(WhitePaths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline WhitePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline WhitePaths& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The path.
          shared_ptr<string> path_ {};
          // The path type.
          // 
          // Valid values:
          // 
          // *   file
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          // *   folder
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          shared_ptr<string> type_ {};
        };

        class BlackPath : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlackPath& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, BlackPath& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          BlackPath() = default ;
          BlackPath(const BlackPath &) = default ;
          BlackPath(BlackPath &&) = default ;
          BlackPath(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BlackPath() = default ;
          BlackPath& operator=(const BlackPath &) = default ;
          BlackPath& operator=(BlackPath &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline BlackPath& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline BlackPath& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The path.
          shared_ptr<string> path_ {};
          // The path type.
          // 
          // Valid values:
          // 
          // *   file
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          // *   folder
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          // 
          //     <!-- -->
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->blackPath_ == nullptr
        && this->whitePaths_ == nullptr; };
        // blackPath Field Functions 
        bool hasBlackPath() const { return this->blackPath_ != nullptr;};
        void deleteBlackPath() { this->blackPath_ = nullptr;};
        inline const Rules::BlackPath & getBlackPath() const { DARABONBA_PTR_GET_CONST(blackPath_, Rules::BlackPath) };
        inline Rules::BlackPath getBlackPath() { DARABONBA_PTR_GET(blackPath_, Rules::BlackPath) };
        inline Rules& setBlackPath(const Rules::BlackPath & blackPath) { DARABONBA_PTR_SET_VALUE(blackPath_, blackPath) };
        inline Rules& setBlackPath(Rules::BlackPath && blackPath) { DARABONBA_PTR_SET_RVALUE(blackPath_, blackPath) };


        // whitePaths Field Functions 
        bool hasWhitePaths() const { return this->whitePaths_ != nullptr;};
        void deleteWhitePaths() { this->whitePaths_ = nullptr;};
        inline const vector<Rules::WhitePaths> & getWhitePaths() const { DARABONBA_PTR_GET_CONST(whitePaths_, vector<Rules::WhitePaths>) };
        inline vector<Rules::WhitePaths> getWhitePaths() { DARABONBA_PTR_GET(whitePaths_, vector<Rules::WhitePaths>) };
        inline Rules& setWhitePaths(const vector<Rules::WhitePaths> & whitePaths) { DARABONBA_PTR_SET_VALUE(whitePaths_, whitePaths) };
        inline Rules& setWhitePaths(vector<Rules::WhitePaths> && whitePaths) { DARABONBA_PTR_SET_RVALUE(whitePaths_, whitePaths) };


      protected:
        // The blacklist that is configured.
        shared_ptr<Rules::BlackPath> blackPath_ {};
        // The directories in the whitelist.
        shared_ptr<vector<Rules::WhitePaths>> whitePaths_ {};
      };

      virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->rules_ == nullptr && this->userProfileRuleType_ == nullptr; };
      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline UserProfilePathRule& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<UserProfilePathRule::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UserProfilePathRule::Rules>) };
      inline vector<UserProfilePathRule::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<UserProfilePathRule::Rules>) };
      inline UserProfilePathRule& setRules(const vector<UserProfilePathRule::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline UserProfilePathRule& setRules(vector<UserProfilePathRule::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // userProfileRuleType Field Functions 
      bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
      void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
      inline string getUserProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
      inline UserProfilePathRule& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


    protected:
      // The desktop group ID.
      shared_ptr<string> desktopGroupId_ {};
      // The directory rules.
      shared_ptr<vector<UserProfilePathRule::Rules>> rules_ {};
      // The directory type that is configured for the directory.
      // 
      // Valid values:
      // 
      // *   DesktopGroup
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Default
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> userProfileRuleType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userProfilePathRule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserProfilePathRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userProfilePathRule Field Functions 
    bool hasUserProfilePathRule() const { return this->userProfilePathRule_ != nullptr;};
    void deleteUserProfilePathRule() { this->userProfilePathRule_ = nullptr;};
    inline const DescribeUserProfilePathRulesResponseBody::UserProfilePathRule & getUserProfilePathRule() const { DARABONBA_PTR_GET_CONST(userProfilePathRule_, DescribeUserProfilePathRulesResponseBody::UserProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBody::UserProfilePathRule getUserProfilePathRule() { DARABONBA_PTR_GET(userProfilePathRule_, DescribeUserProfilePathRulesResponseBody::UserProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBody& setUserProfilePathRule(const DescribeUserProfilePathRulesResponseBody::UserProfilePathRule & userProfilePathRule) { DARABONBA_PTR_SET_VALUE(userProfilePathRule_, userProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBody& setUserProfilePathRule(DescribeUserProfilePathRulesResponseBody::UserProfilePathRule && userProfilePathRule) { DARABONBA_PTR_SET_RVALUE(userProfilePathRule_, userProfilePathRule) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The directory blacklist and whitelist.
    shared_ptr<DescribeUserProfilePathRulesResponseBody::UserProfilePathRule> userProfilePathRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
