// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckSelectedDomainStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSelectedDomainStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSelectedDomainStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckSelectedDomainStatusResponseBody() = default ;
    CheckSelectedDomainStatusResponseBody(const CheckSelectedDomainStatusResponseBody &) = default ;
    CheckSelectedDomainStatusResponseBody(CheckSelectedDomainStatusResponseBody &&) = default ;
    CheckSelectedDomainStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSelectedDomainStatusResponseBody() = default ;
    CheckSelectedDomainStatusResponseBody& operator=(const CheckSelectedDomainStatusResponseBody &) = default ;
    CheckSelectedDomainStatusResponseBody& operator=(CheckSelectedDomainStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(DeadDate, deadDate_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Premium, premium_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(RegDate, regDate_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(DeadDate, deadDate_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Premium, premium_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deadDate_ == nullptr
        && this->domain_ == nullptr && this->endTime_ == nullptr && this->premium_ == nullptr && this->price_ == nullptr && this->regDate_ == nullptr; };
      // deadDate Field Functions 
      bool hasDeadDate() const { return this->deadDate_ != nullptr;};
      void deleteDeadDate() { this->deadDate_ = nullptr;};
      inline int64_t getDeadDate() const { DARABONBA_PTR_GET_DEFAULT(deadDate_, 0L) };
      inline Module& setDeadDate(int64_t deadDate) { DARABONBA_PTR_SET_VALUE(deadDate_, deadDate) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Module& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Module& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // premium Field Functions 
      bool hasPremium() const { return this->premium_ != nullptr;};
      void deletePremium() { this->premium_ = nullptr;};
      inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
      inline Module& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Module& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // regDate Field Functions 
      bool hasRegDate() const { return this->regDate_ != nullptr;};
      void deleteRegDate() { this->regDate_ = nullptr;};
      inline int64_t getRegDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, 0L) };
      inline Module& setRegDate(int64_t regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


    protected:
      shared_ptr<int64_t> deadDate_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<bool> premium_ {};
      shared_ptr<double> price_ {};
      shared_ptr<int64_t> regDate_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CheckSelectedDomainStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CheckSelectedDomainStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CheckSelectedDomainStatusResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CheckSelectedDomainStatusResponseBody::Module) };
    inline CheckSelectedDomainStatusResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CheckSelectedDomainStatusResponseBody::Module) };
    inline CheckSelectedDomainStatusResponseBody& setModule(const CheckSelectedDomainStatusResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CheckSelectedDomainStatusResponseBody& setModule(CheckSelectedDomainStatusResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSelectedDomainStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckSelectedDomainStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<CheckSelectedDomainStatusResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
