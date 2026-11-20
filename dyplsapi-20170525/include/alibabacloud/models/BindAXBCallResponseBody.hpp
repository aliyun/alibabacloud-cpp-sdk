// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAXBCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAXBCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindAXBCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindAXBCallResponseBody() = default ;
    BindAXBCallResponseBody(const BindAXBCallResponseBody &) = default ;
    BindAXBCallResponseBody(BindAXBCallResponseBody &&) = default ;
    BindAXBCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAXBCallResponseBody() = default ;
    BindAXBCallResponseBody& operator=(const BindAXBCallResponseBody &) = default ;
    BindAXBCallResponseBody& operator=(BindAXBCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindId, bindId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindId, bindId_);
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
      virtual bool empty() const override { return this->bindId_ == nullptr; };
      // bindId Field Functions 
      bool hasBindId() const { return this->bindId_ != nullptr;};
      void deleteBindId() { this->bindId_ = nullptr;};
      inline string getBindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
      inline Data& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    protected:
      // The ID of the binding relationship.
      shared_ptr<string> bindId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindAXBCallResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindAXBCallResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindAXBCallResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindAXBCallResponseBody::Data) };
    inline BindAXBCallResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindAXBCallResponseBody::Data) };
    inline BindAXBCallResponseBody& setData(const BindAXBCallResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindAXBCallResponseBody& setData(BindAXBCallResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindAXBCallResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindAXBCallResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the access denied error.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code. Valid values:
    // 
    // - 0000: Success.
    // 
    // - Other values: Failure.
    shared_ptr<string> code_ {};
    // The AXB call binding result.
    shared_ptr<BindAXBCallResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: Success.
    // 
    // - false: Failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
