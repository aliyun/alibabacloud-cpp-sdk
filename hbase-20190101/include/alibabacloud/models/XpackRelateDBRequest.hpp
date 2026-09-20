// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_XPACKRELATEDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_XPACKRELATEDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class XpackRelateDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const XpackRelateDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbClusterIds, dbClusterIds_);
      DARABONBA_PTR_TO_JSON(RelateDbType, relateDbType_);
    };
    friend void from_json(const Darabonba::Json& j, XpackRelateDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbClusterIds, dbClusterIds_);
      DARABONBA_PTR_FROM_JSON(RelateDbType, relateDbType_);
    };
    XpackRelateDBRequest() = default ;
    XpackRelateDBRequest(const XpackRelateDBRequest &) = default ;
    XpackRelateDBRequest(XpackRelateDBRequest &&) = default ;
    XpackRelateDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~XpackRelateDBRequest() = default ;
    XpackRelateDBRequest& operator=(const XpackRelateDBRequest &) = default ;
    XpackRelateDBRequest& operator=(XpackRelateDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dbClusterIds_ == nullptr && this->relateDbType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline XpackRelateDBRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbClusterIds Field Functions 
    bool hasDbClusterIds() const { return this->dbClusterIds_ != nullptr;};
    void deleteDbClusterIds() { this->dbClusterIds_ = nullptr;};
    inline string getDbClusterIds() const { DARABONBA_PTR_GET_DEFAULT(dbClusterIds_, "") };
    inline XpackRelateDBRequest& setDbClusterIds(string dbClusterIds) { DARABONBA_PTR_SET_VALUE(dbClusterIds_, dbClusterIds) };


    // relateDbType Field Functions 
    bool hasRelateDbType() const { return this->relateDbType_ != nullptr;};
    void deleteRelateDbType() { this->relateDbType_ = nullptr;};
    inline string getRelateDbType() const { DARABONBA_PTR_GET_DEFAULT(relateDbType_, "") };
    inline XpackRelateDBRequest& setRelateDbType(string relateDbType) { DARABONBA_PTR_SET_VALUE(relateDbType_, relateDbType) };


  protected:
    // The instance ID of the current Spark instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The instance ID of the cluster to associate.
    // 
    // This parameter is required.
    shared_ptr<string> dbClusterIds_ {};
    // The type of database to associate. Valid values:
    // - **hdfs**
    // - **hbase**
    // - **mongodb**
    // - **mysql**
    // - **polardb_mysql**
    // - **redis**
    // - **geomesa**.
    // 
    // This parameter is required.
    shared_ptr<string> relateDbType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
