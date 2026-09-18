// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTROBOTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTROBOTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertRobotsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertRobotsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(robotIds, robotIdsShrink_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertRobotsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(robotIds, robotIdsShrink_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeleteAlertRobotsShrinkRequest() = default ;
    DeleteAlertRobotsShrinkRequest(const DeleteAlertRobotsShrinkRequest &) = default ;
    DeleteAlertRobotsShrinkRequest(DeleteAlertRobotsShrinkRequest &&) = default ;
    DeleteAlertRobotsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertRobotsShrinkRequest() = default ;
    DeleteAlertRobotsShrinkRequest& operator=(const DeleteAlertRobotsShrinkRequest &) = default ;
    DeleteAlertRobotsShrinkRequest& operator=(DeleteAlertRobotsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->robotIdsShrink_ == nullptr
        && this->type_ == nullptr; };
    // robotIdsShrink Field Functions 
    bool hasRobotIdsShrink() const { return this->robotIdsShrink_ != nullptr;};
    void deleteRobotIdsShrink() { this->robotIdsShrink_ = nullptr;};
    inline string getRobotIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(robotIdsShrink_, "") };
    inline DeleteAlertRobotsShrinkRequest& setRobotIdsShrink(string robotIdsShrink) { DARABONBA_PTR_SET_VALUE(robotIdsShrink_, robotIdsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteAlertRobotsShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The chatbot ID.
    // 
    // This parameter is required.
    shared_ptr<string> robotIdsShrink_ {};
    // The chatbot type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
