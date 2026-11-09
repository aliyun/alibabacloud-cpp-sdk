// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryCustomAuthPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomAuthPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomAuthPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomAuthPermissionResponseBody() = default ;
    QueryCustomAuthPermissionResponseBody(const QueryCustomAuthPermissionResponseBody &) = default ;
    QueryCustomAuthPermissionResponseBody(QueryCustomAuthPermissionResponseBody &&) = default ;
    QueryCustomAuthPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomAuthPermissionResponseBody() = default ;
    QueryCustomAuthPermissionResponseBody& operator=(const QueryCustomAuthPermissionResponseBody &) = default ;
    QueryCustomAuthPermissionResponseBody& operator=(QueryCustomAuthPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Effect, effect_);
          DARABONBA_PTR_TO_JSON(Identity, identity_);
          DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
          DARABONBA_PTR_TO_JSON(PermitAction, permitAction_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Effect, effect_);
          DARABONBA_PTR_FROM_JSON(Identity, identity_);
          DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
          DARABONBA_PTR_FROM_JSON(PermitAction, permitAction_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effect_ == nullptr
        && this->identity_ == nullptr && this->identityType_ == nullptr && this->permitAction_ == nullptr && this->topic_ == nullptr; };
        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline Results& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // identity Field Functions 
        bool hasIdentity() const { return this->identity_ != nullptr;};
        void deleteIdentity() { this->identity_ = nullptr;};
        inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
        inline Results& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


        // identityType Field Functions 
        bool hasIdentityType() const { return this->identityType_ != nullptr;};
        void deleteIdentityType() { this->identityType_ = nullptr;};
        inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
        inline Results& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


        // permitAction Field Functions 
        bool hasPermitAction() const { return this->permitAction_ != nullptr;};
        void deletePermitAction() { this->permitAction_ = nullptr;};
        inline string getPermitAction() const { DARABONBA_PTR_GET_DEFAULT(permitAction_, "") };
        inline Results& setPermitAction(string permitAction) { DARABONBA_PTR_SET_VALUE(permitAction_, permitAction) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline Results& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        // Indicates whether to allow or deny access.
        shared_ptr<string> effect_ {};
        // The username or client ID.
        shared_ptr<string> identity_ {};
        // The identity type. Valid values:
        // 
        // *   USER
        // *   CLIENT
        shared_ptr<string> identityType_ {};
        // The authorized permissions.
        shared_ptr<string> permitAction_ {};
        // The topic name. Multi-level topics and wildcard characters are supported.
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->results_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // The token that marks the end position of the previous returned page. To obtain the next batch of data, call the operation again by using the value of NextToken returned by the previous request. If you call this operation for the first time or want to query all results, set NextToken to an empty string.
      shared_ptr<string> nextToken_ {};
      // The response results.
      shared_ptr<vector<Data::Results>> results_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryCustomAuthPermissionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCustomAuthPermissionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCustomAuthPermissionResponseBody::Data) };
    inline QueryCustomAuthPermissionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCustomAuthPermissionResponseBody::Data) };
    inline QueryCustomAuthPermissionResponseBody& setData(const QueryCustomAuthPermissionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomAuthPermissionResponseBody& setData(QueryCustomAuthPermissionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomAuthPermissionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomAuthPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomAuthPermissionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<QueryCustomAuthPermissionResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
