// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREQUEST_HPP_
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
  class GetAggregateCompliancePackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetAggregateCompliancePackRequest() = default ;
    GetAggregateCompliancePackRequest(const GetAggregateCompliancePackRequest &) = default ;
    GetAggregateCompliancePackRequest(GetAggregateCompliancePackRequest &&) = default ;
    GetAggregateCompliancePackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackRequest() = default ;
    GetAggregateCompliancePackRequest& operator=(const GetAggregateCompliancePackRequest &) = default ;
    GetAggregateCompliancePackRequest& operator=(GetAggregateCompliancePackRequest &&) = default ;
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
      // The tag key of the resource. You can specify up to 20 tag keys.
      // 
      // The tag key cannot be an empty string. The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs`:. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag values.
      // 
      // The tag values can be an empty string or up to 128 characters in length. The tag values cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // Each key-value must be unique. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->compliancePackId_ == nullptr && this->tag_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateCompliancePackRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetAggregateCompliancePackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetAggregateCompliancePackRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetAggregateCompliancePackRequest::Tag>) };
    inline vector<GetAggregateCompliancePackRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<GetAggregateCompliancePackRequest::Tag>) };
    inline GetAggregateCompliancePackRequest& setTag(const vector<GetAggregateCompliancePackRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetAggregateCompliancePackRequest& setTag(vector<GetAggregateCompliancePackRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    shared_ptr<vector<GetAggregateCompliancePackRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
