// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetCompliancePackRequest() = default ;
    GetCompliancePackRequest(const GetCompliancePackRequest &) = default ;
    GetCompliancePackRequest(GetCompliancePackRequest &&) = default ;
    GetCompliancePackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackRequest() = default ;
    GetCompliancePackRequest& operator=(const GetCompliancePackRequest &) = default ;
    GetCompliancePackRequest& operator=(GetCompliancePackRequest &&) = default ;
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
      // The tag key.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      // 
      // You can specify at most 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->tag_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetCompliancePackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetCompliancePackRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetCompliancePackRequest::Tag>) };
    inline vector<GetCompliancePackRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<GetCompliancePackRequest::Tag>) };
    inline GetCompliancePackRequest& setTag(const vector<GetCompliancePackRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetCompliancePackRequest& setTag(vector<GetCompliancePackRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    shared_ptr<vector<GetCompliancePackRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
