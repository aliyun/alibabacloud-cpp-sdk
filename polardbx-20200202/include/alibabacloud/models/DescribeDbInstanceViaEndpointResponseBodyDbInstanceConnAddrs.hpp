// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODYDBINSTANCECONNADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODYDBINSTANCECONNADDRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs() = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs(const DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs &) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs(DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs &&) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs() = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& operator=(const DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs &) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& operator=(DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->port_ == nullptr && return this->type_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<int64_t> port_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
