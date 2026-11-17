// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZECONSUMERMODELCARDGRANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZECONSUMERMODELCARDGRANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AuthorizeConsumerModelCardGrantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeConsumerModelCardGrantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeConsumerModelCardGrantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AuthorizeConsumerModelCardGrantsResponseBody() = default ;
    AuthorizeConsumerModelCardGrantsResponseBody(const AuthorizeConsumerModelCardGrantsResponseBody &) = default ;
    AuthorizeConsumerModelCardGrantsResponseBody(AuthorizeConsumerModelCardGrantsResponseBody &&) = default ;
    AuthorizeConsumerModelCardGrantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeConsumerModelCardGrantsResponseBody() = default ;
    AuthorizeConsumerModelCardGrantsResponseBody& operator=(const AuthorizeConsumerModelCardGrantsResponseBody &) = default ;
    AuthorizeConsumerModelCardGrantsResponseBody& operator=(AuthorizeConsumerModelCardGrantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(changedCount, changedCount_);
        DARABONBA_PTR_TO_JSON(entitlementState, entitlementState_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(changedCount, changedCount_);
        DARABONBA_PTR_FROM_JSON(entitlementState, entitlementState_);
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
      class EntitlementState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntitlementState& obj) { 
          DARABONBA_PTR_TO_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_TO_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EntitlementState& obj) { 
          DARABONBA_PTR_FROM_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_FROM_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        EntitlementState() = default ;
        EntitlementState(const EntitlementState &) = default ;
        EntitlementState(EntitlementState &&) = default ;
        EntitlementState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntitlementState() = default ;
        EntitlementState& operator=(const EntitlementState &) = default ;
        EntitlementState& operator=(EntitlementState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedRevision_ == nullptr
        && this->desiredRevision_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
        // appliedRevision Field Functions 
        bool hasAppliedRevision() const { return this->appliedRevision_ != nullptr;};
        void deleteAppliedRevision() { this->appliedRevision_ = nullptr;};
        inline int64_t getAppliedRevision() const { DARABONBA_PTR_GET_DEFAULT(appliedRevision_, 0L) };
        inline EntitlementState& setAppliedRevision(int64_t appliedRevision) { DARABONBA_PTR_SET_VALUE(appliedRevision_, appliedRevision) };


        // desiredRevision Field Functions 
        bool hasDesiredRevision() const { return this->desiredRevision_ != nullptr;};
        void deleteDesiredRevision() { this->desiredRevision_ = nullptr;};
        inline int64_t getDesiredRevision() const { DARABONBA_PTR_GET_DEFAULT(desiredRevision_, 0L) };
        inline EntitlementState& setDesiredRevision(int64_t desiredRevision) { DARABONBA_PTR_SET_VALUE(desiredRevision_, desiredRevision) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline EntitlementState& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EntitlementState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The applied revision number.
        shared_ptr<int64_t> appliedRevision_ {};
        // The desired revision number.
        shared_ptr<int64_t> desiredRevision_ {};
        // The error message when the projection fails.
        shared_ptr<string> errorMessage_ {};
        // The projection status. Valid values: Pending, Applying, Committed, and Failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->changedCount_ == nullptr
        && this->entitlementState_ == nullptr; };
      // changedCount Field Functions 
      bool hasChangedCount() const { return this->changedCount_ != nullptr;};
      void deleteChangedCount() { this->changedCount_ = nullptr;};
      inline int64_t getChangedCount() const { DARABONBA_PTR_GET_DEFAULT(changedCount_, 0L) };
      inline Data& setChangedCount(int64_t changedCount) { DARABONBA_PTR_SET_VALUE(changedCount_, changedCount) };


      // entitlementState Field Functions 
      bool hasEntitlementState() const { return this->entitlementState_ != nullptr;};
      void deleteEntitlementState() { this->entitlementState_ = nullptr;};
      inline const Data::EntitlementState & getEntitlementState() const { DARABONBA_PTR_GET_CONST(entitlementState_, Data::EntitlementState) };
      inline Data::EntitlementState getEntitlementState() { DARABONBA_PTR_GET(entitlementState_, Data::EntitlementState) };
      inline Data& setEntitlementState(const Data::EntitlementState & entitlementState) { DARABONBA_PTR_SET_VALUE(entitlementState_, entitlementState) };
      inline Data& setEntitlementState(Data::EntitlementState && entitlementState) { DARABONBA_PTR_SET_RVALUE(entitlementState_, entitlementState) };


    protected:
      // The actual number of newly added license rows in the current operation. A value of 0 indicates an idempotent operation with no changes.
      shared_ptr<int64_t> changedCount_ {};
      // The model license projection state in the gateway domain.
      shared_ptr<Data::EntitlementState> entitlementState_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AuthorizeConsumerModelCardGrantsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AuthorizeConsumerModelCardGrantsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AuthorizeConsumerModelCardGrantsResponseBody::Data) };
    inline AuthorizeConsumerModelCardGrantsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AuthorizeConsumerModelCardGrantsResponseBody::Data) };
    inline AuthorizeConsumerModelCardGrantsResponseBody& setData(const AuthorizeConsumerModelCardGrantsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AuthorizeConsumerModelCardGrantsResponseBody& setData(AuthorizeConsumerModelCardGrantsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthorizeConsumerModelCardGrantsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthorizeConsumerModelCardGrantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok is returned for a successful request, and a specific business error code is returned for a failed request.
    shared_ptr<string> code_ {};
    // The business result returned by the consumer operation.
    shared_ptr<AuthorizeConsumerModelCardGrantsResponseBody::Data> data_ {};
    // The response message that describes the result of the request.
    shared_ptr<string> message_ {};
    // The request ID generated by the system to trace the current call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
