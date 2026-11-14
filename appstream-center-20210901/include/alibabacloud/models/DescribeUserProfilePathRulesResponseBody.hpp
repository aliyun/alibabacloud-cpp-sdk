// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeUserProfilePathRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        DARABONBA_PTR_TO_JSON(RemoteStoragePath, remoteStoragePath_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(UserProfileSize, userProfileSize_);
        DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        DARABONBA_PTR_FROM_JSON(RemoteStoragePath, remoteStoragePath_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(UserProfileSize, userProfileSize_);
        DARABONBA_PTR_FROM_JSON(UserProfileSwitch, userProfileSwitch_);
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
          // The exception path relative to BlackPath.Path.
          shared_ptr<string> path_ {};
          // The path type. Valid values:
          // - file: File.
          // - folder: Folder.
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
          // The excluded path relative to the user profile directory.
          shared_ptr<string> path_ {};
          // The path type. Valid values:
          // - file: File.
          // - folder: Folder.
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
        // The file or directory excluded from user data roaming.
        shared_ptr<Rules::BlackPath> blackPath_ {};
        // The list of files or directories that still participate in user data roaming under the excluded directories.
        shared_ptr<vector<Rules::WhitePaths>> whitePaths_ {};
      };

      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupSetId_ == nullptr && this->domainId_ == nullptr && this->fileSystemId_ == nullptr && this->profileFollowSwitch_ == nullptr && this->remoteStoragePath_ == nullptr
        && this->ruleType_ == nullptr && this->rules_ == nullptr && this->userProfileSize_ == nullptr && this->userProfileSwitch_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline Data& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupSetId Field Functions 
      bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
      void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
      inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
      inline Data& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Data& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline Data& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // profileFollowSwitch Field Functions 
      bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
      void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
      inline bool getProfileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
      inline Data& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


      // remoteStoragePath Field Functions 
      bool hasRemoteStoragePath() const { return this->remoteStoragePath_ != nullptr;};
      void deleteRemoteStoragePath() { this->remoteStoragePath_ = nullptr;};
      inline string getRemoteStoragePath() const { DARABONBA_PTR_GET_DEFAULT(remoteStoragePath_, "") };
      inline Data& setRemoteStoragePath(string remoteStoragePath) { DARABONBA_PTR_SET_VALUE(remoteStoragePath_, remoteStoragePath) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Data& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // userProfileSize Field Functions 
      bool hasUserProfileSize() const { return this->userProfileSize_ != nullptr;};
      void deleteUserProfileSize() { this->userProfileSize_ = nullptr;};
      inline int64_t getUserProfileSize() const { DARABONBA_PTR_GET_DEFAULT(userProfileSize_, 0L) };
      inline Data& setUserProfileSize(int64_t userProfileSize) { DARABONBA_PTR_SET_VALUE(userProfileSize_, userProfileSize) };


      // userProfileSwitch Field Functions 
      bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
      void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
      inline bool getUserProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
      inline Data& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


    protected:
      // The ID of the app instance group to which the rule applies. When querying set rules, this is the ID of the primary app instance group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the app instance group set to which the rule applies. This parameter is returned when querying set rules.
      shared_ptr<string> appInstanceGroupSetId_ {};
      // The ID of the user data roaming storage domain bound to the app instance group. This parameter may be omitted if no domain is bound.
      shared_ptr<string> domainId_ {};
      // This field is not enabled. The current query result does not provide the file system ID. The example is used to illustrate the field status.
      shared_ptr<string> fileSystemId_ {};
      // Specifies whether user data roaming is enabled. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> profileFollowSwitch_ {};
      // The remote storage path for user data roaming. If the app instance group is not separately configured with this path, the app instance group ID is returned.
      shared_ptr<string> remoteStoragePath_ {};
      // The path rule type. Valid values:
      // - Default: Queries the system default rules. Both target IDs can be omitted.
      // - AppInstanceGroup: Queries the rules of an app instance group or an app instance group set.
      shared_ptr<string> ruleType_ {};
      // The list of user data roaming path rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
      // The storage quota for user data roaming, in GB. This parameter may be omitted if it is not configured.
      shared_ptr<int64_t> userProfileSize_ {};
      // Specifies whether user data roaming is enabled. The value is the same as ProfileFollowSwitch. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> userProfileSwitch_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeUserProfilePathRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUserProfilePathRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUserProfilePathRulesResponseBody::Data) };
    inline DescribeUserProfilePathRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUserProfilePathRulesResponseBody::Data) };
    inline DescribeUserProfilePathRulesResponseBody& setData(const DescribeUserProfilePathRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserProfilePathRulesResponseBody& setData(DescribeUserProfilePathRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeUserProfilePathRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserProfilePathRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code returned when the request fails.
    shared_ptr<string> code_ {};
    // The path rules and user data roaming configurations.
    shared_ptr<DescribeUserProfilePathRulesResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
