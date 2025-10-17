// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODYDURATIONDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODYDURATIONDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcDurationDataResponseBodyDurationDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcDurationDataResponseBodyDurationDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DurationModule, durationModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcDurationDataResponseBodyDurationDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationModule, durationModule_);
    };
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval() = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval(const DescribeRtcDurationDataResponseBodyDurationDataPerInterval &) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval(DescribeRtcDurationDataResponseBodyDurationDataPerInterval &&) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerInterval() = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval& operator=(const DescribeRtcDurationDataResponseBodyDurationDataPerInterval &) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerInterval& operator=(DescribeRtcDurationDataResponseBodyDurationDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationModule_ == nullptr; };
    // durationModule Field Functions 
    bool hasDurationModule() const { return this->durationModule_ != nullptr;};
    void deleteDurationModule() { this->durationModule_ = nullptr;};
    inline const vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> & durationModule() const { DARABONBA_PTR_GET_CONST(durationModule_, vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>) };
    inline vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> durationModule() { DARABONBA_PTR_GET(durationModule_, vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerInterval& setDurationModule(const vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> & durationModule) { DARABONBA_PTR_SET_VALUE(durationModule_, durationModule) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerInterval& setDurationModule(vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> && durationModule) { DARABONBA_PTR_SET_RVALUE(durationModule_, durationModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>> durationModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
