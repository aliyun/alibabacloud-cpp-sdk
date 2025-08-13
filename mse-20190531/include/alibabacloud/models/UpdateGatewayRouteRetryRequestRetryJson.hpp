// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUESTRETRYJSON_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUESTRETRYJSON_HPP_
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
  class UpdateGatewayRouteRetryRequestRetryJSON : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRetryRequestRetryJSON& obj) { 
      DARABONBA_PTR_TO_JSON(Attempts, attempts_);
      DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRetryRequestRetryJSON& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateGatewayRouteRetryRequestRetryJSON() = default ;
    UpdateGatewayRouteRetryRequestRetryJSON(const UpdateGatewayRouteRetryRequestRetryJSON &) = default ;
    UpdateGatewayRouteRetryRequestRetryJSON(UpdateGatewayRouteRetryRequestRetryJSON &&) = default ;
    UpdateGatewayRouteRetryRequestRetryJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRetryRequestRetryJSON() = default ;
    UpdateGatewayRouteRetryRequestRetryJSON& operator=(const UpdateGatewayRouteRetryRequestRetryJSON &) = default ;
    UpdateGatewayRouteRetryRequestRetryJSON& operator=(UpdateGatewayRouteRetryRequestRetryJSON &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attempts_ != nullptr
        && this->httpCodes_ != nullptr && this->retryOn_ != nullptr && this->status_ != nullptr; };
    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int32_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // httpCodes Field Functions 
    bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
    void deleteHttpCodes() { this->httpCodes_ = nullptr;};
    inline const vector<string> & httpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
    inline vector<string> httpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


    // retryOn Field Functions 
    bool hasRetryOn() const { return this->retryOn_ != nullptr;};
    void deleteRetryOn() { this->retryOn_ = nullptr;};
    inline const vector<string> & retryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
    inline vector<string> retryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteRetryRequestRetryJSON& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of retries.
    std::shared_ptr<int32_t> attempts_ = nullptr;
    // The HTTP status codes.
    std::shared_ptr<vector<string>> httpCodes_ = nullptr;
    // The retry conditions.
    std::shared_ptr<vector<string>> retryOn_ = nullptr;
    // The status of the policy.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
