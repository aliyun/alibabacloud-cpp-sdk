// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATEDBFORHBASEHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELATEDBFORHBASEHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class RelateDbForHBaseHaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelateDbForHBaseHaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HaActive, haActive_);
      DARABONBA_PTR_TO_JSON(HaActiveClusterKey, haActiveClusterKey_);
      DARABONBA_PTR_TO_JSON(HaActiveDBType, haActiveDBType_);
      DARABONBA_PTR_TO_JSON(HaActiveHbaseFsDir, haActiveHbaseFsDir_);
      DARABONBA_PTR_TO_JSON(HaActiveHdfsUri, haActiveHdfsUri_);
      DARABONBA_PTR_TO_JSON(HaActivePassword, haActivePassword_);
      DARABONBA_PTR_TO_JSON(HaActiveUser, haActiveUser_);
      DARABONBA_PTR_TO_JSON(HaActiveVersion, haActiveVersion_);
      DARABONBA_PTR_TO_JSON(HaMigrateType, haMigrateType_);
      DARABONBA_PTR_TO_JSON(HaStandby, haStandby_);
      DARABONBA_PTR_TO_JSON(HaStandbyClusterKey, haStandbyClusterKey_);
      DARABONBA_PTR_TO_JSON(HaStandbyDBType, haStandbyDBType_);
      DARABONBA_PTR_TO_JSON(HaStandbyHbaseFsDir, haStandbyHbaseFsDir_);
      DARABONBA_PTR_TO_JSON(HaStandbyHdfsUri, haStandbyHdfsUri_);
      DARABONBA_PTR_TO_JSON(HaStandbyPassword, haStandbyPassword_);
      DARABONBA_PTR_TO_JSON(HaStandbyUser, haStandbyUser_);
      DARABONBA_PTR_TO_JSON(HaStandbyVersion, haStandbyVersion_);
      DARABONBA_PTR_TO_JSON(HaTables, haTables_);
      DARABONBA_PTR_TO_JSON(IsActiveStandard, isActiveStandard_);
      DARABONBA_PTR_TO_JSON(IsStandbyStandard, isStandbyStandard_);
    };
    friend void from_json(const Darabonba::Json& j, RelateDbForHBaseHaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HaActive, haActive_);
      DARABONBA_PTR_FROM_JSON(HaActiveClusterKey, haActiveClusterKey_);
      DARABONBA_PTR_FROM_JSON(HaActiveDBType, haActiveDBType_);
      DARABONBA_PTR_FROM_JSON(HaActiveHbaseFsDir, haActiveHbaseFsDir_);
      DARABONBA_PTR_FROM_JSON(HaActiveHdfsUri, haActiveHdfsUri_);
      DARABONBA_PTR_FROM_JSON(HaActivePassword, haActivePassword_);
      DARABONBA_PTR_FROM_JSON(HaActiveUser, haActiveUser_);
      DARABONBA_PTR_FROM_JSON(HaActiveVersion, haActiveVersion_);
      DARABONBA_PTR_FROM_JSON(HaMigrateType, haMigrateType_);
      DARABONBA_PTR_FROM_JSON(HaStandby, haStandby_);
      DARABONBA_PTR_FROM_JSON(HaStandbyClusterKey, haStandbyClusterKey_);
      DARABONBA_PTR_FROM_JSON(HaStandbyDBType, haStandbyDBType_);
      DARABONBA_PTR_FROM_JSON(HaStandbyHbaseFsDir, haStandbyHbaseFsDir_);
      DARABONBA_PTR_FROM_JSON(HaStandbyHdfsUri, haStandbyHdfsUri_);
      DARABONBA_PTR_FROM_JSON(HaStandbyPassword, haStandbyPassword_);
      DARABONBA_PTR_FROM_JSON(HaStandbyUser, haStandbyUser_);
      DARABONBA_PTR_FROM_JSON(HaStandbyVersion, haStandbyVersion_);
      DARABONBA_PTR_FROM_JSON(HaTables, haTables_);
      DARABONBA_PTR_FROM_JSON(IsActiveStandard, isActiveStandard_);
      DARABONBA_PTR_FROM_JSON(IsStandbyStandard, isStandbyStandard_);
    };
    RelateDbForHBaseHaRequest() = default ;
    RelateDbForHBaseHaRequest(const RelateDbForHBaseHaRequest &) = default ;
    RelateDbForHBaseHaRequest(RelateDbForHBaseHaRequest &&) = default ;
    RelateDbForHBaseHaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelateDbForHBaseHaRequest() = default ;
    RelateDbForHBaseHaRequest& operator=(const RelateDbForHBaseHaRequest &) = default ;
    RelateDbForHBaseHaRequest& operator=(RelateDbForHBaseHaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->haActive_ == nullptr && this->haActiveClusterKey_ == nullptr && this->haActiveDBType_ == nullptr && this->haActiveHbaseFsDir_ == nullptr && this->haActiveHdfsUri_ == nullptr
        && this->haActivePassword_ == nullptr && this->haActiveUser_ == nullptr && this->haActiveVersion_ == nullptr && this->haMigrateType_ == nullptr && this->haStandby_ == nullptr
        && this->haStandbyClusterKey_ == nullptr && this->haStandbyDBType_ == nullptr && this->haStandbyHbaseFsDir_ == nullptr && this->haStandbyHdfsUri_ == nullptr && this->haStandbyPassword_ == nullptr
        && this->haStandbyUser_ == nullptr && this->haStandbyVersion_ == nullptr && this->haTables_ == nullptr && this->isActiveStandard_ == nullptr && this->isStandbyStandard_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RelateDbForHBaseHaRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // haActive Field Functions 
    bool hasHaActive() const { return this->haActive_ != nullptr;};
    void deleteHaActive() { this->haActive_ = nullptr;};
    inline string getHaActive() const { DARABONBA_PTR_GET_DEFAULT(haActive_, "") };
    inline RelateDbForHBaseHaRequest& setHaActive(string haActive) { DARABONBA_PTR_SET_VALUE(haActive_, haActive) };


    // haActiveClusterKey Field Functions 
    bool hasHaActiveClusterKey() const { return this->haActiveClusterKey_ != nullptr;};
    void deleteHaActiveClusterKey() { this->haActiveClusterKey_ = nullptr;};
    inline string getHaActiveClusterKey() const { DARABONBA_PTR_GET_DEFAULT(haActiveClusterKey_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveClusterKey(string haActiveClusterKey) { DARABONBA_PTR_SET_VALUE(haActiveClusterKey_, haActiveClusterKey) };


    // haActiveDBType Field Functions 
    bool hasHaActiveDBType() const { return this->haActiveDBType_ != nullptr;};
    void deleteHaActiveDBType() { this->haActiveDBType_ = nullptr;};
    inline string getHaActiveDBType() const { DARABONBA_PTR_GET_DEFAULT(haActiveDBType_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveDBType(string haActiveDBType) { DARABONBA_PTR_SET_VALUE(haActiveDBType_, haActiveDBType) };


    // haActiveHbaseFsDir Field Functions 
    bool hasHaActiveHbaseFsDir() const { return this->haActiveHbaseFsDir_ != nullptr;};
    void deleteHaActiveHbaseFsDir() { this->haActiveHbaseFsDir_ = nullptr;};
    inline string getHaActiveHbaseFsDir() const { DARABONBA_PTR_GET_DEFAULT(haActiveHbaseFsDir_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveHbaseFsDir(string haActiveHbaseFsDir) { DARABONBA_PTR_SET_VALUE(haActiveHbaseFsDir_, haActiveHbaseFsDir) };


    // haActiveHdfsUri Field Functions 
    bool hasHaActiveHdfsUri() const { return this->haActiveHdfsUri_ != nullptr;};
    void deleteHaActiveHdfsUri() { this->haActiveHdfsUri_ = nullptr;};
    inline string getHaActiveHdfsUri() const { DARABONBA_PTR_GET_DEFAULT(haActiveHdfsUri_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveHdfsUri(string haActiveHdfsUri) { DARABONBA_PTR_SET_VALUE(haActiveHdfsUri_, haActiveHdfsUri) };


    // haActivePassword Field Functions 
    bool hasHaActivePassword() const { return this->haActivePassword_ != nullptr;};
    void deleteHaActivePassword() { this->haActivePassword_ = nullptr;};
    inline string getHaActivePassword() const { DARABONBA_PTR_GET_DEFAULT(haActivePassword_, "") };
    inline RelateDbForHBaseHaRequest& setHaActivePassword(string haActivePassword) { DARABONBA_PTR_SET_VALUE(haActivePassword_, haActivePassword) };


    // haActiveUser Field Functions 
    bool hasHaActiveUser() const { return this->haActiveUser_ != nullptr;};
    void deleteHaActiveUser() { this->haActiveUser_ = nullptr;};
    inline string getHaActiveUser() const { DARABONBA_PTR_GET_DEFAULT(haActiveUser_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveUser(string haActiveUser) { DARABONBA_PTR_SET_VALUE(haActiveUser_, haActiveUser) };


    // haActiveVersion Field Functions 
    bool hasHaActiveVersion() const { return this->haActiveVersion_ != nullptr;};
    void deleteHaActiveVersion() { this->haActiveVersion_ = nullptr;};
    inline string getHaActiveVersion() const { DARABONBA_PTR_GET_DEFAULT(haActiveVersion_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveVersion(string haActiveVersion) { DARABONBA_PTR_SET_VALUE(haActiveVersion_, haActiveVersion) };


    // haMigrateType Field Functions 
    bool hasHaMigrateType() const { return this->haMigrateType_ != nullptr;};
    void deleteHaMigrateType() { this->haMigrateType_ = nullptr;};
    inline string getHaMigrateType() const { DARABONBA_PTR_GET_DEFAULT(haMigrateType_, "") };
    inline RelateDbForHBaseHaRequest& setHaMigrateType(string haMigrateType) { DARABONBA_PTR_SET_VALUE(haMigrateType_, haMigrateType) };


    // haStandby Field Functions 
    bool hasHaStandby() const { return this->haStandby_ != nullptr;};
    void deleteHaStandby() { this->haStandby_ = nullptr;};
    inline string getHaStandby() const { DARABONBA_PTR_GET_DEFAULT(haStandby_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandby(string haStandby) { DARABONBA_PTR_SET_VALUE(haStandby_, haStandby) };


    // haStandbyClusterKey Field Functions 
    bool hasHaStandbyClusterKey() const { return this->haStandbyClusterKey_ != nullptr;};
    void deleteHaStandbyClusterKey() { this->haStandbyClusterKey_ = nullptr;};
    inline string getHaStandbyClusterKey() const { DARABONBA_PTR_GET_DEFAULT(haStandbyClusterKey_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyClusterKey(string haStandbyClusterKey) { DARABONBA_PTR_SET_VALUE(haStandbyClusterKey_, haStandbyClusterKey) };


    // haStandbyDBType Field Functions 
    bool hasHaStandbyDBType() const { return this->haStandbyDBType_ != nullptr;};
    void deleteHaStandbyDBType() { this->haStandbyDBType_ = nullptr;};
    inline string getHaStandbyDBType() const { DARABONBA_PTR_GET_DEFAULT(haStandbyDBType_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyDBType(string haStandbyDBType) { DARABONBA_PTR_SET_VALUE(haStandbyDBType_, haStandbyDBType) };


    // haStandbyHbaseFsDir Field Functions 
    bool hasHaStandbyHbaseFsDir() const { return this->haStandbyHbaseFsDir_ != nullptr;};
    void deleteHaStandbyHbaseFsDir() { this->haStandbyHbaseFsDir_ = nullptr;};
    inline string getHaStandbyHbaseFsDir() const { DARABONBA_PTR_GET_DEFAULT(haStandbyHbaseFsDir_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyHbaseFsDir(string haStandbyHbaseFsDir) { DARABONBA_PTR_SET_VALUE(haStandbyHbaseFsDir_, haStandbyHbaseFsDir) };


    // haStandbyHdfsUri Field Functions 
    bool hasHaStandbyHdfsUri() const { return this->haStandbyHdfsUri_ != nullptr;};
    void deleteHaStandbyHdfsUri() { this->haStandbyHdfsUri_ = nullptr;};
    inline string getHaStandbyHdfsUri() const { DARABONBA_PTR_GET_DEFAULT(haStandbyHdfsUri_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyHdfsUri(string haStandbyHdfsUri) { DARABONBA_PTR_SET_VALUE(haStandbyHdfsUri_, haStandbyHdfsUri) };


    // haStandbyPassword Field Functions 
    bool hasHaStandbyPassword() const { return this->haStandbyPassword_ != nullptr;};
    void deleteHaStandbyPassword() { this->haStandbyPassword_ = nullptr;};
    inline string getHaStandbyPassword() const { DARABONBA_PTR_GET_DEFAULT(haStandbyPassword_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyPassword(string haStandbyPassword) { DARABONBA_PTR_SET_VALUE(haStandbyPassword_, haStandbyPassword) };


    // haStandbyUser Field Functions 
    bool hasHaStandbyUser() const { return this->haStandbyUser_ != nullptr;};
    void deleteHaStandbyUser() { this->haStandbyUser_ = nullptr;};
    inline string getHaStandbyUser() const { DARABONBA_PTR_GET_DEFAULT(haStandbyUser_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyUser(string haStandbyUser) { DARABONBA_PTR_SET_VALUE(haStandbyUser_, haStandbyUser) };


    // haStandbyVersion Field Functions 
    bool hasHaStandbyVersion() const { return this->haStandbyVersion_ != nullptr;};
    void deleteHaStandbyVersion() { this->haStandbyVersion_ = nullptr;};
    inline string getHaStandbyVersion() const { DARABONBA_PTR_GET_DEFAULT(haStandbyVersion_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyVersion(string haStandbyVersion) { DARABONBA_PTR_SET_VALUE(haStandbyVersion_, haStandbyVersion) };


    // haTables Field Functions 
    bool hasHaTables() const { return this->haTables_ != nullptr;};
    void deleteHaTables() { this->haTables_ = nullptr;};
    inline string getHaTables() const { DARABONBA_PTR_GET_DEFAULT(haTables_, "") };
    inline RelateDbForHBaseHaRequest& setHaTables(string haTables) { DARABONBA_PTR_SET_VALUE(haTables_, haTables) };


    // isActiveStandard Field Functions 
    bool hasIsActiveStandard() const { return this->isActiveStandard_ != nullptr;};
    void deleteIsActiveStandard() { this->isActiveStandard_ = nullptr;};
    inline bool getIsActiveStandard() const { DARABONBA_PTR_GET_DEFAULT(isActiveStandard_, false) };
    inline RelateDbForHBaseHaRequest& setIsActiveStandard(bool isActiveStandard) { DARABONBA_PTR_SET_VALUE(isActiveStandard_, isActiveStandard) };


    // isStandbyStandard Field Functions 
    bool hasIsStandbyStandard() const { return this->isStandbyStandard_ != nullptr;};
    void deleteIsStandbyStandard() { this->isStandbyStandard_ = nullptr;};
    inline bool getIsStandbyStandard() const { DARABONBA_PTR_GET_DEFAULT(isStandbyStandard_, false) };
    inline RelateDbForHBaseHaRequest& setIsStandbyStandard(bool isStandbyStandard) { DARABONBA_PTR_SET_VALUE(isStandbyStandard_, isStandbyStandard) };


  protected:
    // The ID of the BDS cluster. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) operation to obtain the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The instance ID of the primary instance.
    // 
    // This parameter is required.
    shared_ptr<string> haActive_ {};
    // The ZooKeeper address of the primary instance. This parameter is required when the primary instance is a non-standard instance (IsActiveStandard is set to false).
    shared_ptr<string> haActiveClusterKey_ {};
    // The cluster type of the primary instance. Valid values: **HBase** and **HBaseue**.
    // 
    // This parameter is required.
    shared_ptr<string> haActiveDBType_ {};
    // The HDFS directory of the primary instance. This parameter is required when the primary instance is a non-standard instance (IsActiveStandard is set to false).
    shared_ptr<string> haActiveHbaseFsDir_ {};
    // The HDFS URI of the primary instance. This parameter is required when the primary instance is a non-standard instance (IsActiveStandard is set to false).
    shared_ptr<string> haActiveHdfsUri_ {};
    // The password that corresponds to the username of the primary instance. This parameter is required when the primary instance is **HBaseue**.
    shared_ptr<string> haActivePassword_ {};
    // The username of the primary instance. This parameter is required when the primary instance is **HBaseue**.
    shared_ptr<string> haActiveUser_ {};
    // The database engine version of the primary instance. This parameter is required when the primary instance is a non-standard instance (IsActiveStandard is set to false). Valid values:
    // - **HBase1x**: HBase 1.x.
    // - **HBase2x**: HBase 2.x.
    // - **HBaseUE**: HBaseue.
    shared_ptr<string> haActiveVersion_ {};
    // The synchronization type. Valid values:
    // - **CLUSTER**: instance-level synchronization.
    // - **TABLE**: table-level synchronization.
    // - **SKIP**: no synchronization required.
    // 
    // This parameter is required.
    shared_ptr<string> haMigrateType_ {};
    // The ID of the secondary instance cluster.
    // 
    // This parameter is required.
    shared_ptr<string> haStandby_ {};
    // The ZooKeeper address of the secondary instance. This parameter is required when the secondary instance is a non-standard instance (IsStandbyStandard is set to false).
    shared_ptr<string> haStandbyClusterKey_ {};
    // The cluster type of the secondary instance. Valid values: **HBase** and **HBaseue**.
    // 
    // This parameter is required.
    shared_ptr<string> haStandbyDBType_ {};
    // The HDFS directory of the secondary instance. This parameter is required when the secondary instance is a non-standard instance (IsStandbyStandard is set to false).
    shared_ptr<string> haStandbyHbaseFsDir_ {};
    // The HDFS URI of the secondary instance. This parameter is required when the secondary instance is a non-standard instance (IsStandbyStandard is set to false).
    shared_ptr<string> haStandbyHdfsUri_ {};
    // The password that corresponds to the username of the secondary instance. This parameter is required when the secondary instance is **hbaseue**.
    shared_ptr<string> haStandbyPassword_ {};
    // The username of the secondary instance. This parameter is required when the secondary instance is **hbaseue**.
    shared_ptr<string> haStandbyUser_ {};
    // The database engine version of the secondary instance. This parameter is required when the secondary instance is a non-standard instance (IsStandbyStandard is set to false). Valid values:
    // - **HBase1x**: HBase 1.x.
    // - **HBase2x**: HBase 2.x.
    // - **HBaseUE**: HBaseue.
    shared_ptr<string> haStandbyVersion_ {};
    // The tables to synchronize. This parameter is required when HaMigrateType is set to TABLE. Separate multiple tables with commas (,).
    shared_ptr<string> haTables_ {};
    // Specifies whether the primary instance is a standard instance. Set this parameter to **true** for a standard instance.
    // 
    // This parameter is required.
    shared_ptr<bool> isActiveStandard_ {};
    // Specifies whether the secondary instance is a standard instance. Set this parameter to **true** for a standard instance.
    // 
    // This parameter is required.
    shared_ptr<bool> isStandbyStandard_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
