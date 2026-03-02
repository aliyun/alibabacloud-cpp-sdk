// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMONITORWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMONITORWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorWebhookUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateMonitorWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMonitorWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMonitorWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMonitorWebhookRequest() = default ;
    UpdateMonitorWebhookRequest(const UpdateMonitorWebhookRequest &) = default ;
    UpdateMonitorWebhookRequest(UpdateMonitorWebhookRequest &&) = default ;
    UpdateMonitorWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMonitorWebhookRequest() = default ;
    UpdateMonitorWebhookRequest& operator=(const UpdateMonitorWebhookRequest &) = default ;
    UpdateMonitorWebhookRequest& operator=(UpdateMonitorWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorWebhookUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorWebhookUpdateCmd) };
    inline MonitorWebhookUpdateCmd getBody() { DARABONBA_PTR_GET(body_, MonitorWebhookUpdateCmd) };
    inline UpdateMonitorWebhookRequest& setBody(const MonitorWebhookUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMonitorWebhookRequest& setBody(MonitorWebhookUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorWebhookUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
