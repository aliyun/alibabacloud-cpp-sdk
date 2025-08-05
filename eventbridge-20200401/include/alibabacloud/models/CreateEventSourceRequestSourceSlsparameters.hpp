// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCESLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCESLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceRequestSourceSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceRequestSourceSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceRequestSourceSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateEventSourceRequestSourceSLSParameters() = default ;
    CreateEventSourceRequestSourceSLSParameters(const CreateEventSourceRequestSourceSLSParameters &) = default ;
    CreateEventSourceRequestSourceSLSParameters(CreateEventSourceRequestSourceSLSParameters &&) = default ;
    CreateEventSourceRequestSourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceRequestSourceSLSParameters() = default ;
    CreateEventSourceRequestSourceSLSParameters& operator=(const CreateEventSourceRequestSourceSLSParameters &) = default ;
    CreateEventSourceRequestSourceSLSParameters& operator=(CreateEventSourceRequestSourceSLSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumePosition_ != nullptr
        && this->logStore_ != nullptr && this->project_ != nullptr && this->roleName_ != nullptr; };
    // consumePosition Field Functions 
    bool hasConsumePosition() const { return this->consumePosition_ != nullptr;};
    void deleteConsumePosition() { this->consumePosition_ = nullptr;};
    inline string consumePosition() const { DARABONBA_PTR_GET_DEFAULT(consumePosition_, "") };
    inline CreateEventSourceRequestSourceSLSParameters& setConsumePosition(string consumePosition) { DARABONBA_PTR_SET_VALUE(consumePosition_, consumePosition) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateEventSourceRequestSourceSLSParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateEventSourceRequestSourceSLSParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateEventSourceRequestSourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The starting consumer offset. The value begin specifies the earliest offset, and the value end specifies the latest offset. You can also specify a time in seconds to start consumption.
    std::shared_ptr<string> consumePosition_ = nullptr;
    // The Log Service Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console. For information about the permission policy of this role, see Create a custom event source of the Log Service type.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
