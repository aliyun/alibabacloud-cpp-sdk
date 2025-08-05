// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODYDATATARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODYDATATARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTargetsResponseBodyDataTargetsConcurrentConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListTargetsResponseBodyDataTargetsParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListTargetsResponseBodyDataTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentConfig, concurrentConfig_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsResponseBodyDataTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentConfig, concurrentConfig_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTargetsResponseBodyDataTargets() = default ;
    ListTargetsResponseBodyDataTargets(const ListTargetsResponseBodyDataTargets &) = default ;
    ListTargetsResponseBodyDataTargets(ListTargetsResponseBodyDataTargets &&) = default ;
    ListTargetsResponseBodyDataTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsResponseBodyDataTargets() = default ;
    ListTargetsResponseBodyDataTargets& operator=(const ListTargetsResponseBodyDataTargets &) = default ;
    ListTargetsResponseBodyDataTargets& operator=(ListTargetsResponseBodyDataTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrentConfig_ != nullptr
        && this->endpoint_ != nullptr && this->errorsTolerance_ != nullptr && this->eventBusName_ != nullptr && this->id_ != nullptr && this->paramList_ != nullptr
        && this->ruleName_ != nullptr && this->type_ != nullptr; };
    // concurrentConfig Field Functions 
    bool hasConcurrentConfig() const { return this->concurrentConfig_ != nullptr;};
    void deleteConcurrentConfig() { this->concurrentConfig_ = nullptr;};
    inline const Models::ListTargetsResponseBodyDataTargetsConcurrentConfig & concurrentConfig() const { DARABONBA_PTR_GET_CONST(concurrentConfig_, Models::ListTargetsResponseBodyDataTargetsConcurrentConfig) };
    inline Models::ListTargetsResponseBodyDataTargetsConcurrentConfig concurrentConfig() { DARABONBA_PTR_GET(concurrentConfig_, Models::ListTargetsResponseBodyDataTargetsConcurrentConfig) };
    inline ListTargetsResponseBodyDataTargets& setConcurrentConfig(const Models::ListTargetsResponseBodyDataTargetsConcurrentConfig & concurrentConfig) { DARABONBA_PTR_SET_VALUE(concurrentConfig_, concurrentConfig) };
    inline ListTargetsResponseBodyDataTargets& setConcurrentConfig(Models::ListTargetsResponseBodyDataTargetsConcurrentConfig && concurrentConfig) { DARABONBA_PTR_SET_RVALUE(concurrentConfig_, concurrentConfig) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListTargetsResponseBodyDataTargets& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline ListTargetsResponseBodyDataTargets& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListTargetsResponseBodyDataTargets& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListTargetsResponseBodyDataTargets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::ListTargetsResponseBodyDataTargetsParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::ListTargetsResponseBodyDataTargetsParamList>) };
    inline vector<Models::ListTargetsResponseBodyDataTargetsParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::ListTargetsResponseBodyDataTargetsParamList>) };
    inline ListTargetsResponseBodyDataTargets& setParamList(const vector<Models::ListTargetsResponseBodyDataTargetsParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline ListTargetsResponseBodyDataTargets& setParamList(vector<Models::ListTargetsResponseBodyDataTargetsParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListTargetsResponseBodyDataTargets& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTargetsResponseBodyDataTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The concurrency configuration.
    std::shared_ptr<Models::ListTargetsResponseBodyDataTargetsConcurrentConfig> concurrentConfig_ = nullptr;
    // The endpoint of the event target.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The fault tolerance policy. Valid values: ALL and NONE. 
    // 
    // - **ALL**: Fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations. 
    // - **NONE**: Fault tolerance is not allowed. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The ID of the event target.
    std::shared_ptr<string> id_ = nullptr;
    // The parameters that are configured for the event target.
    std::shared_ptr<vector<Models::ListTargetsResponseBodyDataTargetsParamList>> paramList_ = nullptr;
    // The name of the event rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/183698.html).
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
