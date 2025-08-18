// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupResponseBodyAppInstanceGroupModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() = default ;
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel(const CreateAppInstanceGroupResponseBodyAppInstanceGroupModel &) = default ;
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel(CreateAppInstanceGroupResponseBodyAppInstanceGroupModel &&) = default ;
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() = default ;
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& operator=(const CreateAppInstanceGroupResponseBodyAppInstanceGroupModel &) = default ;
    CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& operator=(CreateAppInstanceGroupResponseBodyAppInstanceGroupModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->nodePoolId_ != nullptr && this->orderId_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateAppInstanceGroupResponseBodyAppInstanceGroupModel& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> nodePoolId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
