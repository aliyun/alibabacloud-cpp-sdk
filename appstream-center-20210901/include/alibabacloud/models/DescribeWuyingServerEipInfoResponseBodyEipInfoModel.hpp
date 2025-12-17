// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODYEIPINFOMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODYEIPINFOMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerEipInfoResponseBodyEipInfoModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerEipInfoResponseBodyEipInfoModel& obj) { 
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(ServerPortRange, serverPortRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerEipInfoResponseBodyEipInfoModel& obj) { 
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(ServerPortRange, serverPortRange_);
    };
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel() = default ;
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel(const DescribeWuyingServerEipInfoResponseBodyEipInfoModel &) = default ;
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel(DescribeWuyingServerEipInfoResponseBodyEipInfoModel &&) = default ;
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerEipInfoResponseBodyEipInfoModel() = default ;
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel& operator=(const DescribeWuyingServerEipInfoResponseBodyEipInfoModel &) = default ;
    DescribeWuyingServerEipInfoResponseBodyEipInfoModel& operator=(DescribeWuyingServerEipInfoResponseBodyEipInfoModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipId_ == nullptr
        && return this->ipAddress_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->serverPortRange_ == nullptr; };
    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DescribeWuyingServerEipInfoResponseBodyEipInfoModel& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeWuyingServerEipInfoResponseBodyEipInfoModel& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeWuyingServerEipInfoResponseBodyEipInfoModel& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // serverPortRange Field Functions 
    bool hasServerPortRange() const { return this->serverPortRange_ != nullptr;};
    void deleteServerPortRange() { this->serverPortRange_ = nullptr;};
    inline string serverPortRange() const { DARABONBA_PTR_GET_DEFAULT(serverPortRange_, "") };
    inline DescribeWuyingServerEipInfoResponseBodyEipInfoModel& setServerPortRange(string serverPortRange) { DARABONBA_PTR_SET_VALUE(serverPortRange_, serverPortRange) };


  protected:
    std::shared_ptr<string> eipId_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The ID of the elastic network interface (ENI).
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The port range.
    std::shared_ptr<string> serverPortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
