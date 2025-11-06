// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATARETRY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATARETRY_HPP_
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
  class UpdateGatewayRouteWafStatusResponseBodyDataRetry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataRetry& obj) { 
      DARABONBA_PTR_TO_JSON(Attempts, attempts_);
      DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataRetry& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataRetry() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRetry(const UpdateGatewayRouteWafStatusResponseBodyDataRetry &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRetry(UpdateGatewayRouteWafStatusResponseBodyDataRetry &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRetry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataRetry() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRetry& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataRetry &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRetry& operator=(UpdateGatewayRouteWafStatusResponseBodyDataRetry &&) = default ;
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
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // httpCodes Field Functions 
    bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
    void deleteHttpCodes() { this->httpCodes_ = nullptr;};
    inline const vector<string> & httpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
    inline vector<string> httpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


    // retryOn Field Functions 
    bool hasRetryOn() const { return this->retryOn_ != nullptr;};
    void deleteRetryOn() { this->retryOn_ = nullptr;};
    inline const vector<string> & retryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
    inline vector<string> retryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRetry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of retries allowed for a request.
    std::shared_ptr<int32_t> attempts_ = nullptr;
    // The HTTP status code.
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
