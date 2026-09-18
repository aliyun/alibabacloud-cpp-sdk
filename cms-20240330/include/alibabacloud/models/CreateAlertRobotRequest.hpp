// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTROBOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTROBOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertRobotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRobotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(robotId, robotId_);
      DARABONBA_PTR_TO_JSON(robotSignKey, robotSignKey_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRobotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(robotId, robotId_);
      DARABONBA_PTR_FROM_JSON(robotSignKey, robotSignKey_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateAlertRobotRequest() = default ;
    CreateAlertRobotRequest(const CreateAlertRobotRequest &) = default ;
    CreateAlertRobotRequest(CreateAlertRobotRequest &&) = default ;
    CreateAlertRobotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRobotRequest() = default ;
    CreateAlertRobotRequest& operator=(const CreateAlertRobotRequest &) = default ;
    CreateAlertRobotRequest& operator=(CreateAlertRobotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->robotId_ == nullptr && this->robotSignKey_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr && this->workspace_ == nullptr; };
    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline CreateAlertRobotRequest& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAlertRobotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertRobotRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline CreateAlertRobotRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // robotSignKey Field Functions 
    bool hasRobotSignKey() const { return this->robotSignKey_ != nullptr;};
    void deleteRobotSignKey() { this->robotSignKey_ = nullptr;};
    inline string getRobotSignKey() const { DARABONBA_PTR_GET_DEFAULT(robotSignKey_, "") };
    inline CreateAlertRobotRequest& setRobotSignKey(string robotSignKey) { DARABONBA_PTR_SET_VALUE(robotSignKey_, robotSignKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAlertRobotRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateAlertRobotRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateAlertRobotRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The name of the digital employee.
    shared_ptr<string> digitalEmployeeName_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The name of the robot.
    shared_ptr<string> name_ {};
    // The unique ID of the robot.
    shared_ptr<string> robotId_ {};
    // The signature key of the robot.
    shared_ptr<string> robotSignKey_ {};
    // The type of the robot.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The webhook URL of the robot.
    shared_ptr<string> url_ {};
    // The workspace name.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
