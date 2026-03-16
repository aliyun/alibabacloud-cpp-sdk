// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody(DescribeGroupsResponseBody &&) = default ;
    DescribeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody& operator=(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody& operator=(DescribeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedLoginPolicy, attachedLoginPolicy_);
        DARABONBA_PTR_TO_JSON(AuthedResources, authedResources_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
        DARABONBA_PTR_TO_JSON(UserCount, userCount_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedLoginPolicy, attachedLoginPolicy_);
        DARABONBA_PTR_FROM_JSON(AuthedResources, authedResources_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
        DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttachedLoginPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachedLoginPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        };
        friend void from_json(const Darabonba::Json& j, AttachedLoginPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        };
        AttachedLoginPolicy() = default ;
        AttachedLoginPolicy(const AttachedLoginPolicy &) = default ;
        AttachedLoginPolicy(AttachedLoginPolicy &&) = default ;
        AttachedLoginPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachedLoginPolicy() = default ;
        AttachedLoginPolicy& operator=(const AttachedLoginPolicy &) = default ;
        AttachedLoginPolicy& operator=(AttachedLoginPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->policyId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AttachedLoginPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline AttachedLoginPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> policyId_ {};
      };

      virtual bool empty() const override { return this->attachedLoginPolicy_ == nullptr
        && this->authedResources_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->transferFileNeedApproval_ == nullptr && this->userCount_ == nullptr; };
      // attachedLoginPolicy Field Functions 
      bool hasAttachedLoginPolicy() const { return this->attachedLoginPolicy_ != nullptr;};
      void deleteAttachedLoginPolicy() { this->attachedLoginPolicy_ = nullptr;};
      inline const Groups::AttachedLoginPolicy & getAttachedLoginPolicy() const { DARABONBA_PTR_GET_CONST(attachedLoginPolicy_, Groups::AttachedLoginPolicy) };
      inline Groups::AttachedLoginPolicy getAttachedLoginPolicy() { DARABONBA_PTR_GET(attachedLoginPolicy_, Groups::AttachedLoginPolicy) };
      inline Groups& setAttachedLoginPolicy(const Groups::AttachedLoginPolicy & attachedLoginPolicy) { DARABONBA_PTR_SET_VALUE(attachedLoginPolicy_, attachedLoginPolicy) };
      inline Groups& setAttachedLoginPolicy(Groups::AttachedLoginPolicy && attachedLoginPolicy) { DARABONBA_PTR_SET_RVALUE(attachedLoginPolicy_, attachedLoginPolicy) };


      // authedResources Field Functions 
      bool hasAuthedResources() const { return this->authedResources_ != nullptr;};
      void deleteAuthedResources() { this->authedResources_ = nullptr;};
      inline const map<string, string> & getAuthedResources() const { DARABONBA_PTR_GET_CONST(authedResources_, map<string, string>) };
      inline map<string, string> getAuthedResources() { DARABONBA_PTR_GET(authedResources_, map<string, string>) };
      inline Groups& setAuthedResources(const map<string, string> & authedResources) { DARABONBA_PTR_SET_VALUE(authedResources_, authedResources) };
      inline Groups& setAuthedResources(map<string, string> && authedResources) { DARABONBA_PTR_SET_RVALUE(authedResources_, authedResources) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Groups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Groups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // transferFileNeedApproval Field Functions 
      bool hasTransferFileNeedApproval() const { return this->transferFileNeedApproval_ != nullptr;};
      void deleteTransferFileNeedApproval() { this->transferFileNeedApproval_ = nullptr;};
      inline bool getTransferFileNeedApproval() const { DARABONBA_PTR_GET_DEFAULT(transferFileNeedApproval_, false) };
      inline Groups& setTransferFileNeedApproval(bool transferFileNeedApproval) { DARABONBA_PTR_SET_VALUE(transferFileNeedApproval_, transferFileNeedApproval) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
      inline Groups& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    protected:
      shared_ptr<Groups::AttachedLoginPolicy> attachedLoginPolicy_ {};
      // The type of the resource assigned to the user group.
      shared_ptr<map<string, string>> authedResources_ {};
      // The time when the user group is created.
      shared_ptr<string> createTime_ {};
      // The description of the user group.
      shared_ptr<string> description_ {};
      shared_ptr<string> groupId_ {};
      // The name of the user group.
      shared_ptr<string> groupName_ {};
      // Indicates whether the file approval feature is enabled.
      shared_ptr<bool> transferFileNeedApproval_ {};
      // The number of users in the user group.
      shared_ptr<int32_t> userCount_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->groups_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGroupsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline vector<DescribeGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline DescribeGroupsResponseBody& setGroups(const vector<DescribeGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupsResponseBody& setGroups(vector<DescribeGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of the entries returned.
    shared_ptr<int32_t> count_ {};
    // The user groups.
    shared_ptr<vector<DescribeGroupsResponseBody::Groups>> groups_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
