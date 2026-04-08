// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest(ListResourceGroupsRequest &&) = default ;
    ListResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest& operator=(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest& operator=(ListResourceGroupsRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bizExtKey_ == nullptr
        && this->keyword_ == nullptr && this->resourceGroupType_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // bizExtKey Field Functions 
    bool hasBizExtKey() const { return this->bizExtKey_ != nullptr;};
    void deleteBizExtKey() { this->bizExtKey_ = nullptr;};
    inline string getBizExtKey() const { DARABONBA_PTR_GET_DEFAULT(bizExtKey_, "") };
    inline ListResourceGroupsRequest& setBizExtKey(string bizExtKey) { DARABONBA_PTR_SET_VALUE(bizExtKey_, bizExtKey) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListResourceGroupsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline int32_t getResourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, 0) };
    inline ListResourceGroupsRequest& setResourceGroupType(int32_t resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ListResourceGroupsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListResourceGroupsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListResourceGroupsRequest::Tags>) };
    inline vector<ListResourceGroupsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListResourceGroupsRequest::Tags>) };
    inline ListResourceGroupsRequest& setTags(const vector<ListResourceGroupsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceGroupsRequest& setTags(vector<ListResourceGroupsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The category of the resource group. Valid values:
    // 
    // *   default (default): shared resource group
    // *   single: exclusive resource group
    shared_ptr<string> bizExtKey_ {};
    // The keyword that is used for fuzzy match by resource group name and identifier.
    shared_ptr<string> keyword_ {};
    // The type of the resource group that you want to query. Valid values:
    // 
    // *   0: DataWorks
    // *   1: scheduling
    // *   2: MaxCompute
    // *   3: Platform for AI (PAI)
    // *   4: Data Integration
    // *   7: exclusive resource group for scheduling (An ID is generated for the purchased resource when you purchase an exclusive resource group for scheduling.)
    // *   9: DataService Studio
    // *   Default value: 1
    // 
    // If the value indicates a compute engine, the resource groups to query are the ones that were created when you purchased the compute engine.
    shared_ptr<int32_t> resourceGroupType_ {};
    // The resource group ID.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The tags.
    shared_ptr<vector<ListResourceGroupsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
