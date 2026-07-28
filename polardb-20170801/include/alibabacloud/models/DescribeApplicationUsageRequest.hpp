// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Days, days_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
    };
    DescribeApplicationUsageRequest() = default ;
    DescribeApplicationUsageRequest(const DescribeApplicationUsageRequest &) = default ;
    DescribeApplicationUsageRequest(DescribeApplicationUsageRequest &&) = default ;
    DescribeApplicationUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationUsageRequest() = default ;
    DescribeApplicationUsageRequest& operator=(const DescribeApplicationUsageRequest &) = default ;
    DescribeApplicationUsageRequest& operator=(DescribeApplicationUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->days_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationUsageRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline DescribeApplicationUsageRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


  protected:
    // The Hermes application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The number of recent days to query. Valid values: 1 to 365. Default value: 30.
    shared_ptr<int32_t> days_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
