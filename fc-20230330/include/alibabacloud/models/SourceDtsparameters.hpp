// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCEDTSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SOURCEDTSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SourceDTSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceDTSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_TO_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, SourceDTSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_FROM_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    SourceDTSParameters() = default ;
    SourceDTSParameters(const SourceDTSParameters &) = default ;
    SourceDTSParameters(SourceDTSParameters &&) = default ;
    SourceDTSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceDTSParameters() = default ;
    SourceDTSParameters& operator=(const SourceDTSParameters &) = default ;
    SourceDTSParameters& operator=(SourceDTSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brokerUrl_ != nullptr
        && this->initCheckPoint_ != nullptr && this->password_ != nullptr && this->regionId_ != nullptr && this->sid_ != nullptr && this->taskId_ != nullptr
        && this->topic_ != nullptr && this->username_ != nullptr; };
    // brokerUrl Field Functions 
    bool hasBrokerUrl() const { return this->brokerUrl_ != nullptr;};
    void deleteBrokerUrl() { this->brokerUrl_ = nullptr;};
    inline string brokerUrl() const { DARABONBA_PTR_GET_DEFAULT(brokerUrl_, "") };
    inline SourceDTSParameters& setBrokerUrl(string brokerUrl) { DARABONBA_PTR_SET_VALUE(brokerUrl_, brokerUrl) };


    // initCheckPoint Field Functions 
    bool hasInitCheckPoint() const { return this->initCheckPoint_ != nullptr;};
    void deleteInitCheckPoint() { this->initCheckPoint_ = nullptr;};
    inline int32_t initCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckPoint_, 0) };
    inline SourceDTSParameters& setInitCheckPoint(int32_t initCheckPoint) { DARABONBA_PTR_SET_VALUE(initCheckPoint_, initCheckPoint) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SourceDTSParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SourceDTSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline SourceDTSParameters& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SourceDTSParameters& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SourceDTSParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline SourceDTSParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> brokerUrl_ = nullptr;
    std::shared_ptr<int32_t> initCheckPoint_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sid_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
