// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayTimezone, displayTimezone_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayTimezone, displayTimezone_);
    };
    GetComputeQuotaScheduleRequest() = default ;
    GetComputeQuotaScheduleRequest(const GetComputeQuotaScheduleRequest &) = default ;
    GetComputeQuotaScheduleRequest(GetComputeQuotaScheduleRequest &&) = default ;
    GetComputeQuotaScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaScheduleRequest() = default ;
    GetComputeQuotaScheduleRequest& operator=(const GetComputeQuotaScheduleRequest &) = default ;
    GetComputeQuotaScheduleRequest& operator=(GetComputeQuotaScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayTimezone_ != nullptr; };
    // displayTimezone Field Functions 
    bool hasDisplayTimezone() const { return this->displayTimezone_ != nullptr;};
    void deleteDisplayTimezone() { this->displayTimezone_ = nullptr;};
    inline string displayTimezone() const { DARABONBA_PTR_GET_DEFAULT(displayTimezone_, "") };
    inline GetComputeQuotaScheduleRequest& setDisplayTimezone(string displayTimezone) { DARABONBA_PTR_SET_VALUE(displayTimezone_, displayTimezone) };


  protected:
    // Display time zone.
    std::shared_ptr<string> displayTimezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
