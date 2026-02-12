// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSINSTANCEINSERVICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSINSTANCEINSERVICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsInstanceInServiceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsInstanceInServiceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NeedResourceInfo, needResourceInfo_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, OnsInstanceInServiceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedResourceInfo, needResourceInfo_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    OnsInstanceInServiceListRequest() = default ;
    OnsInstanceInServiceListRequest(const OnsInstanceInServiceListRequest &) = default ;
    OnsInstanceInServiceListRequest(OnsInstanceInServiceListRequest &&) = default ;
    OnsInstanceInServiceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsInstanceInServiceListRequest() = default ;
    OnsInstanceInServiceListRequest& operator=(const OnsInstanceInServiceListRequest &) = default ;
    OnsInstanceInServiceListRequest& operator=(OnsInstanceInServiceListRequest &&) = default ;
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
      // The tag key. This parameter is not required. If you configure this parameter, you must also configure **Value**.**** If you configure Key and Value in a request, this operation queries only the instances that use the specified tags. If you do not configure these parameters in a request, this operation queries all instances that you can access.
      // 
      // *   The value of this parameter cannot be an empty string.
      // *   The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. This parameter is not required. If you configure this parameter, you must also configure **Key**.**** If you configure Key and Value in a request, this operation queries only the instances that use the specified tags. If you do not configure these parameters in a request, this operation queries all instances that you can access.
      // 
      // *   The value of this parameter can be an empty string.
      // *   The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->needResourceInfo_ == nullptr
        && this->tag_ == nullptr; };
    // needResourceInfo Field Functions 
    bool hasNeedResourceInfo() const { return this->needResourceInfo_ != nullptr;};
    void deleteNeedResourceInfo() { this->needResourceInfo_ = nullptr;};
    inline bool getNeedResourceInfo() const { DARABONBA_PTR_GET_DEFAULT(needResourceInfo_, false) };
    inline OnsInstanceInServiceListRequest& setNeedResourceInfo(bool needResourceInfo) { DARABONBA_PTR_SET_VALUE(needResourceInfo_, needResourceInfo) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<OnsInstanceInServiceListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<OnsInstanceInServiceListRequest::Tag>) };
    inline vector<OnsInstanceInServiceListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<OnsInstanceInServiceListRequest::Tag>) };
    inline OnsInstanceInServiceListRequest& setTag(const vector<OnsInstanceInServiceListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline OnsInstanceInServiceListRequest& setTag(vector<OnsInstanceInServiceListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether you want the resource information to be returned.
    shared_ptr<bool> needResourceInfo_ {};
    // The tags that you want to attach to the instance. You can attach up to 20 tags to the instance.
    shared_ptr<vector<OnsInstanceInServiceListRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
