// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCUSTOMERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDCUSTOMERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindCustomerInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindCustomerInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindCustomerInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindCustomerInfoResponseBody() = default ;
    FindCustomerInfoResponseBody(const FindCustomerInfoResponseBody &) = default ;
    FindCustomerInfoResponseBody(FindCustomerInfoResponseBody &&) = default ;
    FindCustomerInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindCustomerInfoResponseBody() = default ;
    FindCustomerInfoResponseBody& operator=(const FindCustomerInfoResponseBody &) = default ;
    FindCustomerInfoResponseBody& operator=(FindCustomerInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Biz, biz_);
        DARABONBA_PTR_TO_JSON(Website, website_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Biz, biz_);
        DARABONBA_PTR_FROM_JSON(Website, website_);
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
      virtual bool empty() const override { return this->biz_ == nullptr
        && this->website_ == nullptr; };
      // biz Field Functions 
      bool hasBiz() const { return this->biz_ != nullptr;};
      void deleteBiz() { this->biz_ = nullptr;};
      inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
      inline Data& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


      // website Field Functions 
      bool hasWebsite() const { return this->website_ != nullptr;};
      void deleteWebsite() { this->website_ = nullptr;};
      inline string getWebsite() const { DARABONBA_PTR_GET_DEFAULT(website_, "") };
      inline Data& setWebsite(string website) { DARABONBA_PTR_SET_VALUE(website_, website) };


    protected:
      shared_ptr<string> biz_ {};
      shared_ptr<string> website_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindCustomerInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FindCustomerInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FindCustomerInfoResponseBody::Data) };
    inline FindCustomerInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FindCustomerInfoResponseBody::Data) };
    inline FindCustomerInfoResponseBody& setData(const FindCustomerInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FindCustomerInfoResponseBody& setData(FindCustomerInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindCustomerInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindCustomerInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindCustomerInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FindCustomerInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
