// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerEipInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerEipInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipInfoModel, eipInfoModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerEipInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInfoModel, eipInfoModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWuyingServerEipInfoResponseBody() = default ;
    DescribeWuyingServerEipInfoResponseBody(const DescribeWuyingServerEipInfoResponseBody &) = default ;
    DescribeWuyingServerEipInfoResponseBody(DescribeWuyingServerEipInfoResponseBody &&) = default ;
    DescribeWuyingServerEipInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerEipInfoResponseBody() = default ;
    DescribeWuyingServerEipInfoResponseBody& operator=(const DescribeWuyingServerEipInfoResponseBody &) = default ;
    DescribeWuyingServerEipInfoResponseBody& operator=(DescribeWuyingServerEipInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipInfoModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipInfoModel& obj) { 
        DARABONBA_PTR_TO_JSON(EipId, eipId_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(ServerPortRange, serverPortRange_);
      };
      friend void from_json(const Darabonba::Json& j, EipInfoModel& obj) { 
        DARABONBA_PTR_FROM_JSON(EipId, eipId_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(ServerPortRange, serverPortRange_);
      };
      EipInfoModel() = default ;
      EipInfoModel(const EipInfoModel &) = default ;
      EipInfoModel(EipInfoModel &&) = default ;
      EipInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipInfoModel() = default ;
      EipInfoModel& operator=(const EipInfoModel &) = default ;
      EipInfoModel& operator=(EipInfoModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eipId_ == nullptr
        && this->ipAddress_ == nullptr && this->networkInterfaceId_ == nullptr && this->serverPortRange_ == nullptr; };
      // eipId Field Functions 
      bool hasEipId() const { return this->eipId_ != nullptr;};
      void deleteEipId() { this->eipId_ = nullptr;};
      inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
      inline EipInfoModel& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline EipInfoModel& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline EipInfoModel& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // serverPortRange Field Functions 
      bool hasServerPortRange() const { return this->serverPortRange_ != nullptr;};
      void deleteServerPortRange() { this->serverPortRange_ = nullptr;};
      inline string getServerPortRange() const { DARABONBA_PTR_GET_DEFAULT(serverPortRange_, "") };
      inline EipInfoModel& setServerPortRange(string serverPortRange) { DARABONBA_PTR_SET_VALUE(serverPortRange_, serverPortRange) };


    protected:
      shared_ptr<string> eipId_ {};
      // The public IP address.
      shared_ptr<string> ipAddress_ {};
      // The ID of the elastic network interface (ENI).
      shared_ptr<string> networkInterfaceId_ {};
      // The port range.
      shared_ptr<string> serverPortRange_ {};
    };

    virtual bool empty() const override { return this->eipInfoModel_ == nullptr
        && this->requestId_ == nullptr; };
    // eipInfoModel Field Functions 
    bool hasEipInfoModel() const { return this->eipInfoModel_ != nullptr;};
    void deleteEipInfoModel() { this->eipInfoModel_ = nullptr;};
    inline const DescribeWuyingServerEipInfoResponseBody::EipInfoModel & getEipInfoModel() const { DARABONBA_PTR_GET_CONST(eipInfoModel_, DescribeWuyingServerEipInfoResponseBody::EipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBody::EipInfoModel getEipInfoModel() { DARABONBA_PTR_GET(eipInfoModel_, DescribeWuyingServerEipInfoResponseBody::EipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBody& setEipInfoModel(const DescribeWuyingServerEipInfoResponseBody::EipInfoModel & eipInfoModel) { DARABONBA_PTR_SET_VALUE(eipInfoModel_, eipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBody& setEipInfoModel(DescribeWuyingServerEipInfoResponseBody::EipInfoModel && eipInfoModel) { DARABONBA_PTR_SET_RVALUE(eipInfoModel_, eipInfoModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWuyingServerEipInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the associated EIP.
    shared_ptr<DescribeWuyingServerEipInfoResponseBody::EipInfoModel> eipInfoModel_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
