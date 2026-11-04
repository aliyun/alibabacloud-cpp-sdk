// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEINTERNETPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEINTERNETPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UpdateInstanceInternetProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceInternetProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceInternetProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
    };
    UpdateInstanceInternetProtocolRequest() = default ;
    UpdateInstanceInternetProtocolRequest(const UpdateInstanceInternetProtocolRequest &) = default ;
    UpdateInstanceInternetProtocolRequest(UpdateInstanceInternetProtocolRequest &&) = default ;
    UpdateInstanceInternetProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceInternetProtocolRequest() = default ;
    UpdateInstanceInternetProtocolRequest& operator=(const UpdateInstanceInternetProtocolRequest &) = default ;
    UpdateInstanceInternetProtocolRequest& operator=(UpdateInstanceInternetProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iotInstanceId_ == nullptr
        && this->ipVersion_ == nullptr; };
    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline UpdateInstanceInternetProtocolRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline UpdateInstanceInternetProtocolRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


  protected:
    // The instance ID. You can view the **ID** of the current instance on the **Instance overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If an ID value is available, you must specify it. Otherwise, the call fails.
    // - If the <props="intl"><ph>**Instance overview** page or </ph>ID value is not available, you do not need to specify it.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    // 
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    // The IP protocol version. Valid values:
    // - IPv4 (default)
    // - IPv6
    // 
    // > If the IP protocol version is set to IPv6, streaming media-related addresses are changed to IPv4/IPv6 dual-stack addresses. Make sure that your devices and applications are configured for IPv6. Otherwise, exceptions such as playback screen loading failures may occur.
    // 
    // This parameter is required.
    shared_ptr<string> ipVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
