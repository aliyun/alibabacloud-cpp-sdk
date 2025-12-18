// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAggregateCompliancePackRequestTag() = default ;
    GetAggregateCompliancePackRequestTag(const GetAggregateCompliancePackRequestTag &) = default ;
    GetAggregateCompliancePackRequestTag(GetAggregateCompliancePackRequestTag &&) = default ;
    GetAggregateCompliancePackRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackRequestTag() = default ;
    GetAggregateCompliancePackRequestTag& operator=(const GetAggregateCompliancePackRequestTag &) = default ;
    GetAggregateCompliancePackRequestTag& operator=(GetAggregateCompliancePackRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetAggregateCompliancePackRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAggregateCompliancePackRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the resource. You can specify up to 20 tag keys.
    // 
    // The tag key cannot be an empty string. The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs`:. The tag key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag values.
    // 
    // The tag values can be an empty string or up to 128 characters in length. The tag values cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
    // 
    // Each key-value must be unique. You can specify at most 20 tag values in each call.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
