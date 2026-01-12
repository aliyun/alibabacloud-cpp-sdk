// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMONITORALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMONITORALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckMonitorAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMonitorAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMonitorAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CheckMonitorAlertResponseBody() = default ;
    CheckMonitorAlertResponseBody(const CheckMonitorAlertResponseBody &) = default ;
    CheckMonitorAlertResponseBody(CheckMonitorAlertResponseBody &&) = default ;
    CheckMonitorAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMonitorAlertResponseBody() = default ;
    CheckMonitorAlertResponseBody& operator=(const CheckMonitorAlertResponseBody &) = default ;
    CheckMonitorAlertResponseBody& operator=(CheckMonitorAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && this->requestId_ == nullptr && this->state_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline string getParameter() const { DARABONBA_PTR_GET_DEFAULT(parameter_, "") };
    inline CheckMonitorAlertResponseBody& setParameter(string parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckMonitorAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CheckMonitorAlertResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The parameters that are used to configure the monitoring and alerting feature.
    shared_ptr<string> parameter_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the monitoring and alerting feature is enabled. Valid values:
    // 
    // *   **enable**: The monitoring and alerting feature is enabled.
    // *   **disable**: The monitoring and alerting feature is disabled.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
