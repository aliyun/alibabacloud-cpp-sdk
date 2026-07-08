// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreateTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TagKeyValueParamList, tagKeyValueParamList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TagKeyValueParamList, tagKeyValueParamList_);
    };
    CreateTagsRequest() = default ;
    CreateTagsRequest(const CreateTagsRequest &) = default ;
    CreateTagsRequest(CreateTagsRequest &&) = default ;
    CreateTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagsRequest() = default ;
    CreateTagsRequest& operator=(const CreateTagsRequest &) = default ;
    CreateTagsRequest& operator=(CreateTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagKeyValueParamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagKeyValueParamList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(TagValueParamList, tagValueParamList_);
      };
      friend void from_json(const Darabonba::Json& j, TagKeyValueParamList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(TagValueParamList, tagValueParamList_);
      };
      TagKeyValueParamList() = default ;
      TagKeyValueParamList(const TagKeyValueParamList &) = default ;
      TagKeyValueParamList(TagKeyValueParamList &&) = default ;
      TagKeyValueParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagKeyValueParamList() = default ;
      TagKeyValueParamList& operator=(const TagKeyValueParamList &) = default ;
      TagKeyValueParamList& operator=(TagKeyValueParamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagValueParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagValueParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TagValueParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TagValueParamList() = default ;
        TagValueParamList(const TagValueParamList &) = default ;
        TagValueParamList(TagValueParamList &&) = default ;
        TagValueParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagValueParamList() = default ;
        TagValueParamList& operator=(const TagValueParamList &) = default ;
        TagValueParamList& operator=(TagValueParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TagValueParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TagValueParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the value for tag N.
        // 
        // Valid values of N: 1 to 10.
        shared_ptr<string> description_ {};
        // The value of tag N.
        // 
        // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
        // 
        // Valid values of N: 1 to 10.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->tagValueParamList_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TagKeyValueParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagKeyValueParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // tagValueParamList Field Functions 
      bool hasTagValueParamList() const { return this->tagValueParamList_ != nullptr;};
      void deleteTagValueParamList() { this->tagValueParamList_ = nullptr;};
      inline const vector<TagKeyValueParamList::TagValueParamList> & getTagValueParamList() const { DARABONBA_PTR_GET_CONST(tagValueParamList_, vector<TagKeyValueParamList::TagValueParamList>) };
      inline vector<TagKeyValueParamList::TagValueParamList> getTagValueParamList() { DARABONBA_PTR_GET(tagValueParamList_, vector<TagKeyValueParamList::TagValueParamList>) };
      inline TagKeyValueParamList& setTagValueParamList(const vector<TagKeyValueParamList::TagValueParamList> & tagValueParamList) { DARABONBA_PTR_SET_VALUE(tagValueParamList_, tagValueParamList) };
      inline TagKeyValueParamList& setTagValueParamList(vector<TagKeyValueParamList::TagValueParamList> && tagValueParamList) { DARABONBA_PTR_SET_RVALUE(tagValueParamList_, tagValueParamList) };


    protected:
      // The description of the key for tag N.
      // 
      // Valid values of N: 1 to 10.
      shared_ptr<string> description_ {};
      // The value of tag N.
      // 
      // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      // 
      // Valid values of N: 1 to 10.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The information about the tag values.
      shared_ptr<vector<TagKeyValueParamList::TagValueParamList>> tagValueParamList_ {};
    };

    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->tagKeyValueParamList_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTagsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTagsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTagsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tagKeyValueParamList Field Functions 
    bool hasTagKeyValueParamList() const { return this->tagKeyValueParamList_ != nullptr;};
    void deleteTagKeyValueParamList() { this->tagKeyValueParamList_ = nullptr;};
    inline const vector<CreateTagsRequest::TagKeyValueParamList> & getTagKeyValueParamList() const { DARABONBA_PTR_GET_CONST(tagKeyValueParamList_, vector<CreateTagsRequest::TagKeyValueParamList>) };
    inline vector<CreateTagsRequest::TagKeyValueParamList> getTagKeyValueParamList() { DARABONBA_PTR_GET(tagKeyValueParamList_, vector<CreateTagsRequest::TagKeyValueParamList>) };
    inline CreateTagsRequest& setTagKeyValueParamList(const vector<CreateTagsRequest::TagKeyValueParamList> & tagKeyValueParamList) { DARABONBA_PTR_SET_VALUE(tagKeyValueParamList_, tagKeyValueParamList) };
    inline CreateTagsRequest& setTagKeyValueParamList(vector<CreateTagsRequest::TagKeyValueParamList> && tagKeyValueParamList) { DARABONBA_PTR_SET_RVALUE(tagKeyValueParamList_, tagKeyValueParamList) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // > Only `cn-hangzhou` is supported.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The information about the tags.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTagsRequest::TagKeyValueParamList>> tagKeyValueParamList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
