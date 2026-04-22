// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALSCRIPTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALSCRIPTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListHistoricalScriptReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalScriptReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptIds, scriptIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalScriptReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptIds, scriptIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListHistoricalScriptReportRequest() = default ;
    ListHistoricalScriptReportRequest(const ListHistoricalScriptReportRequest &) = default ;
    ListHistoricalScriptReportRequest(ListHistoricalScriptReportRequest &&) = default ;
    ListHistoricalScriptReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalScriptReportRequest() = default ;
    ListHistoricalScriptReportRequest& operator=(const ListHistoricalScriptReportRequest &) = default ;
    ListHistoricalScriptReportRequest& operator=(ListHistoricalScriptReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scriptIds_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListHistoricalScriptReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHistoricalScriptReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHistoricalScriptReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHistoricalScriptReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptIds Field Functions 
    bool hasScriptIds() const { return this->scriptIds_ != nullptr;};
    void deleteScriptIds() { this->scriptIds_ = nullptr;};
    inline const vector<string> & getScriptIds() const { DARABONBA_PTR_GET_CONST(scriptIds_, vector<string>) };
    inline vector<string> getScriptIds() { DARABONBA_PTR_GET(scriptIds_, vector<string>) };
    inline ListHistoricalScriptReportRequest& setScriptIds(const vector<string> & scriptIds) { DARABONBA_PTR_SET_VALUE(scriptIds_, scriptIds) };
    inline ListHistoricalScriptReportRequest& setScriptIds(vector<string> && scriptIds) { DARABONBA_PTR_SET_RVALUE(scriptIds_, scriptIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListHistoricalScriptReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<string>> scriptIds_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
