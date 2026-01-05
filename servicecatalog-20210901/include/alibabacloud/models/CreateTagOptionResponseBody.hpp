// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGOPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGOPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateTagOptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagOptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagOptionDetail, tagOptionDetail_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagOptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagOptionDetail, tagOptionDetail_);
    };
    CreateTagOptionResponseBody() = default ;
    CreateTagOptionResponseBody(const CreateTagOptionResponseBody &) = default ;
    CreateTagOptionResponseBody(CreateTagOptionResponseBody &&) = default ;
    CreateTagOptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagOptionResponseBody() = default ;
    CreateTagOptionResponseBody& operator=(const CreateTagOptionResponseBody &) = default ;
    CreateTagOptionResponseBody& operator=(CreateTagOptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagOptionDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagOptionDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TagOptionDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TagOptionDetail() = default ;
      TagOptionDetail(const TagOptionDetail &) = default ;
      TagOptionDetail(TagOptionDetail &&) = default ;
      TagOptionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagOptionDetail() = default ;
      TagOptionDetail& operator=(const TagOptionDetail &) = default ;
      TagOptionDetail& operator=(TagOptionDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->key_ == nullptr && this->owner_ == nullptr && this->tagOptionId_ == nullptr && this->value_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline TagOptionDetail& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagOptionDetail& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TagOptionDetail& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // tagOptionId Field Functions 
      bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
      void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
      inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
      inline TagOptionDetail& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TagOptionDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Indicates whether the tag option is enabled. Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> active_ {};
      // The key of the tag option.
      // 
      // The key must be 1 to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The ID of the Alibaba Cloud account to which the tag option belongs.
      shared_ptr<string> owner_ {};
      // The ID of the tag option.
      shared_ptr<string> tagOptionId_ {};
      // The value of the tag option.
      // 
      // The value must be 1 to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tagOptionDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTagOptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagOptionDetail Field Functions 
    bool hasTagOptionDetail() const { return this->tagOptionDetail_ != nullptr;};
    void deleteTagOptionDetail() { this->tagOptionDetail_ = nullptr;};
    inline const CreateTagOptionResponseBody::TagOptionDetail & getTagOptionDetail() const { DARABONBA_PTR_GET_CONST(tagOptionDetail_, CreateTagOptionResponseBody::TagOptionDetail) };
    inline CreateTagOptionResponseBody::TagOptionDetail getTagOptionDetail() { DARABONBA_PTR_GET(tagOptionDetail_, CreateTagOptionResponseBody::TagOptionDetail) };
    inline CreateTagOptionResponseBody& setTagOptionDetail(const CreateTagOptionResponseBody::TagOptionDetail & tagOptionDetail) { DARABONBA_PTR_SET_VALUE(tagOptionDetail_, tagOptionDetail) };
    inline CreateTagOptionResponseBody& setTagOptionDetail(CreateTagOptionResponseBody::TagOptionDetail && tagOptionDetail) { DARABONBA_PTR_SET_RVALUE(tagOptionDetail_, tagOptionDetail) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the details of the tag option.
    shared_ptr<CreateTagOptionResponseBody::TagOptionDetail> tagOptionDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
