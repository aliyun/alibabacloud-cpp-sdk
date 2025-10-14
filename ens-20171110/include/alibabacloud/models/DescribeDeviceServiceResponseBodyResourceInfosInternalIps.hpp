// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSINTERNALIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSINTERNALIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceInfosInternalIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceInfosInternalIps& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceInfosInternalIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps(const DescribeDeviceServiceResponseBodyResourceInfosInternalIps &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps(DescribeDeviceServiceResponseBodyResourceInfosInternalIps &&) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceInfosInternalIps() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps& operator=(const DescribeDeviceServiceResponseBodyResourceInfosInternalIps &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosInternalIps& operator=(DescribeDeviceServiceResponseBodyResourceInfosInternalIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosInternalIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The internal IP address.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
