// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKREQUESTPASSENGERLISTCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKREQUESTPASSENGERLISTCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightInventoryPriceCheckRequestPassengerListCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_TO_JSON(issue_place, issuePlace_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_FROM_JSON(issue_place, issuePlace_);
    };
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo() = default ;
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo(const IntlFlightInventoryPriceCheckRequestPassengerListCertInfo &) = default ;
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo(IntlFlightInventoryPriceCheckRequestPassengerListCertInfo &&) = default ;
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckRequestPassengerListCertInfo() = default ;
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& operator=(const IntlFlightInventoryPriceCheckRequestPassengerListCertInfo &) = default ;
    IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& operator=(IntlFlightInventoryPriceCheckRequestPassengerListCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certNo_ != nullptr
        && this->certType_ != nullptr && this->certValidDate_ != nullptr && this->issuePlace_ != nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certValidDate Field Functions 
    bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
    void deleteCertValidDate() { this->certValidDate_ = nullptr;};
    inline string certValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
    inline IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


    // issuePlace Field Functions 
    bool hasIssuePlace() const { return this->issuePlace_ != nullptr;};
    void deleteIssuePlace() { this->issuePlace_ = nullptr;};
    inline string issuePlace() const { DARABONBA_PTR_GET_DEFAULT(issuePlace_, "") };
    inline IntlFlightInventoryPriceCheckRequestPassengerListCertInfo& setIssuePlace(string issuePlace) { DARABONBA_PTR_SET_VALUE(issuePlace_, issuePlace) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<string> certValidDate_ = nullptr;
    std::shared_ptr<string> issuePlace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
