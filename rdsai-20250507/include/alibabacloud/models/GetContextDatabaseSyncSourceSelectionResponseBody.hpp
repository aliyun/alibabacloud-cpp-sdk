// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCSOURCESELECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCSOURCESELECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseSyncSourceSelectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseSyncSourceSelectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseSyncSourceSelectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContextDatabaseSyncSourceSelectionResponseBody() = default ;
    GetContextDatabaseSyncSourceSelectionResponseBody(const GetContextDatabaseSyncSourceSelectionResponseBody &) = default ;
    GetContextDatabaseSyncSourceSelectionResponseBody(GetContextDatabaseSyncSourceSelectionResponseBody &&) = default ;
    GetContextDatabaseSyncSourceSelectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseSyncSourceSelectionResponseBody() = default ;
    GetContextDatabaseSyncSourceSelectionResponseBody& operator=(const GetContextDatabaseSyncSourceSelectionResponseBody &) = default ;
    GetContextDatabaseSyncSourceSelectionResponseBody& operator=(GetContextDatabaseSyncSourceSelectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfirmedAt, confirmedAt_);
        DARABONBA_PTR_TO_JSON(SelectedNodeKeys, selectedNodeKeys_);
        DARABONBA_PTR_TO_JSON(SelectionPolicy, selectionPolicy_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfirmedAt, confirmedAt_);
        DARABONBA_PTR_FROM_JSON(SelectedNodeKeys, selectedNodeKeys_);
        DARABONBA_PTR_FROM_JSON(SelectionPolicy, selectionPolicy_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
      virtual bool empty() const override { return this->confirmedAt_ == nullptr
        && this->selectedNodeKeys_ == nullptr && this->selectionPolicy_ == nullptr && this->updatedAt_ == nullptr; };
      // confirmedAt Field Functions 
      bool hasConfirmedAt() const { return this->confirmedAt_ != nullptr;};
      void deleteConfirmedAt() { this->confirmedAt_ = nullptr;};
      inline string getConfirmedAt() const { DARABONBA_PTR_GET_DEFAULT(confirmedAt_, "") };
      inline Data& setConfirmedAt(string confirmedAt) { DARABONBA_PTR_SET_VALUE(confirmedAt_, confirmedAt) };


      // selectedNodeKeys Field Functions 
      bool hasSelectedNodeKeys() const { return this->selectedNodeKeys_ != nullptr;};
      void deleteSelectedNodeKeys() { this->selectedNodeKeys_ = nullptr;};
      inline const vector<string> & getSelectedNodeKeys() const { DARABONBA_PTR_GET_CONST(selectedNodeKeys_, vector<string>) };
      inline vector<string> getSelectedNodeKeys() { DARABONBA_PTR_GET(selectedNodeKeys_, vector<string>) };
      inline Data& setSelectedNodeKeys(const vector<string> & selectedNodeKeys) { DARABONBA_PTR_SET_VALUE(selectedNodeKeys_, selectedNodeKeys) };
      inline Data& setSelectedNodeKeys(vector<string> && selectedNodeKeys) { DARABONBA_PTR_SET_RVALUE(selectedNodeKeys_, selectedNodeKeys) };


      // selectionPolicy Field Functions 
      bool hasSelectionPolicy() const { return this->selectionPolicy_ != nullptr;};
      void deleteSelectionPolicy() { this->selectionPolicy_ = nullptr;};
      inline string getSelectionPolicy() const { DARABONBA_PTR_GET_DEFAULT(selectionPolicy_, "") };
      inline Data& setSelectionPolicy(string selectionPolicy) { DARABONBA_PTR_SET_VALUE(selectionPolicy_, selectionPolicy) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The confirmation time.
      shared_ptr<string> confirmedAt_ {};
      // The list of selected node identifiers.
      shared_ptr<vector<string>> selectedNodeKeys_ {};
      // The selection policy.
      shared_ptr<string> selectionPolicy_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContextDatabaseSyncSourceSelectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContextDatabaseSyncSourceSelectionResponseBody::Data) };
    inline GetContextDatabaseSyncSourceSelectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContextDatabaseSyncSourceSelectionResponseBody::Data) };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setData(const GetContextDatabaseSyncSourceSelectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setData(GetContextDatabaseSyncSourceSelectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContextDatabaseSyncSourceSelectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetContextDatabaseSyncSourceSelectionResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
