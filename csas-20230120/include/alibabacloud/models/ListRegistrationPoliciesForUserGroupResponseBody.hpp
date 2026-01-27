// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListRegistrationPoliciesForUserGroupResponseBody() = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(const ListRegistrationPoliciesForUserGroupResponseBody &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(ListRegistrationPoliciesForUserGroupResponseBody &&) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesForUserGroupResponseBody() = default ;
    ListRegistrationPoliciesForUserGroupResponseBody& operator=(const ListRegistrationPoliciesForUserGroupResponseBody &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBody& operator=(ListRegistrationPoliciesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Policies, policies_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      };
      UserGroups() = default ;
      UserGroups(const UserGroups &) = default ;
      UserGroups(UserGroups &&) = default ;
      UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroups() = default ;
      UserGroups& operator=(const UserGroups &) = default ;
      UserGroups& operator=(UserGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policies& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LimitDetail, limitDetail_);
          DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
        };
        friend void from_json(const Darabonba::Json& j, Policies& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LimitDetail, limitDetail_);
          DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
        };
        Policies() = default ;
        Policies(const Policies &) = default ;
        Policies(Policies &&) = default ;
        Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policies() = default ;
        Policies& operator=(const Policies &) = default ;
        Policies& operator=(Policies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LimitDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LimitDetail& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
            DARABONBA_PTR_TO_JSON(LimitCount, limitCount_);
            DARABONBA_PTR_TO_JSON(LimitType, limitType_);
          };
          friend void from_json(const Darabonba::Json& j, LimitDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
            DARABONBA_PTR_FROM_JSON(LimitCount, limitCount_);
            DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
          };
          LimitDetail() = default ;
          LimitDetail(const LimitDetail &) = default ;
          LimitDetail(LimitDetail &&) = default ;
          LimitDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LimitDetail() = default ;
          LimitDetail& operator=(const LimitDetail &) = default ;
          LimitDetail& operator=(LimitDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LimitCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LimitCount& obj) { 
              DARABONBA_PTR_TO_JSON(All, all_);
              DARABONBA_PTR_TO_JSON(Mobile, mobile_);
              DARABONBA_PTR_TO_JSON(PC, PC_);
            };
            friend void from_json(const Darabonba::Json& j, LimitCount& obj) { 
              DARABONBA_PTR_FROM_JSON(All, all_);
              DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
              DARABONBA_PTR_FROM_JSON(PC, PC_);
            };
            LimitCount() = default ;
            LimitCount(const LimitCount &) = default ;
            LimitCount(LimitCount &&) = default ;
            LimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LimitCount() = default ;
            LimitCount& operator=(const LimitCount &) = default ;
            LimitCount& operator=(LimitCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->all_ == nullptr
        && this->mobile_ == nullptr && this->PC_ == nullptr; };
            // all Field Functions 
            bool hasAll() const { return this->all_ != nullptr;};
            void deleteAll() { this->all_ = nullptr;};
            inline string getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, "") };
            inline LimitCount& setAll(string all) { DARABONBA_PTR_SET_VALUE(all_, all) };


            // mobile Field Functions 
            bool hasMobile() const { return this->mobile_ != nullptr;};
            void deleteMobile() { this->mobile_ = nullptr;};
            inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
            inline LimitCount& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


            // PC Field Functions 
            bool hasPC() const { return this->PC_ != nullptr;};
            void deletePC() { this->PC_ = nullptr;};
            inline string getPC() const { DARABONBA_PTR_GET_DEFAULT(PC_, "") };
            inline LimitCount& setPC(string PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


          protected:
            shared_ptr<string> all_ {};
            shared_ptr<string> mobile_ {};
            shared_ptr<string> PC_ {};
          };

          virtual bool empty() const override { return this->deviceBelong_ == nullptr
        && this->limitCount_ == nullptr && this->limitType_ == nullptr; };
          // deviceBelong Field Functions 
          bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
          void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
          inline string getDeviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
          inline LimitDetail& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


          // limitCount Field Functions 
          bool hasLimitCount() const { return this->limitCount_ != nullptr;};
          void deleteLimitCount() { this->limitCount_ = nullptr;};
          inline const LimitDetail::LimitCount & getLimitCount() const { DARABONBA_PTR_GET_CONST(limitCount_, LimitDetail::LimitCount) };
          inline LimitDetail::LimitCount getLimitCount() { DARABONBA_PTR_GET(limitCount_, LimitDetail::LimitCount) };
          inline LimitDetail& setLimitCount(const LimitDetail::LimitCount & limitCount) { DARABONBA_PTR_SET_VALUE(limitCount_, limitCount) };
          inline LimitDetail& setLimitCount(LimitDetail::LimitCount && limitCount) { DARABONBA_PTR_SET_RVALUE(limitCount_, limitCount) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline LimitDetail& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


        protected:
          shared_ptr<string> deviceBelong_ {};
          shared_ptr<LimitDetail::LimitCount> limitCount_ {};
          shared_ptr<string> limitType_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->limitDetail_ == nullptr && this->matchMode_ == nullptr && this->name_ == nullptr && this->policyId_ == nullptr
        && this->priority_ == nullptr && this->status_ == nullptr && this->whitelist_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Policies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Policies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // limitDetail Field Functions 
        bool hasLimitDetail() const { return this->limitDetail_ != nullptr;};
        void deleteLimitDetail() { this->limitDetail_ = nullptr;};
        inline const vector<Policies::LimitDetail> & getLimitDetail() const { DARABONBA_PTR_GET_CONST(limitDetail_, vector<Policies::LimitDetail>) };
        inline vector<Policies::LimitDetail> getLimitDetail() { DARABONBA_PTR_GET(limitDetail_, vector<Policies::LimitDetail>) };
        inline Policies& setLimitDetail(const vector<Policies::LimitDetail> & limitDetail) { DARABONBA_PTR_SET_VALUE(limitDetail_, limitDetail) };
        inline Policies& setLimitDetail(vector<Policies::LimitDetail> && limitDetail) { DARABONBA_PTR_SET_RVALUE(limitDetail_, limitDetail) };


        // matchMode Field Functions 
        bool hasMatchMode() const { return this->matchMode_ != nullptr;};
        void deleteMatchMode() { this->matchMode_ = nullptr;};
        inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
        inline Policies& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
        inline Policies& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Policies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // whitelist Field Functions 
        bool hasWhitelist() const { return this->whitelist_ != nullptr;};
        void deleteWhitelist() { this->whitelist_ = nullptr;};
        inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
        inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
        inline Policies& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
        inline Policies& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<vector<Policies::LimitDetail>> limitDetail_ {};
        shared_ptr<string> matchMode_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<int64_t> priority_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<string>> whitelist_ {};
      };

      virtual bool empty() const override { return this->policies_ == nullptr
        && this->userGroupId_ == nullptr; };
      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<UserGroups::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<UserGroups::Policies>) };
      inline vector<UserGroups::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<UserGroups::Policies>) };
      inline UserGroups& setPolicies(const vector<UserGroups::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline UserGroups& setPolicies(vector<UserGroups::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline UserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      shared_ptr<vector<UserGroups::Policies>> policies_ {};
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups>) };
    inline vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups>) };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setUserGroups(const vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListRegistrationPoliciesForUserGroupResponseBody& setUserGroups(vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRegistrationPoliciesForUserGroupResponseBody::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
