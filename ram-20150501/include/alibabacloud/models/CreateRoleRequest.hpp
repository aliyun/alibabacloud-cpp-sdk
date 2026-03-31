// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRoleRequest() = default ;
    CreateRoleRequest(const CreateRoleRequest &) = default ;
    CreateRoleRequest(CreateRoleRequest &&) = default ;
    CreateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleRequest() = default ;
    CreateRoleRequest& operator=(const CreateRoleRequest &) = default ;
    CreateRoleRequest& operator=(CreateRoleRequest &&) = default ;
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
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->assumeRolePolicyDocument_ == nullptr
        && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleName_ == nullptr && this->tag_ == nullptr; };
    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline CreateRoleRequest& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRoleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline CreateRoleRequest& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRoleRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRoleRequest::Tag>) };
    inline vector<CreateRoleRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateRoleRequest::Tag>) };
    inline CreateRoleRequest& setTag(const vector<CreateRoleRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRoleRequest& setTag(vector<CreateRoleRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The trust policy that specifies one or more trusted entities to assume the RAM role. The trusted entities can be Alibaba Cloud accounts, Alibaba Cloud services, or identity providers (IdPs).
    // 
    // >  RAM users cannot assume the RAM roles of trusted Alibaba Cloud services.
    shared_ptr<string> assumeRolePolicyDocument_ {};
    // The description of the RAM role.
    // 
    // The description must be 1 to 1,024 characters in length.
    shared_ptr<string> description_ {};
    // The maximum session time of the RAM role.
    // 
    // Valid values: 3600 to 43200. Unit: seconds. Default value: 3600.
    // 
    // If you do not specify this parameter, the default value is used.
    shared_ptr<int64_t> maxSessionDuration_ {};
    // The name of the RAM role.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    shared_ptr<string> roleName_ {};
    // The tags.
    shared_ptr<vector<CreateRoleRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
