// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cmsInstanceType, cmsInstanceType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cmsInstanceType, cmsInstanceType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cmsInstanceType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // cmsInstanceType Field Functions 
    bool hasCmsInstanceType() const { return this->cmsInstanceType_ != nullptr;};
    void deleteCmsInstanceType() { this->cmsInstanceType_ = nullptr;};
    inline string getCmsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(cmsInstanceType_, "") };
    inline ListInstancesRequest& setCmsInstanceType(string cmsInstanceType) { DARABONBA_PTR_SET_VALUE(cmsInstanceType_, cmsInstanceType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListInstancesRequest::Tag>) };
    inline vector<ListInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListInstancesRequest::Tag>) };
    inline ListInstancesRequest& setTag(const vector<ListInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListInstancesRequest& setTag(vector<ListInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<string> cmsInstanceType_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags to add to the resource.
    shared_ptr<vector<ListInstancesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
