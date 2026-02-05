// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAllTenantBindNumberBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllTenantBindNumberBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllTenantBindNumberBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAllTenantBindNumberBindingResponseBody() = default ;
    ListAllTenantBindNumberBindingResponseBody(const ListAllTenantBindNumberBindingResponseBody &) = default ;
    ListAllTenantBindNumberBindingResponseBody(ListAllTenantBindNumberBindingResponseBody &&) = default ;
    ListAllTenantBindNumberBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllTenantBindNumberBindingResponseBody() = default ;
    ListAllTenantBindNumberBindingResponseBody& operator=(const ListAllTenantBindNumberBindingResponseBody &) = default ;
    ListAllTenantBindNumberBindingResponseBody& operator=(ListAllTenantBindNumberBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BillingType, billingType_);
          DARABONBA_PTR_TO_JSON(BindingId, bindingId_);
          DARABONBA_PTR_TO_JSON(InstanceNameList, instanceNameList_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(SerializedParams, serializedParams_);
          DARABONBA_PTR_TO_JSON(TrunkName, trunkName_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
          DARABONBA_PTR_FROM_JSON(BindingId, bindingId_);
          DARABONBA_PTR_FROM_JSON(InstanceNameList, instanceNameList_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(SerializedParams, serializedParams_);
          DARABONBA_PTR_FROM_JSON(TrunkName, trunkName_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billingType_ == nullptr
        && this->bindingId_ == nullptr && this->instanceNameList_ == nullptr && this->number_ == nullptr && this->serializedParams_ == nullptr && this->trunkName_ == nullptr; };
        // billingType Field Functions 
        bool hasBillingType() const { return this->billingType_ != nullptr;};
        void deleteBillingType() { this->billingType_ = nullptr;};
        inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
        inline List& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


        // bindingId Field Functions 
        bool hasBindingId() const { return this->bindingId_ != nullptr;};
        void deleteBindingId() { this->bindingId_ = nullptr;};
        inline string getBindingId() const { DARABONBA_PTR_GET_DEFAULT(bindingId_, "") };
        inline List& setBindingId(string bindingId) { DARABONBA_PTR_SET_VALUE(bindingId_, bindingId) };


        // instanceNameList Field Functions 
        bool hasInstanceNameList() const { return this->instanceNameList_ != nullptr;};
        void deleteInstanceNameList() { this->instanceNameList_ = nullptr;};
        inline const vector<string> & getInstanceNameList() const { DARABONBA_PTR_GET_CONST(instanceNameList_, vector<string>) };
        inline vector<string> getInstanceNameList() { DARABONBA_PTR_GET(instanceNameList_, vector<string>) };
        inline List& setInstanceNameList(const vector<string> & instanceNameList) { DARABONBA_PTR_SET_VALUE(instanceNameList_, instanceNameList) };
        inline List& setInstanceNameList(vector<string> && instanceNameList) { DARABONBA_PTR_SET_RVALUE(instanceNameList_, instanceNameList) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // serializedParams Field Functions 
        bool hasSerializedParams() const { return this->serializedParams_ != nullptr;};
        void deleteSerializedParams() { this->serializedParams_ = nullptr;};
        inline string getSerializedParams() const { DARABONBA_PTR_GET_DEFAULT(serializedParams_, "") };
        inline List& setSerializedParams(string serializedParams) { DARABONBA_PTR_SET_VALUE(serializedParams_, serializedParams) };


        // trunkName Field Functions 
        bool hasTrunkName() const { return this->trunkName_ != nullptr;};
        void deleteTrunkName() { this->trunkName_ = nullptr;};
        inline string getTrunkName() const { DARABONBA_PTR_GET_DEFAULT(trunkName_, "") };
        inline List& setTrunkName(string trunkName) { DARABONBA_PTR_SET_VALUE(trunkName_, trunkName) };


      protected:
        shared_ptr<string> billingType_ {};
        shared_ptr<string> bindingId_ {};
        shared_ptr<vector<string>> instanceNameList_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> serializedParams_ {};
        shared_ptr<string> trunkName_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAllTenantBindNumberBindingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAllTenantBindNumberBindingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAllTenantBindNumberBindingResponseBody::Data) };
    inline ListAllTenantBindNumberBindingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAllTenantBindNumberBindingResponseBody::Data) };
    inline ListAllTenantBindNumberBindingResponseBody& setData(const ListAllTenantBindNumberBindingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAllTenantBindNumberBindingResponseBody& setData(ListAllTenantBindNumberBindingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAllTenantBindNumberBindingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAllTenantBindNumberBindingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllTenantBindNumberBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAllTenantBindNumberBindingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAllTenantBindNumberBindingResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
