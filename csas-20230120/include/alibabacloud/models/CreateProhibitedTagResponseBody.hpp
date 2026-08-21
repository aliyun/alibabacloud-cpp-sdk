// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROHIBITEDTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROHIBITEDTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateProhibitedTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProhibitedTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProhibitedTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateProhibitedTagResponseBody() = default ;
    CreateProhibitedTagResponseBody(const CreateProhibitedTagResponseBody &) = default ;
    CreateProhibitedTagResponseBody(CreateProhibitedTagResponseBody &&) = default ;
    CreateProhibitedTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProhibitedTagResponseBody() = default ;
    CreateProhibitedTagResponseBody& operator=(const CreateProhibitedTagResponseBody &) = default ;
    CreateProhibitedTagResponseBody& operator=(CreateProhibitedTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->tagId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Tag& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tag& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tag& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Tag& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // The time when the disabled software tag was created, in the yyyy-MM-dd HH:mm:ss format. The time is displayed in UTC+8.
      shared_ptr<string> createTime_ {};
      // The description of the disabled software tag.
      shared_ptr<string> description_ {};
      // The name of the disabled software tag.
      shared_ptr<string> name_ {};
      // The ID of the disabled software tag.
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tag_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProhibitedTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const CreateProhibitedTagResponseBody::Tag & getTag() const { DARABONBA_PTR_GET_CONST(tag_, CreateProhibitedTagResponseBody::Tag) };
    inline CreateProhibitedTagResponseBody::Tag getTag() { DARABONBA_PTR_GET(tag_, CreateProhibitedTagResponseBody::Tag) };
    inline CreateProhibitedTagResponseBody& setTag(const CreateProhibitedTagResponseBody::Tag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateProhibitedTagResponseBody& setTag(CreateProhibitedTagResponseBody::Tag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The disabled software tag.
    shared_ptr<CreateProhibitedTagResponseBody::Tag> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
