// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERLISTCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERLISTCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequestPassengerListCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequestPassengerListCredential& obj) { 
      DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
      DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
      DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequestPassengerListCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
      DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
      DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
    };
    BookRequestPassengerListCredential() = default ;
    BookRequestPassengerListCredential(const BookRequestPassengerListCredential &) = default ;
    BookRequestPassengerListCredential(BookRequestPassengerListCredential &&) = default ;
    BookRequestPassengerListCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequestPassengerListCredential() = default ;
    BookRequestPassengerListCredential& operator=(const BookRequestPassengerListCredential &) = default ;
    BookRequestPassengerListCredential& operator=(BookRequestPassengerListCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && return this->credentialNum_ == nullptr && return this->credentialType_ == nullptr && return this->expireDate_ == nullptr; };
    // certIssuePlace Field Functions 
    bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
    void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
    inline string certIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
    inline BookRequestPassengerListCredential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


    // credentialNum Field Functions 
    bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
    void deleteCredentialNum() { this->credentialNum_ = nullptr;};
    inline string credentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
    inline BookRequestPassengerListCredential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline int32_t credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
    inline BookRequestPassengerListCredential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline BookRequestPassengerListCredential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


  protected:
    // place of issue, two-letter code
    std::shared_ptr<string> certIssuePlace_ = nullptr;
    // travel document number
    std::shared_ptr<string> credentialNum_ = nullptr;
    // travel document type , only support "1"(1 means passport) currently.
    std::shared_ptr<int32_t> credentialType_ = nullptr;
    // expiration date
    std::shared_ptr<string> expireDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
