// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTROBOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTROBOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateAlertRobotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRobotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(robotSignKey, robotSignKey_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRobotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(robotSignKey, robotSignKey_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    UpdateAlertRobotRequest() = default ;
    UpdateAlertRobotRequest(const UpdateAlertRobotRequest &) = default ;
    UpdateAlertRobotRequest(UpdateAlertRobotRequest &&) = default ;
    UpdateAlertRobotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRobotRequest() = default ;
    UpdateAlertRobotRequest& operator=(const UpdateAlertRobotRequest &) = default ;
    UpdateAlertRobotRequest& operator=(UpdateAlertRobotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->robotSignKey_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline UpdateAlertRobotRequest& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAlertRobotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlertRobotRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // robotSignKey Field Functions 
    bool hasRobotSignKey() const { return this->robotSignKey_ != nullptr;};
    void deleteRobotSignKey() { this->robotSignKey_ = nullptr;};
    inline string getRobotSignKey() const { DARABONBA_PTR_GET_DEFAULT(robotSignKey_, "") };
    inline UpdateAlertRobotRequest& setRobotSignKey(string robotSignKey) { DARABONBA_PTR_SET_VALUE(robotSignKey_, robotSignKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAlertRobotRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateAlertRobotRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The name of the digital employee.
    shared_ptr<string> digitalEmployeeName_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The name of the robot.
    shared_ptr<string> name_ {};
    // The signature key of the robot.
    shared_ptr<string> robotSignKey_ {};
    // The type of the robot.
    shared_ptr<string> type_ {};
    // The webhook URL of the robot.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
