// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMONITORMQALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMONITORMQALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorMqAlertUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateMonitorMqAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMonitorMqAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMonitorMqAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMonitorMqAlertRequest() = default ;
    UpdateMonitorMqAlertRequest(const UpdateMonitorMqAlertRequest &) = default ;
    UpdateMonitorMqAlertRequest(UpdateMonitorMqAlertRequest &&) = default ;
    UpdateMonitorMqAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMonitorMqAlertRequest() = default ;
    UpdateMonitorMqAlertRequest& operator=(const UpdateMonitorMqAlertRequest &) = default ;
    UpdateMonitorMqAlertRequest& operator=(UpdateMonitorMqAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorMqAlertUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorMqAlertUpdateCmd) };
    inline MonitorMqAlertUpdateCmd getBody() { DARABONBA_PTR_GET(body_, MonitorMqAlertUpdateCmd) };
    inline UpdateMonitorMqAlertRequest& setBody(const MonitorMqAlertUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMonitorMqAlertRequest& setBody(MonitorMqAlertUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorMqAlertUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
