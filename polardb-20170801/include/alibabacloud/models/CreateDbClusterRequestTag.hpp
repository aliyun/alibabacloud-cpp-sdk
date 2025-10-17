// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDBClusterRequestTag() = default ;
    CreateDBClusterRequestTag(const CreateDBClusterRequestTag &) = default ;
    CreateDBClusterRequestTag(CreateDBClusterRequestTag &&) = default ;
    CreateDBClusterRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterRequestTag() = default ;
    CreateDBClusterRequestTag& operator=(const CreateDBClusterRequestTag &) = default ;
    CreateDBClusterRequestTag& operator=(CreateDBClusterRequestTag &&) = default ;
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
    inline CreateDBClusterRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDBClusterRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Tag key. If you need to add multiple tags to the target cluster at once, click **Add** to add a tag key.
    // 
    // > Up to 20 pairs of tags can be added each time, where `Tag.N.Key` corresponds to `Tag.N.Value`.
    std::shared_ptr<string> key_ = nullptr;
    // Tag value. If you need to add multiple tags to the target cluster at once, click **Add** to add tag values.
    // 
    // > Up to 20 pairs of tags can be added each time, where `Tag.N.Value` corresponds to `Tag.N.Key`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
