// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALACCELERATIONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALACCELERATIONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateGlobalAccelerationInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalAccelerationInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalAccelerationInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGlobalAccelerationInstanceResponseBody() = default ;
    CreateGlobalAccelerationInstanceResponseBody(const CreateGlobalAccelerationInstanceResponseBody &) = default ;
    CreateGlobalAccelerationInstanceResponseBody(CreateGlobalAccelerationInstanceResponseBody &&) = default ;
    CreateGlobalAccelerationInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalAccelerationInstanceResponseBody() = default ;
    CreateGlobalAccelerationInstanceResponseBody& operator=(const CreateGlobalAccelerationInstanceResponseBody &) = default ;
    CreateGlobalAccelerationInstanceResponseBody& operator=(CreateGlobalAccelerationInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalAccelerationInstanceId_ == nullptr
        && return this->ipAddress_ == nullptr && return this->requestId_ == nullptr; };
    // globalAccelerationInstanceId Field Functions 
    bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
    void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
    inline string globalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
    inline CreateGlobalAccelerationInstanceResponseBody& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline CreateGlobalAccelerationInstanceResponseBody& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGlobalAccelerationInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the GA instance.
    std::shared_ptr<string> globalAccelerationInstanceId_ = nullptr;
    // The public IP address of the GA instance.
    // 
    // If **BandwidthType** is set to **Sharing**, this parameter is not returned.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
