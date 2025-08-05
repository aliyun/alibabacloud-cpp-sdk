// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEDTSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEDTSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourceDTSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourceDTSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_TO_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourceDTSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BrokerUrl, brokerUrl_);
      DARABONBA_PTR_FROM_JSON(InitCheckPoint, initCheckPoint_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters(const GetEventStreamingResponseBodyDataSourceSourceDTSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters(GetEventStreamingResponseBodyDataSourceSourceDTSParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourceDTSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourceDTSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceDTSParameters& operator=(GetEventStreamingResponseBodyDataSourceSourceDTSParameters &&) = default ;
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
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setBrokerUrl(string brokerUrl) { DARABONBA_PTR_SET_VALUE(brokerUrl_, brokerUrl) };


    // initCheckPoint Field Functions 
    bool hasInitCheckPoint() const { return this->initCheckPoint_ != nullptr;};
    void deleteInitCheckPoint() { this->initCheckPoint_ = nullptr;};
    inline string initCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckPoint_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setInitCheckPoint(string initCheckPoint) { DARABONBA_PTR_SET_VALUE(initCheckPoint_, initCheckPoint) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceDTSParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The URL and port number of the data subscription channel.
    std::shared_ptr<string> brokerUrl_ = nullptr;
    // The consumer offset. A consumer offset is a timestamp that indicates when the SDK client consumes the first data record. The value is a UNIX timestamp.
    std::shared_ptr<string> initCheckPoint_ = nullptr;
    // The password of the consumer group.
    std::shared_ptr<string> password_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<string> sid_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The topic to which you want to subscribe by using the data subscription channel.
    std::shared_ptr<string> topic_ = nullptr;
    // The account of the consumer group.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
