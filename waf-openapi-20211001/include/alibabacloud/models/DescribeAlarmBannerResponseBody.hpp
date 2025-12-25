// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlarmBannerResponseBodyBannerStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmBannerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmBannerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BannerStatus, bannerStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmBannerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BannerStatus, bannerStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmBannerResponseBody() = default ;
    DescribeAlarmBannerResponseBody(const DescribeAlarmBannerResponseBody &) = default ;
    DescribeAlarmBannerResponseBody(DescribeAlarmBannerResponseBody &&) = default ;
    DescribeAlarmBannerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmBannerResponseBody() = default ;
    DescribeAlarmBannerResponseBody& operator=(const DescribeAlarmBannerResponseBody &) = default ;
    DescribeAlarmBannerResponseBody& operator=(DescribeAlarmBannerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bannerStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // bannerStatus Field Functions 
    bool hasBannerStatus() const { return this->bannerStatus_ != nullptr;};
    void deleteBannerStatus() { this->bannerStatus_ = nullptr;};
    inline const DescribeAlarmBannerResponseBodyBannerStatus & bannerStatus() const { DARABONBA_PTR_GET_CONST(bannerStatus_, DescribeAlarmBannerResponseBodyBannerStatus) };
    inline DescribeAlarmBannerResponseBodyBannerStatus bannerStatus() { DARABONBA_PTR_GET(bannerStatus_, DescribeAlarmBannerResponseBodyBannerStatus) };
    inline DescribeAlarmBannerResponseBody& setBannerStatus(const DescribeAlarmBannerResponseBodyBannerStatus & bannerStatus) { DARABONBA_PTR_SET_VALUE(bannerStatus_, bannerStatus) };
    inline DescribeAlarmBannerResponseBody& setBannerStatus(DescribeAlarmBannerResponseBodyBannerStatus && bannerStatus) { DARABONBA_PTR_SET_RVALUE(bannerStatus_, bannerStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmBannerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAlarmBannerResponseBodyBannerStatus> bannerStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
