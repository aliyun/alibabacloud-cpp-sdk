// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeInstancesRequest, describeInstancesRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeInstancesRequest, describeInstancesRequest_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeInstancesRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeInstancesRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeInstancesRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DescribeInstancesRequestItem() = default ;
      DescribeInstancesRequestItem(const DescribeInstancesRequestItem &) = default ;
      DescribeInstancesRequestItem(DescribeInstancesRequestItem &&) = default ;
      DescribeInstancesRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeInstancesRequestItem() = default ;
      DescribeInstancesRequestItem& operator=(const DescribeInstancesRequestItem &) = default ;
      DescribeInstancesRequestItem& operator=(DescribeInstancesRequestItem &&) = default ;
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

      virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->chargeType_ == nullptr && this->instanceId_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // architectureType Field Functions 
      bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
      void deleteArchitectureType() { this->architectureType_ = nullptr;};
      inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
      inline DescribeInstancesRequestItem& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline DescribeInstancesRequestItem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DescribeInstancesRequestItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline DescribeInstancesRequestItem& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline DescribeInstancesRequestItem& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DescribeInstancesRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DescribeInstancesRequestItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DescribeInstancesRequestItem::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeInstancesRequestItem::Tags>) };
      inline vector<DescribeInstancesRequestItem::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeInstancesRequestItem::Tags>) };
      inline DescribeInstancesRequestItem& setTags(const vector<DescribeInstancesRequestItem::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DescribeInstancesRequestItem& setTags(vector<DescribeInstancesRequestItem::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> architectureType_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<DescribeInstancesRequestItem::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->describeInstancesRequest_ == nullptr; };
    // describeInstancesRequest Field Functions 
    bool hasDescribeInstancesRequest() const { return this->describeInstancesRequest_ != nullptr;};
    void deleteDescribeInstancesRequest() { this->describeInstancesRequest_ = nullptr;};
    inline const DescribeInstancesRequest::DescribeInstancesRequestItem & getDescribeInstancesRequest() const { DARABONBA_PTR_GET_CONST(describeInstancesRequest_, DescribeInstancesRequest::DescribeInstancesRequestItem) };
    inline DescribeInstancesRequest::DescribeInstancesRequestItem getDescribeInstancesRequest() { DARABONBA_PTR_GET(describeInstancesRequest_, DescribeInstancesRequest::DescribeInstancesRequestItem) };
    inline DescribeInstancesRequest& setDescribeInstancesRequest(const DescribeInstancesRequest::DescribeInstancesRequestItem & describeInstancesRequest) { DARABONBA_PTR_SET_VALUE(describeInstancesRequest_, describeInstancesRequest) };
    inline DescribeInstancesRequest& setDescribeInstancesRequest(DescribeInstancesRequest::DescribeInstancesRequestItem && describeInstancesRequest) { DARABONBA_PTR_SET_RVALUE(describeInstancesRequest_, describeInstancesRequest) };


  protected:
    // This parameter is required.
    shared_ptr<DescribeInstancesRequest::DescribeInstancesRequestItem> describeInstancesRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
