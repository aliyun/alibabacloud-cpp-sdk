// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICACCELERATEIPIDLECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASICACCELERATEIPIDLECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetBasicAccelerateIpIdleCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicAccelerateIpIdleCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicAccelerateIpIdleCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetBasicAccelerateIpIdleCountRequest() = default ;
    GetBasicAccelerateIpIdleCountRequest(const GetBasicAccelerateIpIdleCountRequest &) = default ;
    GetBasicAccelerateIpIdleCountRequest(GetBasicAccelerateIpIdleCountRequest &&) = default ;
    GetBasicAccelerateIpIdleCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicAccelerateIpIdleCountRequest() = default ;
    GetBasicAccelerateIpIdleCountRequest& operator=(const GetBasicAccelerateIpIdleCountRequest &) = default ;
    GetBasicAccelerateIpIdleCountRequest& operator=(GetBasicAccelerateIpIdleCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ipSetId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetBasicAccelerateIpIdleCountRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline GetBasicAccelerateIpIdleCountRequest& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBasicAccelerateIpIdleCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of a request.
    // 
    // Generate a parameter value from your client to ensure that the value is unique among different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The acceleration region instance ID of the basic Alibaba Cloud Global Accelerator (GA) instance that you want to query.
    // 
    // You can invoke [GetBasicAccelerator](https://help.aliyun.com/document_detail/2253380.html) to query the acceleration region instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> ipSetId_ {};
    // The region ID of Global Accelerator. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
