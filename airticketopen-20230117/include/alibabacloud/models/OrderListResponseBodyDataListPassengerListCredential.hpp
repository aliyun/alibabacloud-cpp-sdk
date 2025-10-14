// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATALISTPASSENGERLISTCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATALISTPASSENGERLISTCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderListResponseBodyDataListPassengerListCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResponseBodyDataListPassengerListCredential& obj) { 
      DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
      DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
      DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResponseBodyDataListPassengerListCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
      DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
      DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
    };
    OrderListResponseBodyDataListPassengerListCredential() = default ;
    OrderListResponseBodyDataListPassengerListCredential(const OrderListResponseBodyDataListPassengerListCredential &) = default ;
    OrderListResponseBodyDataListPassengerListCredential(OrderListResponseBodyDataListPassengerListCredential &&) = default ;
    OrderListResponseBodyDataListPassengerListCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResponseBodyDataListPassengerListCredential() = default ;
    OrderListResponseBodyDataListPassengerListCredential& operator=(const OrderListResponseBodyDataListPassengerListCredential &) = default ;
    OrderListResponseBodyDataListPassengerListCredential& operator=(OrderListResponseBodyDataListPassengerListCredential &&) = default ;
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
    inline OrderListResponseBodyDataListPassengerListCredential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


    // credentialNum Field Functions 
    bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
    void deleteCredentialNum() { this->credentialNum_ = nullptr;};
    inline string credentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
    inline OrderListResponseBodyDataListPassengerListCredential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline int32_t credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
    inline OrderListResponseBodyDataListPassengerListCredential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline OrderListResponseBodyDataListPassengerListCredential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


  protected:
    // issuing place (two-letter code)
    std::shared_ptr<string> certIssuePlace_ = nullptr;
    // credential number
    std::shared_ptr<string> credentialNum_ = nullptr;
    // credential type , only support "1"(1 means passport) currently.
    std::shared_ptr<int32_t> credentialType_ = nullptr;
    // credential expiration date
    std::shared_ptr<string> expireDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
