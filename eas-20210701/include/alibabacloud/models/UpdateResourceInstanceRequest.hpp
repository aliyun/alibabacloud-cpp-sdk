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
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
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
    virtual bool empty() const override { return this->action_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateResourceInstanceRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


  protected:
    // The operation that updates the scheduling state of the instance in a dedicated resource group. Valid values:
    // 
    // *   Uncordon: allows scheduling the service to this instance.
    // *   Cordon: prohibits scheduling the service to this instance.
    // *   Drain: evicts the service that has been scheduled to this instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
