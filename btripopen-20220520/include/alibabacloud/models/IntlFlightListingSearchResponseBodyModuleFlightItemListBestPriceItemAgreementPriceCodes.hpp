// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEMAGREEMENTPRICECODES_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEMAGREEMENTPRICECODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes(const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes(IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes &&) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& operator=(const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& operator=(IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
