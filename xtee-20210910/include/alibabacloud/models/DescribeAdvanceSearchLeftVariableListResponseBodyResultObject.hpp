// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchLeftVariableListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentName, parentName_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentName, parentName_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject() = default ;
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject(const DescribeAdvanceSearchLeftVariableListResponseBodyResultObject &) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject(DescribeAdvanceSearchLeftVariableListResponseBodyResultObject &&) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchLeftVariableListResponseBodyResultObject() = default ;
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& operator=(const DescribeAdvanceSearchLeftVariableListResponseBodyResultObject &) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& operator=(DescribeAdvanceSearchLeftVariableListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->displayType_ == nullptr && return this->fieldRank_ == nullptr && return this->fieldType_ == nullptr && return this->id_ == nullptr
        && return this->name_ == nullptr && return this->parentName_ == nullptr && return this->sourceType_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // fieldRank Field Functions 
    bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
    void deleteFieldRank() { this->fieldRank_ = nullptr;};
    inline int64_t fieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0L) };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setFieldRank(int64_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentName Field Functions 
    bool hasParentName() const { return this->parentName_ != nullptr;};
    void deleteParentName() { this->parentName_ = nullptr;};
    inline string parentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Variable code
    std::shared_ptr<string> code_ = nullptr;
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Display type and grouping label
    std::shared_ptr<string> displayType_ = nullptr;
    // Variable return value type
    std::shared_ptr<int64_t> fieldRank_ = nullptr;
    // Field table sorting
    std::shared_ptr<string> fieldType_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Parent node
    std::shared_ptr<string> parentName_ = nullptr;
    // Data source
    std::shared_ptr<string> sourceType_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
