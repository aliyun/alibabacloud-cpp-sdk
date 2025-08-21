// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSPUBLICIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSPUBLICIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceInfosPublicIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceInfosPublicIps& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceInfosPublicIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps(const DescribeDeviceServiceResponseBodyResourceInfosPublicIps &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps(DescribeDeviceServiceResponseBodyResourceInfosPublicIps &&) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceInfosPublicIps() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps& operator=(const DescribeDeviceServiceResponseBodyResourceInfosPublicIps &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosPublicIps& operator=(DescribeDeviceServiceResponseBodyResourceInfosPublicIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosPublicIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The public IP address.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
