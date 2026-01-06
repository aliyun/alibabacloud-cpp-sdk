// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARTITIONSHEATMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARTITIONSHEATMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetPartitionsHeatmapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPartitionsHeatmapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPartitionsHeatmapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetPartitionsHeatmapRequest() = default ;
    GetPartitionsHeatmapRequest(const GetPartitionsHeatmapRequest &) = default ;
    GetPartitionsHeatmapRequest(GetPartitionsHeatmapRequest &&) = default ;
    GetPartitionsHeatmapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPartitionsHeatmapRequest() = default ;
    GetPartitionsHeatmapRequest& operator=(const GetPartitionsHeatmapRequest &) = default ;
    GetPartitionsHeatmapRequest& operator=(GetPartitionsHeatmapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceId_ == nullptr && this->timeRange_ == nullptr && this->type_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetPartitionsHeatmapRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPartitionsHeatmapRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline GetPartitionsHeatmapRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPartitionsHeatmapRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The time range to be queried. Valid values:
    // 
    // *   **LAST_ONE_HOURS**: the last hour.
    // *   **LAST_SIX_HOURS**: the last six hours.
    // *   **LAST_ONE_DAYS**: the last day.
    // *   **LAST_THREE_DAYS**: the last three days.
    // *   **LAST_SEVEN_DAYS**: the last seven days.
    shared_ptr<string> timeRange_ {};
    // The type of the data to be queried. Valid values:
    // 
    // *   **READ_ROWS**: the read rows.
    // *   **WRITTEN_ROWS**: the written rows.
    // *   **READ_WRITTEN_ROWS**: the read and written rows.
    // *   **UPDATE_ROWS**: the updated rows.
    // *   **INSERTED_ROWS**: the inserted rows.
    // *   **DELETED_ROWS**: the deleted rows.
    // *   **READ_ROWS_WITH_DN**: the read rows returned from a data node.
    // *   **WRITTEN_ROWS_WITH_DN**: the written rows returned from a data node.
    // *   **READ_WRITTEN_ROWS_WITH_DN**: the read and written rows returned from a data node.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
