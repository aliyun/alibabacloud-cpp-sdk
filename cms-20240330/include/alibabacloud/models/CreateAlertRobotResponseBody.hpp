// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTROBOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTROBOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertRobotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRobotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertRobotId, alertRobotId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRobotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertRobotId, alertRobotId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAlertRobotResponseBody() = default ;
    CreateAlertRobotResponseBody(const CreateAlertRobotResponseBody &) = default ;
    CreateAlertRobotResponseBody(CreateAlertRobotResponseBody &&) = default ;
    CreateAlertRobotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRobotResponseBody() = default ;
    CreateAlertRobotResponseBody& operator=(const CreateAlertRobotResponseBody &) = default ;
    CreateAlertRobotResponseBody& operator=(CreateAlertRobotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRobotId_ == nullptr
        && this->requestId_ == nullptr; };
    // alertRobotId Field Functions 
    bool hasAlertRobotId() const { return this->alertRobotId_ != nullptr;};
    void deleteAlertRobotId() { this->alertRobotId_ = nullptr;};
    inline string getAlertRobotId() const { DARABONBA_PTR_GET_DEFAULT(alertRobotId_, "") };
    inline CreateAlertRobotResponseBody& setAlertRobotId(string alertRobotId) { DARABONBA_PTR_SET_VALUE(alertRobotId_, alertRobotId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertRobotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The robot ID.
    shared_ptr<string> alertRobotId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
