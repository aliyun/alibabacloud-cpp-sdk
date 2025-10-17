// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODYUSERCNTDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODYUSERCNTDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UserCntModule, userCntModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UserCntModule, userCntModule_);
    };
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval(const DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval &) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval(DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval &&) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& operator=(const DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval &) = default ;
    DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& operator=(DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userCntModule_ == nullptr; };
    // userCntModule Field Functions 
    bool hasUserCntModule() const { return this->userCntModule_ != nullptr;};
    void deleteUserCntModule() { this->userCntModule_ = nullptr;};
    inline const vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> & userCntModule() const { DARABONBA_PTR_GET_CONST(userCntModule_, vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>) };
    inline vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> userCntModule() { DARABONBA_PTR_GET(userCntModule_, vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>) };
    inline DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& setUserCntModule(const vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> & userCntModule) { DARABONBA_PTR_SET_VALUE(userCntModule_, userCntModule) };
    inline DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval& setUserCntModule(vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> && userCntModule) { DARABONBA_PTR_SET_RVALUE(userCntModule_, userCntModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>> userCntModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
