// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateDiskRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiskRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiskRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDiskRequestTag() = default ;
    CreateDiskRequestTag(const CreateDiskRequestTag &) = default ;
    CreateDiskRequestTag(CreateDiskRequestTag &&) = default ;
    CreateDiskRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiskRequestTag() = default ;
    CreateDiskRequestTag& operator=(const CreateDiskRequestTag &) = default ;
    CreateDiskRequestTag& operator=(CreateDiskRequestTag &&) = default ;
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
    inline CreateDiskRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDiskRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. Valid values of N: **1** to **20**.
    // 
    // *   The key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
    // *   The key must be up to 64 characters in length.
    // *   The tag key cannot be an empty string.
    std::shared_ptr<string> key_ = nullptr;
    // The value of a tag that is attached to the topics you want to query. This parameter is not required. If you configure this parameter, you must also configure the **Key** parameter.**** If you include the Key and Value parameters in a request, this operation queries only the topics that use the specified tags. If you do not include these parameters in a request, this operation queries all topics that you can access.
    // 
    // *   Valid values: 1 to 20.
    // *   The value of this parameter can be an empty string.
    // *   The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
