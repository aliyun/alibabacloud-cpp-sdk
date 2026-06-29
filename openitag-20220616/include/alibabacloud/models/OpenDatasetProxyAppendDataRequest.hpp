// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDATASETPROXYAPPENDDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENDATASETPROXYAPPENDDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class OpenDatasetProxyAppendDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDatasetProxyAppendDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(DataMeta, dataMeta_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDatasetProxyAppendDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(DataMeta, dataMeta_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
    };
    OpenDatasetProxyAppendDataRequest() = default ;
    OpenDatasetProxyAppendDataRequest(const OpenDatasetProxyAppendDataRequest &) = default ;
    OpenDatasetProxyAppendDataRequest(OpenDatasetProxyAppendDataRequest &&) = default ;
    OpenDatasetProxyAppendDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDatasetProxyAppendDataRequest() = default ;
    OpenDatasetProxyAppendDataRequest& operator=(const OpenDatasetProxyAppendDataRequest &) = default ;
    OpenDatasetProxyAppendDataRequest& operator=(OpenDatasetProxyAppendDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->dataMeta_ == nullptr && this->taskId_ == nullptr && this->traceId_ == nullptr && this->UUID_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline OpenDatasetProxyAppendDataRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // dataMeta Field Functions 
    bool hasDataMeta() const { return this->dataMeta_ != nullptr;};
    void deleteDataMeta() { this->dataMeta_ = nullptr;};
    inline const vector<map<string, string>> & getDataMeta() const { DARABONBA_PTR_GET_CONST(dataMeta_, vector<map<string, string>>) };
    inline vector<map<string, string>> getDataMeta() { DARABONBA_PTR_GET(dataMeta_, vector<map<string, string>>) };
    inline OpenDatasetProxyAppendDataRequest& setDataMeta(const vector<map<string, string>> & dataMeta) { DARABONBA_PTR_SET_VALUE(dataMeta_, dataMeta) };
    inline OpenDatasetProxyAppendDataRequest& setDataMeta(vector<map<string, string>> && dataMeta) { DARABONBA_PTR_SET_RVALUE(dataMeta_, dataMeta) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline OpenDatasetProxyAppendDataRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline OpenDatasetProxyAppendDataRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline OpenDatasetProxyAppendDataRequest& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


  protected:
    shared_ptr<string> bizCode_ {};
    // A list of data records. A single invocation can contain up to 100 records. Each element in the array is a map.
    shared_ptr<vector<map<string, string>>> dataMeta_ {};
    // Task ID, indicating the task to which data is appended.
    shared_ptr<string> taskId_ {};
    // TraceId
    shared_ptr<string> traceId_ {};
    // Unique identifier ID, controlled by the business side.
    shared_ptr<string> UUID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
