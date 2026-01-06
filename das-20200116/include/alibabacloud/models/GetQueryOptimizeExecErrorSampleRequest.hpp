// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeExecErrorSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetQueryOptimizeExecErrorSampleRequest() = default ;
    GetQueryOptimizeExecErrorSampleRequest(const GetQueryOptimizeExecErrorSampleRequest &) = default ;
    GetQueryOptimizeExecErrorSampleRequest(GetQueryOptimizeExecErrorSampleRequest &&) = default ;
    GetQueryOptimizeExecErrorSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorSampleRequest() = default ;
    GetQueryOptimizeExecErrorSampleRequest& operator=(const GetQueryOptimizeExecErrorSampleRequest &) = default ;
    GetQueryOptimizeExecErrorSampleRequest& operator=(GetQueryOptimizeExecErrorSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && this->instanceId_ == nullptr && this->sqlId_ == nullptr && this->time_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeExecErrorSampleRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueryOptimizeExecErrorSampleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeExecErrorSampleRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetQueryOptimizeExecErrorSampleRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PolarDBMySQL**
    // *   **PostgreSQL**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The SQL template ID. You can call the [GetQueryOptimizeExecErrorStats](https://help.aliyun.com/document_detail/405235.html) operation to obtain the SQL template ID.
    // 
    // This parameter is required.
    shared_ptr<string> sqlId_ {};
    // The date to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
