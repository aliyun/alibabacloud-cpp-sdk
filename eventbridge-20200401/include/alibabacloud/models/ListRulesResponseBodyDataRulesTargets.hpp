// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATARULESTARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATARULESTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListRulesResponseBodyDataRulesTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyDataRulesTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PushSelector, pushSelector_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyDataRulesTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PushSelector, pushSelector_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListRulesResponseBodyDataRulesTargets() = default ;
    ListRulesResponseBodyDataRulesTargets(const ListRulesResponseBodyDataRulesTargets &) = default ;
    ListRulesResponseBodyDataRulesTargets(ListRulesResponseBodyDataRulesTargets &&) = default ;
    ListRulesResponseBodyDataRulesTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyDataRulesTargets() = default ;
    ListRulesResponseBodyDataRulesTargets& operator=(const ListRulesResponseBodyDataRulesTargets &) = default ;
    ListRulesResponseBodyDataRulesTargets& operator=(ListRulesResponseBodyDataRulesTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->errorsTolerance_ != nullptr && this->id_ != nullptr && this->pushSelector_ != nullptr && this->type_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListRulesResponseBodyDataRulesTargets& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline ListRulesResponseBodyDataRulesTargets& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListRulesResponseBodyDataRulesTargets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pushSelector Field Functions 
    bool hasPushSelector() const { return this->pushSelector_ != nullptr;};
    void deletePushSelector() { this->pushSelector_ = nullptr;};
    inline string pushSelector() const { DARABONBA_PTR_GET_DEFAULT(pushSelector_, "") };
    inline ListRulesResponseBodyDataRulesTargets& setPushSelector(string pushSelector) { DARABONBA_PTR_SET_VALUE(pushSelector_, pushSelector) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRulesResponseBodyDataRulesTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The endpoint of the event target.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The fault tolerance policy. Valid values:
    // 
    // *   **ALL**: Fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations.
    // *   **NONE**: Fault tolerance is prohibited. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The ID of the custom event target.
    std::shared_ptr<string> id_ = nullptr;
    // The transformer that is used to push events.
    std::shared_ptr<string> pushSelector_ = nullptr;
    // The type of the event target. For more information, see [Event target parameters.](https://www.alibabacloud.com/help/en/eventbridge/latest/event-target-parameters)
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
