// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDataTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTypes, bizTypes_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTypes, bizTypes_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    GetDataTrendRequest() = default ;
    GetDataTrendRequest(const GetDataTrendRequest &) = default ;
    GetDataTrendRequest(GetDataTrendRequest &&) = default ;
    GetDataTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrendRequest() = default ;
    GetDataTrendRequest& operator=(const GetDataTrendRequest &) = default ;
    GetDataTrendRequest& operator=(GetDataTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTypes_ == nullptr
        && this->endTimestamp_ == nullptr && this->interval_ == nullptr && this->startTimestamp_ == nullptr; };
    // bizTypes Field Functions 
    bool hasBizTypes() const { return this->bizTypes_ != nullptr;};
    void deleteBizTypes() { this->bizTypes_ = nullptr;};
    inline string getBizTypes() const { DARABONBA_PTR_GET_DEFAULT(bizTypes_, "") };
    inline GetDataTrendRequest& setBizTypes(string bizTypes) { DARABONBA_PTR_SET_VALUE(bizTypes_, bizTypes) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline GetDataTrendRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetDataTrendRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline GetDataTrendRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // The type of the security data that you want to query. Valid values:
    // 
    // *   **HC_NEW**: the number of new baseline risks.
    // *   **HC_OPERATE**: the number of handled baseline risks.
    // *   **VUL_NEW**: the number of new vulnerabilities.
    // *   **VUL_OPERATE**: the number of handled vulnerabilities.
    // *   **SUSP_NEW**: the number of new alerts.
    // *   **SUSP_OPERATE**: the number of handled alerts.
    // 
    // This parameter is required.
    shared_ptr<string> bizTypes_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTimestamp_ {};
    // The interval of the data that you want to query. Unit: milliseconds.
    // 
    // >  The minimum value is 1000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> interval_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
