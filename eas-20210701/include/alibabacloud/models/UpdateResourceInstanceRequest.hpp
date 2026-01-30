// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(NewDiskSize, newDiskSize_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(NewDiskSize, newDiskSize_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    UpdateResourceInstanceRequest() = default ;
    UpdateResourceInstanceRequest(const UpdateResourceInstanceRequest &) = default ;
    UpdateResourceInstanceRequest(UpdateResourceInstanceRequest &&) = default ;
    UpdateResourceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceInstanceRequest() = default ;
    UpdateResourceInstanceRequest& operator=(const UpdateResourceInstanceRequest &) = default ;
    UpdateResourceInstanceRequest& operator=(UpdateResourceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->newDiskSize_ == nullptr && this->reason_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateResourceInstanceRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // newDiskSize Field Functions 
    bool hasNewDiskSize() const { return this->newDiskSize_ != nullptr;};
    void deleteNewDiskSize() { this->newDiskSize_ = nullptr;};
    inline string getNewDiskSize() const { DARABONBA_PTR_GET_DEFAULT(newDiskSize_, "") };
    inline UpdateResourceInstanceRequest& setNewDiskSize(string newDiskSize) { DARABONBA_PTR_SET_VALUE(newDiskSize_, newDiskSize) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateResourceInstanceRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The operation that updates the scheduling state of the instance in a dedicated resource group. Valid values:
    // 
    // *   Uncordon: allows scheduling the service to this instance.
    // *   Cordon: prohibits scheduling the service to this instance.
    // *   Drain: evicts the service that has been scheduled to this instance.
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    shared_ptr<string> newDiskSize_ {};
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
