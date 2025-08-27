// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTAGREEMENTPRICECODES_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTAGREEMENTPRICECODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes(const IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes(IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& operator=(const IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& operator=(IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes &&) = default ;
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
    inline IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
