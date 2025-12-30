// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
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
  class SetUserProfilePathRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRule, userProfilePathRule_);
      DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRule, userProfilePathRule_);
      DARABONBA_PTR_FROM_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    SetUserProfilePathRulesRequest() = default ;
    SetUserProfilePathRulesRequest(const SetUserProfilePathRulesRequest &) = default ;
    SetUserProfilePathRulesRequest(SetUserProfilePathRulesRequest &&) = default ;
    SetUserProfilePathRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserProfilePathRulesRequest() = default ;
    SetUserProfilePathRulesRequest& operator=(const SetUserProfilePathRulesRequest &) = default ;
    SetUserProfilePathRulesRequest& operator=(SetUserProfilePathRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProfilePathRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProfilePathRule& obj) { 
        DARABONBA_PTR_TO_JSON(BlackPath, blackPath_);
        DARABONBA_PTR_TO_JSON(WhitePaths, whitePaths_);
      };
      friend void from_json(const Darabonba::Json& j, UserProfilePathRule& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackPath, blackPath_);
        DARABONBA_PTR_FROM_JSON(WhitePaths, whitePaths_);
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
        // The whitelist path.
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
        // The blacklist path.
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
      inline const UserProfilePathRule::BlackPath & getBlackPath() const { DARABONBA_PTR_GET_CONST(blackPath_, UserProfilePathRule::BlackPath) };
      inline UserProfilePathRule::BlackPath getBlackPath() { DARABONBA_PTR_GET(blackPath_, UserProfilePathRule::BlackPath) };
      inline UserProfilePathRule& setBlackPath(const UserProfilePathRule::BlackPath & blackPath) { DARABONBA_PTR_SET_VALUE(blackPath_, blackPath) };
      inline UserProfilePathRule& setBlackPath(UserProfilePathRule::BlackPath && blackPath) { DARABONBA_PTR_SET_RVALUE(blackPath_, blackPath) };


      // whitePaths Field Functions 
      bool hasWhitePaths() const { return this->whitePaths_ != nullptr;};
      void deleteWhitePaths() { this->whitePaths_ = nullptr;};
      inline const vector<UserProfilePathRule::WhitePaths> & getWhitePaths() const { DARABONBA_PTR_GET_CONST(whitePaths_, vector<UserProfilePathRule::WhitePaths>) };
      inline vector<UserProfilePathRule::WhitePaths> getWhitePaths() { DARABONBA_PTR_GET(whitePaths_, vector<UserProfilePathRule::WhitePaths>) };
      inline UserProfilePathRule& setWhitePaths(const vector<UserProfilePathRule::WhitePaths> & whitePaths) { DARABONBA_PTR_SET_VALUE(whitePaths_, whitePaths) };
      inline UserProfilePathRule& setWhitePaths(vector<UserProfilePathRule::WhitePaths> && whitePaths) { DARABONBA_PTR_SET_RVALUE(whitePaths_, whitePaths) };


    protected:
      // The directory in the blacklist.
      shared_ptr<UserProfilePathRule::BlackPath> blackPath_ {};
      // The directories that you want to configure in the whitelist.
      shared_ptr<vector<UserProfilePathRule::WhitePaths>> whitePaths_ {};
    };

    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->regionId_ == nullptr && this->userProfilePathRule_ == nullptr && this->userProfileRuleType_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetUserProfilePathRulesRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetUserProfilePathRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userProfilePathRule Field Functions 
    bool hasUserProfilePathRule() const { return this->userProfilePathRule_ != nullptr;};
    void deleteUserProfilePathRule() { this->userProfilePathRule_ = nullptr;};
    inline const vector<SetUserProfilePathRulesRequest::UserProfilePathRule> & getUserProfilePathRule() const { DARABONBA_PTR_GET_CONST(userProfilePathRule_, vector<SetUserProfilePathRulesRequest::UserProfilePathRule>) };
    inline vector<SetUserProfilePathRulesRequest::UserProfilePathRule> getUserProfilePathRule() { DARABONBA_PTR_GET(userProfilePathRule_, vector<SetUserProfilePathRulesRequest::UserProfilePathRule>) };
    inline SetUserProfilePathRulesRequest& setUserProfilePathRule(const vector<SetUserProfilePathRulesRequest::UserProfilePathRule> & userProfilePathRule) { DARABONBA_PTR_SET_VALUE(userProfilePathRule_, userProfilePathRule) };
    inline SetUserProfilePathRulesRequest& setUserProfilePathRule(vector<SetUserProfilePathRulesRequest::UserProfilePathRule> && userProfilePathRule) { DARABONBA_PTR_SET_RVALUE(userProfilePathRule_, userProfilePathRule) };


    // userProfileRuleType Field Functions 
    bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
    void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
    inline string getUserProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
    inline SetUserProfilePathRulesRequest& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


  protected:
    // The desktop group ID.
    shared_ptr<string> desktopGroupId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The directories that you want to configure in the blacklist and whitelist.
    shared_ptr<vector<SetUserProfilePathRulesRequest::UserProfilePathRule>> userProfilePathRule_ {};
    // The directory type that you want to configure.
    // 
    // Valid values:
    // 
    // *   Both_Default_DesktopGroup
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
