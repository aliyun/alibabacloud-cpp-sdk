// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTROBOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTROBOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertRobotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertRobotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(robotIds, robotIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertRobotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(robotIds, robotIds_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeleteAlertRobotsRequest() = default ;
    DeleteAlertRobotsRequest(const DeleteAlertRobotsRequest &) = default ;
    DeleteAlertRobotsRequest(DeleteAlertRobotsRequest &&) = default ;
    DeleteAlertRobotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertRobotsRequest() = default ;
    DeleteAlertRobotsRequest& operator=(const DeleteAlertRobotsRequest &) = default ;
    DeleteAlertRobotsRequest& operator=(DeleteAlertRobotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->robotIds_ == nullptr
        && this->type_ == nullptr; };
    // robotIds Field Functions 
    bool hasRobotIds() const { return this->robotIds_ != nullptr;};
    void deleteRobotIds() { this->robotIds_ = nullptr;};
    inline const vector<string> & getRobotIds() const { DARABONBA_PTR_GET_CONST(robotIds_, vector<string>) };
    inline vector<string> getRobotIds() { DARABONBA_PTR_GET(robotIds_, vector<string>) };
    inline DeleteAlertRobotsRequest& setRobotIds(const vector<string> & robotIds) { DARABONBA_PTR_SET_VALUE(robotIds_, robotIds) };
    inline DeleteAlertRobotsRequest& setRobotIds(vector<string> && robotIds) { DARABONBA_PTR_SET_RVALUE(robotIds_, robotIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteAlertRobotsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The chatbot ID.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> robotIds_ {};
    // The chatbot type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
