// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Committer, committer_);
      DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PluginExtraData, pluginExtraData_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(RelatedUserNickList, relatedUserNickList_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Committer, committer_);
      DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PluginExtraData, pluginExtraData_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(RelatedUserNickList, relatedUserNickList_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->committer_ != nullptr && this->committerId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->pluginExtraData_ != nullptr && this->pluginParam_ != nullptr && this->pluginType_ != nullptr && this->relatedUserList_ != nullptr && this->relatedUserNickList_ != nullptr
        && this->statusCode_ != nullptr && this->statusDesc_ != nullptr && this->workflowInstanceId_ != nullptr && this->workflowStatusDesc_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // committer Field Functions 
    bool hasCommitter() const { return this->committer_ != nullptr;};
    void deleteCommitter() { this->committer_ = nullptr;};
    inline string committer() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


    // committerId Field Functions 
    bool hasCommitterId() const { return this->committerId_ != nullptr;};
    void deleteCommitterId() { this->committerId_ = nullptr;};
    inline int64_t committerId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pluginExtraData Field Functions 
    bool hasPluginExtraData() const { return this->pluginExtraData_ != nullptr;};
    void deletePluginExtraData() { this->pluginExtraData_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData & pluginExtraData() const { DARABONBA_PTR_GET_CONST(pluginExtraData_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData pluginExtraData() { DARABONBA_PTR_GET(pluginExtraData_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setPluginExtraData(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData & pluginExtraData) { DARABONBA_PTR_SET_VALUE(pluginExtraData_, pluginExtraData) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setPluginExtraData(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData && pluginExtraData) { DARABONBA_PTR_SET_RVALUE(pluginExtraData_, pluginExtraData) };


    // pluginParam Field Functions 
    bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
    void deletePluginParam() { this->pluginParam_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam & pluginParam() const { DARABONBA_PTR_GET_CONST(pluginParam_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam pluginParam() { DARABONBA_PTR_GET(pluginParam_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setPluginParam(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam & pluginParam) { DARABONBA_PTR_SET_VALUE(pluginParam_, pluginParam) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setPluginParam(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam && pluginParam) { DARABONBA_PTR_SET_RVALUE(pluginParam_, pluginParam) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // relatedUserNickList Field Functions 
    bool hasRelatedUserNickList() const { return this->relatedUserNickList_ != nullptr;};
    void deleteRelatedUserNickList() { this->relatedUserNickList_ = nullptr;};
    inline const vector<string> & relatedUserNickList() const { DARABONBA_PTR_GET_CONST(relatedUserNickList_, vector<string>) };
    inline vector<string> relatedUserNickList() { DARABONBA_PTR_GET(relatedUserNickList_, vector<string>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setRelatedUserNickList(const vector<string> & relatedUserNickList) { DARABONBA_PTR_SET_VALUE(relatedUserNickList_, relatedUserNickList) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setRelatedUserNickList(vector<string> && relatedUserNickList) { DARABONBA_PTR_SET_RVALUE(relatedUserNickList_, relatedUserNickList) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowStatusDesc Field Functions 
    bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
    void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
    inline string workflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


  protected:
    // The description of the data archiving tickets.
    std::shared_ptr<string> comment_ = nullptr;
    // The user who submitted the ticket.
    std::shared_ptr<string> committer_ = nullptr;
    // The ID of the user who submitted the ticket. The ID is a user ID and not the ID of an Alibaba Cloud account.
    std::shared_ptr<int64_t> committerId_ = nullptr;
    // The time when the ticket was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the ticket was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of data archiving tickets.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The additional information about the ticket.
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData> pluginExtraData_ = nullptr;
    // The ticket creation parameter. The value is a JSON string. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam> pluginParam_ = nullptr;
    // The plug-in type that corresponds to the type of the ticket. The plug-in type for data archiving is DATA_ARCHIVE. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
    std::shared_ptr<string> pluginType_ = nullptr;
    // The user IDs related to the ticket.
    std::shared_ptr<vector<int64_t>> relatedUserList_ = nullptr;
    // The nicknames of the users that are related to the ticket.
    std::shared_ptr<vector<string>> relatedUserNickList_ = nullptr;
    // The status code of the ticket. Valid values:
    // 
    // *   **new**: newly created.
    // *   **toaudit**: being reviewed.
    // *   **Approved**: approved.
    // *   **reject**: rejected.
    // *   **processing**: being executed.
    // *   **Success**: successful.
    // *   **closed**: disabled.
    std::shared_ptr<string> statusCode_ = nullptr;
    // The status description of the ticket.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The ID of the approval process. You can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/144642.html) operation to obtain the ID of the approval process.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
    // The description of the approval process.
    std::shared_ptr<string> workflowStatusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
