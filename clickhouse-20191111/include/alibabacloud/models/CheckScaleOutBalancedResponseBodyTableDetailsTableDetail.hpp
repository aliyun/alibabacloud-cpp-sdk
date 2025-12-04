// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODYTABLEDETAILSTABLEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODYTABLEDETAILSTABLEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckScaleOutBalancedResponseBodyTableDetailsTableDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail() = default ;
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail(const CheckScaleOutBalancedResponseBodyTableDetailsTableDetail &) = default ;
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail(CheckScaleOutBalancedResponseBodyTableDetailsTableDetail &&) = default ;
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckScaleOutBalancedResponseBodyTableDetailsTableDetail() = default ;
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& operator=(const CheckScaleOutBalancedResponseBodyTableDetailsTableDetail &) = default ;
    CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& operator=(CheckScaleOutBalancedResponseBodyTableDetailsTableDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && return this->database_ == nullptr && return this->detail_ == nullptr && return this->tableName_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline int32_t detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, 0) };
    inline CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& setDetail(int32_t detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CheckScaleOutBalancedResponseBodyTableDetailsTableDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The cluster. The value is fixed as **default**.
    std::shared_ptr<string> cluster_ = nullptr;
    // The database name.
    std::shared_ptr<string> database_ = nullptr;
    // The error details. Valid values:
    // 
    // *   **1**: The unique distributed table is missing.
    // *   **2**: More than one distributed table exists for the local table.
    std::shared_ptr<int32_t> detail_ = nullptr;
    // The name of the local table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
