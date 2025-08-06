// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupInfos, instanceGroupInfos_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupInfos, instanceGroupInfos_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAndroidInstanceGroupResponseBody() = default ;
    CreateAndroidInstanceGroupResponseBody(const CreateAndroidInstanceGroupResponseBody &) = default ;
    CreateAndroidInstanceGroupResponseBody(CreateAndroidInstanceGroupResponseBody &&) = default ;
    CreateAndroidInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupResponseBody() = default ;
    CreateAndroidInstanceGroupResponseBody& operator=(const CreateAndroidInstanceGroupResponseBody &) = default ;
    CreateAndroidInstanceGroupResponseBody& operator=(CreateAndroidInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceGroupIds_ != nullptr
        && this->instanceGroupInfos_ != nullptr && this->orderId_ != nullptr && this->requestId_ != nullptr; };
    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupInfos Field Functions 
    bool hasInstanceGroupInfos() const { return this->instanceGroupInfos_ != nullptr;};
    void deleteInstanceGroupInfos() { this->instanceGroupInfos_ = nullptr;};
    inline const vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos> & instanceGroupInfos() const { DARABONBA_PTR_GET_CONST(instanceGroupInfos_, vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos>) };
    inline vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos> instanceGroupInfos() { DARABONBA_PTR_GET(instanceGroupInfos_, vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos>) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupInfos(const vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos> & instanceGroupInfos) { DARABONBA_PTR_SET_VALUE(instanceGroupInfos_, instanceGroupInfos) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupInfos(vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos> && instanceGroupInfos) { DARABONBA_PTR_SET_RVALUE(instanceGroupInfos_, instanceGroupInfos) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateAndroidInstanceGroupResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAndroidInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
    // The instance groups.
    std::shared_ptr<vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos>> instanceGroupInfos_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
