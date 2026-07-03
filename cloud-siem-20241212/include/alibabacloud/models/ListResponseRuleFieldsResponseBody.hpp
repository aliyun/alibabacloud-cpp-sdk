// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESPONSERULEFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESPONSERULEFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListResponseRuleFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResponseRuleFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListResponseRuleFields, listResponseRuleFields_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResponseRuleFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListResponseRuleFields, listResponseRuleFields_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResponseRuleFieldsResponseBody() = default ;
    ListResponseRuleFieldsResponseBody(const ListResponseRuleFieldsResponseBody &) = default ;
    ListResponseRuleFieldsResponseBody(ListResponseRuleFieldsResponseBody &&) = default ;
    ListResponseRuleFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResponseRuleFieldsResponseBody() = default ;
    ListResponseRuleFieldsResponseBody& operator=(const ListResponseRuleFieldsResponseBody &) = default ;
    ListResponseRuleFieldsResponseBody& operator=(ListResponseRuleFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListResponseRuleFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListResponseRuleFields& obj) { 
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldNormalization, fieldNormalization_);
        DARABONBA_PTR_TO_JSON(RightValue, rightValue_);
        DARABONBA_PTR_TO_JSON(SupportOperators, supportOperators_);
      };
      friend void from_json(const Darabonba::Json& j, ListResponseRuleFields& obj) { 
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldNormalization, fieldNormalization_);
        DARABONBA_PTR_FROM_JSON(RightValue, rightValue_);
        DARABONBA_PTR_FROM_JSON(SupportOperators, supportOperators_);
      };
      ListResponseRuleFields() = default ;
      ListResponseRuleFields(const ListResponseRuleFields &) = default ;
      ListResponseRuleFields(ListResponseRuleFields &&) = default ;
      ListResponseRuleFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListResponseRuleFields() = default ;
      ListResponseRuleFields& operator=(const ListResponseRuleFields &) = default ;
      ListResponseRuleFields& operator=(ListResponseRuleFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportOperators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportOperators& obj) { 
          DARABONBA_PTR_TO_JSON(HasRightValue, hasRightValue_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_TO_JSON(SupportDataType, supportDataType_);
        };
        friend void from_json(const Darabonba::Json& j, SupportOperators& obj) { 
          DARABONBA_PTR_FROM_JSON(HasRightValue, hasRightValue_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_FROM_JSON(SupportDataType, supportDataType_);
        };
        SupportOperators() = default ;
        SupportOperators(const SupportOperators &) = default ;
        SupportOperators(SupportOperators &&) = default ;
        SupportOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportOperators() = default ;
        SupportOperators& operator=(const SupportOperators &) = default ;
        SupportOperators& operator=(SupportOperators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hasRightValue_ == nullptr
        && this->index_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr && this->supportDataType_ == nullptr; };
        // hasRightValue Field Functions 
        bool hasHasRightValue() const { return this->hasRightValue_ != nullptr;};
        void deleteHasRightValue() { this->hasRightValue_ = nullptr;};
        inline string getHasRightValue() const { DARABONBA_PTR_GET_DEFAULT(hasRightValue_, "") };
        inline SupportOperators& setHasRightValue(string hasRightValue) { DARABONBA_PTR_SET_VALUE(hasRightValue_, hasRightValue) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline SupportOperators& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline SupportOperators& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // operatorName Field Functions 
        bool hasOperatorName() const { return this->operatorName_ != nullptr;};
        void deleteOperatorName() { this->operatorName_ = nullptr;};
        inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
        inline SupportOperators& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


        // supportDataType Field Functions 
        bool hasSupportDataType() const { return this->supportDataType_ != nullptr;};
        void deleteSupportDataType() { this->supportDataType_ = nullptr;};
        inline string getSupportDataType() const { DARABONBA_PTR_GET_DEFAULT(supportDataType_, "") };
        inline SupportOperators& setSupportDataType(string supportDataType) { DARABONBA_PTR_SET_VALUE(supportDataType_, supportDataType) };


      protected:
        // Indicates whether a right-side value is required. Valid values:
        // - true: Required.
        // - false: Not required.
        shared_ptr<string> hasRightValue_ {};
        // The position of the operator in the operator list.
        shared_ptr<int32_t> index_ {};
        // The aggregation method for the dispatch rule condition. Valid values:
        // 
        // - `=`: equal to
        // - `<>`: not equal to
        // - `in`: contains
        // - `not in`: does not contain
        // - `REGEXP`: matches the regular expression
        // - `NOT REGEXP`: does not match the regular expression
        shared_ptr<string> operator_ {};
        // The display name of the operator.
        shared_ptr<string> operatorName_ {};
        // The data types supported by the current operator, separated by commas.
        shared_ptr<string> supportDataType_ {};
      };

      class RightValue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RightValue& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueName, valueName_);
        };
        friend void from_json(const Darabonba::Json& j, RightValue& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueName, valueName_);
        };
        RightValue() = default ;
        RightValue(const RightValue &) = default ;
        RightValue(RightValue &&) = default ;
        RightValue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RightValue() = default ;
        RightValue& operator=(const RightValue &) = default ;
        RightValue& operator=(RightValue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr
        && this->valueName_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RightValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueName Field Functions 
        bool hasValueName() const { return this->valueName_ != nullptr;};
        void deleteValueName() { this->valueName_ = nullptr;};
        inline string getValueName() const { DARABONBA_PTR_GET_DEFAULT(valueName_, "") };
        inline RightValue& setValueName(string valueName) { DARABONBA_PTR_SET_VALUE(valueName_, valueName) };


      protected:
        // The right-side value.
        shared_ptr<string> value_ {};
        // The display name of the enumeration value.
        shared_ptr<string> valueName_ {};
      };

      virtual bool empty() const override { return this->dataType_ == nullptr
        && this->field_ == nullptr && this->fieldName_ == nullptr && this->fieldNormalization_ == nullptr && this->rightValue_ == nullptr && this->supportOperators_ == nullptr; };
      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline ListResponseRuleFields& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline ListResponseRuleFields& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline ListResponseRuleFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldNormalization Field Functions 
      bool hasFieldNormalization() const { return this->fieldNormalization_ != nullptr;};
      void deleteFieldNormalization() { this->fieldNormalization_ = nullptr;};
      inline string getFieldNormalization() const { DARABONBA_PTR_GET_DEFAULT(fieldNormalization_, "") };
      inline ListResponseRuleFields& setFieldNormalization(string fieldNormalization) { DARABONBA_PTR_SET_VALUE(fieldNormalization_, fieldNormalization) };


      // rightValue Field Functions 
      bool hasRightValue() const { return this->rightValue_ != nullptr;};
      void deleteRightValue() { this->rightValue_ = nullptr;};
      inline const vector<ListResponseRuleFields::RightValue> & getRightValue() const { DARABONBA_PTR_GET_CONST(rightValue_, vector<ListResponseRuleFields::RightValue>) };
      inline vector<ListResponseRuleFields::RightValue> getRightValue() { DARABONBA_PTR_GET(rightValue_, vector<ListResponseRuleFields::RightValue>) };
      inline ListResponseRuleFields& setRightValue(const vector<ListResponseRuleFields::RightValue> & rightValue) { DARABONBA_PTR_SET_VALUE(rightValue_, rightValue) };
      inline ListResponseRuleFields& setRightValue(vector<ListResponseRuleFields::RightValue> && rightValue) { DARABONBA_PTR_SET_RVALUE(rightValue_, rightValue) };


      // supportOperators Field Functions 
      bool hasSupportOperators() const { return this->supportOperators_ != nullptr;};
      void deleteSupportOperators() { this->supportOperators_ = nullptr;};
      inline const vector<ListResponseRuleFields::SupportOperators> & getSupportOperators() const { DARABONBA_PTR_GET_CONST(supportOperators_, vector<ListResponseRuleFields::SupportOperators>) };
      inline vector<ListResponseRuleFields::SupportOperators> getSupportOperators() { DARABONBA_PTR_GET(supportOperators_, vector<ListResponseRuleFields::SupportOperators>) };
      inline ListResponseRuleFields& setSupportOperators(const vector<ListResponseRuleFields::SupportOperators> & supportOperators) { DARABONBA_PTR_SET_VALUE(supportOperators_, supportOperators) };
      inline ListResponseRuleFields& setSupportOperators(vector<ListResponseRuleFields::SupportOperators> && supportOperators) { DARABONBA_PTR_SET_RVALUE(supportOperators_, supportOperators) };


    protected:
      // The data type of the automated response rule condition field.
      shared_ptr<string> dataType_ {};
      // The whitelisted field.
      shared_ptr<string> field_ {};
      // The name of the rule field.
      shared_ptr<string> fieldName_ {};
      // The normalization object type to which the field belongs.
      shared_ptr<string> fieldNormalization_ {};
      // The list of optional enumeration values for the field. This parameter is not returned if no enumeration values are available.
      shared_ptr<vector<ListResponseRuleFields::RightValue>> rightValue_ {};
      // The English descriptions of the operators.
      shared_ptr<vector<ListResponseRuleFields::SupportOperators>> supportOperators_ {};
    };

    virtual bool empty() const override { return this->listResponseRuleFields_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // listResponseRuleFields Field Functions 
    bool hasListResponseRuleFields() const { return this->listResponseRuleFields_ != nullptr;};
    void deleteListResponseRuleFields() { this->listResponseRuleFields_ = nullptr;};
    inline const vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields> & getListResponseRuleFields() const { DARABONBA_PTR_GET_CONST(listResponseRuleFields_, vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields>) };
    inline vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields> getListResponseRuleFields() { DARABONBA_PTR_GET(listResponseRuleFields_, vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields>) };
    inline ListResponseRuleFieldsResponseBody& setListResponseRuleFields(const vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields> & listResponseRuleFields) { DARABONBA_PTR_SET_VALUE(listResponseRuleFields_, listResponseRuleFields) };
    inline ListResponseRuleFieldsResponseBody& setListResponseRuleFields(vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields> && listResponseRuleFields) { DARABONBA_PTR_SET_RVALUE(listResponseRuleFields_, listResponseRuleFields) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResponseRuleFieldsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResponseRuleFieldsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResponseRuleFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of response rule fields.
    shared_ptr<vector<ListResponseRuleFieldsResponseBody::ListResponseRuleFields>> listResponseRuleFields_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. Valid values: leave this parameter empty for the first query or if no more results exist. If a next query exists, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
