// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudPhoneNodeResponseBodyNodeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCloudPhoneNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudPhoneNodeResponseBody() = default ;
    CreateCloudPhoneNodeResponseBody(const CreateCloudPhoneNodeResponseBody &) = default ;
    CreateCloudPhoneNodeResponseBody(CreateCloudPhoneNodeResponseBody &&) = default ;
    CreateCloudPhoneNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeResponseBody() = default ;
    CreateCloudPhoneNodeResponseBody& operator=(const CreateCloudPhoneNodeResponseBody &) = default ;
    CreateCloudPhoneNodeResponseBody& operator=(CreateCloudPhoneNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkPackageOrderModel_ != nullptr
        && this->nodeInfos_ != nullptr && this->orderId_ != nullptr && this->requestId_ != nullptr; };
    // networkPackageOrderModel Field Functions 
    bool hasNetworkPackageOrderModel() const { return this->networkPackageOrderModel_ != nullptr;};
    void deleteNetworkPackageOrderModel() { this->networkPackageOrderModel_ = nullptr;};
    inline const CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel & networkPackageOrderModel() const { DARABONBA_PTR_GET_CONST(networkPackageOrderModel_, CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel networkPackageOrderModel() { DARABONBA_PTR_GET(networkPackageOrderModel_, CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBody& setNetworkPackageOrderModel(const CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel & networkPackageOrderModel) { DARABONBA_PTR_SET_VALUE(networkPackageOrderModel_, networkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBody& setNetworkPackageOrderModel(CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel && networkPackageOrderModel) { DARABONBA_PTR_SET_RVALUE(networkPackageOrderModel_, networkPackageOrderModel) };


    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<CreateCloudPhoneNodeResponseBodyNodeInfos> & nodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<CreateCloudPhoneNodeResponseBodyNodeInfos>) };
    inline vector<CreateCloudPhoneNodeResponseBodyNodeInfos> nodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<CreateCloudPhoneNodeResponseBodyNodeInfos>) };
    inline CreateCloudPhoneNodeResponseBody& setNodeInfos(const vector<CreateCloudPhoneNodeResponseBodyNodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline CreateCloudPhoneNodeResponseBody& setNodeInfos(vector<CreateCloudPhoneNodeResponseBodyNodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCloudPhoneNodeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudPhoneNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel> networkPackageOrderModel_ = nullptr;
    // The cloud phone matrixes.
    std::shared_ptr<vector<CreateCloudPhoneNodeResponseBodyNodeInfos>> nodeInfos_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
