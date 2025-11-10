// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHMIGRATIONSTAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHMIGRATIONSTAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class FinishMigrationStageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishMigrationStageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, FinishMigrationStageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    FinishMigrationStageRequest() = default ;
    FinishMigrationStageRequest(const FinishMigrationStageRequest &) = default ;
    FinishMigrationStageRequest(FinishMigrationStageRequest &&) = default ;
    FinishMigrationStageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishMigrationStageRequest() = default ;
    FinishMigrationStageRequest& operator=(const FinishMigrationStageRequest &) = default ;
    FinishMigrationStageRequest& operator=(FinishMigrationStageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FinishMigrationStageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
