// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAutomateResponseConfigFeatureResponseBody() = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(const DescribeAutomateResponseConfigFeatureResponseBody &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(DescribeAutomateResponseConfigFeatureResponseBody &&) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureResponseBody() = default ;
    DescribeAutomateResponseConfigFeatureResponseBody& operator=(const DescribeAutomateResponseConfigFeatureResponseBody &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody& operator=(DescribeAutomateResponseConfigFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Feature, feature_);
        DARABONBA_PTR_TO_JSON(RightValueEnums, rightValueEnums_);
        DARABONBA_PTR_TO_JSON(SupportOperators, supportOperators_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Feature, feature_);
        DARABONBA_PTR_FROM_JSON(RightValueEnums, rightValueEnums_);
        DARABONBA_PTR_FROM_JSON(SupportOperators, supportOperators_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
          DARABONBA_PTR_TO_JSON(OperatorDescCn, operatorDescCn_);
          DARABONBA_PTR_TO_JSON(OperatorDescEn, operatorDescEn_);
          DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_TO_JSON(SupportDataType, supportDataType_);
          DARABONBA_PTR_TO_JSON(SupportTag, supportTag_);
        };
        friend void from_json(const Darabonba::Json& j, SupportOperators& obj) { 
          DARABONBA_PTR_FROM_JSON(HasRightValue, hasRightValue_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(OperatorDescCn, operatorDescCn_);
          DARABONBA_PTR_FROM_JSON(OperatorDescEn, operatorDescEn_);
          DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_FROM_JSON(SupportDataType, supportDataType_);
          DARABONBA_PTR_FROM_JSON(SupportTag, supportTag_);
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
        && this->index_ == nullptr && this->operator_ == nullptr && this->operatorDescCn_ == nullptr && this->operatorDescEn_ == nullptr && this->operatorName_ == nullptr
        && this->supportDataType_ == nullptr && this->supportTag_ == nullptr; };
        // hasRightValue Field Functions 
        bool hasHasRightValue() const { return this->hasRightValue_ != nullptr;};
        void deleteHasRightValue() { this->hasRightValue_ = nullptr;};
        inline bool getHasRightValue() const { DARABONBA_PTR_GET_DEFAULT(hasRightValue_, false) };
        inline SupportOperators& setHasRightValue(bool hasRightValue) { DARABONBA_PTR_SET_VALUE(hasRightValue_, hasRightValue) };


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


        // operatorDescCn Field Functions 
        bool hasOperatorDescCn() const { return this->operatorDescCn_ != nullptr;};
        void deleteOperatorDescCn() { this->operatorDescCn_ = nullptr;};
        inline string getOperatorDescCn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescCn_, "") };
        inline SupportOperators& setOperatorDescCn(string operatorDescCn) { DARABONBA_PTR_SET_VALUE(operatorDescCn_, operatorDescCn) };


        // operatorDescEn Field Functions 
        bool hasOperatorDescEn() const { return this->operatorDescEn_ != nullptr;};
        void deleteOperatorDescEn() { this->operatorDescEn_ = nullptr;};
        inline string getOperatorDescEn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescEn_, "") };
        inline SupportOperators& setOperatorDescEn(string operatorDescEn) { DARABONBA_PTR_SET_VALUE(operatorDescEn_, operatorDescEn) };


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


        // supportTag Field Functions 
        bool hasSupportTag() const { return this->supportTag_ != nullptr;};
        void deleteSupportTag() { this->supportTag_ = nullptr;};
        inline const vector<string> & getSupportTag() const { DARABONBA_PTR_GET_CONST(supportTag_, vector<string>) };
        inline vector<string> getSupportTag() { DARABONBA_PTR_GET(supportTag_, vector<string>) };
        inline SupportOperators& setSupportTag(const vector<string> & supportTag) { DARABONBA_PTR_SET_VALUE(supportTag_, supportTag) };
        inline SupportOperators& setSupportTag(vector<string> && supportTag) { DARABONBA_PTR_SET_RVALUE(supportTag_, supportTag) };


      protected:
        // Indicates whether the right operand is required. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> hasRightValue_ {};
        // The position of the operator in the operator list.
        shared_ptr<int32_t> index_ {};
        // The operator.
        shared_ptr<string> operator_ {};
        // The description of the operator in Chinese.
        shared_ptr<string> operatorDescCn_ {};
        // The description of the operator in English.
        shared_ptr<string> operatorDescEn_ {};
        // The name of the operator.
        shared_ptr<string> operatorName_ {};
        // The data types that are supported by the operator. The data types are separated by commas (,).
        shared_ptr<string> supportDataType_ {};
        // The scenarios that are supported by the operator. Multiple scenarios are separated by commas (,), such as aggregation scenarios. By default, this parameter is empty.
        shared_ptr<vector<string>> supportTag_ {};
      };

      class RightValueEnums : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RightValueEnums& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueMds, valueMds_);
        };
        friend void from_json(const Darabonba::Json& j, RightValueEnums& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueMds, valueMds_);
        };
        RightValueEnums() = default ;
        RightValueEnums(const RightValueEnums &) = default ;
        RightValueEnums(RightValueEnums &&) = default ;
        RightValueEnums(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RightValueEnums() = default ;
        RightValueEnums& operator=(const RightValueEnums &) = default ;
        RightValueEnums& operator=(RightValueEnums &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr
        && this->valueMds_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RightValueEnums& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueMds Field Functions 
        bool hasValueMds() const { return this->valueMds_ != nullptr;};
        void deleteValueMds() { this->valueMds_ = nullptr;};
        inline string getValueMds() const { DARABONBA_PTR_GET_DEFAULT(valueMds_, "") };
        inline RightValueEnums& setValueMds(string valueMds) { DARABONBA_PTR_SET_VALUE(valueMds_, valueMds) };


      protected:
        // The enumerated value of the right operand.
        shared_ptr<string> value_ {};
        // The internal code of the enumerated value.
        shared_ptr<string> valueMds_ {};
      };

      virtual bool empty() const override { return this->dataType_ == nullptr
        && this->feature_ == nullptr && this->rightValueEnums_ == nullptr && this->supportOperators_ == nullptr; };
      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Data& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline string getFeature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
      inline Data& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


      // rightValueEnums Field Functions 
      bool hasRightValueEnums() const { return this->rightValueEnums_ != nullptr;};
      void deleteRightValueEnums() { this->rightValueEnums_ = nullptr;};
      inline const vector<Data::RightValueEnums> & getRightValueEnums() const { DARABONBA_PTR_GET_CONST(rightValueEnums_, vector<Data::RightValueEnums>) };
      inline vector<Data::RightValueEnums> getRightValueEnums() { DARABONBA_PTR_GET(rightValueEnums_, vector<Data::RightValueEnums>) };
      inline Data& setRightValueEnums(const vector<Data::RightValueEnums> & rightValueEnums) { DARABONBA_PTR_SET_VALUE(rightValueEnums_, rightValueEnums) };
      inline Data& setRightValueEnums(vector<Data::RightValueEnums> && rightValueEnums) { DARABONBA_PTR_SET_RVALUE(rightValueEnums_, rightValueEnums) };


      // supportOperators Field Functions 
      bool hasSupportOperators() const { return this->supportOperators_ != nullptr;};
      void deleteSupportOperators() { this->supportOperators_ = nullptr;};
      inline const vector<Data::SupportOperators> & getSupportOperators() const { DARABONBA_PTR_GET_CONST(supportOperators_, vector<Data::SupportOperators>) };
      inline vector<Data::SupportOperators> getSupportOperators() { DARABONBA_PTR_GET(supportOperators_, vector<Data::SupportOperators>) };
      inline Data& setSupportOperators(const vector<Data::SupportOperators> & supportOperators) { DARABONBA_PTR_SET_VALUE(supportOperators_, supportOperators) };
      inline Data& setSupportOperators(vector<Data::SupportOperators> && supportOperators) { DARABONBA_PTR_SET_RVALUE(supportOperators_, supportOperators) };


    protected:
      // The data type of the condition field in the automated response rule.
      shared_ptr<string> dataType_ {};
      // The name of the condition field in the automated response rule.
      shared_ptr<string> feature_ {};
      // The enumerated values of the right operand for the field.
      shared_ptr<vector<Data::RightValueEnums>> rightValueEnums_ {};
      // The operators that are supported for the condition field.
      shared_ptr<vector<Data::SupportOperators>> supportOperators_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAutomateResponseConfigFeatureResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAutomateResponseConfigFeatureResponseBody::Data>) };
    inline vector<DescribeAutomateResponseConfigFeatureResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAutomateResponseConfigFeatureResponseBody::Data>) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setData(const vector<DescribeAutomateResponseConfigFeatureResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setData(vector<DescribeAutomateResponseConfigFeatureResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeAutomateResponseConfigFeatureResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
