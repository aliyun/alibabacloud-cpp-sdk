// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageAreaDistributionStatDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageAreaDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ParentArea, parentArea_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageAreaDistributionStatDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ParentArea, parentArea_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeUsageAreaDistributionStatDataRequest() = default ;
    DescribeUsageAreaDistributionStatDataRequest(const DescribeUsageAreaDistributionStatDataRequest &) = default ;
    DescribeUsageAreaDistributionStatDataRequest(DescribeUsageAreaDistributionStatDataRequest &&) = default ;
    DescribeUsageAreaDistributionStatDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageAreaDistributionStatDataRequest() = default ;
    DescribeUsageAreaDistributionStatDataRequest& operator=(const DescribeUsageAreaDistributionStatDataRequest &) = default ;
    DescribeUsageAreaDistributionStatDataRequest& operator=(DescribeUsageAreaDistributionStatDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endDate_ == nullptr && this->parentArea_ == nullptr && this->startDate_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeUsageAreaDistributionStatDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeUsageAreaDistributionStatDataRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // parentArea Field Functions 
    bool hasParentArea() const { return this->parentArea_ != nullptr;};
    void deleteParentArea() { this->parentArea_ = nullptr;};
    inline string getParentArea() const { DARABONBA_PTR_GET_DEFAULT(parentArea_, "") };
    inline DescribeUsageAreaDistributionStatDataRequest& setParentArea(string parentArea) { DARABONBA_PTR_SET_VALUE(parentArea_, parentArea) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeUsageAreaDistributionStatDataRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // APP ID
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The end time of the query, expressed as a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // The parent region name. For example, the parent of Hangzhou City is Zhejiang Province, and the parameter should be set to China_Zhejiang Province. An empty parameter indicates statistics at the global scope (country dimension), such as China or the United Kingdom.
    shared_ptr<string> parentArea_ {};
    // The start time of the query, expressed as a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
