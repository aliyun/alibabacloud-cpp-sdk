// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMROBOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMROBOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteIMRobotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIMRobotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIMRobotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
    };
    DeleteIMRobotRequest() = default ;
    DeleteIMRobotRequest(const DeleteIMRobotRequest &) = default ;
    DeleteIMRobotRequest(DeleteIMRobotRequest &&) = default ;
    DeleteIMRobotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIMRobotRequest() = default ;
    DeleteIMRobotRequest& operator=(const DeleteIMRobotRequest &) = default ;
    DeleteIMRobotRequest& operator=(DeleteIMRobotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->robotId_ != nullptr; };
    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline int64_t robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0L) };
    inline DeleteIMRobotRequest& setRobotId(int64_t robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


  protected:
    // The ID of the IM chatbot.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> robotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
