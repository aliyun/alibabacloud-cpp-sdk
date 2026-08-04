// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDFINANCETAXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDFINANCETAXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindFinanceTaxResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindFinanceTaxResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FinanceVersion, financeVersion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindFinanceTaxResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FinanceVersion, financeVersion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindFinanceTaxResponseBody() = default ;
    FindFinanceTaxResponseBody(const FindFinanceTaxResponseBody &) = default ;
    FindFinanceTaxResponseBody(FindFinanceTaxResponseBody &&) = default ;
    FindFinanceTaxResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindFinanceTaxResponseBody() = default ;
    FindFinanceTaxResponseBody& operator=(const FindFinanceTaxResponseBody &) = default ;
    FindFinanceTaxResponseBody& operator=(FindFinanceTaxResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FinanceVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FinanceVersion& obj) { 
        DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
        DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
        DARABONBA_PTR_TO_JSON(SecondFinanceTax, secondFinanceTax_);
        DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
        DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
        DARABONBA_PTR_TO_JSON(Tax, tax_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, FinanceVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
        DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
        DARABONBA_PTR_FROM_JSON(SecondFinanceTax, secondFinanceTax_);
        DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
        DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
        DARABONBA_PTR_FROM_JSON(Tax, tax_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      FinanceVersion() = default ;
      FinanceVersion(const FinanceVersion &) = default ;
      FinanceVersion(FinanceVersion &&) = default ;
      FinanceVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FinanceVersion() = default ;
      FinanceVersion& operator=(const FinanceVersion &) = default ;
      FinanceVersion& operator=(FinanceVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->financeTaxCertificateImgName_ == nullptr
        && this->financeTaxCertificateImgUrl_ == nullptr && this->secondFinanceTax_ == nullptr && this->secondFinanceTaxCertificateImgName_ == nullptr && this->secondFinanceTaxCertificateImgUrl_ == nullptr && this->tax_ == nullptr
        && this->version_ == nullptr; };
      // financeTaxCertificateImgName Field Functions 
      bool hasFinanceTaxCertificateImgName() const { return this->financeTaxCertificateImgName_ != nullptr;};
      void deleteFinanceTaxCertificateImgName() { this->financeTaxCertificateImgName_ = nullptr;};
      inline string getFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgName_, "") };
      inline FinanceVersion& setFinanceTaxCertificateImgName(string financeTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgName_, financeTaxCertificateImgName) };


      // financeTaxCertificateImgUrl Field Functions 
      bool hasFinanceTaxCertificateImgUrl() const { return this->financeTaxCertificateImgUrl_ != nullptr;};
      void deleteFinanceTaxCertificateImgUrl() { this->financeTaxCertificateImgUrl_ = nullptr;};
      inline string getFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgUrl_, "") };
      inline FinanceVersion& setFinanceTaxCertificateImgUrl(string financeTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgUrl_, financeTaxCertificateImgUrl) };


      // secondFinanceTax Field Functions 
      bool hasSecondFinanceTax() const { return this->secondFinanceTax_ != nullptr;};
      void deleteSecondFinanceTax() { this->secondFinanceTax_ = nullptr;};
      inline string getSecondFinanceTax() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTax_, "") };
      inline FinanceVersion& setSecondFinanceTax(string secondFinanceTax) { DARABONBA_PTR_SET_VALUE(secondFinanceTax_, secondFinanceTax) };


      // secondFinanceTaxCertificateImgName Field Functions 
      bool hasSecondFinanceTaxCertificateImgName() const { return this->secondFinanceTaxCertificateImgName_ != nullptr;};
      void deleteSecondFinanceTaxCertificateImgName() { this->secondFinanceTaxCertificateImgName_ = nullptr;};
      inline string getSecondFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgName_, "") };
      inline FinanceVersion& setSecondFinanceTaxCertificateImgName(string secondFinanceTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgName_, secondFinanceTaxCertificateImgName) };


      // secondFinanceTaxCertificateImgUrl Field Functions 
      bool hasSecondFinanceTaxCertificateImgUrl() const { return this->secondFinanceTaxCertificateImgUrl_ != nullptr;};
      void deleteSecondFinanceTaxCertificateImgUrl() { this->secondFinanceTaxCertificateImgUrl_ = nullptr;};
      inline string getSecondFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgUrl_, "") };
      inline FinanceVersion& setSecondFinanceTaxCertificateImgUrl(string secondFinanceTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgUrl_, secondFinanceTaxCertificateImgUrl) };


      // tax Field Functions 
      bool hasTax() const { return this->tax_ != nullptr;};
      void deleteTax() { this->tax_ = nullptr;};
      inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
      inline FinanceVersion& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline FinanceVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> financeTaxCertificateImgName_ {};
      shared_ptr<string> financeTaxCertificateImgUrl_ {};
      shared_ptr<string> secondFinanceTax_ {};
      shared_ptr<string> secondFinanceTaxCertificateImgName_ {};
      shared_ptr<string> secondFinanceTaxCertificateImgUrl_ {};
      shared_ptr<string> tax_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->financeVersion_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindFinanceTaxResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // financeVersion Field Functions 
    bool hasFinanceVersion() const { return this->financeVersion_ != nullptr;};
    void deleteFinanceVersion() { this->financeVersion_ = nullptr;};
    inline const FindFinanceTaxResponseBody::FinanceVersion & getFinanceVersion() const { DARABONBA_PTR_GET_CONST(financeVersion_, FindFinanceTaxResponseBody::FinanceVersion) };
    inline FindFinanceTaxResponseBody::FinanceVersion getFinanceVersion() { DARABONBA_PTR_GET(financeVersion_, FindFinanceTaxResponseBody::FinanceVersion) };
    inline FindFinanceTaxResponseBody& setFinanceVersion(const FindFinanceTaxResponseBody::FinanceVersion & financeVersion) { DARABONBA_PTR_SET_VALUE(financeVersion_, financeVersion) };
    inline FindFinanceTaxResponseBody& setFinanceVersion(FindFinanceTaxResponseBody::FinanceVersion && financeVersion) { DARABONBA_PTR_SET_RVALUE(financeVersion_, financeVersion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindFinanceTaxResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindFinanceTaxResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindFinanceTaxResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FindFinanceTaxResponseBody::FinanceVersion> financeVersion_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
