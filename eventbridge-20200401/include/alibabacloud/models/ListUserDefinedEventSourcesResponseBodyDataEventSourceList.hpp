// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters.hpp>
#include <alibabacloud/models/ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListUserDefinedEventSourcesResponseBodyDataEventSourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefinedEventSourcesResponseBodyDataEventSourceList& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Ctime, ctime_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_TO_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefinedEventSourcesResponseBodyDataEventSourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Ctime, ctime_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList(const ListUserDefinedEventSourcesResponseBodyDataEventSourceList &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList(ListUserDefinedEventSourcesResponseBodyDataEventSourceList &&) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceList() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList& operator=(const ListUserDefinedEventSourcesResponseBodyDataEventSourceList &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceList& operator=(ListUserDefinedEventSourcesResponseBodyDataEventSourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->ctime_ != nullptr && this->eventBusName_ != nullptr && this->externalSourceType_ != nullptr && this->name_ != nullptr && this->sourceHttpEventParameters_ != nullptr
        && this->sourceKafkaParameters_ != nullptr && this->sourceMNSParameters_ != nullptr && this->sourceRabbitMQParameters_ != nullptr && this->sourceRocketMQParameters_ != nullptr && this->sourceSLSParameters_ != nullptr
        && this->sourceScheduledEventParameters_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // ctime Field Functions 
    bool hasCtime() const { return this->ctime_ != nullptr;};
    void deleteCtime() { this->ctime_ = nullptr;};
    inline float ctime() const { DARABONBA_PTR_GET_DEFAULT(ctime_, 0.0) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setCtime(float ctime) { DARABONBA_PTR_SET_VALUE(ctime_, ctime) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline string externalSourceType() const { DARABONBA_PTR_GET_DEFAULT(externalSourceType_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setExternalSourceType(string externalSourceType) { DARABONBA_PTR_SET_VALUE(externalSourceType_, externalSourceType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceHttpEventParameters Field Functions 
    bool hasSourceHttpEventParameters() const { return this->sourceHttpEventParameters_ != nullptr;};
    void deleteSourceHttpEventParameters() { this->sourceHttpEventParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters & sourceHttpEventParameters() const { DARABONBA_PTR_GET_CONST(sourceHttpEventParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters sourceHttpEventParameters() { DARABONBA_PTR_GET(sourceHttpEventParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceHttpEventParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters & sourceHttpEventParameters) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceHttpEventParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters && sourceHttpEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceKafkaParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceKafkaParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceMNSParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceMNSParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceRabbitMQParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceRabbitMQParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceRocketMQParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceRocketMQParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceSLSParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceSLSParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


    // sourceScheduledEventParameters Field Functions 
    bool hasSourceScheduledEventParameters() const { return this->sourceScheduledEventParameters_ != nullptr;};
    void deleteSourceScheduledEventParameters() { this->sourceScheduledEventParameters_ = nullptr;};
    inline const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters & sourceScheduledEventParameters() const { DARABONBA_PTR_GET_CONST(sourceScheduledEventParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters) };
    inline Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters sourceScheduledEventParameters() { DARABONBA_PTR_GET(sourceScheduledEventParameters_, Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceScheduledEventParameters(const Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters & sourceScheduledEventParameters) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setSourceScheduledEventParameters(Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters && sourceScheduledEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the queried event source.
    std::shared_ptr<string> arn_ = nullptr;
    // The timestamp that indicates when the event source was created.
    std::shared_ptr<float> ctime_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The type of the event source.
    std::shared_ptr<string> externalSourceType_ = nullptr;
    // The name of the queried event source.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters that are returned if HTTP events are specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters> sourceHttpEventParameters_ = nullptr;
    // The parameters that are returned if Message Queue for Apache Kafka is specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are returned if Simple Message Queue (formerly MNS) (SMQ) is specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are returned if Message Queue for RabbitMQ is specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    // The parameters that are returned if Message Queue for Apache RocketMQ is specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are returned if Simple Log Service is specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters> sourceSLSParameters_ = nullptr;
    // The parameters that are returned if scheduled events are specified as the event source.
    std::shared_ptr<Models::ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters> sourceScheduledEventParameters_ = nullptr;
    // The status of the queried event source. The returned value Activated indicates that the event source is activated.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the queried event source. The returned value UserDefined indicates that the event source is a custom event source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
