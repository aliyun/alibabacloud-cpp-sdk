// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTargetsResponseBody() = default ;
    ListTargetsResponseBody(const ListTargetsResponseBody &) = default ;
    ListTargetsResponseBody(ListTargetsResponseBody &&) = default ;
    ListTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsResponseBody() = default ;
    ListTargetsResponseBody& operator=(const ListTargetsResponseBody &) = default ;
    ListTargetsResponseBody& operator=(ListTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(ConcurrentConfig, concurrentConfig_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ParamList, paramList_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(ConcurrentConfig, concurrentConfig_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(ResourceKey, resourceKey_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(ResourceKey, resourceKey_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ParamList() = default ;
          ParamList(const ParamList &) = default ;
          ParamList(ParamList &&) = default ;
          ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamList() = default ;
          ParamList& operator=(const ParamList &) = default ;
          ParamList& operator=(ParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->resourceKey_ == nullptr && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ParamList& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // resourceKey Field Functions 
          bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
          void deleteResourceKey() { this->resourceKey_ = nullptr;};
          inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
          inline ParamList& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ParamList& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The format that is used by the event target parameter.
          shared_ptr<string> form_ {};
          // The resource parameter of the event target.
          shared_ptr<string> resourceKey_ {};
          // The template that is used by the event target parameter.
          shared_ptr<string> template_ {};
          // The value of the event target parameter.
          shared_ptr<string> value_ {};
        };

        class ConcurrentConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConcurrentConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
          };
          friend void from_json(const Darabonba::Json& j, ConcurrentConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
          };
          ConcurrentConfig() = default ;
          ConcurrentConfig(const ConcurrentConfig &) = default ;
          ConcurrentConfig(ConcurrentConfig &&) = default ;
          ConcurrentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConcurrentConfig() = default ;
          ConcurrentConfig& operator=(const ConcurrentConfig &) = default ;
          ConcurrentConfig& operator=(ConcurrentConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->concurrency_ == nullptr; };
          // concurrency Field Functions 
          bool hasConcurrency() const { return this->concurrency_ != nullptr;};
          void deleteConcurrency() { this->concurrency_ = nullptr;};
          inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
          inline ConcurrentConfig& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


        protected:
          // The maximum number of concurrent events allowed in the event target.
          shared_ptr<int64_t> concurrency_ {};
        };

        virtual bool empty() const override { return this->concurrentConfig_ == nullptr
        && this->endpoint_ == nullptr && this->errorsTolerance_ == nullptr && this->eventBusName_ == nullptr && this->id_ == nullptr && this->paramList_ == nullptr
        && this->ruleName_ == nullptr && this->type_ == nullptr; };
        // concurrentConfig Field Functions 
        bool hasConcurrentConfig() const { return this->concurrentConfig_ != nullptr;};
        void deleteConcurrentConfig() { this->concurrentConfig_ = nullptr;};
        inline const Targets::ConcurrentConfig & getConcurrentConfig() const { DARABONBA_PTR_GET_CONST(concurrentConfig_, Targets::ConcurrentConfig) };
        inline Targets::ConcurrentConfig getConcurrentConfig() { DARABONBA_PTR_GET(concurrentConfig_, Targets::ConcurrentConfig) };
        inline Targets& setConcurrentConfig(const Targets::ConcurrentConfig & concurrentConfig) { DARABONBA_PTR_SET_VALUE(concurrentConfig_, concurrentConfig) };
        inline Targets& setConcurrentConfig(Targets::ConcurrentConfig && concurrentConfig) { DARABONBA_PTR_SET_RVALUE(concurrentConfig_, concurrentConfig) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Targets& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // errorsTolerance Field Functions 
        bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
        void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
        inline string getErrorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
        inline Targets& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline Targets& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Targets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // paramList Field Functions 
        bool hasParamList() const { return this->paramList_ != nullptr;};
        void deleteParamList() { this->paramList_ = nullptr;};
        inline const vector<Targets::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Targets::ParamList>) };
        inline vector<Targets::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<Targets::ParamList>) };
        inline Targets& setParamList(const vector<Targets::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
        inline Targets& setParamList(vector<Targets::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Targets& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The concurrency configuration.
        shared_ptr<Targets::ConcurrentConfig> concurrentConfig_ {};
        // The endpoint of the event target.
        shared_ptr<string> endpoint_ {};
        // The fault tolerance policy. Valid values: ALL and NONE. 
        // 
        // - **ALL**: Fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations. 
        // - **NONE**: Fault tolerance is not allowed. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
        shared_ptr<string> errorsTolerance_ {};
        // The name of the event bus.
        shared_ptr<string> eventBusName_ {};
        // The ID of the event target.
        shared_ptr<string> id_ {};
        // The parameters that are configured for the event target.
        shared_ptr<vector<Targets::ParamList>> paramList_ {};
        // The name of the event rule.
        shared_ptr<string> ruleName_ {};
        // The type of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/183698.html).
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->targets_ == nullptr && this->total_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Data::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Data::Targets>) };
      inline vector<Data::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Data::Targets>) };
      inline Data& setTargets(const vector<Data::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Data& setTargets(vector<Data::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // If excess return values exist, this parameter is returned.
      shared_ptr<string> nextToken_ {};
      // The event targets.
      shared_ptr<vector<Data::Targets>> targets_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTargetsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTargetsResponseBody::Data) };
    inline ListTargetsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTargetsResponseBody::Data) };
    inline ListTargetsResponseBody& setData(const ListTargetsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTargetsResponseBody& setData(ListTargetsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned response code. Valid values:
    // 
    // *   Success: The request is successful.
    // *   Other codes: The request failed. For a list of error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListTargetsResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
