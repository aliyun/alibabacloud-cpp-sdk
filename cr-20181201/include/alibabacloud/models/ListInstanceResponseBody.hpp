// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceResponseBody() = default ;
    ListInstanceResponseBody(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody(ListInstanceResponseBody &&) = default ;
    ListInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBody() = default ;
    ListInstanceResponseBody& operator=(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody& operator=(ListInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceIssue, instanceIssue_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceSpecification, instanceSpecification_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceIssue, instanceIssue_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceSpecification, instanceSpecification_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceIssue_ == nullptr && this->instanceName_ == nullptr && this->instanceSpecification_ == nullptr && this->instanceStatus_ == nullptr
        && this->modifiedTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Instances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceIssue Field Functions 
      bool hasInstanceIssue() const { return this->instanceIssue_ != nullptr;};
      void deleteInstanceIssue() { this->instanceIssue_ = nullptr;};
      inline string getInstanceIssue() const { DARABONBA_PTR_GET_DEFAULT(instanceIssue_, "") };
      inline Instances& setInstanceIssue(string instanceIssue) { DARABONBA_PTR_SET_VALUE(instanceIssue_, instanceIssue) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceSpecification Field Functions 
      bool hasInstanceSpecification() const { return this->instanceSpecification_ != nullptr;};
      void deleteInstanceSpecification() { this->instanceSpecification_ = nullptr;};
      inline string getInstanceSpecification() const { DARABONBA_PTR_GET_DEFAULT(instanceSpecification_, "") };
      inline Instances& setInstanceSpecification(string instanceSpecification) { DARABONBA_PTR_SET_VALUE(instanceSpecification_, instanceSpecification) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Instances& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
      inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
      inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The issue occurs on the instance.
      shared_ptr<string> instanceIssue_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The edition of the Container Registry Enterprise Edition instance.
      shared_ptr<string> instanceSpecification_ {};
      // The status of the instance.
      shared_ptr<string> instanceStatus_ {};
      // The time when the instance was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the instance.
      shared_ptr<vector<Instances::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instances_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstanceResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstanceResponseBody::Instances>) };
    inline vector<ListInstanceResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstanceResponseBody::Instances>) };
    inline ListInstanceResponseBody& setInstances(const vector<ListInstanceResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstanceResponseBody& setInstances(vector<ListInstanceResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListInstanceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListInstanceResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // The queried instances.
    shared_ptr<vector<ListInstanceResponseBody::Instances>> instances_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
