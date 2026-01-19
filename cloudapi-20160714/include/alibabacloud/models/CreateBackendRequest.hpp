// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateBackendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(CreateEventBridgeServiceLinkedRole, createEventBridgeServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(CreateEventBridgeServiceLinkedRole, createEventBridgeServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateBackendRequest() = default ;
    CreateBackendRequest(const CreateBackendRequest &) = default ;
    CreateBackendRequest(CreateBackendRequest &&) = default ;
    CreateBackendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendRequest() = default ;
    CreateBackendRequest& operator=(const CreateBackendRequest &) = default ;
    CreateBackendRequest& operator=(CreateBackendRequest &&) = default ;
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

    virtual bool empty() const override { return this->backendName_ == nullptr
        && this->backendType_ == nullptr && this->createEventBridgeServiceLinkedRole_ == nullptr && this->createSlr_ == nullptr && this->description_ == nullptr && this->securityToken_ == nullptr
        && this->tag_ == nullptr; };
    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string getBackendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline CreateBackendRequest& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline CreateBackendRequest& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // createEventBridgeServiceLinkedRole Field Functions 
    bool hasCreateEventBridgeServiceLinkedRole() const { return this->createEventBridgeServiceLinkedRole_ != nullptr;};
    void deleteCreateEventBridgeServiceLinkedRole() { this->createEventBridgeServiceLinkedRole_ = nullptr;};
    inline bool getCreateEventBridgeServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(createEventBridgeServiceLinkedRole_, false) };
    inline CreateBackendRequest& setCreateEventBridgeServiceLinkedRole(bool createEventBridgeServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(createEventBridgeServiceLinkedRole_, createEventBridgeServiceLinkedRole) };


    // createSlr Field Functions 
    bool hasCreateSlr() const { return this->createSlr_ != nullptr;};
    void deleteCreateSlr() { this->createSlr_ = nullptr;};
    inline bool getCreateSlr() const { DARABONBA_PTR_GET_DEFAULT(createSlr_, false) };
    inline CreateBackendRequest& setCreateSlr(bool createSlr) { DARABONBA_PTR_SET_VALUE(createSlr_, createSlr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBackendRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateBackendRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBackendRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBackendRequest::Tag>) };
    inline vector<CreateBackendRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateBackendRequest::Tag>) };
    inline CreateBackendRequest& setTag(const vector<CreateBackendRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBackendRequest& setTag(vector<CreateBackendRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the backend service.
    // 
    // This parameter is required.
    shared_ptr<string> backendName_ {};
    // The type of the backend service.
    // 
    // This parameter is required.
    shared_ptr<string> backendType_ {};
    // Specifies to create a EventBridge service-linked role.
    shared_ptr<bool> createEventBridgeServiceLinkedRole_ {};
    // Specifies to create a service-linked role.
    shared_ptr<bool> createSlr_ {};
    // The description.
    shared_ptr<string> description_ {};
    shared_ptr<string> securityToken_ {};
    // The tag of objects that match the rule. You can specify multiple tags.
    shared_ptr<vector<CreateBackendRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
