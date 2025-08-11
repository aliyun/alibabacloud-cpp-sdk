// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestDBInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestDBInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AttachMode, attachMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestDBInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachMode, attachMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateScalingGroupRequestDBInstances() = default ;
    CreateScalingGroupRequestDBInstances(const CreateScalingGroupRequestDBInstances &) = default ;
    CreateScalingGroupRequestDBInstances(CreateScalingGroupRequestDBInstances &&) = default ;
    CreateScalingGroupRequestDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestDBInstances() = default ;
    CreateScalingGroupRequestDBInstances& operator=(const CreateScalingGroupRequestDBInstances &) = default ;
    CreateScalingGroupRequestDBInstances& operator=(CreateScalingGroupRequestDBInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachMode_ != nullptr
        && this->DBInstanceId_ != nullptr && this->type_ != nullptr; };
    // attachMode Field Functions 
    bool hasAttachMode() const { return this->attachMode_ != nullptr;};
    void deleteAttachMode() { this->attachMode_ = nullptr;};
    inline string attachMode() const { DARABONBA_PTR_GET_DEFAULT(attachMode_, "") };
    inline CreateScalingGroupRequestDBInstances& setAttachMode(string attachMode) { DARABONBA_PTR_SET_VALUE(attachMode_, attachMode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateScalingGroupRequestDBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateScalingGroupRequestDBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mode in which you want to attach the database to the scaling group. Valid values:
    // 
    // *   SecurityIp: the mode in which Auto Scaling automatically adds the private IP addresses of ECS instances to the IP address whitelist of the database during scale-out events. You can set the value to SecurityIp only if you set Type to RDS.
    // *   SecurityGroup: the mode in which Auto Scaling adds the security group of the applied scaling configuration to the security group whitelist of the database. This setting allows ECS instances created from the scaling configuration to access the database.
    std::shared_ptr<string> attachMode_ = nullptr;
    // The database ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The database type. Valid values:
    // 
    // *   RDS
    // *   Redis
    // *   MongoDB
    // 
    // Default value: RDS.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
