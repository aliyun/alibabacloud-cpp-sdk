// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLOPTIMIZEADVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLOPTIMIZEADVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlOptimizeAdviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlOptimizeAdviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(EndDt, endDt_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartDt, startDt_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlOptimizeAdviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(EndDt, endDt_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartDt, startDt_);
    };
    GetSqlOptimizeAdviceRequest() = default ;
    GetSqlOptimizeAdviceRequest(const GetSqlOptimizeAdviceRequest &) = default ;
    GetSqlOptimizeAdviceRequest(GetSqlOptimizeAdviceRequest &&) = default ;
    GetSqlOptimizeAdviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlOptimizeAdviceRequest() = default ;
    GetSqlOptimizeAdviceRequest& operator=(const GetSqlOptimizeAdviceRequest &) = default ;
    GetSqlOptimizeAdviceRequest& operator=(GetSqlOptimizeAdviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->endDt_ == nullptr && this->engine_ == nullptr && this->instanceIds_ == nullptr && this->region_ == nullptr && this->startDt_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetSqlOptimizeAdviceRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // endDt Field Functions 
    bool hasEndDt() const { return this->endDt_ != nullptr;};
    void deleteEndDt() { this->endDt_ = nullptr;};
    inline string getEndDt() const { DARABONBA_PTR_GET_DEFAULT(endDt_, "") };
    inline GetSqlOptimizeAdviceRequest& setEndDt(string endDt) { DARABONBA_PTR_SET_VALUE(endDt_, endDt) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetSqlOptimizeAdviceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetSqlOptimizeAdviceRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetSqlOptimizeAdviceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startDt Field Functions 
    bool hasStartDt() const { return this->startDt_ != nullptr;};
    void deleteStartDt() { this->startDt_ = nullptr;};
    inline string getStartDt() const { DARABONBA_PTR_GET_DEFAULT(startDt_, "") };
    inline GetSqlOptimizeAdviceRequest& setStartDt(string startDt) { DARABONBA_PTR_SET_VALUE(startDt_, startDt) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The end date of the time range to query. Specify the date in the *yyyyMMdd* format. The time must be in UTC.
    // 
    // *   The default value of this parameter is one day before the current day.
    // *   The value must be earlier than the current day. The interval between the start date and the end date cannot exceed 30 days.
    shared_ptr<string> endDt_ {};
    // The database engine. Valid values:
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL.
    // *   **PolarDBMySQL**: PolarDB for MySQL.
    shared_ptr<string> engine_ {};
    // The instance ID.
    // 
    // >  You must specify the instance ID only if your database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    shared_ptr<string> instanceIds_ {};
    // The region in which the instance resides. Valid values:
    // 
    // *   **cn-china**: Chinese mainland.
    // *   **cn-hongkong**: China (Hong Kong).
    // *   **ap-southeast-1**: Singapore.
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region specified by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect, and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  If your instances reside in the regions inside the Chinese mainland, set this parameter to **cn-china**.
    shared_ptr<string> region_ {};
    // The start date of the time range to query. Specify the date in the *yyyyMMdd* format. The time must be in UTC.
    // 
    // *   The default value of this parameter is one day before the current day.
    // *   The value must be earlier than the current day.
    shared_ptr<string> startDt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
