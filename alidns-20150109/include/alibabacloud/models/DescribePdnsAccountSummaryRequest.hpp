// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAccountSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAccountSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAccountSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribePdnsAccountSummaryRequest() = default ;
    DescribePdnsAccountSummaryRequest(const DescribePdnsAccountSummaryRequest &) = default ;
    DescribePdnsAccountSummaryRequest(DescribePdnsAccountSummaryRequest &&) = default ;
    DescribePdnsAccountSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAccountSummaryRequest() = default ;
    DescribePdnsAccountSummaryRequest& operator=(const DescribePdnsAccountSummaryRequest &) = default ;
    DescribePdnsAccountSummaryRequest& operator=(DescribePdnsAccountSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->lang_ != nullptr && this->startDate_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribePdnsAccountSummaryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePdnsAccountSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribePdnsAccountSummaryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
