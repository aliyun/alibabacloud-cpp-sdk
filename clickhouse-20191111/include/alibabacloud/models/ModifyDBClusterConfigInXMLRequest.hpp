// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERCONFIGINXMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERCONFIGINXMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterConfigInXMLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterConfigInXMLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterConfigInXMLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDBClusterConfigInXMLRequest() = default ;
    ModifyDBClusterConfigInXMLRequest(const ModifyDBClusterConfigInXMLRequest &) = default ;
    ModifyDBClusterConfigInXMLRequest(ModifyDBClusterConfigInXMLRequest &&) = default ;
    ModifyDBClusterConfigInXMLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterConfigInXMLRequest() = default ;
    ModifyDBClusterConfigInXMLRequest& operator=(const ModifyDBClusterConfigInXMLRequest &) = default ;
    ModifyDBClusterConfigInXMLRequest& operator=(ModifyDBClusterConfigInXMLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->DBClusterId_ == nullptr && this->reason_ == nullptr && this->regionId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyDBClusterConfigInXMLRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterConfigInXMLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyDBClusterConfigInXMLRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterConfigInXMLRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The configuration parameters to modify. Call the [DescribeDBClusterConfigInXML](https://help.aliyun.com/document_detail/452210.html) operation to query the current configuration parameters. Then, modify the returned parameters.
    // 
    // > When you modify a parameter, you must include all other configuration parameters in the request. If a parameter is not included, it retains its initial value or the modification fails.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The cluster ID. Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query the IDs of all clusters in a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The reason for the modification.
    shared_ptr<string> reason_ {};
    // The region ID. Call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query available region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
