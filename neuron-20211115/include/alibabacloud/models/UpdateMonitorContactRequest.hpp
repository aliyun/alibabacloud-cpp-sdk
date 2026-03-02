// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMONITORCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMONITORCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorContactUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateMonitorContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMonitorContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMonitorContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMonitorContactRequest() = default ;
    UpdateMonitorContactRequest(const UpdateMonitorContactRequest &) = default ;
    UpdateMonitorContactRequest(UpdateMonitorContactRequest &&) = default ;
    UpdateMonitorContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMonitorContactRequest() = default ;
    UpdateMonitorContactRequest& operator=(const UpdateMonitorContactRequest &) = default ;
    UpdateMonitorContactRequest& operator=(UpdateMonitorContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorContactUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorContactUpdateCmd) };
    inline MonitorContactUpdateCmd getBody() { DARABONBA_PTR_GET(body_, MonitorContactUpdateCmd) };
    inline UpdateMonitorContactRequest& setBody(const MonitorContactUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMonitorContactRequest& setBody(MonitorContactUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorContactUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
