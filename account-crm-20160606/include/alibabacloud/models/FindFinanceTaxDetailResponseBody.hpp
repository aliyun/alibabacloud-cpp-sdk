// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDFINANCETAXDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDFINANCETAXDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindFinanceTaxDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindFinanceTaxDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Finance, finance_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindFinanceTaxDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Finance, finance_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindFinanceTaxDetailResponseBody() = default ;
    FindFinanceTaxDetailResponseBody(const FindFinanceTaxDetailResponseBody &) = default ;
    FindFinanceTaxDetailResponseBody(FindFinanceTaxDetailResponseBody &&) = default ;
    FindFinanceTaxDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindFinanceTaxDetailResponseBody() = default ;
    FindFinanceTaxDetailResponseBody& operator=(const FindFinanceTaxDetailResponseBody &) = default ;
    FindFinanceTaxDetailResponseBody& operator=(FindFinanceTaxDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Finance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Finance& obj) { 
        DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
        DARABONBA_PTR_TO_JSON(Tax, tax_);
        DARABONBA_PTR_TO_JSON(financeTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
        DARABONBA_PTR_TO_JSON(secondFinanceTax, secondFinanceTax_);
        DARABONBA_PTR_TO_JSON(secondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
        DARABONBA_PTR_TO_JSON(secondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Finance& obj) { 
        DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
        DARABONBA_PTR_FROM_JSON(Tax, tax_);
        DARABONBA_PTR_FROM_JSON(financeTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
        DARABONBA_PTR_FROM_JSON(secondFinanceTax, secondFinanceTax_);
        DARABONBA_PTR_FROM_JSON(secondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
        DARABONBA_PTR_FROM_JSON(secondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
      };
      Finance() = default ;
      Finance(const Finance &) = default ;
      Finance(Finance &&) = default ;
      Finance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Finance() = default ;
      Finance& operator=(const Finance &) = default ;
      Finance& operator=(Finance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->financeTaxCertificateImgName_ == nullptr
        && this->tax_ == nullptr && this->financeTaxCertificateImgUrl_ == nullptr && this->secondFinanceTax_ == nullptr && this->secondFinanceTaxCertificateImgName_ == nullptr && this->secondFinanceTaxCertificateImgUrl_ == nullptr; };
      // financeTaxCertificateImgName Field Functions 
      bool hasFinanceTaxCertificateImgName() const { return this->financeTaxCertificateImgName_ != nullptr;};
      void deleteFinanceTaxCertificateImgName() { this->financeTaxCertificateImgName_ = nullptr;};
      inline string getFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgName_, "") };
      inline Finance& setFinanceTaxCertificateImgName(string financeTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgName_, financeTaxCertificateImgName) };


      // tax Field Functions 
      bool hasTax() const { return this->tax_ != nullptr;};
      void deleteTax() { this->tax_ = nullptr;};
      inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
      inline Finance& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      // financeTaxCertificateImgUrl Field Functions 
      bool hasFinanceTaxCertificateImgUrl() const { return this->financeTaxCertificateImgUrl_ != nullptr;};
      void deleteFinanceTaxCertificateImgUrl() { this->financeTaxCertificateImgUrl_ = nullptr;};
      inline string getFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgUrl_, "") };
      inline Finance& setFinanceTaxCertificateImgUrl(string financeTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgUrl_, financeTaxCertificateImgUrl) };


      // secondFinanceTax Field Functions 
      bool hasSecondFinanceTax() const { return this->secondFinanceTax_ != nullptr;};
      void deleteSecondFinanceTax() { this->secondFinanceTax_ = nullptr;};
      inline string getSecondFinanceTax() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTax_, "") };
      inline Finance& setSecondFinanceTax(string secondFinanceTax) { DARABONBA_PTR_SET_VALUE(secondFinanceTax_, secondFinanceTax) };


      // secondFinanceTaxCertificateImgName Field Functions 
      bool hasSecondFinanceTaxCertificateImgName() const { return this->secondFinanceTaxCertificateImgName_ != nullptr;};
      void deleteSecondFinanceTaxCertificateImgName() { this->secondFinanceTaxCertificateImgName_ = nullptr;};
      inline string getSecondFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgName_, "") };
      inline Finance& setSecondFinanceTaxCertificateImgName(string secondFinanceTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgName_, secondFinanceTaxCertificateImgName) };


      // secondFinanceTaxCertificateImgUrl Field Functions 
      bool hasSecondFinanceTaxCertificateImgUrl() const { return this->secondFinanceTaxCertificateImgUrl_ != nullptr;};
      void deleteSecondFinanceTaxCertificateImgUrl() { this->secondFinanceTaxCertificateImgUrl_ = nullptr;};
      inline string getSecondFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgUrl_, "") };
      inline Finance& setSecondFinanceTaxCertificateImgUrl(string secondFinanceTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgUrl_, secondFinanceTaxCertificateImgUrl) };


    protected:
      shared_ptr<string> financeTaxCertificateImgName_ {};
      shared_ptr<string> tax_ {};
      shared_ptr<string> financeTaxCertificateImgUrl_ {};
      shared_ptr<string> secondFinanceTax_ {};
      shared_ptr<string> secondFinanceTaxCertificateImgName_ {};
      shared_ptr<string> secondFinanceTaxCertificateImgUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->finance_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindFinanceTaxDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // finance Field Functions 
    bool hasFinance() const { return this->finance_ != nullptr;};
    void deleteFinance() { this->finance_ = nullptr;};
    inline const FindFinanceTaxDetailResponseBody::Finance & getFinance() const { DARABONBA_PTR_GET_CONST(finance_, FindFinanceTaxDetailResponseBody::Finance) };
    inline FindFinanceTaxDetailResponseBody::Finance getFinance() { DARABONBA_PTR_GET(finance_, FindFinanceTaxDetailResponseBody::Finance) };
    inline FindFinanceTaxDetailResponseBody& setFinance(const FindFinanceTaxDetailResponseBody::Finance & finance) { DARABONBA_PTR_SET_VALUE(finance_, finance) };
    inline FindFinanceTaxDetailResponseBody& setFinance(FindFinanceTaxDetailResponseBody::Finance && finance) { DARABONBA_PTR_SET_RVALUE(finance_, finance) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindFinanceTaxDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindFinanceTaxDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindFinanceTaxDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FindFinanceTaxDetailResponseBody::Finance> finance_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
