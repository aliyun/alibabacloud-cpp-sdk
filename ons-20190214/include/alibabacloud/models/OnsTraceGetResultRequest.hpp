// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRACEGETRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTRACEGETRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTraceGetResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTraceGetResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTraceGetResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTraceGetResultRequest() = default ;
    OnsTraceGetResultRequest(const OnsTraceGetResultRequest &) = default ;
    OnsTraceGetResultRequest(OnsTraceGetResultRequest &&) = default ;
    OnsTraceGetResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTraceGetResultRequest() = default ;
    OnsTraceGetResultRequest& operator=(const OnsTraceGetResultRequest &) = default ;
    OnsTraceGetResultRequest& operator=(OnsTraceGetResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->queryId_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTraceGetResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline OnsTraceGetResultRequest& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTraceGetResultRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance to which the message you want to query belongs.
    shared_ptr<string> instanceId_ {};
    // The ID of the task that was created to query the trace of the message.
    // 
    // This parameter is required.
    shared_ptr<string> queryId_ {};
    // The topic to which the message belongs.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
