// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERVIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERVIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBClusterVipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterVipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterVipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ModifyDBClusterVipRequest() = default ;
    ModifyDBClusterVipRequest(const ModifyDBClusterVipRequest &) = default ;
    ModifyDBClusterVipRequest(ModifyDBClusterVipRequest &&) = default ;
    ModifyDBClusterVipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterVipRequest() = default ;
    ModifyDBClusterVipRequest& operator=(const ModifyDBClusterVipRequest &) = default ;
    ModifyDBClusterVipRequest& operator=(ModifyDBClusterVipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectString_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr; };
    // connectString Field Functions 
    bool hasConnectString() const { return this->connectString_ != nullptr;};
    void deleteConnectString() { this->connectString_ = nullptr;};
    inline string connectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
    inline ModifyDBClusterVipRequest& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterVipRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline ModifyDBClusterVipRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBClusterVipRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The endpoint of the cluster.
    std::shared_ptr<string> connectString_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The VPC ID.
    // 
    // > 
    // 
    // *   The new **VPC** must reside in the same region as the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID.
    // 
    // > 
    // 
    // *   The new vSwitch must reside in the same zone as the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
