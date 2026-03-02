// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMONITORCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMONITORCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorContactGroupUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateMonitorContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMonitorContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMonitorContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMonitorContactGroupRequest() = default ;
    UpdateMonitorContactGroupRequest(const UpdateMonitorContactGroupRequest &) = default ;
    UpdateMonitorContactGroupRequest(UpdateMonitorContactGroupRequest &&) = default ;
    UpdateMonitorContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMonitorContactGroupRequest() = default ;
    UpdateMonitorContactGroupRequest& operator=(const UpdateMonitorContactGroupRequest &) = default ;
    UpdateMonitorContactGroupRequest& operator=(UpdateMonitorContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorContactGroupUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorContactGroupUpdateCmd) };
    inline MonitorContactGroupUpdateCmd getBody() { DARABONBA_PTR_GET(body_, MonitorContactGroupUpdateCmd) };
    inline UpdateMonitorContactGroupRequest& setBody(const MonitorContactGroupUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMonitorContactGroupRequest& setBody(MonitorContactGroupUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorContactGroupUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
