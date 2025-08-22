// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnOriginSiteHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnOriginSiteHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSiteStatus, originSiteStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnOriginSiteHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSiteStatus, originSiteStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnOriginSiteHealthStatusResponseBody() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(const DescribeDcdnOriginSiteHealthStatusResponseBody &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(DescribeDcdnOriginSiteHealthStatusResponseBody &&) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnOriginSiteHealthStatusResponseBody() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody& operator=(const DescribeDcdnOriginSiteHealthStatusResponseBody &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody& operator=(DescribeDcdnOriginSiteHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originSiteStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // originSiteStatus Field Functions 
    bool hasOriginSiteStatus() const { return this->originSiteStatus_ != nullptr;};
    void deleteOriginSiteStatus() { this->originSiteStatus_ = nullptr;};
    inline const vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus> & originSiteStatus() const { DARABONBA_PTR_GET_CONST(originSiteStatus_, vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus>) };
    inline vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus> originSiteStatus() { DARABONBA_PTR_GET(originSiteStatus_, vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus>) };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setOriginSiteStatus(const vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus> & originSiteStatus) { DARABONBA_PTR_SET_VALUE(originSiteStatus_, originSiteStatus) };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setOriginSiteStatus(vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus> && originSiteStatus) { DARABONBA_PTR_SET_RVALUE(originSiteStatus_, originSiteStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin server of the accelerated domain name.
    std::shared_ptr<vector<DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus>> originSiteStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
