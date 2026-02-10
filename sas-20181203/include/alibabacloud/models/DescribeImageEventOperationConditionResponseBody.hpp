// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageEventOperationConditionResponseBody() = default ;
    DescribeImageEventOperationConditionResponseBody(const DescribeImageEventOperationConditionResponseBody &) = default ;
    DescribeImageEventOperationConditionResponseBody(DescribeImageEventOperationConditionResponseBody &&) = default ;
    DescribeImageEventOperationConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationConditionResponseBody() = default ;
    DescribeImageEventOperationConditionResponseBody& operator=(const DescribeImageEventOperationConditionResponseBody &) = default ;
    DescribeImageEventOperationConditionResponseBody& operator=(DescribeImageEventOperationConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Operations, operations_);
        DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Operations, operations_);
        DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
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
      class Operations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Operations& obj) { 
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
          DARABONBA_PTR_TO_JSON(OperationName, operationName_);
        };
        friend void from_json(const Darabonba::Json& j, Operations& obj) { 
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
          DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
        };
        Operations() = default ;
        Operations(const Operations &) = default ;
        Operations(Operations &&) = default ;
        Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Operations() = default ;
        Operations& operator=(const Operations &) = default ;
        Operations& operator=(Operations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_TO_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_FROM_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionName_ == nullptr && this->supportedMisType_ == nullptr; };
          // conditionKey Field Functions 
          bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
          void deleteConditionKey() { this->conditionKey_ = nullptr;};
          inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
          inline Conditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


          // conditionName Field Functions 
          bool hasConditionName() const { return this->conditionName_ != nullptr;};
          void deleteConditionName() { this->conditionName_ = nullptr;};
          inline string getConditionName() const { DARABONBA_PTR_GET_DEFAULT(conditionName_, "") };
          inline Conditions& setConditionName(string conditionName) { DARABONBA_PTR_SET_VALUE(conditionName_, conditionName) };


          // supportedMisType Field Functions 
          bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
          void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
          inline const vector<string> & getSupportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
          inline vector<string> getSupportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
          inline Conditions& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
          inline Conditions& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


        protected:
          // The keyword of the condition. Valid values:
          // 
          // *   **MD5**
          // *   **PATH**
          shared_ptr<string> conditionKey_ {};
          // The name of the condition.
          shared_ptr<string> conditionName_ {};
          // The matching types.
          shared_ptr<vector<string>> supportedMisType_ {};
        };

        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->operationCode_ == nullptr && this->operationName_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Operations::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Operations::Conditions>) };
        inline vector<Operations::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Operations::Conditions>) };
        inline Operations& setConditions(const vector<Operations::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Operations& setConditions(vector<Operations::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // operationCode Field Functions 
        bool hasOperationCode() const { return this->operationCode_ != nullptr;};
        void deleteOperationCode() { this->operationCode_ = nullptr;};
        inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
        inline Operations& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


        // operationName Field Functions 
        bool hasOperationName() const { return this->operationName_ != nullptr;};
        void deleteOperationName() { this->operationName_ = nullptr;};
        inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
        inline Operations& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


      protected:
        // The rule conditions.
        shared_ptr<vector<Operations::Conditions>> conditions_ {};
        // The operation code.
        // 
        // *   Only **whitelist** may be returned, which indicates that the alert event is added to the whitelist.
        shared_ptr<string> operationCode_ {};
        // The name of the operation.
        shared_ptr<string> operationName_ {};
      };

      virtual bool empty() const override { return this->eventType_ == nullptr
        && this->operations_ == nullptr && this->scenarios_ == nullptr; };
      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // operations Field Functions 
      bool hasOperations() const { return this->operations_ != nullptr;};
      void deleteOperations() { this->operations_ = nullptr;};
      inline const vector<Data::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Data::Operations>) };
      inline vector<Data::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<Data::Operations>) };
      inline Data& setOperations(const vector<Data::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
      inline Data& setOperations(vector<Data::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


      // scenarios Field Functions 
      bool hasScenarios() const { return this->scenarios_ != nullptr;};
      void deleteScenarios() { this->scenarios_ = nullptr;};
      inline const vector<string> & getScenarios() const { DARABONBA_PTR_GET_CONST(scenarios_, vector<string>) };
      inline vector<string> getScenarios() { DARABONBA_PTR_GET(scenarios_, vector<string>) };
      inline Data& setScenarios(const vector<string> & scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };
      inline Data& setScenarios(vector<string> && scenarios) { DARABONBA_PTR_SET_RVALUE(scenarios_, scenarios) };


    protected:
      // The alert type.
      // 
      // *   Only **sensitiveFile** may be returned.
      shared_ptr<string> eventType_ {};
      // The operations.
      shared_ptr<vector<Data::Operations>> operations_ {};
      // The application scopes of the rules.
      shared_ptr<vector<string>> scenarios_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageEventOperationConditionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageEventOperationConditionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageEventOperationConditionResponseBody::Data) };
    inline DescribeImageEventOperationConditionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageEventOperationConditionResponseBody::Data) };
    inline DescribeImageEventOperationConditionResponseBody& setData(const DescribeImageEventOperationConditionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageEventOperationConditionResponseBody& setData(DescribeImageEventOperationConditionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageEventOperationConditionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageEventOperationConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageEventOperationConditionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeImageEventOperationConditionResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
