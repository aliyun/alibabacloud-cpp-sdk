// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsThreatStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(ThreatSourceIp, threatSourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(ThreatSourceIp, threatSourceIp_);
    };
    DescribePdnsThreatStatisticRequest() = default ;
    DescribePdnsThreatStatisticRequest(const DescribePdnsThreatStatisticRequest &) = default ;
    DescribePdnsThreatStatisticRequest(DescribePdnsThreatStatisticRequest &&) = default ;
    DescribePdnsThreatStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatStatisticRequest() = default ;
    DescribePdnsThreatStatisticRequest& operator=(const DescribePdnsThreatStatisticRequest &) = default ;
    DescribePdnsThreatStatisticRequest& operator=(DescribePdnsThreatStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->lang_ == nullptr && this->startDate_ == nullptr && this->threatSourceIp_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribePdnsThreatStatisticRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePdnsThreatStatisticRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribePdnsThreatStatisticRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // threatSourceIp Field Functions 
    bool hasThreatSourceIp() const { return this->threatSourceIp_ != nullptr;};
    void deleteThreatSourceIp() { this->threatSourceIp_ = nullptr;};
    inline string getThreatSourceIp() const { DARABONBA_PTR_GET_DEFAULT(threatSourceIp_, "") };
    inline DescribePdnsThreatStatisticRequest& setThreatSourceIp(string threatSourceIp) { DARABONBA_PTR_SET_VALUE(threatSourceIp_, threatSourceIp) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> threatSourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
