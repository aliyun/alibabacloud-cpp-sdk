// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINETUNNELCONFIGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINETUNNELCONFIGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachineTunnelConfigDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachineTunnelConfigDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(device_name, deviceName_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(product_key, productKey_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tunnel_endpoint, tunnelEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachineTunnelConfigDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(device_name, deviceName_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(product_key, productKey_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tunnel_endpoint, tunnelEndpoint_);
    };
    DescribeEdgeMachineTunnelConfigDetailResponseBody() = default ;
    DescribeEdgeMachineTunnelConfigDetailResponseBody(const DescribeEdgeMachineTunnelConfigDetailResponseBody &) = default ;
    DescribeEdgeMachineTunnelConfigDetailResponseBody(DescribeEdgeMachineTunnelConfigDetailResponseBody &&) = default ;
    DescribeEdgeMachineTunnelConfigDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachineTunnelConfigDetailResponseBody() = default ;
    DescribeEdgeMachineTunnelConfigDetailResponseBody& operator=(const DescribeEdgeMachineTunnelConfigDetailResponseBody &) = default ;
    DescribeEdgeMachineTunnelConfigDetailResponseBody& operator=(DescribeEdgeMachineTunnelConfigDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceName_ != nullptr
        && this->model_ != nullptr && this->productKey_ != nullptr && this->requestId_ != nullptr && this->sn_ != nullptr && this->token_ != nullptr
        && this->tunnelEndpoint_ != nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tunnelEndpoint Field Functions 
    bool hasTunnelEndpoint() const { return this->tunnelEndpoint_ != nullptr;};
    void deleteTunnelEndpoint() { this->tunnelEndpoint_ = nullptr;};
    inline string tunnelEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tunnelEndpoint_, "") };
    inline DescribeEdgeMachineTunnelConfigDetailResponseBody& setTunnelEndpoint(string tunnelEndpoint) { DARABONBA_PTR_SET_VALUE(tunnelEndpoint_, tunnelEndpoint) };


  protected:
    // The device name.
    std::shared_ptr<string> deviceName_ = nullptr;
    // The model of the cloud-native box.
    std::shared_ptr<string> model_ = nullptr;
    // Product Key
    std::shared_ptr<string> productKey_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // The serial number of the cloud-native box.
    std::shared_ptr<string> sn_ = nullptr;
    // Token
    std::shared_ptr<string> token_ = nullptr;
    // The tunnel endpoint.
    std::shared_ptr<string> tunnelEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
