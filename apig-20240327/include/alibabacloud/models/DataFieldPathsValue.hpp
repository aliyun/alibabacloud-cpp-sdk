// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAFIELDPATHSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAFIELDPATHSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DataFieldPathsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataFieldPathsValue& obj) { 
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(category, category_);
    };
    friend void from_json(const Darabonba::Json& j, DataFieldPathsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(category, category_);
    };
    DataFieldPathsValue() = default ;
    DataFieldPathsValue(const DataFieldPathsValue &) = default ;
    DataFieldPathsValue(DataFieldPathsValue &&) = default ;
    DataFieldPathsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataFieldPathsValue() = default ;
    DataFieldPathsValue& operator=(const DataFieldPathsValue &) = default ;
    DataFieldPathsValue& operator=(DataFieldPathsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->jsonPath_ == nullptr && this->source_ == nullptr && this->category_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline DataFieldPathsValue& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // jsonPath Field Functions 
    bool hasJsonPath() const { return this->jsonPath_ != nullptr;};
    void deleteJsonPath() { this->jsonPath_ = nullptr;};
    inline string getJsonPath() const { DARABONBA_PTR_GET_DEFAULT(jsonPath_, "") };
    inline DataFieldPathsValue& setJsonPath(string jsonPath) { DARABONBA_PTR_SET_VALUE(jsonPath_, jsonPath) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DataFieldPathsValue& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DataFieldPathsValue& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    // The identifier key of the template field, such as input_token.
    shared_ptr<string> fieldKey_ {};
    // The JSONPath expression of the template field in the request or response message, such as usage.prompt_tokens.
    shared_ptr<string> jsonPath_ {};
    // The value source of the field, which indicates the part of the message from which the field is read, such as response_body.
    shared_ptr<string> source_ {};
    // The statistical category to which the field belongs.
    shared_ptr<string> category_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
