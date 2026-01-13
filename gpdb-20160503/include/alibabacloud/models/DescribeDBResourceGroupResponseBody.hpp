// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody(DescribeDBResourceGroupResponseBody &&) = default ;
    DescribeDBResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody& operator=(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody& operator=(DescribeDBResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroupItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroupItems& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceGroupItem, resourceGroupItem_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroupItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceGroupItem, resourceGroupItem_);
      };
      ResourceGroupItems() = default ;
      ResourceGroupItems(const ResourceGroupItems &) = default ;
      ResourceGroupItems(ResourceGroupItems &&) = default ;
      ResourceGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroupItems() = default ;
      ResourceGroupItems& operator=(const ResourceGroupItems &) = default ;
      ResourceGroupItems& operator=(ResourceGroupItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceGroupItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroupItem& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupConfig, resourceGroupConfig_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(RoleList, roleList_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroupItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroupConfig, resourceGroupConfig_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
        };
        ResourceGroupItem() = default ;
        ResourceGroupItem(const ResourceGroupItem &) = default ;
        ResourceGroupItem(ResourceGroupItem &&) = default ;
        ResourceGroupItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroupItem() = default ;
        ResourceGroupItem& operator=(const ResourceGroupItem &) = default ;
        ResourceGroupItem& operator=(ResourceGroupItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
            DARABONBA_PTR_TO_JSON(Role, role_);
          };
          friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Role, role_);
          };
          RoleList() = default ;
          RoleList(const RoleList &) = default ;
          RoleList(RoleList &&) = default ;
          RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleList() = default ;
          RoleList& operator=(const RoleList &) = default ;
          RoleList& operator=(RoleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->role_ == nullptr; };
          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline const vector<string> & getRole() const { DARABONBA_PTR_GET_CONST(role_, vector<string>) };
          inline vector<string> getRole() { DARABONBA_PTR_GET(role_, vector<string>) };
          inline RoleList& setRole(const vector<string> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
          inline RoleList& setRole(vector<string> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


        protected:
          shared_ptr<vector<string>> role_ {};
        };

        virtual bool empty() const override { return this->resourceGroupConfig_ == nullptr
        && this->resourceGroupName_ == nullptr && this->roleList_ == nullptr; };
        // resourceGroupConfig Field Functions 
        bool hasResourceGroupConfig() const { return this->resourceGroupConfig_ != nullptr;};
        void deleteResourceGroupConfig() { this->resourceGroupConfig_ = nullptr;};
        inline string getResourceGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupConfig_, "") };
        inline ResourceGroupItem& setResourceGroupConfig(string resourceGroupConfig) { DARABONBA_PTR_SET_VALUE(resourceGroupConfig_, resourceGroupConfig) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline ResourceGroupItem& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // roleList Field Functions 
        bool hasRoleList() const { return this->roleList_ != nullptr;};
        void deleteRoleList() { this->roleList_ = nullptr;};
        inline const ResourceGroupItem::RoleList & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, ResourceGroupItem::RoleList) };
        inline ResourceGroupItem::RoleList getRoleList() { DARABONBA_PTR_GET(roleList_, ResourceGroupItem::RoleList) };
        inline ResourceGroupItem& setRoleList(const ResourceGroupItem::RoleList & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
        inline ResourceGroupItem& setRoleList(ResourceGroupItem::RoleList && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


      protected:
        // The configurations of the resource group.
        // 
        // > 
        // 
        // *   CpuRateLimit: the percentage of CPU resources that are available for the resource group. Unit: %.
        // 
        // *   MemoryLimit: the percentage of memory resources that are available for the resource group. Unit: %.
        // 
        // *   MemorySharedQuota: the percentage of memory resources shared among transactions that are submitted to the resource group. Unit: %. Default value: 80.
        // 
        // *   MemorySpillRatio: the memory spill ratio for memory-intensive transactions. When the memory that is used by memory-intensive transactions reaches this value, data is spilled to disks. Unit: %. Default value: 0.
        // 
        // *   Concurrency: the maximum number of concurrent transactions or parallel queries that are allowed for a resource group. Default value: 20.
        shared_ptr<string> resourceGroupConfig_ {};
        // The name of the resource group.
        shared_ptr<string> resourceGroupName_ {};
        // The roles.
        shared_ptr<ResourceGroupItem::RoleList> roleList_ {};
      };

      virtual bool empty() const override { return this->resourceGroupItem_ == nullptr; };
      // resourceGroupItem Field Functions 
      bool hasResourceGroupItem() const { return this->resourceGroupItem_ != nullptr;};
      void deleteResourceGroupItem() { this->resourceGroupItem_ = nullptr;};
      inline const vector<ResourceGroupItems::ResourceGroupItem> & getResourceGroupItem() const { DARABONBA_PTR_GET_CONST(resourceGroupItem_, vector<ResourceGroupItems::ResourceGroupItem>) };
      inline vector<ResourceGroupItems::ResourceGroupItem> getResourceGroupItem() { DARABONBA_PTR_GET(resourceGroupItem_, vector<ResourceGroupItems::ResourceGroupItem>) };
      inline ResourceGroupItems& setResourceGroupItem(const vector<ResourceGroupItems::ResourceGroupItem> & resourceGroupItem) { DARABONBA_PTR_SET_VALUE(resourceGroupItem_, resourceGroupItem) };
      inline ResourceGroupItems& setResourceGroupItem(vector<ResourceGroupItems::ResourceGroupItem> && resourceGroupItem) { DARABONBA_PTR_SET_RVALUE(resourceGroupItem_, resourceGroupItem) };


    protected:
      shared_ptr<vector<ResourceGroupItems::ResourceGroupItem>> resourceGroupItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroupItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupItems Field Functions 
    bool hasResourceGroupItems() const { return this->resourceGroupItems_ != nullptr;};
    void deleteResourceGroupItems() { this->resourceGroupItems_ = nullptr;};
    inline const DescribeDBResourceGroupResponseBody::ResourceGroupItems & getResourceGroupItems() const { DARABONBA_PTR_GET_CONST(resourceGroupItems_, DescribeDBResourceGroupResponseBody::ResourceGroupItems) };
    inline DescribeDBResourceGroupResponseBody::ResourceGroupItems getResourceGroupItems() { DARABONBA_PTR_GET(resourceGroupItems_, DescribeDBResourceGroupResponseBody::ResourceGroupItems) };
    inline DescribeDBResourceGroupResponseBody& setResourceGroupItems(const DescribeDBResourceGroupResponseBody::ResourceGroupItems & resourceGroupItems) { DARABONBA_PTR_SET_VALUE(resourceGroupItems_, resourceGroupItems) };
    inline DescribeDBResourceGroupResponseBody& setResourceGroupItems(DescribeDBResourceGroupResponseBody::ResourceGroupItems && resourceGroupItems) { DARABONBA_PTR_SET_RVALUE(resourceGroupItems_, resourceGroupItems) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried resource group information.
    shared_ptr<DescribeDBResourceGroupResponseBody::ResourceGroupItems> resourceGroupItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
