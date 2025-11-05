// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDedicatedBlockStorageClusterRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedBlockStorageClusterRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedBlockStorageClusterRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDedicatedBlockStorageClusterRequestTag() = default ;
    CreateDedicatedBlockStorageClusterRequestTag(const CreateDedicatedBlockStorageClusterRequestTag &) = default ;
    CreateDedicatedBlockStorageClusterRequestTag(CreateDedicatedBlockStorageClusterRequestTag &&) = default ;
    CreateDedicatedBlockStorageClusterRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedBlockStorageClusterRequestTag() = default ;
    CreateDedicatedBlockStorageClusterRequestTag& operator=(const CreateDedicatedBlockStorageClusterRequestTag &) = default ;
    CreateDedicatedBlockStorageClusterRequestTag& operator=(CreateDedicatedBlockStorageClusterRequestTag &&) = default ;
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
    inline CreateDedicatedBlockStorageClusterRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDedicatedBlockStorageClusterRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N to add to the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N to add to the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
