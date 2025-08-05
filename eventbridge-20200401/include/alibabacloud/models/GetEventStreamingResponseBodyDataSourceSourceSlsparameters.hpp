// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCESLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCESLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourceSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourceSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumePosition, consumePosition_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters(const GetEventStreamingResponseBodyDataSourceSourceSLSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters(GetEventStreamingResponseBodyDataSourceSourceSLSParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourceSLSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourceSLSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceSLSParameters& operator=(GetEventStreamingResponseBodyDataSourceSourceSLSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumePosition_ != nullptr
        && this->consumerGroup_ != nullptr && this->logStore_ != nullptr && this->project_ != nullptr && this->roleName_ != nullptr; };
    // consumePosition Field Functions 
    bool hasConsumePosition() const { return this->consumePosition_ != nullptr;};
    void deleteConsumePosition() { this->consumePosition_ = nullptr;};
    inline string consumePosition() const { DARABONBA_PTR_GET_DEFAULT(consumePosition_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceSLSParameters& setConsumePosition(string consumePosition) { DARABONBA_PTR_SET_VALUE(consumePosition_, consumePosition) };


    // consumerGroup Field Functions 
    bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
    void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
    inline string consumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceSLSParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceSLSParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceSLSParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The starting consumer offset. The value begin indicates the earliest offset, and the value end indicates the latest offset. You can also specify a time in seconds to start consumption.
    std::shared_ptr<string> consumePosition_ = nullptr;
    // The consumer group.
    std::shared_ptr<string> consumerGroup_ = nullptr;
    // The Log Service Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the RAM console.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
