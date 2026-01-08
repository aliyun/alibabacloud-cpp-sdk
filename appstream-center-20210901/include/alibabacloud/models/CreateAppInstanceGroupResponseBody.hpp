// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppInstanceGroupResponseBody() = default ;
    CreateAppInstanceGroupResponseBody(const CreateAppInstanceGroupResponseBody &) = default ;
    CreateAppInstanceGroupResponseBody(CreateAppInstanceGroupResponseBody &&) = default ;
    CreateAppInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupResponseBody() = default ;
    CreateAppInstanceGroupResponseBody& operator=(const CreateAppInstanceGroupResponseBody &) = default ;
    CreateAppInstanceGroupResponseBody& operator=(CreateAppInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceGroupModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceGroupModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceGroupModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      };
      AppInstanceGroupModel() = default ;
      AppInstanceGroupModel(const AppInstanceGroupModel &) = default ;
      AppInstanceGroupModel(AppInstanceGroupModel &&) = default ;
      AppInstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceGroupModel() = default ;
      AppInstanceGroupModel& operator=(const AppInstanceGroupModel &) = default ;
      AppInstanceGroupModel& operator=(AppInstanceGroupModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->nodePoolId_ == nullptr && this->orderId_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline AppInstanceGroupModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // nodePoolId Field Functions 
      bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
      void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
      inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
      inline AppInstanceGroupModel& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline AppInstanceGroupModel& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the resource group. This parameter is returned if a resource group was created.
      shared_ptr<string> nodePoolId_ {};
      // The order ID.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupModel_ == nullptr
        && this->requestId_ == nullptr; };
    // appInstanceGroupModel Field Functions 
    bool hasAppInstanceGroupModel() const { return this->appInstanceGroupModel_ != nullptr;};
    void deleteAppInstanceGroupModel() { this->appInstanceGroupModel_ = nullptr;};
    inline const CreateAppInstanceGroupResponseBody::AppInstanceGroupModel & getAppInstanceGroupModel() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModel_, CreateAppInstanceGroupResponseBody::AppInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBody::AppInstanceGroupModel getAppInstanceGroupModel() { DARABONBA_PTR_GET(appInstanceGroupModel_, CreateAppInstanceGroupResponseBody::AppInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBody& setAppInstanceGroupModel(const CreateAppInstanceGroupResponseBody::AppInstanceGroupModel & appInstanceGroupModel) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModel_, appInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBody& setAppInstanceGroupModel(CreateAppInstanceGroupResponseBody::AppInstanceGroupModel && appInstanceGroupModel) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModel_, appInstanceGroupModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The delivery group.
    shared_ptr<CreateAppInstanceGroupResponseBody::AppInstanceGroupModel> appInstanceGroupModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
