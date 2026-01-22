// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBASICINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBASICINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUserBasicInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBasicInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBasicInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListUserBasicInfosRequest() = default ;
    ListUserBasicInfosRequest(const ListUserBasicInfosRequest &) = default ;
    ListUserBasicInfosRequest(ListUserBasicInfosRequest &&) = default ;
    ListUserBasicInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBasicInfosRequest() = default ;
    ListUserBasicInfosRequest& operator=(const ListUserBasicInfosRequest &) = default ;
    ListUserBasicInfosRequest& operator=(ListUserBasicInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      // The key of tag N.
      // 
      // Valid values of N: 1 to 20. N must be consecutive.
      shared_ptr<string> key_ {};
      // The value of tag N.
      // 
      // Valid values of N: 1 to 20. N must be consecutive.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->marker_ == nullptr
        && this->maxItems_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUserBasicInfosRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListUserBasicInfosRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserBasicInfosRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListUserBasicInfosRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListUserBasicInfosRequest::Tag>) };
    inline vector<ListUserBasicInfosRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListUserBasicInfosRequest::Tag>) };
    inline ListUserBasicInfosRequest& setTag(const vector<ListUserBasicInfosRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListUserBasicInfosRequest& setTag(vector<ListUserBasicInfosRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The `marker`. If part of a previous response is truncated, you can use this parameter to obtain the truncated part.
    shared_ptr<string> marker_ {};
    // The number of entries to return. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be `true`.
    // 
    // Valid values: 1 to 1000. Default value: 100.
    shared_ptr<int32_t> maxItems_ {};
    // The status of the RAM users that you want to query. Valid values: active, freeze, and active,freeze. If you set the value to active,freeze, RAM users in both active and freeze states are queried. If you leave the parameter empty, the value active is used by default. If the Tag parameter is specified, you cannot specify the Status parameter. In this case, RAM users in both states are queried.
    shared_ptr<string> status_ {};
    // The tags.
    shared_ptr<vector<ListUserBasicInfosRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
