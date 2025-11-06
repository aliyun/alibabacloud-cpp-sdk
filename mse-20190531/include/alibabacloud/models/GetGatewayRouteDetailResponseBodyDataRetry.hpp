// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATARETRY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATARETRY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRetry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRetry& obj) { 
      DARABONBA_PTR_TO_JSON(Attempts, attempts_);
      DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRetry& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGatewayRouteDetailResponseBodyDataRetry() = default ;
    GetGatewayRouteDetailResponseBodyDataRetry(const GetGatewayRouteDetailResponseBodyDataRetry &) = default ;
    GetGatewayRouteDetailResponseBodyDataRetry(GetGatewayRouteDetailResponseBodyDataRetry &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRetry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRetry() = default ;
    GetGatewayRouteDetailResponseBodyDataRetry& operator=(const GetGatewayRouteDetailResponseBodyDataRetry &) = default ;
    GetGatewayRouteDetailResponseBodyDataRetry& operator=(GetGatewayRouteDetailResponseBodyDataRetry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attempts_ == nullptr
        && return this->httpCodes_ == nullptr && return this->retryOn_ == nullptr && return this->status_ == nullptr; };
    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int32_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // httpCodes Field Functions 
    bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
    void deleteHttpCodes() { this->httpCodes_ = nullptr;};
    inline const vector<string> & httpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
    inline vector<string> httpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


    // retryOn Field Functions 
    bool hasRetryOn() const { return this->retryOn_ != nullptr;};
    void deleteRetryOn() { this->retryOn_ = nullptr;};
    inline const vector<string> & retryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
    inline vector<string> retryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRetry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of retries allowed.
    std::shared_ptr<int32_t> attempts_ = nullptr;
    // The HTTP status codes.
    std::shared_ptr<vector<string>> httpCodes_ = nullptr;
    // The retry condition.
    std::shared_ptr<vector<string>> retryOn_ = nullptr;
    // The retry status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
