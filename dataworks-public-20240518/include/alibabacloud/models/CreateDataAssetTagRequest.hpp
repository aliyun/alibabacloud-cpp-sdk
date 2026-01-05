// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAASSETTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAASSETTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataAssetTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAssetTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Managers, managers_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAssetTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Managers, managers_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    CreateDataAssetTagRequest() = default ;
    CreateDataAssetTagRequest(const CreateDataAssetTagRequest &) = default ;
    CreateDataAssetTagRequest(CreateDataAssetTagRequest &&) = default ;
    CreateDataAssetTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAssetTagRequest() = default ;
    CreateDataAssetTagRequest& operator=(const CreateDataAssetTagRequest &) = default ;
    CreateDataAssetTagRequest& operator=(CreateDataAssetTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->managers_ == nullptr && this->valueType_ == nullptr && this->values_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataAssetTagRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateDataAssetTagRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & getManagers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> getManagers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline CreateDataAssetTagRequest& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline CreateDataAssetTagRequest& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline CreateDataAssetTagRequest& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline CreateDataAssetTagRequest& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline CreateDataAssetTagRequest& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The description of the tag.
    shared_ptr<string> description_ {};
    // The tag key.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The tag administrators.
    shared_ptr<vector<string>> managers_ {};
    // The type of the tag value. Valid values:
    // 
    // *   Boolean
    // *   Int
    // *   String
    // *   Double
    shared_ptr<string> valueType_ {};
    // The tag values.
    shared_ptr<vector<string>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
