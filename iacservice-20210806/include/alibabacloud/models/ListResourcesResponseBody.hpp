// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourcesResponseBody() = default ;
    ListResourcesResponseBody(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody(ListResourcesResponseBody &&) = default ;
    ListResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBody() = default ;
    ListResourcesResponseBody& operator=(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody& operator=(ListResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dependsOnResourceIds, dependsOnResourceIds_);
        DARABONBA_PTR_TO_JSON(productCode, productCode_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_ANY_TO_JSON(propertyVariables, propertyVariables_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceArn, resourceArn_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(resourcePageUrl, resourcePageUrl_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(terraformArn, terraformArn_);
        DARABONBA_PTR_TO_JSON(terraformCode, terraformCode_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dependsOnResourceIds, dependsOnResourceIds_);
        DARABONBA_PTR_FROM_JSON(productCode, productCode_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_ANY_FROM_JSON(propertyVariables, propertyVariables_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceArn, resourceArn_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(resourcePageUrl, resourcePageUrl_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(terraformArn, terraformArn_);
        DARABONBA_PTR_FROM_JSON(terraformCode, terraformCode_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
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
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createTime_ == nullptr && this->dependsOnResourceIds_ == nullptr && this->productCode_ == nullptr && this->properties_ == nullptr && this->propertyVariables_ == nullptr
        && this->regionId_ == nullptr && this->resourceArn_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr
        && this->resourcePageUrl_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->terraformArn_ == nullptr
        && this->terraformCode_ == nullptr && this->zoneId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Resources& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Resources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dependsOnResourceIds Field Functions 
      bool hasDependsOnResourceIds() const { return this->dependsOnResourceIds_ != nullptr;};
      void deleteDependsOnResourceIds() { this->dependsOnResourceIds_ = nullptr;};
      inline const vector<string> & getDependsOnResourceIds() const { DARABONBA_PTR_GET_CONST(dependsOnResourceIds_, vector<string>) };
      inline vector<string> getDependsOnResourceIds() { DARABONBA_PTR_GET(dependsOnResourceIds_, vector<string>) };
      inline Resources& setDependsOnResourceIds(const vector<string> & dependsOnResourceIds) { DARABONBA_PTR_SET_VALUE(dependsOnResourceIds_, dependsOnResourceIds) };
      inline Resources& setDependsOnResourceIds(vector<string> && dependsOnResourceIds) { DARABONBA_PTR_SET_RVALUE(dependsOnResourceIds_, dependsOnResourceIds) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Resources& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline Resources& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline Resources& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // propertyVariables Field Functions 
      bool hasPropertyVariables() const { return this->propertyVariables_ != nullptr;};
      void deletePropertyVariables() { this->propertyVariables_ = nullptr;};
      inline       const Darabonba::Json & getPropertyVariables() const { DARABONBA_GET(propertyVariables_) };
      Darabonba::Json & getPropertyVariables() { DARABONBA_GET(propertyVariables_) };
      inline Resources& setPropertyVariables(const Darabonba::Json & propertyVariables) { DARABONBA_SET_VALUE(propertyVariables_, propertyVariables) };
      inline Resources& setPropertyVariables(Darabonba::Json && propertyVariables) { DARABONBA_SET_RVALUE(propertyVariables_, propertyVariables) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline Resources& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Resources& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Resources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourcePageUrl Field Functions 
      bool hasResourcePageUrl() const { return this->resourcePageUrl_ != nullptr;};
      void deleteResourcePageUrl() { this->resourcePageUrl_ = nullptr;};
      inline string getResourcePageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourcePageUrl_, "") };
      inline Resources& setResourcePageUrl(string resourcePageUrl) { DARABONBA_PTR_SET_VALUE(resourcePageUrl_, resourcePageUrl) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Resources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Resources::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Resources::Tags>) };
      inline vector<Resources::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Resources::Tags>) };
      inline Resources& setTags(const vector<Resources::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Resources& setTags(vector<Resources::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // terraformArn Field Functions 
      bool hasTerraformArn() const { return this->terraformArn_ != nullptr;};
      void deleteTerraformArn() { this->terraformArn_ = nullptr;};
      inline string getTerraformArn() const { DARABONBA_PTR_GET_DEFAULT(terraformArn_, "") };
      inline Resources& setTerraformArn(string terraformArn) { DARABONBA_PTR_SET_VALUE(terraformArn_, terraformArn) };


      // terraformCode Field Functions 
      bool hasTerraformCode() const { return this->terraformCode_ != nullptr;};
      void deleteTerraformCode() { this->terraformCode_ = nullptr;};
      inline string getTerraformCode() const { DARABONBA_PTR_GET_DEFAULT(terraformCode_, "") };
      inline Resources& setTerraformCode(string terraformCode) { DARABONBA_PTR_SET_VALUE(terraformCode_, terraformCode) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Resources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<string>> dependsOnResourceIds_ {};
      shared_ptr<string> productCode_ {};
      Darabonba::Json properties_ {};
      Darabonba::Json propertyVariables_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceArn_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> resourcePageUrl_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Resources::Tags>> tags_ {};
      // terraform arn
      shared_ptr<string> terraformArn_ {};
      // terraform code
      shared_ptr<string> terraformCode_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->resources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListResourcesResponseBody::Resources>) };
    inline vector<ListResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListResourcesResponseBody::Resources>) };
    inline ListResourcesResponseBody& setResources(const vector<ListResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListResourcesResponseBody& setResources(vector<ListResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListResourcesResponseBody::Resources>> resources_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
