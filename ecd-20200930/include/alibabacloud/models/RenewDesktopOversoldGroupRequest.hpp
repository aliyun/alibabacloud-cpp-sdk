// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RenewDesktopOversoldGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
    };
    friend void from_json(const Darabonba::Json& j, RenewDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
    };
    RenewDesktopOversoldGroupRequest() = default ;
    RenewDesktopOversoldGroupRequest(const RenewDesktopOversoldGroupRequest &) = default ;
    RenewDesktopOversoldGroupRequest(RenewDesktopOversoldGroupRequest &&) = default ;
    RenewDesktopOversoldGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewDesktopOversoldGroupRequest() = default ;
    RenewDesktopOversoldGroupRequest& operator=(const RenewDesktopOversoldGroupRequest &) = default ;
    RenewDesktopOversoldGroupRequest& operator=(RenewDesktopOversoldGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oversoldGroupId_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr; };
    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline RenewDesktopOversoldGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewDesktopOversoldGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewDesktopOversoldGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


  protected:
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
