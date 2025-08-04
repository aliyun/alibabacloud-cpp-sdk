// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageDistributionStatDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StatDim, statDim_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StatDim, statDim_);
    };
    DescribeUsageDistributionStatDataRequest() = default ;
    DescribeUsageDistributionStatDataRequest(const DescribeUsageDistributionStatDataRequest &) = default ;
    DescribeUsageDistributionStatDataRequest(DescribeUsageDistributionStatDataRequest &&) = default ;
    DescribeUsageDistributionStatDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageDistributionStatDataRequest() = default ;
    DescribeUsageDistributionStatDataRequest& operator=(const DescribeUsageDistributionStatDataRequest &) = default ;
    DescribeUsageDistributionStatDataRequest& operator=(DescribeUsageDistributionStatDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endDate_ != nullptr && this->startDate_ != nullptr && this->statDim_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeUsageDistributionStatDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeUsageDistributionStatDataRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeUsageDistributionStatDataRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statDim Field Functions 
    bool hasStatDim() const { return this->statDim_ != nullptr;};
    void deleteStatDim() { this->statDim_ = nullptr;};
    inline string statDim() const { DARABONBA_PTR_GET_DEFAULT(statDim_, "") };
    inline DescribeUsageDistributionStatDataRequest& setStatDim(string statDim) { DARABONBA_PTR_SET_VALUE(statDim_, statDim) };


  protected:
    // APP ID
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> statDim_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
