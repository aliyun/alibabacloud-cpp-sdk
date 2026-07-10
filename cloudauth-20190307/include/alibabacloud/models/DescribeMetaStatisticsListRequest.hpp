// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaStatisticsListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaStatisticsListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaStatisticsListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeMetaStatisticsListRequest() = default ;
    DescribeMetaStatisticsListRequest(const DescribeMetaStatisticsListRequest &) = default ;
    DescribeMetaStatisticsListRequest(DescribeMetaStatisticsListRequest &&) = default ;
    DescribeMetaStatisticsListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaStatisticsListRequest() = default ;
    DescribeMetaStatisticsListRequest& operator=(const DescribeMetaStatisticsListRequest &) = default ;
    DescribeMetaStatisticsListRequest& operator=(DescribeMetaStatisticsListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline DescribeMetaStatisticsListRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeMetaStatisticsListRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeMetaStatisticsListRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The commodity code. Valid values:
    // - **ID_CARD_2_META**: ID card two-element verification
    // - **ID_PERIOD**: ID card validity period verification
    // - **MOBILE_ONLINE_LENGTH**: mobile number online duration
    // - **MOBILE_ONLINE_STATUS**: mobile number online status
    // - **MOBILE_3_META_SIMPLE**: mobile number three-element verification (simple edition)
    // - **MOBILE_3_META**: mobile number three-element verification (detailed edition)
    // - **MOBILE_2_META**: mobile number two-element verification
    // - **BANK_CARD_N_META**: bank card verification (detailed edition)
    // - **MOBILE_DETECT**: phone number detection
    // - **VEHICLE_N_META**: vehicle element verification (enhanced edition)
    // - **VEHICLE_PENTA_INFO**: vehicle five-element information recognition
    // - **VEHICLE_LICENSE_INFO**: vehicle information recognition
    // - **VEHICLE_INSURE_DATE**: vehicle insurance date query
    // - **VEHICLE_CHECK**: vehicle element verification.
    // 
    // This parameter is required.
    shared_ptr<string> api_ {};
    // The end time of the query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endDate_ {};
    // The start time of the query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
