// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHACCOUNTSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHACCOUNTSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohAccountStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohAccountStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohAccountStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeDohAccountStatisticsRequest() = default ;
    DescribeDohAccountStatisticsRequest(const DescribeDohAccountStatisticsRequest &) = default ;
    DescribeDohAccountStatisticsRequest(DescribeDohAccountStatisticsRequest &&) = default ;
    DescribeDohAccountStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohAccountStatisticsRequest() = default ;
    DescribeDohAccountStatisticsRequest& operator=(const DescribeDohAccountStatisticsRequest &) = default ;
    DescribeDohAccountStatisticsRequest& operator=(DescribeDohAccountStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->lang_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDohAccountStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDohAccountStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDohAccountStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // The default value is the day when you perform the operation.
    shared_ptr<string> endDate_ {};
    // The language type.
    shared_ptr<string> lang_ {};
    // The beginning of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // You can query only the DNS records of the latest 90 days.`The value of StartDate must be greater than or equal to the difference between the current date and 90`.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
