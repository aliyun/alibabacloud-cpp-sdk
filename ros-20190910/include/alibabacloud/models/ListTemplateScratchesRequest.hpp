// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplateScratchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateScratchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchType, templateScratchType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateScratchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchType, templateScratchType_);
    };
    ListTemplateScratchesRequest() = default ;
    ListTemplateScratchesRequest(const ListTemplateScratchesRequest &) = default ;
    ListTemplateScratchesRequest(ListTemplateScratchesRequest &&) = default ;
    ListTemplateScratchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateScratchesRequest() = default ;
    ListTemplateScratchesRequest& operator=(const ListTemplateScratchesRequest &) = default ;
    ListTemplateScratchesRequest& operator=(ListTemplateScratchesRequest &&) = default ;
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
      // The tag key of the scenario.
      // 
      // > Tags is optional. If you want to specify Tags, you must specify Key.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the scenario.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->templateScratchId_ == nullptr && this->templateScratchType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTemplateScratchesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTemplateScratchesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTemplateScratchesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplateScratchesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplateScratchesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTemplateScratchesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTemplateScratchesRequest::Tags>) };
    inline vector<ListTemplateScratchesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListTemplateScratchesRequest::Tags>) };
    inline ListTemplateScratchesRequest& setTags(const vector<ListTemplateScratchesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTemplateScratchesRequest& setTags(vector<ListTemplateScratchesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline ListTemplateScratchesRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string getTemplateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline ListTemplateScratchesRequest& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


  protected:
    // The number of the page to return.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the scenario. Valid values:
    // 
    // *   GENERATE_IN_PROGRESS: The scenario is being created.
    // *   GENERATE_COMPLETE: The scenario is created.
    // *   GENERATE_FAILED: The scenario fails to be created.
    shared_ptr<string> status_ {};
    // The tags of the scenario.
    shared_ptr<vector<ListTemplateScratchesRequest::Tags>> tags_ {};
    // The ID of the scenario.
    shared_ptr<string> templateScratchId_ {};
    // The type of the resource scenario. Valid values:
    // 
    // *   ArchitectureReplication: resource replication
    // *   ArchitectureDetection: resource detection
    // *   ResourceImport: resource management
    // *   ResourceMigration: resource migration
    shared_ptr<string> templateScratchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
