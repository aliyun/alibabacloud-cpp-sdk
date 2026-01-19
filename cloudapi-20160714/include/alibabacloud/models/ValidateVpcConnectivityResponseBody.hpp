// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEVPCCONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEVPCCONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ValidateVpcConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateVpcConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connected, connected_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateVpcConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connected, connected_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ValidateVpcConnectivityResponseBody() = default ;
    ValidateVpcConnectivityResponseBody(const ValidateVpcConnectivityResponseBody &) = default ;
    ValidateVpcConnectivityResponseBody(ValidateVpcConnectivityResponseBody &&) = default ;
    ValidateVpcConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateVpcConnectivityResponseBody() = default ;
    ValidateVpcConnectivityResponseBody& operator=(const ValidateVpcConnectivityResponseBody &) = default ;
    ValidateVpcConnectivityResponseBody& operator=(ValidateVpcConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connected_ == nullptr
        && this->ipType_ == nullptr && this->requestId_ == nullptr; };
    // connected Field Functions 
    bool hasConnected() const { return this->connected_ != nullptr;};
    void deleteConnected() { this->connected_ = nullptr;};
    inline bool getConnected() const { DARABONBA_PTR_GET_DEFAULT(connected_, false) };
    inline ValidateVpcConnectivityResponseBody& setConnected(bool connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline ValidateVpcConnectivityResponseBody& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateVpcConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the API Gateway instance is connected to the port. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> connected_ {};
    // Indicates whether the instance in the authorization is an ECS instance or an SLB instance when the instance ID in the authorization is an IP address. Valid values:
    // 
    // *   **ECS**
    // *   **SLB**
    // *   **INVALID**: The instance type corresponding to the IP address is invalid.
    shared_ptr<string> ipType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
