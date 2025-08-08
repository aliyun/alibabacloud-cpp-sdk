// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Committer, committer_);
      DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Committer, committer_);
      DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail &&) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& operator=(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& operator=(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->committer_ != nullptr && this->committerId_ != nullptr && this->id_ != nullptr && this->keyInfo_ != nullptr && this->log_ != nullptr
        && this->searchName_ != nullptr && this->statusDesc_ != nullptr && this->workflowStatusDesc_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // committer Field Functions 
    bool hasCommitter() const { return this->committer_ != nullptr;};
    void deleteCommitter() { this->committer_ = nullptr;};
    inline string committer() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


    // committerId Field Functions 
    bool hasCommitterId() const { return this->committerId_ != nullptr;};
    void deleteCommitterId() { this->committerId_ = nullptr;};
    inline string committerId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setCommitterId(string committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo) };
    inline Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo keyInfo() { DARABONBA_PTR_GET(keyInfo_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setKeyInfo(const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setKeyInfo(Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // workflowStatusDesc Field Functions 
    bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
    void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
    inline string workflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


  protected:
    // The business background information of the database export ticket.
    std::shared_ptr<string> comment_ = nullptr;
    // The user who submitted the ticket.
    std::shared_ptr<string> committer_ = nullptr;
    // The ID of the user who submitted the ticket. This ID is a user ID and is not the ID of an Alibaba Cloud account.
    std::shared_ptr<string> committerId_ = nullptr;
    // The ticket ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The key information about the ticket.
    std::shared_ptr<Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo> keyInfo_ = nullptr;
    // The execution logs.
    std::shared_ptr<string> log_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The status description of the ticket.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The status description of the workflow.
    std::shared_ptr<string> workflowStatusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
