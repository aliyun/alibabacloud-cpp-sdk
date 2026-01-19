// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODY_HPP_
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
  class DescribeVariableBindDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableBindDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableBindDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeVariableBindDetailResponseBody() = default ;
    DescribeVariableBindDetailResponseBody(const DescribeVariableBindDetailResponseBody &) = default ;
    DescribeVariableBindDetailResponseBody(DescribeVariableBindDetailResponseBody &&) = default ;
    DescribeVariableBindDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableBindDetailResponseBody() = default ;
    DescribeVariableBindDetailResponseBody& operator=(const DescribeVariableBindDetailResponseBody &) = default ;
    DescribeVariableBindDetailResponseBody& operator=(DescribeVariableBindDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(allowModify, allowModify_);
        DARABONBA_PTR_TO_JSON(defineId, defineId_);
        DARABONBA_PTR_TO_JSON(defineTitle, defineTitle_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(params, params_);
        DARABONBA_PTR_TO_JSON(relationRules, relationRules_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(allowModify, allowModify_);
        DARABONBA_PTR_FROM_JSON(defineId, defineId_);
        DARABONBA_PTR_FROM_JSON(defineTitle, defineTitle_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(params, params_);
        DARABONBA_PTR_FROM_JSON(relationRules, relationRules_);
        DARABONBA_PTR_FROM_JSON(title, title_);
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
      class RelationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationRules& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RelationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        RelationRules() = default ;
        RelationRules(const RelationRules &) = default ;
        RelationRules(RelationRules &&) = default ;
        RelationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationRules() = default ;
        RelationRules& operator=(const RelationRules &) = default ;
        RelationRules& operator=(RelationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline RelationRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RelationRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Policy rule ID
        shared_ptr<string> key_ {};
        // Policy name
        shared_ptr<string> value_ {};
      };

      class Params : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Params& obj) { 
          DARABONBA_PTR_TO_JSON(eventFieldName, eventFieldName_);
          DARABONBA_PTR_TO_JSON(required, required_);
          DARABONBA_PTR_TO_JSON(variableName, variableName_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(eventFieldName, eventFieldName_);
          DARABONBA_PTR_FROM_JSON(required, required_);
          DARABONBA_PTR_FROM_JSON(variableName, variableName_);
        };
        Params() = default ;
        Params(const Params &) = default ;
        Params(Params &&) = default ;
        Params(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Params() = default ;
        Params& operator=(const Params &) = default ;
        Params& operator=(Params &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventFieldName_ == nullptr
        && this->required_ == nullptr && this->variableName_ == nullptr; };
        // eventFieldName Field Functions 
        bool hasEventFieldName() const { return this->eventFieldName_ != nullptr;};
        void deleteEventFieldName() { this->eventFieldName_ = nullptr;};
        inline string getEventFieldName() const { DARABONBA_PTR_GET_DEFAULT(eventFieldName_, "") };
        inline Params& setEventFieldName(string eventFieldName) { DARABONBA_PTR_SET_VALUE(eventFieldName_, eventFieldName) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Params& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // variableName Field Functions 
        bool hasVariableName() const { return this->variableName_ != nullptr;};
        void deleteVariableName() { this->variableName_ = nullptr;};
        inline string getVariableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
        inline Params& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


      protected:
        // Event field name
        shared_ptr<string> eventFieldName_ {};
        // Whether it is required, default is false
        shared_ptr<bool> required_ {};
        // Bound variable name
        shared_ptr<string> variableName_ {};
      };

      virtual bool empty() const override { return this->allowModify_ == nullptr
        && this->defineId_ == nullptr && this->defineTitle_ == nullptr && this->description_ == nullptr && this->eventCode_ == nullptr && this->id_ == nullptr
        && this->params_ == nullptr && this->relationRules_ == nullptr && this->title_ == nullptr; };
      // allowModify Field Functions 
      bool hasAllowModify() const { return this->allowModify_ != nullptr;};
      void deleteAllowModify() { this->allowModify_ = nullptr;};
      inline bool getAllowModify() const { DARABONBA_PTR_GET_DEFAULT(allowModify_, false) };
      inline ResultObject& setAllowModify(bool allowModify) { DARABONBA_PTR_SET_VALUE(allowModify_, allowModify) };


      // defineId Field Functions 
      bool hasDefineId() const { return this->defineId_ != nullptr;};
      void deleteDefineId() { this->defineId_ = nullptr;};
      inline int64_t getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, 0L) };
      inline ResultObject& setDefineId(int64_t defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


      // defineTitle Field Functions 
      bool hasDefineTitle() const { return this->defineTitle_ != nullptr;};
      void deleteDefineTitle() { this->defineTitle_ = nullptr;};
      inline string getDefineTitle() const { DARABONBA_PTR_GET_DEFAULT(defineTitle_, "") };
      inline ResultObject& setDefineTitle(string defineTitle) { DARABONBA_PTR_SET_VALUE(defineTitle_, defineTitle) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<ResultObject::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<ResultObject::Params>) };
      inline vector<ResultObject::Params> getParams() { DARABONBA_PTR_GET(params_, vector<ResultObject::Params>) };
      inline ResultObject& setParams(const vector<ResultObject::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline ResultObject& setParams(vector<ResultObject::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


      // relationRules Field Functions 
      bool hasRelationRules() const { return this->relationRules_ != nullptr;};
      void deleteRelationRules() { this->relationRules_ = nullptr;};
      inline const vector<ResultObject::RelationRules> & getRelationRules() const { DARABONBA_PTR_GET_CONST(relationRules_, vector<ResultObject::RelationRules>) };
      inline vector<ResultObject::RelationRules> getRelationRules() { DARABONBA_PTR_GET(relationRules_, vector<ResultObject::RelationRules>) };
      inline ResultObject& setRelationRules(const vector<ResultObject::RelationRules> & relationRules) { DARABONBA_PTR_SET_VALUE(relationRules_, relationRules) };
      inline ResultObject& setRelationRules(vector<ResultObject::RelationRules> && relationRules) { DARABONBA_PTR_SET_RVALUE(relationRules_, relationRules) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Whether modification is allowed, default is false
      shared_ptr<bool> allowModify_ {};
      // Variable definition ID
      shared_ptr<int64_t> defineId_ {};
      // Variable definition title
      shared_ptr<string> defineTitle_ {};
      // Variable description information
      shared_ptr<string> description_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Variable ID.
      shared_ptr<int64_t> id_ {};
      // Bound parameters.
      shared_ptr<vector<ResultObject::Params>> params_ {};
      // List of associated policies
      shared_ptr<vector<ResultObject::RelationRules>> relationRules_ {};
      // Title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVariableBindDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVariableBindDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVariableBindDetailResponseBody::ResultObject) };
    inline DescribeVariableBindDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVariableBindDetailResponseBody::ResultObject) };
    inline DescribeVariableBindDetailResponseBody& setResultObject(const DescribeVariableBindDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVariableBindDetailResponseBody& setResultObject(DescribeVariableBindDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeVariableBindDetailResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
