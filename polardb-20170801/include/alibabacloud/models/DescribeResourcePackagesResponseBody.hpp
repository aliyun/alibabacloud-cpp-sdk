// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeResourcePackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageList, resourcePackageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageList, resourcePackageList_);
    };
    DescribeResourcePackagesResponseBody() = default ;
    DescribeResourcePackagesResponseBody(const DescribeResourcePackagesResponseBody &) = default ;
    DescribeResourcePackagesResponseBody(DescribeResourcePackagesResponseBody &&) = default ;
    DescribeResourcePackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackagesResponseBody() = default ;
    DescribeResourcePackagesResponseBody& operator=(const DescribeResourcePackagesResponseBody &) = default ;
    DescribeResourcePackagesResponseBody& operator=(DescribeResourcePackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePackageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePackageList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoQuota, autoQuota_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ResourcePackageId, resourcePackageId_);
        DARABONBA_PTR_TO_JSON(ResourcePackageQuotaList, resourcePackageQuotaList_);
        DARABONBA_PTR_TO_JSON(ResourcePackageType, resourcePackageType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePackageList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoQuota, autoQuota_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ResourcePackageId, resourcePackageId_);
        DARABONBA_PTR_FROM_JSON(ResourcePackageQuotaList, resourcePackageQuotaList_);
        DARABONBA_PTR_FROM_JSON(ResourcePackageType, resourcePackageType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
      };
      ResourcePackageList() = default ;
      ResourcePackageList(const ResourcePackageList &) = default ;
      ResourcePackageList(ResourcePackageList &&) = default ;
      ResourcePackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePackageList() = default ;
      ResourcePackageList& operator=(const ResourcePackageList &) = default ;
      ResourcePackageList& operator=(ResourcePackageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class ResourcePackageQuotaList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePackageQuotaList& obj) { 
          DARABONBA_PTR_TO_JSON(AllocatedCapacity, allocatedCapacity_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePackageQuotaList& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocatedCapacity, allocatedCapacity_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        };
        ResourcePackageQuotaList() = default ;
        ResourcePackageQuotaList(const ResourcePackageQuotaList &) = default ;
        ResourcePackageQuotaList(ResourcePackageQuotaList &&) = default ;
        ResourcePackageQuotaList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePackageQuotaList() = default ;
        ResourcePackageQuotaList& operator=(const ResourcePackageQuotaList &) = default ;
        ResourcePackageQuotaList& operator=(ResourcePackageQuotaList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocatedCapacity_ == nullptr
        && this->projectId_ == nullptr && this->usedCapacity_ == nullptr; };
        // allocatedCapacity Field Functions 
        bool hasAllocatedCapacity() const { return this->allocatedCapacity_ != nullptr;};
        void deleteAllocatedCapacity() { this->allocatedCapacity_ = nullptr;};
        inline int64_t getAllocatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(allocatedCapacity_, 0L) };
        inline ResourcePackageQuotaList& setAllocatedCapacity(int64_t allocatedCapacity) { DARABONBA_PTR_SET_VALUE(allocatedCapacity_, allocatedCapacity) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline ResourcePackageQuotaList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
        inline ResourcePackageQuotaList& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      protected:
        shared_ptr<int64_t> allocatedCapacity_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<int64_t> usedCapacity_ {};
      };

      virtual bool empty() const override { return this->autoQuota_ == nullptr
        && this->createTime_ == nullptr && this->expireTime_ == nullptr && this->resourcePackageId_ == nullptr && this->resourcePackageQuotaList_ == nullptr && this->resourcePackageType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->totalCapacity_ == nullptr && this->usedCapacity_ == nullptr; };
      // autoQuota Field Functions 
      bool hasAutoQuota() const { return this->autoQuota_ != nullptr;};
      void deleteAutoQuota() { this->autoQuota_ = nullptr;};
      inline bool getAutoQuota() const { DARABONBA_PTR_GET_DEFAULT(autoQuota_, false) };
      inline ResourcePackageList& setAutoQuota(bool autoQuota) { DARABONBA_PTR_SET_VALUE(autoQuota_, autoQuota) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ResourcePackageList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline ResourcePackageList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // resourcePackageId Field Functions 
      bool hasResourcePackageId() const { return this->resourcePackageId_ != nullptr;};
      void deleteResourcePackageId() { this->resourcePackageId_ = nullptr;};
      inline string getResourcePackageId() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageId_, "") };
      inline ResourcePackageList& setResourcePackageId(string resourcePackageId) { DARABONBA_PTR_SET_VALUE(resourcePackageId_, resourcePackageId) };


      // resourcePackageQuotaList Field Functions 
      bool hasResourcePackageQuotaList() const { return this->resourcePackageQuotaList_ != nullptr;};
      void deleteResourcePackageQuotaList() { this->resourcePackageQuotaList_ = nullptr;};
      inline const vector<ResourcePackageList::ResourcePackageQuotaList> & getResourcePackageQuotaList() const { DARABONBA_PTR_GET_CONST(resourcePackageQuotaList_, vector<ResourcePackageList::ResourcePackageQuotaList>) };
      inline vector<ResourcePackageList::ResourcePackageQuotaList> getResourcePackageQuotaList() { DARABONBA_PTR_GET(resourcePackageQuotaList_, vector<ResourcePackageList::ResourcePackageQuotaList>) };
      inline ResourcePackageList& setResourcePackageQuotaList(const vector<ResourcePackageList::ResourcePackageQuotaList> & resourcePackageQuotaList) { DARABONBA_PTR_SET_VALUE(resourcePackageQuotaList_, resourcePackageQuotaList) };
      inline ResourcePackageList& setResourcePackageQuotaList(vector<ResourcePackageList::ResourcePackageQuotaList> && resourcePackageQuotaList) { DARABONBA_PTR_SET_RVALUE(resourcePackageQuotaList_, resourcePackageQuotaList) };


      // resourcePackageType Field Functions 
      bool hasResourcePackageType() const { return this->resourcePackageType_ != nullptr;};
      void deleteResourcePackageType() { this->resourcePackageType_ = nullptr;};
      inline string getResourcePackageType() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageType_, "") };
      inline ResourcePackageList& setResourcePackageType(string resourcePackageType) { DARABONBA_PTR_SET_VALUE(resourcePackageType_, resourcePackageType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourcePackageList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ResourcePackageList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ResourcePackageList::Tags>) };
      inline vector<ResourcePackageList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ResourcePackageList::Tags>) };
      inline ResourcePackageList& setTags(const vector<ResourcePackageList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ResourcePackageList& setTags(vector<ResourcePackageList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline int64_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
      inline ResourcePackageList& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
      inline ResourcePackageList& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


    protected:
      shared_ptr<bool> autoQuota_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> resourcePackageId_ {};
      shared_ptr<vector<ResourcePackageList::ResourcePackageQuotaList>> resourcePackageQuotaList_ {};
      shared_ptr<string> resourcePackageType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<ResourcePackageList::Tags>> tags_ {};
      shared_ptr<int64_t> totalCapacity_ {};
      shared_ptr<int64_t> usedCapacity_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourcePackageList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcePackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageList Field Functions 
    bool hasResourcePackageList() const { return this->resourcePackageList_ != nullptr;};
    void deleteResourcePackageList() { this->resourcePackageList_ = nullptr;};
    inline const vector<DescribeResourcePackagesResponseBody::ResourcePackageList> & getResourcePackageList() const { DARABONBA_PTR_GET_CONST(resourcePackageList_, vector<DescribeResourcePackagesResponseBody::ResourcePackageList>) };
    inline vector<DescribeResourcePackagesResponseBody::ResourcePackageList> getResourcePackageList() { DARABONBA_PTR_GET(resourcePackageList_, vector<DescribeResourcePackagesResponseBody::ResourcePackageList>) };
    inline DescribeResourcePackagesResponseBody& setResourcePackageList(const vector<DescribeResourcePackagesResponseBody::ResourcePackageList> & resourcePackageList) { DARABONBA_PTR_SET_VALUE(resourcePackageList_, resourcePackageList) };
    inline DescribeResourcePackagesResponseBody& setResourcePackageList(vector<DescribeResourcePackagesResponseBody::ResourcePackageList> && resourcePackageList) { DARABONBA_PTR_SET_RVALUE(resourcePackageList_, resourcePackageList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeResourcePackagesResponseBody::ResourcePackageList>> resourcePackageList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
