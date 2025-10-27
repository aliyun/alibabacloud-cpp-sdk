// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckTimeDimensionStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckTimeDimensionStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckTimeDimensionStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    GetCheckTimeDimensionStatisticRequest() = default ;
    GetCheckTimeDimensionStatisticRequest(const GetCheckTimeDimensionStatisticRequest &) = default ;
    GetCheckTimeDimensionStatisticRequest(GetCheckTimeDimensionStatisticRequest &&) = default ;
    GetCheckTimeDimensionStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckTimeDimensionStatisticRequest() = default ;
    GetCheckTimeDimensionStatisticRequest& operator=(const GetCheckTimeDimensionStatisticRequest &) = default ;
    GetCheckTimeDimensionStatisticRequest& operator=(GetCheckTimeDimensionStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimeStamp_ == nullptr
        && return this->startTimeStamp_ == nullptr && return this->statisticType_ == nullptr && return this->vendors_ == nullptr; };
    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t endTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline GetCheckTimeDimensionStatisticRequest& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // startTimeStamp Field Functions 
    bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
    void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
    inline int64_t startTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
    inline GetCheckTimeDimensionStatisticRequest& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string statisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline GetCheckTimeDimensionStatisticRequest& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> vendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline GetCheckTimeDimensionStatisticRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCheckTimeDimensionStatisticRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // End time, in timestamp format.
    std::shared_ptr<int64_t> endTimeStamp_ = nullptr;
    // Start time, in timestamp format.
    std::shared_ptr<int64_t> startTimeStamp_ = nullptr;
    // Type of statistical data. Values:
    // - **CheckPassRate**: Check item pass rate.
    // - **AssetPassRate**: Asset pass rate.
    std::shared_ptr<string> statisticType_ = nullptr;
    // List of cloud vendors.
    std::shared_ptr<vector<string>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
