// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHoneyPotSuspStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHoneyPotSuspStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StatisticsDays, statisticsDays_);
      DARABONBA_PTR_TO_JSON(StatisticsKeyType, statisticsKeyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHoneyPotSuspStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StatisticsDays, statisticsDays_);
      DARABONBA_PTR_FROM_JSON(StatisticsKeyType, statisticsKeyType_);
    };
    DescribeHoneyPotSuspStatisticsRequest() = default ;
    DescribeHoneyPotSuspStatisticsRequest(const DescribeHoneyPotSuspStatisticsRequest &) = default ;
    DescribeHoneyPotSuspStatisticsRequest(DescribeHoneyPotSuspStatisticsRequest &&) = default ;
    DescribeHoneyPotSuspStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHoneyPotSuspStatisticsRequest() = default ;
    DescribeHoneyPotSuspStatisticsRequest& operator=(const DescribeHoneyPotSuspStatisticsRequest &) = default ;
    DescribeHoneyPotSuspStatisticsRequest& operator=(DescribeHoneyPotSuspStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->lang_ != nullptr && this->statisticsDays_ != nullptr && this->statisticsKeyType_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeHoneyPotSuspStatisticsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeHoneyPotSuspStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // statisticsDays Field Functions 
    bool hasStatisticsDays() const { return this->statisticsDays_ != nullptr;};
    void deleteStatisticsDays() { this->statisticsDays_ = nullptr;};
    inline int32_t statisticsDays() const { DARABONBA_PTR_GET_DEFAULT(statisticsDays_, 0) };
    inline DescribeHoneyPotSuspStatisticsRequest& setStatisticsDays(int32_t statisticsDays) { DARABONBA_PTR_SET_VALUE(statisticsDays_, statisticsDays) };


    // statisticsKeyType Field Functions 
    bool hasStatisticsKeyType() const { return this->statisticsKeyType_ != nullptr;};
    void deleteStatisticsKeyType() { this->statisticsKeyType_ = nullptr;};
    inline string statisticsKeyType() const { DARABONBA_PTR_GET_DEFAULT(statisticsKeyType_, "") };
    inline DescribeHoneyPotSuspStatisticsRequest& setStatisticsKeyType(string statisticsKeyType) { DARABONBA_PTR_SET_VALUE(statisticsKeyType_, statisticsKeyType) };


  protected:
    // The source of the request. Set the value to **honeypot**.
    // 
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The time range of the data to query. Unit: days.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> statisticsDays_ = nullptr;
    // The type of the asset to query. Valid values:
    // 
    // *   **vpcInstanceId**: VPC
    // *   **uuid**: server
    // 
    // This parameter is required.
    std::shared_ptr<string> statisticsKeyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
