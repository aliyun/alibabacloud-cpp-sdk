// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERSIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERSIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class ConversionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversionRate, conversionRate_);
      DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
    };
    friend void from_json(const Darabonba::Json& j, ConversionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversionRate, conversionRate_);
      DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
    };
    ConversionDataRequest() = default ;
    ConversionDataRequest(const ConversionDataRequest &) = default ;
    ConversionDataRequest(ConversionDataRequest &&) = default ;
    ConversionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversionDataRequest() = default ;
    ConversionDataRequest& operator=(const ConversionDataRequest &) = default ;
    ConversionDataRequest& operator=(ConversionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversionRate_ == nullptr
        && return this->reportTime_ == nullptr; };
    // conversionRate Field Functions 
    bool hasConversionRate() const { return this->conversionRate_ != nullptr;};
    void deleteConversionRate() { this->conversionRate_ = nullptr;};
    inline string conversionRate() const { DARABONBA_PTR_GET_DEFAULT(conversionRate_, "") };
    inline ConversionDataRequest& setConversionRate(string conversionRate) { DARABONBA_PTR_SET_VALUE(conversionRate_, conversionRate) };


    // reportTime Field Functions 
    bool hasReportTime() const { return this->reportTime_ != nullptr;};
    void deleteReportTime() { this->reportTime_ = nullptr;};
    inline int64_t reportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, 0L) };
    inline ConversionDataRequest& setReportTime(int64_t reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


  protected:
    // Conversion rate monitoring return value.
    // 
    // >  The value of this parameter is of type double, and the value is between [0,1].
    // 
    // This parameter is required.
    std::shared_ptr<string> conversionRate_ = nullptr;
    // Timestamp of the conversion rate observation should be a Unix timestamp, a millisecond-level long integer.
    // 
    // >  If this field is not specified: the current timestamp is the default.
    std::shared_ptr<int64_t> reportTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
