// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupClientsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeBackupClientsRequestTag() = default ;
    DescribeBackupClientsRequestTag(const DescribeBackupClientsRequestTag &) = default ;
    DescribeBackupClientsRequestTag(DescribeBackupClientsRequestTag &&) = default ;
    DescribeBackupClientsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsRequestTag() = default ;
    DescribeBackupClientsRequestTag& operator=(const DescribeBackupClientsRequestTag &) = default ;
    DescribeBackupClientsRequestTag& operator=(DescribeBackupClientsRequestTag &&) = default ;
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
    inline DescribeBackupClientsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeBackupClientsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the backup vault. Valid values of N: 1 to 20.
    // 
    // *   The tag key cannot start with `aliyun` or `acs:`.
    // *   The tag key cannot contain `http://` or `https://`.
    // *   The tag key cannot be an empty string.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the backup vault. Valid values of N: 1 to 20.
    // 
    // *   The tag value cannot start with `aliyun` or `acs:`.
    // *   The tag value cannot contain `http://` or `https://`.
    // *   The tag value cannot be an empty string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
