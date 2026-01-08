// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESREQUEST_HPP_
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
  class DescribeNamespacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeNamespacesRequest, describeNamespacesRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeNamespacesRequest, describeNamespacesRequest_);
    };
    DescribeNamespacesRequest() = default ;
    DescribeNamespacesRequest(const DescribeNamespacesRequest &) = default ;
    DescribeNamespacesRequest(DescribeNamespacesRequest &&) = default ;
    DescribeNamespacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesRequest() = default ;
    DescribeNamespacesRequest& operator=(const DescribeNamespacesRequest &) = default ;
    DescribeNamespacesRequest& operator=(DescribeNamespacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeNamespacesRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeNamespacesRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeNamespacesRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DescribeNamespacesRequestItem() = default ;
      DescribeNamespacesRequestItem(const DescribeNamespacesRequestItem &) = default ;
      DescribeNamespacesRequestItem(DescribeNamespacesRequestItem &&) = default ;
      DescribeNamespacesRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeNamespacesRequestItem() = default ;
      DescribeNamespacesRequestItem& operator=(const DescribeNamespacesRequestItem &) = default ;
      DescribeNamespacesRequestItem& operator=(DescribeNamespacesRequestItem &&) = default ;
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

      virtual bool empty() const override { return this->ha_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr
        && this->tags_ == nullptr; };
      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline DescribeNamespacesRequestItem& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DescribeNamespacesRequestItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline DescribeNamespacesRequestItem& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline DescribeNamespacesRequestItem& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline DescribeNamespacesRequestItem& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DescribeNamespacesRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DescribeNamespacesRequestItem::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeNamespacesRequestItem::Tags>) };
      inline vector<DescribeNamespacesRequestItem::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeNamespacesRequestItem::Tags>) };
      inline DescribeNamespacesRequestItem& setTags(const vector<DescribeNamespacesRequestItem::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DescribeNamespacesRequestItem& setTags(vector<DescribeNamespacesRequestItem::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<bool> ha_ {};
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
      shared_ptr<vector<DescribeNamespacesRequestItem::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->describeNamespacesRequest_ == nullptr; };
    // describeNamespacesRequest Field Functions 
    bool hasDescribeNamespacesRequest() const { return this->describeNamespacesRequest_ != nullptr;};
    void deleteDescribeNamespacesRequest() { this->describeNamespacesRequest_ = nullptr;};
    inline const DescribeNamespacesRequest::DescribeNamespacesRequestItem & getDescribeNamespacesRequest() const { DARABONBA_PTR_GET_CONST(describeNamespacesRequest_, DescribeNamespacesRequest::DescribeNamespacesRequestItem) };
    inline DescribeNamespacesRequest::DescribeNamespacesRequestItem getDescribeNamespacesRequest() { DARABONBA_PTR_GET(describeNamespacesRequest_, DescribeNamespacesRequest::DescribeNamespacesRequestItem) };
    inline DescribeNamespacesRequest& setDescribeNamespacesRequest(const DescribeNamespacesRequest::DescribeNamespacesRequestItem & describeNamespacesRequest) { DARABONBA_PTR_SET_VALUE(describeNamespacesRequest_, describeNamespacesRequest) };
    inline DescribeNamespacesRequest& setDescribeNamespacesRequest(DescribeNamespacesRequest::DescribeNamespacesRequestItem && describeNamespacesRequest) { DARABONBA_PTR_SET_RVALUE(describeNamespacesRequest_, describeNamespacesRequest) };


  protected:
    // This parameter is required.
    shared_ptr<DescribeNamespacesRequest::DescribeNamespacesRequestItem> describeNamespacesRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
