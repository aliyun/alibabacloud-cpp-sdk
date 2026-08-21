// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORWARDSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORWARDSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateForwardStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForwardStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardStrategy, forwardStrategy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForwardStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardStrategy, forwardStrategy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateForwardStrategyResponseBody() = default ;
    CreateForwardStrategyResponseBody(const CreateForwardStrategyResponseBody &) = default ;
    CreateForwardStrategyResponseBody(CreateForwardStrategyResponseBody &&) = default ;
    CreateForwardStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForwardStrategyResponseBody() = default ;
    CreateForwardStrategyResponseBody& operator=(const CreateForwardStrategyResponseBody &) = default ;
    CreateForwardStrategyResponseBody& operator=(CreateForwardStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardStrategy& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardStrategy& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ForwardStrategy() = default ;
      ForwardStrategy(const ForwardStrategy &) = default ;
      ForwardStrategy(ForwardStrategy &&) = default ;
      ForwardStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardStrategy() = default ;
      ForwardStrategy& operator=(const ForwardStrategy &) = default ;
      ForwardStrategy& operator=(ForwardStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationId_ == nullptr && this->destinationType_ == nullptr && this->forwardId_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ForwardStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationId Field Functions 
      bool hasDestinationId() const { return this->destinationId_ != nullptr;};
      void deleteDestinationId() { this->destinationId_ = nullptr;};
      inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
      inline ForwardStrategy& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


      // destinationType Field Functions 
      bool hasDestinationType() const { return this->destinationType_ != nullptr;};
      void deleteDestinationType() { this->destinationType_ = nullptr;};
      inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
      inline ForwardStrategy& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


      // forwardId Field Functions 
      bool hasForwardId() const { return this->forwardId_ != nullptr;};
      void deleteForwardId() { this->forwardId_ = nullptr;};
      inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
      inline ForwardStrategy& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ForwardStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline ForwardStrategy& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ForwardStrategy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The description of the traffic forwarding rule.
      shared_ptr<string> description_ {};
      // The target instance ID.
      shared_ptr<string> destinationId_ {};
      // The destination type. Valid values:
      // - **Connector**: connector.
      shared_ptr<string> destinationType_ {};
      // The ID of the traffic forwarding rule.
      shared_ptr<string> forwardId_ {};
      // The policy name.
      shared_ptr<string> name_ {};
      // The policy priority.
      shared_ptr<int64_t> priority_ {};
      // The status of the internal-facing access application. Valid values:
      // - **Enabled**: enabled.
      // - **Disabled**: disabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->forwardStrategy_ == nullptr
        && this->requestId_ == nullptr; };
    // forwardStrategy Field Functions 
    bool hasForwardStrategy() const { return this->forwardStrategy_ != nullptr;};
    void deleteForwardStrategy() { this->forwardStrategy_ = nullptr;};
    inline const CreateForwardStrategyResponseBody::ForwardStrategy & getForwardStrategy() const { DARABONBA_PTR_GET_CONST(forwardStrategy_, CreateForwardStrategyResponseBody::ForwardStrategy) };
    inline CreateForwardStrategyResponseBody::ForwardStrategy getForwardStrategy() { DARABONBA_PTR_GET(forwardStrategy_, CreateForwardStrategyResponseBody::ForwardStrategy) };
    inline CreateForwardStrategyResponseBody& setForwardStrategy(const CreateForwardStrategyResponseBody::ForwardStrategy & forwardStrategy) { DARABONBA_PTR_SET_VALUE(forwardStrategy_, forwardStrategy) };
    inline CreateForwardStrategyResponseBody& setForwardStrategy(CreateForwardStrategyResponseBody::ForwardStrategy && forwardStrategy) { DARABONBA_PTR_SET_RVALUE(forwardStrategy_, forwardStrategy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateForwardStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic forwarding rule.
    shared_ptr<CreateForwardStrategyResponseBody::ForwardStrategy> forwardStrategy_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
