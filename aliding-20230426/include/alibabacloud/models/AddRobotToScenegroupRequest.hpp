// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDROBOTTOSCENEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDROBOTTOSCENEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddRobotToScenegroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRobotToScenegroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(RobotCode, robotCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddRobotToScenegroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(RobotCode, robotCode_);
    };
    AddRobotToScenegroupRequest() = default ;
    AddRobotToScenegroupRequest(const AddRobotToScenegroupRequest &) = default ;
    AddRobotToScenegroupRequest(AddRobotToScenegroupRequest &&) = default ;
    AddRobotToScenegroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRobotToScenegroupRequest() = default ;
    AddRobotToScenegroupRequest& operator=(const AddRobotToScenegroupRequest &) = default ;
    AddRobotToScenegroupRequest& operator=(AddRobotToScenegroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openConversationId_ == nullptr
        && this->robotCode_ == nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline AddRobotToScenegroupRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // robotCode Field Functions 
    bool hasRobotCode() const { return this->robotCode_ != nullptr;};
    void deleteRobotCode() { this->robotCode_ = nullptr;};
    inline string getRobotCode() const { DARABONBA_PTR_GET_DEFAULT(robotCode_, "") };
    inline AddRobotToScenegroupRequest& setRobotCode(string robotCode) { DARABONBA_PTR_SET_VALUE(robotCode_, robotCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    // This parameter is required.
    shared_ptr<string> robotCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
