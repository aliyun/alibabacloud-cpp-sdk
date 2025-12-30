// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddDesktopOversoldUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, AddDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    AddDesktopOversoldUserGroupRequest() = default ;
    AddDesktopOversoldUserGroupRequest(const AddDesktopOversoldUserGroupRequest &) = default ;
    AddDesktopOversoldUserGroupRequest(AddDesktopOversoldUserGroupRequest &&) = default ;
    AddDesktopOversoldUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDesktopOversoldUserGroupRequest() = default ;
    AddDesktopOversoldUserGroupRequest& operator=(const AddDesktopOversoldUserGroupRequest &) = default ;
    AddDesktopOversoldUserGroupRequest& operator=(AddDesktopOversoldUserGroupRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->name_ == nullptr && this->oversoldGroupId_ == nullptr && this->policyGroupId_ == nullptr && this->tag_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AddDesktopOversoldUserGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddDesktopOversoldUserGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline AddDesktopOversoldUserGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline AddDesktopOversoldUserGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddDesktopOversoldUserGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddDesktopOversoldUserGroupRequest::Tag>) };
    inline vector<AddDesktopOversoldUserGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<AddDesktopOversoldUserGroupRequest::Tag>) };
    inline AddDesktopOversoldUserGroupRequest& setTag(const vector<AddDesktopOversoldUserGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddDesktopOversoldUserGroupRequest& setTag(vector<AddDesktopOversoldUserGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<string> imageId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<vector<AddDesktopOversoldUserGroupRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
