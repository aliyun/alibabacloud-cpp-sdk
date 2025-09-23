// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFONETINFOSNETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFONETINFOSNETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo &&) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& operator=(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& operator=(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->IPAddress_ != nullptr && this->IPType_ != nullptr && this->port_ != nullptr && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> IPAddress_ = nullptr;
    std::shared_ptr<string> IPType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
