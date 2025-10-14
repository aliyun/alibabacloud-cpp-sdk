// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODYDATAENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODYDATAENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCustomEndpointListResponseBodyDataEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEndpointListResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(CnNames, cnNames_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeAutoEnter, nodeAutoEnter_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEndpointListResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(CnNames, cnNames_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeAutoEnter, nodeAutoEnter_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeCustomEndpointListResponseBodyDataEndpoints() = default ;
    DescribeCustomEndpointListResponseBodyDataEndpoints(const DescribeCustomEndpointListResponseBodyDataEndpoints &) = default ;
    DescribeCustomEndpointListResponseBodyDataEndpoints(DescribeCustomEndpointListResponseBodyDataEndpoints &&) = default ;
    DescribeCustomEndpointListResponseBodyDataEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEndpointListResponseBodyDataEndpoints() = default ;
    DescribeCustomEndpointListResponseBodyDataEndpoints& operator=(const DescribeCustomEndpointListResponseBodyDataEndpoints &) = default ;
    DescribeCustomEndpointListResponseBodyDataEndpoints& operator=(DescribeCustomEndpointListResponseBodyDataEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnNames_ == nullptr
        && return this->connectionString_ == nullptr && return this->customEndpointId_ == nullptr && return this->DBInstanceName_ == nullptr && return this->name_ == nullptr && return this->nodeAutoEnter_ == nullptr
        && return this->nodeRole_ == nullptr && return this->port_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // cnNames Field Functions 
    bool hasCnNames() const { return this->cnNames_ != nullptr;};
    void deleteCnNames() { this->cnNames_ = nullptr;};
    inline const vector<string> & cnNames() const { DARABONBA_PTR_GET_CONST(cnNames_, vector<string>) };
    inline vector<string> cnNames() { DARABONBA_PTR_GET(cnNames_, vector<string>) };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setCnNames(const vector<string> & cnNames) { DARABONBA_PTR_SET_VALUE(cnNames_, cnNames) };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setCnNames(vector<string> && cnNames) { DARABONBA_PTR_SET_RVALUE(cnNames_, cnNames) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // customEndpointId Field Functions 
    bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
    void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
    inline string customEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeAutoEnter Field Functions 
    bool hasNodeAutoEnter() const { return this->nodeAutoEnter_ != nullptr;};
    void deleteNodeAutoEnter() { this->nodeAutoEnter_ = nullptr;};
    inline string nodeAutoEnter() const { DARABONBA_PTR_GET_DEFAULT(nodeAutoEnter_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setNodeAutoEnter(string nodeAutoEnter) { DARABONBA_PTR_SET_VALUE(nodeAutoEnter_, nodeAutoEnter) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string nodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeCustomEndpointListResponseBodyDataEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // [\\"pxc-i-vb1sqa7llp\\",\\"pxc-i-bemprx50ad\\"]
    std::shared_ptr<vector<string>> cnNames_ = nullptr;
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> customEndpointId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeAutoEnter_ = nullptr;
    std::shared_ptr<string> nodeRole_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
