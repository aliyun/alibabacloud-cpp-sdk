// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEIMROBOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateIMRobotResponseBodyAlertRobot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateIMRobotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateIMRobotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRobot, alertRobot_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateIMRobotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRobot, alertRobot_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateIMRobotResponseBody() = default ;
    CreateOrUpdateIMRobotResponseBody(const CreateOrUpdateIMRobotResponseBody &) = default ;
    CreateOrUpdateIMRobotResponseBody(CreateOrUpdateIMRobotResponseBody &&) = default ;
    CreateOrUpdateIMRobotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateIMRobotResponseBody() = default ;
    CreateOrUpdateIMRobotResponseBody& operator=(const CreateOrUpdateIMRobotResponseBody &) = default ;
    CreateOrUpdateIMRobotResponseBody& operator=(CreateOrUpdateIMRobotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRobot_ != nullptr
        && this->requestId_ != nullptr; };
    // alertRobot Field Functions 
    bool hasAlertRobot() const { return this->alertRobot_ != nullptr;};
    void deleteAlertRobot() { this->alertRobot_ = nullptr;};
    inline const CreateOrUpdateIMRobotResponseBodyAlertRobot & alertRobot() const { DARABONBA_PTR_GET_CONST(alertRobot_, CreateOrUpdateIMRobotResponseBodyAlertRobot) };
    inline CreateOrUpdateIMRobotResponseBodyAlertRobot alertRobot() { DARABONBA_PTR_GET(alertRobot_, CreateOrUpdateIMRobotResponseBodyAlertRobot) };
    inline CreateOrUpdateIMRobotResponseBody& setAlertRobot(const CreateOrUpdateIMRobotResponseBodyAlertRobot & alertRobot) { DARABONBA_PTR_SET_VALUE(alertRobot_, alertRobot) };
    inline CreateOrUpdateIMRobotResponseBody& setAlertRobot(CreateOrUpdateIMRobotResponseBodyAlertRobot && alertRobot) { DARABONBA_PTR_SET_RVALUE(alertRobot_, alertRobot) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateIMRobotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the IM chatbot.
    std::shared_ptr<CreateOrUpdateIMRobotResponseBodyAlertRobot> alertRobot_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
