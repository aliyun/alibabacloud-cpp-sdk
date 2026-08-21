// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ModifyForwardStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyForwardStrategyRequest() = default ;
    ModifyForwardStrategyRequest(const ModifyForwardStrategyRequest &) = default ;
    ModifyForwardStrategyRequest(ModifyForwardStrategyRequest &&) = default ;
    ModifyForwardStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardStrategyRequest() = default ;
    ModifyForwardStrategyRequest& operator=(const ModifyForwardStrategyRequest &) = default ;
    ModifyForwardStrategyRequest& operator=(ModifyForwardStrategyRequest &&) = default ;
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
    inline ModifyForwardStrategyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline ModifyForwardStrategyRequest& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline ModifyForwardStrategyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // forwardId Field Functions 
    bool hasForwardId() const { return this->forwardId_ != nullptr;};
    void deleteForwardId() { this->forwardId_ = nullptr;};
    inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
    inline ModifyForwardStrategyRequest& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyForwardStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyForwardStrategyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyForwardStrategyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The policy description.
    shared_ptr<string> description_ {};
    // The target instance ID.
    shared_ptr<string> destinationId_ {};
    // The destination type. Valid values:
    // - **Connector**: connector.
    shared_ptr<string> destinationType_ {};
    // The forwarding rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> forwardId_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The policy priority. A value of 1 indicates the highest priority, and a value of 100 indicates the lowest priority.
    shared_ptr<int32_t> priority_ {};
    // The policy status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
