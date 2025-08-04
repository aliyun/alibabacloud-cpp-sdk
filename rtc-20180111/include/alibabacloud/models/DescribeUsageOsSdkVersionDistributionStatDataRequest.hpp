// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOsSdkVersionDistributionStatDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOsSdkVersionDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOsSdkVersionDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeUsageOsSdkVersionDistributionStatDataRequest() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataRequest(const DescribeUsageOsSdkVersionDistributionStatDataRequest &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataRequest(DescribeUsageOsSdkVersionDistributionStatDataRequest &&) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOsSdkVersionDistributionStatDataRequest() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataRequest& operator=(const DescribeUsageOsSdkVersionDistributionStatDataRequest &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataRequest& operator=(DescribeUsageOsSdkVersionDistributionStatDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endDate_ != nullptr && this->startDate_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeUsageOsSdkVersionDistributionStatDataRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeUsageOsSdkVersionDistributionStatDataRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // APP ID
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
