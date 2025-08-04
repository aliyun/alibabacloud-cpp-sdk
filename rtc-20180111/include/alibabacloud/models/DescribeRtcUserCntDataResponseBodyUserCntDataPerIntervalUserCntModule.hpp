// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODYUSERCNTDATAPERINTERVALUSERCNTMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODYUSERCNTDATAPERINTERVALUSERCNTMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveUserCnt, activeUserCnt_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveUserCnt, activeUserCnt_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule(const DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule &) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule(DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule &&) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& operator=(const DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule &) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& operator=(DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeUserCnt_ != nullptr
        && this->timeStamp_ != nullptr; };
    // activeUserCnt Field Functions 
    bool hasActiveUserCnt() const { return this->activeUserCnt_ != nullptr;};
    void deleteActiveUserCnt() { this->activeUserCnt_ = nullptr;};
    inline int64_t activeUserCnt() const { DARABONBA_PTR_GET_DEFAULT(activeUserCnt_, 0L) };
    inline DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& setActiveUserCnt(int64_t activeUserCnt) { DARABONBA_PTR_SET_VALUE(activeUserCnt_, activeUserCnt) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<int64_t> activeUserCnt_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
