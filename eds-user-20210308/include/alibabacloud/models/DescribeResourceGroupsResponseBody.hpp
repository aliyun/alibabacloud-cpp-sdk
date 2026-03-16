// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeResourceGroupsResponseBody() = default ;
    DescribeResourceGroupsResponseBody(const DescribeResourceGroupsResponseBody &) = default ;
    DescribeResourceGroupsResponseBody(DescribeResourceGroupsResponseBody &&) = default ;
    DescribeResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupsResponseBody() = default ;
    DescribeResourceGroupsResponseBody& operator=(const DescribeResourceGroupsResponseBody &) = default ;
    DescribeResourceGroupsResponseBody& operator=(DescribeResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
        DARABONBA_PTR_TO_JSON(AppRules, appRules_);
        DARABONBA_PTR_TO_JSON(AuthCount, authCount_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Policies, policies_);
        DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(Timers, timers_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppRules, appRules_);
        DARABONBA_PTR_FROM_JSON(AuthCount, authCount_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
        DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(Timers, timers_);
      };
      ResourceGroup() = default ;
      ResourceGroup(const ResourceGroup &) = default ;
      ResourceGroup(ResourceGroup &&) = default ;
      ResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroup() = default ;
      ResourceGroup& operator=(const ResourceGroup &) = default ;
      ResourceGroup& operator=(ResourceGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timers& obj) { 
          DARABONBA_PTR_TO_JSON(BindStatus, bindStatus_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TimerStatus, timerStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Timers& obj) { 
          DARABONBA_PTR_FROM_JSON(BindStatus, bindStatus_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TimerStatus, timerStatus_);
        };
        Timers() = default ;
        Timers(const Timers &) = default ;
        Timers(Timers &&) = default ;
        Timers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timers() = default ;
        Timers& operator=(const Timers &) = default ;
        Timers& operator=(Timers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindStatus_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->timerStatus_ == nullptr; };
        // bindStatus Field Functions 
        bool hasBindStatus() const { return this->bindStatus_ != nullptr;};
        void deleteBindStatus() { this->bindStatus_ = nullptr;};
        inline string getBindStatus() const { DARABONBA_PTR_GET_DEFAULT(bindStatus_, "") };
        inline Timers& setBindStatus(string bindStatus) { DARABONBA_PTR_SET_VALUE(bindStatus_, bindStatus) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Timers& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Timers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // timerStatus Field Functions 
        bool hasTimerStatus() const { return this->timerStatus_ != nullptr;};
        void deleteTimerStatus() { this->timerStatus_ = nullptr;};
        inline string getTimerStatus() const { DARABONBA_PTR_GET_DEFAULT(timerStatus_, "") };
        inline Timers& setTimerStatus(string timerStatus) { DARABONBA_PTR_SET_VALUE(timerStatus_, timerStatus) };


      protected:
        shared_ptr<string> bindStatus_ {};
        // The ID of the scheduled task.
        shared_ptr<string> id_ {};
        // The name of the scheduled task.
        shared_ptr<string> name_ {};
        shared_ptr<string> timerStatus_ {};
      };

      class Policies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policies& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Policies& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->isDefault_ == nullptr && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Policies& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Policies& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The policy ID.
        shared_ptr<string> id_ {};
        // Specifies whether to use the default policy.
        shared_ptr<bool> isDefault_ {};
        // The policy name.
        shared_ptr<string> name_ {};
      };

      class AppRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppRules& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AppRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AppRules() = default ;
        AppRules(const AppRules &) = default ;
        AppRules(AppRules &&) = default ;
        AppRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppRules() = default ;
        AppRules& operator=(const AppRules &) = default ;
        AppRules& operator=(AppRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AppRules& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AppRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline AppRules& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->appRules_ == nullptr && this->authCount_ == nullptr && this->createTime_ == nullptr && this->policies_ == nullptr && this->resourceCount_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceGroupName_ == nullptr && this->timers_ == nullptr; };
      // aliyunResourceGroupId Field Functions 
      bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
      void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
      inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
      inline ResourceGroup& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


      // appRules Field Functions 
      bool hasAppRules() const { return this->appRules_ != nullptr;};
      void deleteAppRules() { this->appRules_ = nullptr;};
      inline const vector<ResourceGroup::AppRules> & getAppRules() const { DARABONBA_PTR_GET_CONST(appRules_, vector<ResourceGroup::AppRules>) };
      inline vector<ResourceGroup::AppRules> getAppRules() { DARABONBA_PTR_GET(appRules_, vector<ResourceGroup::AppRules>) };
      inline ResourceGroup& setAppRules(const vector<ResourceGroup::AppRules> & appRules) { DARABONBA_PTR_SET_VALUE(appRules_, appRules) };
      inline ResourceGroup& setAppRules(vector<ResourceGroup::AppRules> && appRules) { DARABONBA_PTR_SET_RVALUE(appRules_, appRules) };


      // authCount Field Functions 
      bool hasAuthCount() const { return this->authCount_ != nullptr;};
      void deleteAuthCount() { this->authCount_ = nullptr;};
      inline string getAuthCount() const { DARABONBA_PTR_GET_DEFAULT(authCount_, "") };
      inline ResourceGroup& setAuthCount(string authCount) { DARABONBA_PTR_SET_VALUE(authCount_, authCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<ResourceGroup::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ResourceGroup::Policies>) };
      inline vector<ResourceGroup::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ResourceGroup::Policies>) };
      inline ResourceGroup& setPolicies(const vector<ResourceGroup::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline ResourceGroup& setPolicies(vector<ResourceGroup::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline string getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, "") };
      inline ResourceGroup& setResourceCount(string resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ResourceGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ResourceGroup& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // timers Field Functions 
      bool hasTimers() const { return this->timers_ != nullptr;};
      void deleteTimers() { this->timers_ = nullptr;};
      inline const vector<ResourceGroup::Timers> & getTimers() const { DARABONBA_PTR_GET_CONST(timers_, vector<ResourceGroup::Timers>) };
      inline vector<ResourceGroup::Timers> getTimers() { DARABONBA_PTR_GET(timers_, vector<ResourceGroup::Timers>) };
      inline ResourceGroup& setTimers(const vector<ResourceGroup::Timers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
      inline ResourceGroup& setTimers(vector<ResourceGroup::Timers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


    protected:
      shared_ptr<string> aliyunResourceGroupId_ {};
      shared_ptr<vector<ResourceGroup::AppRules>> appRules_ {};
      // The number of administrators that are authorized to access the resource group.
      shared_ptr<string> authCount_ {};
      // The time when the resource group was created.
      shared_ptr<string> createTime_ {};
      // >  The policy that is associated with the resource group.
      // 
      // *   The policy applies to cloud computers in the resource group. If multiple policies exist, they are enforced in order of priority.
      // 
      // *   If any of these cloud computers are already associated with other policies, the resource group\\"s policy takes precedence.
      shared_ptr<vector<ResourceGroup::Policies>> policies_ {};
      // The number of resources in the resource group.
      shared_ptr<string> resourceCount_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The name of the resource group.
      shared_ptr<string> resourceGroupName_ {};
      // >  The associated scheduled task.
      // 
      // *   The scheduled task applies to all cloud computers in the resource group. If any of these cloud computers are already associated with other scheduled tasks, the resource group\\"s scheduled task takes precedence.
      shared_ptr<vector<ResourceGroup::Timers>> timers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroup_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const vector<DescribeResourceGroupsResponseBody::ResourceGroup> & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, vector<DescribeResourceGroupsResponseBody::ResourceGroup>) };
    inline vector<DescribeResourceGroupsResponseBody::ResourceGroup> getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, vector<DescribeResourceGroupsResponseBody::ResourceGroup>) };
    inline DescribeResourceGroupsResponseBody& setResourceGroup(const vector<DescribeResourceGroupsResponseBody::ResourceGroup> & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline DescribeResourceGroupsResponseBody& setResourceGroup(vector<DescribeResourceGroupsResponseBody::ResourceGroup> && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeResourceGroupsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource groups.
    shared_ptr<vector<DescribeResourceGroupsResponseBody::ResourceGroup>> resourceGroup_ {};
    // The total number of resource groups.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
