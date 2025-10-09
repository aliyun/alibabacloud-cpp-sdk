// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAASSETTAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAASSETTAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataAssetTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAssetTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Managers, managersShrink_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      DARABONBA_PTR_TO_JSON(Values, valuesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAssetTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Managers, managersShrink_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      DARABONBA_PTR_FROM_JSON(Values, valuesShrink_);
    };
    CreateDataAssetTagShrinkRequest() = default ;
    CreateDataAssetTagShrinkRequest(const CreateDataAssetTagShrinkRequest &) = default ;
    CreateDataAssetTagShrinkRequest(CreateDataAssetTagShrinkRequest &&) = default ;
    CreateDataAssetTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAssetTagShrinkRequest() = default ;
    CreateDataAssetTagShrinkRequest& operator=(const CreateDataAssetTagShrinkRequest &) = default ;
    CreateDataAssetTagShrinkRequest& operator=(CreateDataAssetTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr && this->managersShrink_ != nullptr && this->valueType_ != nullptr && this->valuesShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataAssetTagShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateDataAssetTagShrinkRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // managersShrink Field Functions 
    bool hasManagersShrink() const { return this->managersShrink_ != nullptr;};
    void deleteManagersShrink() { this->managersShrink_ = nullptr;};
    inline string managersShrink() const { DARABONBA_PTR_GET_DEFAULT(managersShrink_, "") };
    inline CreateDataAssetTagShrinkRequest& setManagersShrink(string managersShrink) { DARABONBA_PTR_SET_VALUE(managersShrink_, managersShrink) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline CreateDataAssetTagShrinkRequest& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // valuesShrink Field Functions 
    bool hasValuesShrink() const { return this->valuesShrink_ != nullptr;};
    void deleteValuesShrink() { this->valuesShrink_ = nullptr;};
    inline string valuesShrink() const { DARABONBA_PTR_GET_DEFAULT(valuesShrink_, "") };
    inline CreateDataAssetTagShrinkRequest& setValuesShrink(string valuesShrink) { DARABONBA_PTR_SET_VALUE(valuesShrink_, valuesShrink) };


  protected:
    // The description of the tag.
    std::shared_ptr<string> description_ = nullptr;
    // The tag key.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag administrators.
    std::shared_ptr<string> managersShrink_ = nullptr;
    // The type of the tag value. Valid values:
    // 
    // *   Boolean
    // *   Int
    // *   String
    // *   Double
    std::shared_ptr<string> valueType_ = nullptr;
    // The tag values.
    std::shared_ptr<string> valuesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
