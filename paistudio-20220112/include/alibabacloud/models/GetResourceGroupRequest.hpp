// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetResourceGroupRequest() = default ;
    GetResourceGroupRequest(const GetResourceGroupRequest &) = default ;
    GetResourceGroupRequest(GetResourceGroupRequest &&) = default ;
    GetResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupRequest() = default ;
    GetResourceGroupRequest& operator=(const GetResourceGroupRequest &) = default ;
    GetResourceGroupRequest& operator=(GetResourceGroupRequest &&) = default ;
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

    virtual bool empty() const override { return this->isAIWorkspaceDataEnabled_ == nullptr
        && this->tag_ == nullptr; };
    // isAIWorkspaceDataEnabled Field Functions 
    bool hasIsAIWorkspaceDataEnabled() const { return this->isAIWorkspaceDataEnabled_ != nullptr;};
    void deleteIsAIWorkspaceDataEnabled() { this->isAIWorkspaceDataEnabled_ = nullptr;};
    inline bool getIsAIWorkspaceDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(isAIWorkspaceDataEnabled_, false) };
    inline GetResourceGroupRequest& setIsAIWorkspaceDataEnabled(bool isAIWorkspaceDataEnabled) { DARABONBA_PTR_SET_VALUE(isAIWorkspaceDataEnabled_, isAIWorkspaceDataEnabled) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetResourceGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetResourceGroupRequest::Tag>) };
    inline vector<GetResourceGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<GetResourceGroupRequest::Tag>) };
    inline GetResourceGroupRequest& setTag(const vector<GetResourceGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetResourceGroupRequest& setTag(vector<GetResourceGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<bool> isAIWorkspaceDataEnabled_ {};
    shared_ptr<vector<GetResourceGroupRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
