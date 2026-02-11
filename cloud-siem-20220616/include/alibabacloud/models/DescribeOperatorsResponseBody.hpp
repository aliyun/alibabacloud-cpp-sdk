// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORSRESPONSEBODY_HPP_
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
  class DescribeOperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeOperatorsResponseBody() = default ;
    DescribeOperatorsResponseBody(const DescribeOperatorsResponseBody &) = default ;
    DescribeOperatorsResponseBody(DescribeOperatorsResponseBody &&) = default ;
    DescribeOperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorsResponseBody() = default ;
    DescribeOperatorsResponseBody& operator=(const DescribeOperatorsResponseBody &) = default ;
    DescribeOperatorsResponseBody& operator=(DescribeOperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OperatorDescCn, operatorDescCn_);
        DARABONBA_PTR_TO_JSON(OperatorDescEn, operatorDescEn_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(SupportDataType, supportDataType_);
        DARABONBA_PTR_TO_JSON(SupportTag, supportTag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(OperatorDescCn, operatorDescCn_);
        DARABONBA_PTR_FROM_JSON(OperatorDescEn, operatorDescEn_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(SupportDataType, supportDataType_);
        DARABONBA_PTR_FROM_JSON(SupportTag, supportTag_);
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
      virtual bool empty() const override { return this->index_ == nullptr
        && this->operator_ == nullptr && this->operatorDescCn_ == nullptr && this->operatorDescEn_ == nullptr && this->operatorName_ == nullptr && this->supportDataType_ == nullptr
        && this->supportTag_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Data& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorDescCn Field Functions 
      bool hasOperatorDescCn() const { return this->operatorDescCn_ != nullptr;};
      void deleteOperatorDescCn() { this->operatorDescCn_ = nullptr;};
      inline string getOperatorDescCn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescCn_, "") };
      inline Data& setOperatorDescCn(string operatorDescCn) { DARABONBA_PTR_SET_VALUE(operatorDescCn_, operatorDescCn) };


      // operatorDescEn Field Functions 
      bool hasOperatorDescEn() const { return this->operatorDescEn_ != nullptr;};
      void deleteOperatorDescEn() { this->operatorDescEn_ = nullptr;};
      inline string getOperatorDescEn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescEn_, "") };
      inline Data& setOperatorDescEn(string operatorDescEn) { DARABONBA_PTR_SET_VALUE(operatorDescEn_, operatorDescEn) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Data& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // supportDataType Field Functions 
      bool hasSupportDataType() const { return this->supportDataType_ != nullptr;};
      void deleteSupportDataType() { this->supportDataType_ = nullptr;};
      inline string getSupportDataType() const { DARABONBA_PTR_GET_DEFAULT(supportDataType_, "") };
      inline Data& setSupportDataType(string supportDataType) { DARABONBA_PTR_SET_VALUE(supportDataType_, supportDataType) };


      // supportTag Field Functions 
      bool hasSupportTag() const { return this->supportTag_ != nullptr;};
      void deleteSupportTag() { this->supportTag_ = nullptr;};
      inline const vector<string> & getSupportTag() const { DARABONBA_PTR_GET_CONST(supportTag_, vector<string>) };
      inline vector<string> getSupportTag() { DARABONBA_PTR_GET(supportTag_, vector<string>) };
      inline Data& setSupportTag(const vector<string> & supportTag) { DARABONBA_PTR_SET_VALUE(supportTag_, supportTag) };
      inline Data& setSupportTag(vector<string> && supportTag) { DARABONBA_PTR_SET_RVALUE(supportTag_, supportTag) };


    protected:
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
      // The scenarios that are supported by the operator. Multiple scenarios are separated by commas (,), such as AGGREGATE scenarios. By default, this parameter is empty.
      shared_ptr<vector<string>> supportTag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeOperatorsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeOperatorsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeOperatorsResponseBody::Data>) };
    inline vector<DescribeOperatorsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeOperatorsResponseBody::Data>) };
    inline DescribeOperatorsResponseBody& setData(const vector<DescribeOperatorsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOperatorsResponseBody& setData(vector<DescribeOperatorsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeOperatorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeOperatorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeOperatorsResponseBody::Data>> data_ {};
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
