// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAllRootVariableResponseBodyResultObjectOutputThreshold.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAllRootVariableResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllRootVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_PTR_TO_JSON(favoriteFlag, favoriteFlag_);
      DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inputFieldType, inputFieldType_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputThreshold, outputThreshold_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllRootVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_PTR_FROM_JSON(favoriteFlag, favoriteFlag_);
      DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inputFieldType, inputFieldType_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputThreshold, outputThreshold_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeAllRootVariableResponseBodyResultObject() = default ;
    DescribeAllRootVariableResponseBodyResultObject(const DescribeAllRootVariableResponseBodyResultObject &) = default ;
    DescribeAllRootVariableResponseBodyResultObject(DescribeAllRootVariableResponseBodyResultObject &&) = default ;
    DescribeAllRootVariableResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllRootVariableResponseBodyResultObject() = default ;
    DescribeAllRootVariableResponseBodyResultObject& operator=(const DescribeAllRootVariableResponseBodyResultObject &) = default ;
    DescribeAllRootVariableResponseBodyResultObject& operator=(DescribeAllRootVariableResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->description_ != nullptr && this->displayType_ != nullptr && this->favoriteFlag_ != nullptr && this->fieldRank_ != nullptr && this->fieldType_ != nullptr
        && this->id_ != nullptr && this->inputFieldType_ != nullptr && this->inputs_ != nullptr && this->name_ != nullptr && this->outputThreshold_ != nullptr
        && this->sourceType_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // favoriteFlag Field Functions 
    bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
    void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
    inline bool favoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
    inline DescribeAllRootVariableResponseBodyResultObject& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


    // fieldRank Field Functions 
    bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
    void deleteFieldRank() { this->fieldRank_ = nullptr;};
    inline int64_t fieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0L) };
    inline DescribeAllRootVariableResponseBodyResultObject& setFieldRank(int64_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAllRootVariableResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputFieldType Field Functions 
    bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
    void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
    inline string inputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputThreshold Field Functions 
    bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
    void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
    inline const Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold & outputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold) };
    inline Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold outputThreshold() { DARABONBA_PTR_GET(outputThreshold_, Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold) };
    inline DescribeAllRootVariableResponseBodyResultObject& setOutputThreshold(const Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
    inline DescribeAllRootVariableResponseBodyResultObject& setOutputThreshold(Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAllRootVariableResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Variable code
    std::shared_ptr<string> code_ = nullptr;
    // Variable description.
    std::shared_ptr<string> description_ = nullptr;
    // Display type and group label
    std::shared_ptr<string> displayType_ = nullptr;
    // Favorite flag
    std::shared_ptr<bool> favoriteFlag_ = nullptr;
    // Field ranking
    std::shared_ptr<int64_t> fieldRank_ = nullptr;
    // Field type.
    std::shared_ptr<string> fieldType_ = nullptr;
    // Variable ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Input field type.
    std::shared_ptr<string> inputFieldType_ = nullptr;
    // Variable input.
    std::shared_ptr<string> inputs_ = nullptr;
    // Variable name.
    std::shared_ptr<string> name_ = nullptr;
    // Maximum cross-sectional area of the checkbox.
    std::shared_ptr<Models::DescribeAllRootVariableResponseBodyResultObjectOutputThreshold> outputThreshold_ = nullptr;
    // Data source
    std::shared_ptr<string> sourceType_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
