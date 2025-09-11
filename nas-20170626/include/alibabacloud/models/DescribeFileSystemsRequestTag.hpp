// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeFileSystemsRequestTag() = default ;
    DescribeFileSystemsRequestTag(const DescribeFileSystemsRequestTag &) = default ;
    DescribeFileSystemsRequestTag(DescribeFileSystemsRequestTag &&) = default ;
    DescribeFileSystemsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsRequestTag() = default ;
    DescribeFileSystemsRequestTag& operator=(const DescribeFileSystemsRequestTag &) = default ;
    DescribeFileSystemsRequestTag& operator=(DescribeFileSystemsRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeFileSystemsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeFileSystemsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    // 
    // Limits:
    // 
    // *   Valid values of N: 1 to 20.
    // *   The tag key can be up to 128 characters in length.
    // *   The tag key cannot start with `aliyun` or `acs:`.
    // *   The tag key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    // 
    // Limits:
    // 
    // *   Valid values of N: 1 to 20.
    // *   The tag value can be up to 128 characters in length.
    // *   The tag value cannot start with `aliyun` or `acs:`.
    // *   The tag value cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
