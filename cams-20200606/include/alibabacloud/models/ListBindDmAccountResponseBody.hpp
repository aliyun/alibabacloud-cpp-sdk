// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDDMACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDDMACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListBindDmAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindDmAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindDmAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBindDmAccountResponseBody() = default ;
    ListBindDmAccountResponseBody(const ListBindDmAccountResponseBody &) = default ;
    ListBindDmAccountResponseBody(ListBindDmAccountResponseBody &&) = default ;
    ListBindDmAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindDmAccountResponseBody() = default ;
    ListBindDmAccountResponseBody& operator=(const ListBindDmAccountResponseBody &) = default ;
    ListBindDmAccountResponseBody& operator=(ListBindDmAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountCode, accountCode_);
        DARABONBA_PTR_TO_JSON(ExtendAttr, extendAttr_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountCode, accountCode_);
        DARABONBA_PTR_FROM_JSON(ExtendAttr, extendAttr_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
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
      class ExtendAttr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendAttr& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(SendType, sendType_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendAttr& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(SendType, sendType_);
        };
        ExtendAttr() = default ;
        ExtendAttr(const ExtendAttr &) = default ;
        ExtendAttr(ExtendAttr &&) = default ;
        ExtendAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendAttr() = default ;
        ExtendAttr& operator=(const ExtendAttr &) = default ;
        ExtendAttr& operator=(ExtendAttr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->sendType_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline ExtendAttr& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // sendType Field Functions 
        bool hasSendType() const { return this->sendType_ != nullptr;};
        void deleteSendType() { this->sendType_ = nullptr;};
        inline string getSendType() const { DARABONBA_PTR_GET_DEFAULT(sendType_, "") };
        inline ExtendAttr& setSendType(string sendType) { DARABONBA_PTR_SET_VALUE(sendType_, sendType) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> sendType_ {};
      };

      virtual bool empty() const override { return this->accountCode_ == nullptr
        && this->extendAttr_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr; };
      // accountCode Field Functions 
      bool hasAccountCode() const { return this->accountCode_ != nullptr;};
      void deleteAccountCode() { this->accountCode_ = nullptr;};
      inline string getAccountCode() const { DARABONBA_PTR_GET_DEFAULT(accountCode_, "") };
      inline Data& setAccountCode(string accountCode) { DARABONBA_PTR_SET_VALUE(accountCode_, accountCode) };


      // extendAttr Field Functions 
      bool hasExtendAttr() const { return this->extendAttr_ != nullptr;};
      void deleteExtendAttr() { this->extendAttr_ = nullptr;};
      inline const Data::ExtendAttr & getExtendAttr() const { DARABONBA_PTR_GET_CONST(extendAttr_, Data::ExtendAttr) };
      inline Data::ExtendAttr getExtendAttr() { DARABONBA_PTR_GET(extendAttr_, Data::ExtendAttr) };
      inline Data& setExtendAttr(const Data::ExtendAttr & extendAttr) { DARABONBA_PTR_SET_VALUE(extendAttr_, extendAttr) };
      inline Data& setExtendAttr(Data::ExtendAttr && extendAttr) { DARABONBA_PTR_SET_RVALUE(extendAttr_, extendAttr) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    protected:
      shared_ptr<string> accountCode_ {};
      shared_ptr<Data::ExtendAttr> extendAttr_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListBindDmAccountResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBindDmAccountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBindDmAccountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBindDmAccountResponseBody::Data>) };
    inline vector<ListBindDmAccountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBindDmAccountResponseBody::Data>) };
    inline ListBindDmAccountResponseBody& setData(const vector<ListBindDmAccountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBindDmAccountResponseBody& setData(vector<ListBindDmAccountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBindDmAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindDmAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBindDmAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListBindDmAccountResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
