// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLERESPONSEBODY_HPP_
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
  class DescribeAllRootVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllRootVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllRootVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAllRootVariableResponseBody() = default ;
    DescribeAllRootVariableResponseBody(const DescribeAllRootVariableResponseBody &) = default ;
    DescribeAllRootVariableResponseBody(DescribeAllRootVariableResponseBody &&) = default ;
    DescribeAllRootVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllRootVariableResponseBody() = default ;
    DescribeAllRootVariableResponseBody& operator=(const DescribeAllRootVariableResponseBody &) = default ;
    DescribeAllRootVariableResponseBody& operator=(DescribeAllRootVariableResponseBody &&) = default ;
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      class OutputThreshold : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
          DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
          DARABONBA_PTR_TO_JSON(minValue, minValue_);
        };
        friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
          DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
          DARABONBA_PTR_FROM_JSON(minValue, minValue_);
        };
        OutputThreshold() = default ;
        OutputThreshold(const OutputThreshold &) = default ;
        OutputThreshold(OutputThreshold &&) = default ;
        OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputThreshold() = default ;
        OutputThreshold& operator=(const OutputThreshold &) = default ;
        OutputThreshold& operator=(OutputThreshold &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
        // maxValue Field Functions 
        bool hasMaxValue() const { return this->maxValue_ != nullptr;};
        void deleteMaxValue() { this->maxValue_ = nullptr;};
        inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
        inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


        // minValue Field Functions 
        bool hasMinValue() const { return this->minValue_ != nullptr;};
        void deleteMinValue() { this->minValue_ = nullptr;};
        inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
        inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


      protected:
        // Maximum value
        shared_ptr<double> maxValue_ {};
        // Minimum value.
        shared_ptr<double> minValue_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->displayType_ == nullptr && this->favoriteFlag_ == nullptr && this->fieldRank_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr && this->outputThreshold_ == nullptr
        && this->sourceType_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
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


      // favoriteFlag Field Functions 
      bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
      void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
      inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
      inline ResultObject& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


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


      // inputFieldType Field Functions 
      bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
      void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
      inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
      inline ResultObject& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
      inline ResultObject& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputThreshold Field Functions 
      bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
      void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
      inline const ResultObject::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, ResultObject::OutputThreshold) };
      inline ResultObject::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, ResultObject::OutputThreshold) };
      inline ResultObject& setOutputThreshold(const ResultObject::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
      inline ResultObject& setOutputThreshold(ResultObject::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


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
      // Variable description.
      shared_ptr<string> description_ {};
      // Display type and group label
      shared_ptr<string> displayType_ {};
      // Favorite flag
      shared_ptr<bool> favoriteFlag_ {};
      // Field ranking
      shared_ptr<int64_t> fieldRank_ {};
      // Field type.
      shared_ptr<string> fieldType_ {};
      // Variable ID.
      shared_ptr<int64_t> id_ {};
      // Input field type.
      shared_ptr<string> inputFieldType_ {};
      // Variable input.
      shared_ptr<string> inputs_ {};
      // Variable name.
      shared_ptr<string> name_ {};
      // Maximum cross-sectional area of the checkbox.
      shared_ptr<ResultObject::OutputThreshold> outputThreshold_ {};
      // Data source
      shared_ptr<string> sourceType_ {};
      // Title.
      shared_ptr<string> title_ {};
      // Variable type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllRootVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAllRootVariableResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAllRootVariableResponseBody::ResultObject>) };
    inline vector<DescribeAllRootVariableResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAllRootVariableResponseBody::ResultObject>) };
    inline DescribeAllRootVariableResponseBody& setResultObject(const vector<DescribeAllRootVariableResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAllRootVariableResponseBody& setResultObject(vector<DescribeAllRootVariableResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeAllRootVariableResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
