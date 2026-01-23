// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class IssueCouponForCustomerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IssueCouponForCustomerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, IssueCouponForCustomerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    IssueCouponForCustomerResponseBody() = default ;
    IssueCouponForCustomerResponseBody(const IssueCouponForCustomerResponseBody &) = default ;
    IssueCouponForCustomerResponseBody(IssueCouponForCustomerResponseBody &&) = default ;
    IssueCouponForCustomerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IssueCouponForCustomerResponseBody() = default ;
    IssueCouponForCustomerResponseBody& operator=(const IssueCouponForCustomerResponseBody &) = default ;
    IssueCouponForCustomerResponseBody& operator=(IssueCouponForCustomerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Uidlist, uidlist_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Uidlist, uidlist_);
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
      virtual bool empty() const override { return this->couponTemplateId_ == nullptr
        && this->createTime_ == nullptr && this->uidlist_ == nullptr; };
      // couponTemplateId Field Functions 
      bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
      void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
      inline int64_t getCouponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
      inline Data& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // uidlist Field Functions 
      bool hasUidlist() const { return this->uidlist_ != nullptr;};
      void deleteUidlist() { this->uidlist_ = nullptr;};
      inline string getUidlist() const { DARABONBA_PTR_GET_DEFAULT(uidlist_, "") };
      inline Data& setUidlist(string uidlist) { DARABONBA_PTR_SET_VALUE(uidlist_, uidlist) };


    protected:
      shared_ptr<int64_t> couponTemplateId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> uidlist_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->data_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IssueCouponForCustomerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IssueCouponForCustomerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IssueCouponForCustomerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IssueCouponForCustomerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const IssueCouponForCustomerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, IssueCouponForCustomerResponseBody::Data) };
    inline IssueCouponForCustomerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, IssueCouponForCustomerResponseBody::Data) };
    inline IssueCouponForCustomerResponseBody& setData(const IssueCouponForCustomerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline IssueCouponForCustomerResponseBody& setData(IssueCouponForCustomerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<IssueCouponForCustomerResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
