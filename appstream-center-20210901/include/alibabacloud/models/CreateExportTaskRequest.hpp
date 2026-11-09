// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportFields, exportFields_);
      DARABONBA_PTR_TO_JSON(QueryParamJson, queryParamJson_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportFields, exportFields_);
      DARABONBA_PTR_FROM_JSON(QueryParamJson, queryParamJson_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateExportTaskRequest() = default ;
    CreateExportTaskRequest(const CreateExportTaskRequest &) = default ;
    CreateExportTaskRequest(CreateExportTaskRequest &&) = default ;
    CreateExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExportTaskRequest() = default ;
    CreateExportTaskRequest& operator=(const CreateExportTaskRequest &) = default ;
    CreateExportTaskRequest& operator=(CreateExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportFields_ == nullptr
        && this->queryParamJson_ == nullptr && this->taskType_ == nullptr; };
    // exportFields Field Functions 
    bool hasExportFields() const { return this->exportFields_ != nullptr;};
    void deleteExportFields() { this->exportFields_ = nullptr;};
    inline const vector<string> & getExportFields() const { DARABONBA_PTR_GET_CONST(exportFields_, vector<string>) };
    inline vector<string> getExportFields() { DARABONBA_PTR_GET(exportFields_, vector<string>) };
    inline CreateExportTaskRequest& setExportFields(const vector<string> & exportFields) { DARABONBA_PTR_SET_VALUE(exportFields_, exportFields) };
    inline CreateExportTaskRequest& setExportFields(vector<string> && exportFields) { DARABONBA_PTR_SET_RVALUE(exportFields_, exportFields) };


    // queryParamJson Field Functions 
    bool hasQueryParamJson() const { return this->queryParamJson_ != nullptr;};
    void deleteQueryParamJson() { this->queryParamJson_ = nullptr;};
    inline string getQueryParamJson() const { DARABONBA_PTR_GET_DEFAULT(queryParamJson_, "") };
    inline CreateExportTaskRequest& setQueryParamJson(string queryParamJson) { DARABONBA_PTR_SET_VALUE(queryParamJson_, queryParamJson) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateExportTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The list of field codes for the export columns. This parameter is optional and applies only to WUYING_SERVER_LIST. Do not pass this parameter for other task types. You can pass up to 100 elements. The codes are case-sensitive. Leading and trailing whitespace in fields is removed, and blank elements are ignored. Duplicate codes are retained in the order of their first appearance. WuyingServerId is always the first column, and the remaining columns are exported in the order of the request. If this parameter is not passed, only WuyingServerId is exported.
    // 
    // Supported codes: WuyingServerId, WuyingServerName, Status, BizRegionId, ZoneId, OfficeSiteId, ServerInstanceType, ServerInstanceTypeId, Cpu, Memory, Image, OsType, ImageId, SystemDisk, DataDisks, NetworkInterfaceIp, PrivateIpSets, SecurityGroupIds, Bandwidth, ChargeType, SubPayType, VirtualNodePool, CreateTime, ExpiredTime, and VirtualKubeletInfo.
    // 
    // In the original RPC request, pass the values sequentially by using ExportFields.1, ExportFields.2, and so on. For example, ExportFields.1=WuyingServerId and ExportFields.2=Status.
    shared_ptr<vector<string>> exportFields_ {};
    // The JSON string serialized from the query condition object. This parameter is required and cannot be an empty string. Field names must use the following lower camel case format.
    // 
    // - WUYING_SERVER_LIST: If no filter condition is specified, pass the JSON string corresponding to {}. Only wuyingServerIdList, wuyingServerNameOrId, status, bizRegionId, zoneId, officeSiteId, serverInstanceType, imageId, chargeType, virtualNodePoolId, addVirtualNodePoolStatusList, users, networkInterfaceIp, createTimeStart, createTimeEnd, expiredTimeStart, and expiredTimeEnd are supported. The semantics of each field are the same as those in ListWuyingServer. Pagination or other unlisted fields cannot be passed. The values of wuyingServerIdList, addVirtualNodePoolStatusList, and users must be serialized into JSON array strings before the outer query object is serialized.
    // - BROWSER_BOOKMARK_LIST and BROWSER_RESTRICTED_URL_LIST: The object must and can only contain browserInstanceGroupId, and the value must be a non-empty cloud browser delivery group ID string. It cannot contain Keyword, pagination, or other fields.
    // - USER_USAGE_REPORT: Use productType, startDate, and endDate to specify the product type and query time range. You can use appInstanceGroupId, bizRegionId, userId, and connectionStatus for filtering. startDate and endDate must be in the yyyy-MM-dd HH:mm:ss format. Query parameters are parsed and verified during the asynchronous execution phase. A successful creation does not mean that all these query conditions have passed the verification.
    shared_ptr<string> queryParamJson_ {};
    // The type of the export task. This parameter is required and case-sensitive. Valid values:
    // - WUYING_SERVER_LIST: WUYING server list.
    // - USER_USAGE_REPORT: user usage report.
    // - BROWSER_BOOKMARK_LIST: cloud browser bookmark list.
    // - BROWSER_RESTRICTED_URL_LIST: cloud browser URL whitelist.
    // 
    // Different task types use different QueryParamJson query conditions. Only WUYING_SERVER_LIST supports selecting export columns by using ExportFields.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
