// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCESLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCESLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateEventStreamingRequestSourceSourceSLSParameters() = default ;
    CreateEventStreamingRequestSourceSourceSLSParameters(const CreateEventStreamingRequestSourceSourceSLSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceSLSParameters(CreateEventStreamingRequestSourceSourceSLSParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceSLSParameters() = default ;
    CreateEventStreamingRequestSourceSourceSLSParameters& operator=(const CreateEventStreamingRequestSourceSourceSLSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceSLSParameters& operator=(CreateEventStreamingRequestSourceSourceSLSParameters &&) = default ;
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
    inline CreateEventStreamingRequestSourceSourceSLSParameters& setConsumePosition(string consumePosition) { DARABONBA_PTR_SET_VALUE(consumePosition_, consumePosition) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateEventStreamingRequestSourceSourceSLSParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateEventStreamingRequestSourceSourceSLSParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateEventStreamingRequestSourceSourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The consumer offset. The value begin specifies the earliest offset. The value end specifies the latest offset. You can also specify a time in seconds to start consumption.
    std::shared_ptr<string> consumePosition_ = nullptr;
    // The Simple Log Service Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
