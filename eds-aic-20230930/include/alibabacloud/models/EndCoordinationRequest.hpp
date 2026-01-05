// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDCOORDINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDCOORDINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class EndCoordinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndCoordinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinatorUserId, coordinatorUserId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
    };
    friend void from_json(const Darabonba::Json& j, EndCoordinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinatorUserId, coordinatorUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
    };
    EndCoordinationRequest() = default ;
    EndCoordinationRequest(const EndCoordinationRequest &) = default ;
    EndCoordinationRequest(EndCoordinationRequest &&) = default ;
    EndCoordinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndCoordinationRequest() = default ;
    EndCoordinationRequest& operator=(const EndCoordinationRequest &) = default ;
    EndCoordinationRequest& operator=(EndCoordinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coordinatorUserId_ == nullptr
        && this->instanceId_ == nullptr && this->ownerUserId_ == nullptr; };
    // coordinatorUserId Field Functions 
    bool hasCoordinatorUserId() const { return this->coordinatorUserId_ != nullptr;};
    void deleteCoordinatorUserId() { this->coordinatorUserId_ = nullptr;};
    inline string getCoordinatorUserId() const { DARABONBA_PTR_GET_DEFAULT(coordinatorUserId_, "") };
    inline EndCoordinationRequest& setCoordinatorUserId(string coordinatorUserId) { DARABONBA_PTR_SET_VALUE(coordinatorUserId_, coordinatorUserId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EndCoordinationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline EndCoordinationRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


  protected:
    shared_ptr<string> coordinatorUserId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
