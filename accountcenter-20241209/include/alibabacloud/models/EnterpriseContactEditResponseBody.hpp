// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISECONTACTEDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISECONTACTEDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseContactEditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseContactEditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseContactEditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseContactEditResponseBody() = default ;
    EnterpriseContactEditResponseBody(const EnterpriseContactEditResponseBody &) = default ;
    EnterpriseContactEditResponseBody(EnterpriseContactEditResponseBody &&) = default ;
    EnterpriseContactEditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseContactEditResponseBody() = default ;
    EnterpriseContactEditResponseBody& operator=(const EnterpriseContactEditResponseBody &) = default ;
    EnterpriseContactEditResponseBody& operator=(EnterpriseContactEditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ErrorList, errorList_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ErrorList, errorList_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class ErrorList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorList& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorDesc, errorDesc_);
          DARABONBA_PTR_TO_JSON(Item, item_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorList& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorDesc, errorDesc_);
          DARABONBA_PTR_FROM_JSON(Item, item_);
        };
        ErrorList() = default ;
        ErrorList(const ErrorList &) = default ;
        ErrorList(ErrorList &&) = default ;
        ErrorList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorList() = default ;
        ErrorList& operator=(const ErrorList &) = default ;
        ErrorList& operator=(ErrorList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorDesc_ == nullptr && this->item_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorDesc Field Functions 
        bool hasErrorDesc() const { return this->errorDesc_ != nullptr;};
        void deleteErrorDesc() { this->errorDesc_ = nullptr;};
        inline string getErrorDesc() const { DARABONBA_PTR_GET_DEFAULT(errorDesc_, "") };
        inline ErrorList& setErrorDesc(string errorDesc) { DARABONBA_PTR_SET_VALUE(errorDesc_, errorDesc) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline ErrorList& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorDesc_ {};
        shared_ptr<string> item_ {};
      };

      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->errorList_ == nullptr && this->result_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
      inline Data& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // errorList Field Functions 
      bool hasErrorList() const { return this->errorList_ != nullptr;};
      void deleteErrorList() { this->errorList_ = nullptr;};
      inline const vector<Data::ErrorList> & getErrorList() const { DARABONBA_PTR_GET_CONST(errorList_, vector<Data::ErrorList>) };
      inline vector<Data::ErrorList> getErrorList() { DARABONBA_PTR_GET(errorList_, vector<Data::ErrorList>) };
      inline Data& setErrorList(const vector<Data::ErrorList> & errorList) { DARABONBA_PTR_SET_VALUE(errorList_, errorList) };
      inline Data& setErrorList(vector<Data::ErrorList> && errorList) { DARABONBA_PTR_SET_RVALUE(errorList_, errorList) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
      inline Data& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      shared_ptr<int64_t> contactId_ {};
      shared_ptr<vector<Data::ErrorList>> errorList_ {};
      shared_ptr<bool> result_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseContactEditResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnterpriseContactEditResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EnterpriseContactEditResponseBody::Data) };
    inline EnterpriseContactEditResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EnterpriseContactEditResponseBody::Data) };
    inline EnterpriseContactEditResponseBody& setData(const EnterpriseContactEditResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseContactEditResponseBody& setData(EnterpriseContactEditResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseContactEditResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseContactEditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseContactEditResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EnterpriseContactEditResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
