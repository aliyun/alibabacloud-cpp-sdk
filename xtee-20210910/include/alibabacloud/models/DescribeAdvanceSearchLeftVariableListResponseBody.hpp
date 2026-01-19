// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchLeftVariableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchLeftVariableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchLeftVariableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAdvanceSearchLeftVariableListResponseBody() = default ;
    DescribeAdvanceSearchLeftVariableListResponseBody(const DescribeAdvanceSearchLeftVariableListResponseBody &) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBody(DescribeAdvanceSearchLeftVariableListResponseBody &&) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchLeftVariableListResponseBody() = default ;
    DescribeAdvanceSearchLeftVariableListResponseBody& operator=(const DescribeAdvanceSearchLeftVariableListResponseBody &) = default ;
    DescribeAdvanceSearchLeftVariableListResponseBody& operator=(DescribeAdvanceSearchLeftVariableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->displayType_ == nullptr && this->fieldRank_ == nullptr && this->fieldType_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ResultObject& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayType Field Functions 
      bool hasDisplayType() const { return this->displayType_ != nullptr;};
      void deleteDisplayType() { this->displayType_ = nullptr;};
      inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
      inline ResultObject& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


      // fieldRank Field Functions 
      bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
      void deleteFieldRank() { this->fieldRank_ = nullptr;};
      inline int64_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0L) };
      inline ResultObject& setFieldRank(int64_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


      // fieldType Field Functions 
      bool hasFieldType() const { return this->fieldType_ != nullptr;};
      void deleteFieldType() { this->fieldType_ = nullptr;};
      inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
      inline ResultObject& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentName Field Functions 
      bool hasParentName() const { return this->parentName_ != nullptr;};
      void deleteParentName() { this->parentName_ = nullptr;};
      inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
      inline ResultObject& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline ResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Variable code
      shared_ptr<string> code_ {};
      // Description.
      shared_ptr<string> description_ {};
      // Display type and grouping label
      shared_ptr<string> displayType_ {};
      // Variable return value type
      shared_ptr<int64_t> fieldRank_ {};
      // Field table sorting
      shared_ptr<string> fieldType_ {};
      // Primary key ID
      shared_ptr<int64_t> id_ {};
      // Variable name
      shared_ptr<string> name_ {};
      // Parent node
      shared_ptr<string> parentName_ {};
      // Data source
      shared_ptr<string> sourceType_ {};
      // Title.
      shared_ptr<string> title_ {};
      // Variable type
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvanceSearchLeftVariableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject>) };
    inline vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject>) };
    inline DescribeAdvanceSearchLeftVariableListResponseBody& setResultObject(const vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAdvanceSearchLeftVariableListResponseBody& setResultObject(vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeAdvanceSearchLeftVariableListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
