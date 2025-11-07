// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyStatisticsResponseBodyResultObjectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(InitDevicePassRate, initDevicePassRate_);
      DARABONBA_PTR_TO_JSON(InitService, initService_);
      DARABONBA_PTR_TO_JSON(InitServiceConversionRate, initServiceConversionRate_);
      DARABONBA_PTR_TO_JSON(InitServicePassRate, initServicePassRate_);
      DARABONBA_PTR_TO_JSON(PassRate, passRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(InitDevicePassRate, initDevicePassRate_);
      DARABONBA_PTR_FROM_JSON(InitService, initService_);
      DARABONBA_PTR_FROM_JSON(InitServiceConversionRate, initServiceConversionRate_);
      DARABONBA_PTR_FROM_JSON(InitServicePassRate, initServicePassRate_);
      DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
    };
    DescribeVerifyStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyStatisticsResponseBodyResultObjectItems(const DescribeVerifyStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyStatisticsResponseBodyResultObjectItems(DescribeVerifyStatisticsResponseBodyResultObjectItems &&) = default ;
    DescribeVerifyStatisticsResponseBodyResultObjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyStatisticsResponseBodyResultObjectItems& operator=(const DescribeVerifyStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyStatisticsResponseBodyResultObjectItems& operator=(DescribeVerifyStatisticsResponseBodyResultObjectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->initDevicePassRate_ == nullptr && return this->initService_ == nullptr && return this->initServiceConversionRate_ == nullptr && return this->initServicePassRate_ == nullptr && return this->passRate_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // initDevicePassRate Field Functions 
    bool hasInitDevicePassRate() const { return this->initDevicePassRate_ != nullptr;};
    void deleteInitDevicePassRate() { this->initDevicePassRate_ = nullptr;};
    inline string initDevicePassRate() const { DARABONBA_PTR_GET_DEFAULT(initDevicePassRate_, "") };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setInitDevicePassRate(string initDevicePassRate) { DARABONBA_PTR_SET_VALUE(initDevicePassRate_, initDevicePassRate) };


    // initService Field Functions 
    bool hasInitService() const { return this->initService_ != nullptr;};
    void deleteInitService() { this->initService_ = nullptr;};
    inline int64_t initService() const { DARABONBA_PTR_GET_DEFAULT(initService_, 0L) };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setInitService(int64_t initService) { DARABONBA_PTR_SET_VALUE(initService_, initService) };


    // initServiceConversionRate Field Functions 
    bool hasInitServiceConversionRate() const { return this->initServiceConversionRate_ != nullptr;};
    void deleteInitServiceConversionRate() { this->initServiceConversionRate_ = nullptr;};
    inline string initServiceConversionRate() const { DARABONBA_PTR_GET_DEFAULT(initServiceConversionRate_, "") };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setInitServiceConversionRate(string initServiceConversionRate) { DARABONBA_PTR_SET_VALUE(initServiceConversionRate_, initServiceConversionRate) };


    // initServicePassRate Field Functions 
    bool hasInitServicePassRate() const { return this->initServicePassRate_ != nullptr;};
    void deleteInitServicePassRate() { this->initServicePassRate_ = nullptr;};
    inline string initServicePassRate() const { DARABONBA_PTR_GET_DEFAULT(initServicePassRate_, "") };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setInitServicePassRate(string initServicePassRate) { DARABONBA_PTR_SET_VALUE(initServicePassRate_, initServicePassRate) };


    // passRate Field Functions 
    bool hasPassRate() const { return this->passRate_ != nullptr;};
    void deletePassRate() { this->passRate_ = nullptr;};
    inline string passRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, "") };
    inline DescribeVerifyStatisticsResponseBodyResultObjectItems& setPassRate(string passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


  protected:
    // Date.
    std::shared_ptr<string> date_ = nullptr;
    // Client initialization pass rate.
    std::shared_ptr<string> initDevicePassRate_ = nullptr;
    // Number of server initializations.
    std::shared_ptr<int64_t> initService_ = nullptr;
    // Server initialization conversion rate.
    std::shared_ptr<string> initServiceConversionRate_ = nullptr;
    // Server initialization pass rate.
    std::shared_ptr<string> initServicePassRate_ = nullptr;
    // Pass rate.
    std::shared_ptr<string> passRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
