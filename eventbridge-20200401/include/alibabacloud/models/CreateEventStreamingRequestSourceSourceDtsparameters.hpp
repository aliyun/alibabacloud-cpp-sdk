// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEDTSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEDTSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceDTSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceDTSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_TO_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceDTSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_FROM_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateEventStreamingRequestSourceSourceDTSParameters() = default ;
    CreateEventStreamingRequestSourceSourceDTSParameters(const CreateEventStreamingRequestSourceSourceDTSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceDTSParameters(CreateEventStreamingRequestSourceSourceDTSParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceDTSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceDTSParameters() = default ;
    CreateEventStreamingRequestSourceSourceDTSParameters& operator=(const CreateEventStreamingRequestSourceSourceDTSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceDTSParameters& operator=(CreateEventStreamingRequestSourceSourceDTSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brokerUrl_ != nullptr
        && this->initCheckPoint_ != nullptr && this->password_ != nullptr && this->sid_ != nullptr && this->taskId_ != nullptr && this->topic_ != nullptr
        && this->username_ != nullptr; };
    // brokerUrl Field Functions 
    bool hasBrokerUrl() const { return this->brokerUrl_ != nullptr;};
    void deleteBrokerUrl() { this->brokerUrl_ = nullptr;};
    inline string brokerUrl() const { DARABONBA_PTR_GET_DEFAULT(brokerUrl_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setBrokerUrl(string brokerUrl) { DARABONBA_PTR_SET_VALUE(brokerUrl_, brokerUrl) };


    // initCheckPoint Field Functions 
    bool hasInitCheckPoint() const { return this->initCheckPoint_ != nullptr;};
    void deleteInitCheckPoint() { this->initCheckPoint_ = nullptr;};
    inline int64_t initCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckPoint_, 0L) };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setInitCheckPoint(int64_t initCheckPoint) { DARABONBA_PTR_SET_VALUE(initCheckPoint_, initCheckPoint) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateEventStreamingRequestSourceSourceDTSParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The URL and port number of the change tracking instance.
    std::shared_ptr<string> brokerUrl_ = nullptr;
    // The UNIX timestamp that is generated when the SDK client consumes the first data record.
    std::shared_ptr<int64_t> initCheckPoint_ = nullptr;
    // The consumer group password.
    std::shared_ptr<string> password_ = nullptr;
    // The consumer group ID.
    std::shared_ptr<string> sid_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the tracked topic of the change tracking instance.
    std::shared_ptr<string> topic_ = nullptr;
    // The consumer group username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
