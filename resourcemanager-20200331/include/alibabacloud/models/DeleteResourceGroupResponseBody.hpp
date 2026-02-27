// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    DeleteResourceGroupResponseBody() = default ;
    DeleteResourceGroupResponseBody(const DeleteResourceGroupResponseBody &) = default ;
    DeleteResourceGroupResponseBody(DeleteResourceGroupResponseBody &&) = default ;
    DeleteResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceGroupResponseBody() = default ;
    DeleteResourceGroupResponseBody& operator=(const DeleteResourceGroupResponseBody &) = default ;
    DeleteResourceGroupResponseBody& operator=(DeleteResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionStatuses, regionStatuses_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionStatuses, regionStatuses_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class RegionStatuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionStatuses& obj) { 
          DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
        };
        friend void from_json(const Darabonba::Json& j, RegionStatuses& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
        };
        RegionStatuses() = default ;
        RegionStatuses(const RegionStatuses &) = default ;
        RegionStatuses(RegionStatuses &&) = default ;
        RegionStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionStatuses() = default ;
        RegionStatuses& operator=(const RegionStatuses &) = default ;
        RegionStatuses& operator=(RegionStatuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegionStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionStatus& obj) { 
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, RegionStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          RegionStatus() = default ;
          RegionStatus(const RegionStatus &) = default ;
          RegionStatus(RegionStatus &&) = default ;
          RegionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionStatus() = default ;
          RegionStatus& operator=(const RegionStatus &) = default ;
          RegionStatus& operator=(RegionStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->regionId_ == nullptr
        && this->status_ == nullptr; };
          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline RegionStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline RegionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> regionId_ {};
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->regionStatus_ == nullptr; };
        // regionStatus Field Functions 
        bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
        void deleteRegionStatus() { this->regionStatus_ = nullptr;};
        inline const vector<RegionStatuses::RegionStatus> & getRegionStatus() const { DARABONBA_PTR_GET_CONST(regionStatus_, vector<RegionStatuses::RegionStatus>) };
        inline vector<RegionStatuses::RegionStatus> getRegionStatus() { DARABONBA_PTR_GET(regionStatus_, vector<RegionStatuses::RegionStatus>) };
        inline RegionStatuses& setRegionStatus(const vector<RegionStatuses::RegionStatus> & regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };
        inline RegionStatuses& setRegionStatus(vector<RegionStatuses::RegionStatus> && regionStatus) { DARABONBA_PTR_SET_RVALUE(regionStatus_, regionStatus) };


      protected:
        shared_ptr<vector<RegionStatuses::RegionStatus>> regionStatus_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->regionStatuses_ == nullptr
        && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline ResourceGroup& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ResourceGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ResourceGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResourceGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionStatuses Field Functions 
      bool hasRegionStatuses() const { return this->regionStatuses_ != nullptr;};
      void deleteRegionStatuses() { this->regionStatuses_ = nullptr;};
      inline const ResourceGroup::RegionStatuses & getRegionStatuses() const { DARABONBA_PTR_GET_CONST(regionStatuses_, ResourceGroup::RegionStatuses) };
      inline ResourceGroup::RegionStatuses getRegionStatuses() { DARABONBA_PTR_GET(regionStatuses_, ResourceGroup::RegionStatuses) };
      inline ResourceGroup& setRegionStatuses(const ResourceGroup::RegionStatuses & regionStatuses) { DARABONBA_PTR_SET_VALUE(regionStatuses_, regionStatuses) };
      inline ResourceGroup& setRegionStatuses(ResourceGroup::RegionStatuses && regionStatuses) { DARABONBA_PTR_SET_RVALUE(regionStatuses_, regionStatuses) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource group belongs.
      shared_ptr<string> accountId_ {};
      // The time when the resource group was created. The time is displayed in UTC.
      shared_ptr<string> createDate_ {};
      // The display name of the resource group.
      shared_ptr<string> displayName_ {};
      // The ID of the resource group.
      shared_ptr<string> id_ {};
      // The unique identifier of the resource group.
      shared_ptr<string> name_ {};
      shared_ptr<ResourceGroup::RegionStatuses> regionStatuses_ {};
      // The status of the resource group. Valid values:
      // 
      // *   Creating: The resource group is being created.
      // *   OK: The resource group is created.
      // *   PendingDelete: The resource group is waiting to be deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const DeleteResourceGroupResponseBody::ResourceGroup & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, DeleteResourceGroupResponseBody::ResourceGroup) };
    inline DeleteResourceGroupResponseBody::ResourceGroup getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, DeleteResourceGroupResponseBody::ResourceGroup) };
    inline DeleteResourceGroupResponseBody& setResourceGroup(const DeleteResourceGroupResponseBody::ResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline DeleteResourceGroupResponseBody& setResourceGroup(DeleteResourceGroupResponseBody::ResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the resource group.
    shared_ptr<DeleteResourceGroupResponseBody::ResourceGroup> resourceGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
