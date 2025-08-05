// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTunnelQuotaTimerRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateTunnelQuotaTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTunnelQuotaTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTunnelQuotaTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
    };
    UpdateTunnelQuotaTimerRequest() = default ;
    UpdateTunnelQuotaTimerRequest(const UpdateTunnelQuotaTimerRequest &) = default ;
    UpdateTunnelQuotaTimerRequest(UpdateTunnelQuotaTimerRequest &&) = default ;
    UpdateTunnelQuotaTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTunnelQuotaTimerRequest() = default ;
    UpdateTunnelQuotaTimerRequest& operator=(const UpdateTunnelQuotaTimerRequest &) = default ;
    UpdateTunnelQuotaTimerRequest& operator=(UpdateTunnelQuotaTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->timezone_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateTunnelQuotaTimerRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateTunnelQuotaTimerRequestBody>) };
    inline vector<UpdateTunnelQuotaTimerRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpdateTunnelQuotaTimerRequestBody>) };
    inline UpdateTunnelQuotaTimerRequest& setBody(const vector<UpdateTunnelQuotaTimerRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTunnelQuotaTimerRequest& setBody(vector<UpdateTunnelQuotaTimerRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateTunnelQuotaTimerRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The request body.
    std::shared_ptr<vector<UpdateTunnelQuotaTimerRequestBody>> body_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
