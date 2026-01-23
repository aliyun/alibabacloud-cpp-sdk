// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CreateCouponTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCouponTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCouponTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateCouponTemplateResponseBody() = default ;
    CreateCouponTemplateResponseBody(const CreateCouponTemplateResponseBody &) = default ;
    CreateCouponTemplateResponseBody(CreateCouponTemplateResponseBody &&) = default ;
    CreateCouponTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCouponTemplateResponseBody() = default ;
    CreateCouponTemplateResponseBody& operator=(const CreateCouponTemplateResponseBody &) = default ;
    CreateCouponTemplateResponseBody& operator=(CreateCouponTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
        DARABONBA_PTR_TO_JSON(CostBearer, costBearer_);
        DARABONBA_PTR_TO_JSON(CouponTemplateID, couponTemplateID_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Expireddate, expireddate_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Vailddate, vailddate_);
        DARABONBA_PTR_TO_JSON(Vaildperioddays, vaildperioddays_);
        DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
        DARABONBA_PTR_FROM_JSON(CostBearer, costBearer_);
        DARABONBA_PTR_FROM_JSON(CouponTemplateID, couponTemplateID_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Expireddate, expireddate_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Vailddate, vailddate_);
        DARABONBA_PTR_FROM_JSON(Vaildperioddays, vaildperioddays_);
        DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->costBearer_ == nullptr && this->couponTemplateID_ == nullptr && this->createTime_ == nullptr && this->expireddate_ == nullptr && this->productType_ == nullptr
        && this->status_ == nullptr && this->templateName_ == nullptr && this->vailddate_ == nullptr && this->vaildperioddays_ == nullptr && this->validUntil_ == nullptr
        && this->value_ == nullptr; };
      // applicableProducts Field Functions 
      bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
      void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
      inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
      inline Data& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


      // costBearer Field Functions 
      bool hasCostBearer() const { return this->costBearer_ != nullptr;};
      void deleteCostBearer() { this->costBearer_ = nullptr;};
      inline string getCostBearer() const { DARABONBA_PTR_GET_DEFAULT(costBearer_, "") };
      inline Data& setCostBearer(string costBearer) { DARABONBA_PTR_SET_VALUE(costBearer_, costBearer) };


      // couponTemplateID Field Functions 
      bool hasCouponTemplateID() const { return this->couponTemplateID_ != nullptr;};
      void deleteCouponTemplateID() { this->couponTemplateID_ = nullptr;};
      inline int64_t getCouponTemplateID() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateID_, 0L) };
      inline Data& setCouponTemplateID(int64_t couponTemplateID) { DARABONBA_PTR_SET_VALUE(couponTemplateID_, couponTemplateID) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireddate Field Functions 
      bool hasExpireddate() const { return this->expireddate_ != nullptr;};
      void deleteExpireddate() { this->expireddate_ = nullptr;};
      inline string getExpireddate() const { DARABONBA_PTR_GET_DEFAULT(expireddate_, "") };
      inline Data& setExpireddate(string expireddate) { DARABONBA_PTR_SET_VALUE(expireddate_, expireddate) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline const vector<string> & getProductType() const { DARABONBA_PTR_GET_CONST(productType_, vector<string>) };
      inline vector<string> getProductType() { DARABONBA_PTR_GET(productType_, vector<string>) };
      inline Data& setProductType(const vector<string> & productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };
      inline Data& setProductType(vector<string> && productType) { DARABONBA_PTR_SET_RVALUE(productType_, productType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // vailddate Field Functions 
      bool hasVailddate() const { return this->vailddate_ != nullptr;};
      void deleteVailddate() { this->vailddate_ = nullptr;};
      inline string getVailddate() const { DARABONBA_PTR_GET_DEFAULT(vailddate_, "") };
      inline Data& setVailddate(string vailddate) { DARABONBA_PTR_SET_VALUE(vailddate_, vailddate) };


      // vaildperioddays Field Functions 
      bool hasVaildperioddays() const { return this->vaildperioddays_ != nullptr;};
      void deleteVaildperioddays() { this->vaildperioddays_ = nullptr;};
      inline string getVaildperioddays() const { DARABONBA_PTR_GET_DEFAULT(vaildperioddays_, "") };
      inline Data& setVaildperioddays(string vaildperioddays) { DARABONBA_PTR_SET_VALUE(vaildperioddays_, vaildperioddays) };


      // validUntil Field Functions 
      bool hasValidUntil() const { return this->validUntil_ != nullptr;};
      void deleteValidUntil() { this->validUntil_ = nullptr;};
      inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
      inline Data& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> applicableProducts_ {};
      shared_ptr<string> costBearer_ {};
      shared_ptr<int64_t> couponTemplateID_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> expireddate_ {};
      shared_ptr<vector<string>> productType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<string> vailddate_ {};
      shared_ptr<string> vaildperioddays_ {};
      shared_ptr<string> validUntil_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCouponTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCouponTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCouponTemplateResponseBody::Data) };
    inline CreateCouponTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCouponTemplateResponseBody::Data) };
    inline CreateCouponTemplateResponseBody& setData(const CreateCouponTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCouponTemplateResponseBody& setData(CreateCouponTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCouponTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCouponTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateCouponTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateCouponTemplateResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
