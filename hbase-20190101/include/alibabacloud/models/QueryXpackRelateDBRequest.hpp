// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYXPACKRELATEDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYXPACKRELATEDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class QueryXpackRelateDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryXpackRelateDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HasSingleNode, hasSingleNode_);
      DARABONBA_PTR_TO_JSON(RelateDbType, relateDbType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryXpackRelateDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HasSingleNode, hasSingleNode_);
      DARABONBA_PTR_FROM_JSON(RelateDbType, relateDbType_);
    };
    QueryXpackRelateDBRequest() = default ;
    QueryXpackRelateDBRequest(const QueryXpackRelateDBRequest &) = default ;
    QueryXpackRelateDBRequest(QueryXpackRelateDBRequest &&) = default ;
    QueryXpackRelateDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryXpackRelateDBRequest() = default ;
    QueryXpackRelateDBRequest& operator=(const QueryXpackRelateDBRequest &) = default ;
    QueryXpackRelateDBRequest& operator=(QueryXpackRelateDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->hasSingleNode_ == nullptr && this->relateDbType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryXpackRelateDBRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hasSingleNode Field Functions 
    bool hasHasSingleNode() const { return this->hasSingleNode_ != nullptr;};
    void deleteHasSingleNode() { this->hasSingleNode_ = nullptr;};
    inline bool getHasSingleNode() const { DARABONBA_PTR_GET_DEFAULT(hasSingleNode_, false) };
    inline QueryXpackRelateDBRequest& setHasSingleNode(bool hasSingleNode) { DARABONBA_PTR_SET_VALUE(hasSingleNode_, hasSingleNode) };


    // relateDbType Field Functions 
    bool hasRelateDbType() const { return this->relateDbType_ != nullptr;};
    void deleteRelateDbType() { this->relateDbType_ = nullptr;};
    inline string getRelateDbType() const { DARABONBA_PTR_GET_DEFAULT(relateDbType_, "") };
    inline QueryXpackRelateDBRequest& setRelateDbType(string relateDbType) { DARABONBA_PTR_SET_VALUE(relateDbType_, relateDbType) };


  protected:
    // The instance ID of the current Spark instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is valid only when bds queries associated HBase instances.
    // 
    // - true: Single-node HBase instances are included.
    // 
    // - false: Single-node HBase instances are not included. This parameter is optional. For backward compatibility, single-node HBase instances are included when this parameter is left empty.
    shared_ptr<bool> hasSingleNode_ {};
    // The type of database to query for association.
    // 
    // - spark can be associated with hdfs, hbase, mongodb, mysql, polardb_mysql, redis, and geomesa.
    // - bds can be associated with hbase, spark, and hbaseue.
    // 
    // This parameter is required.
    shared_ptr<string> relateDbType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
