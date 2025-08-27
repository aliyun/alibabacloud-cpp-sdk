// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUESTSEARCHPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUESTSEARCHPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchRequestSearchPassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchRequestSearchPassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(full_name, fullName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchRequestSearchPassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(full_name, fullName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IntlFlightListingSearchRequestSearchPassengerList() = default ;
    IntlFlightListingSearchRequestSearchPassengerList(const IntlFlightListingSearchRequestSearchPassengerList &) = default ;
    IntlFlightListingSearchRequestSearchPassengerList(IntlFlightListingSearchRequestSearchPassengerList &&) = default ;
    IntlFlightListingSearchRequestSearchPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchRequestSearchPassengerList() = default ;
    IntlFlightListingSearchRequestSearchPassengerList& operator=(const IntlFlightListingSearchRequestSearchPassengerList &) = default ;
    IntlFlightListingSearchRequestSearchPassengerList& operator=(IntlFlightListingSearchRequestSearchPassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certNo_ != nullptr
        && this->certType_ != nullptr && this->fullName_ != nullptr && this->type_ != nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline IntlFlightListingSearchRequestSearchPassengerList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline IntlFlightListingSearchRequestSearchPassengerList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline IntlFlightListingSearchRequestSearchPassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IntlFlightListingSearchRequestSearchPassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> certType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fullName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
