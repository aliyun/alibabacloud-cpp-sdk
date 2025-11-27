// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCDISKREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATERCDISKREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCDiskRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCDiskRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCDiskRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateRCDiskRequestTag() = default ;
    CreateRCDiskRequestTag(const CreateRCDiskRequestTag &) = default ;
    CreateRCDiskRequestTag(CreateRCDiskRequestTag &&) = default ;
    CreateRCDiskRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCDiskRequestTag() = default ;
    CreateRCDiskRequestTag& operator=(const CreateRCDiskRequestTag &) = default ;
    CreateRCDiskRequestTag& operator=(CreateRCDiskRequestTag &&) = default ;
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
    inline CreateRCDiskRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateRCDiskRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can create N tag keys at a time. Valid values of N: **1 to 20**. The tag key cannot be an empty string.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can query N values at a time. Valid values of N: **1** to **20**. The tag value can be an empty string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
