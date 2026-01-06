// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
    };
    GetQueryOptimizeTagRequest() = default ;
    GetQueryOptimizeTagRequest(const GetQueryOptimizeTagRequest &) = default ;
    GetQueryOptimizeTagRequest(GetQueryOptimizeTagRequest &&) = default ;
    GetQueryOptimizeTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeTagRequest() = default ;
    GetQueryOptimizeTagRequest& operator=(const GetQueryOptimizeTagRequest &) = default ;
    GetQueryOptimizeTagRequest& operator=(GetQueryOptimizeTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && this->instanceId_ == nullptr && this->sqlId_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeTagRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueryOptimizeTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeTagRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


  protected:
    // The database engine. Valid values:
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL
    // *   **PolarDBMySQL**: PolarDB for MySQL
    // *   **PostgreSQL**: ApsaraDB RDS for PostgreSQL
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The SQL template ID. You can call the [GetQueryOptimizeDataStats](https://help.aliyun.com/document_detail/405261.html) operation to query the SQL template ID.
    // 
    // This parameter is required.
    shared_ptr<string> sqlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
