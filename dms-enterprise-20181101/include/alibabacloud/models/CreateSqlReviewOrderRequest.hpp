// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateSQLReviewOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSQLReviewOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSQLReviewOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateSQLReviewOrderRequest() = default ;
    CreateSQLReviewOrderRequest(const CreateSQLReviewOrderRequest &) = default ;
    CreateSQLReviewOrderRequest(CreateSQLReviewOrderRequest &&) = default ;
    CreateSQLReviewOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSQLReviewOrderRequest() = default ;
    CreateSQLReviewOrderRequest& operator=(const CreateSQLReviewOrderRequest &) = default ;
    CreateSQLReviewOrderRequest& operator=(CreateSQLReviewOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(AttachmentKeyList, attachmentKeyList_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachmentKeyList, attachmentKeyList_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      Param() = default ;
      Param(const Param &) = default ;
      Param(Param &&) = default ;
      Param(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Param() = default ;
      Param& operator=(const Param &) = default ;
      Param& operator=(Param &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachmentKeyList_ == nullptr
        && this->dbId_ == nullptr && this->projectName_ == nullptr; };
      // attachmentKeyList Field Functions 
      bool hasAttachmentKeyList() const { return this->attachmentKeyList_ != nullptr;};
      void deleteAttachmentKeyList() { this->attachmentKeyList_ = nullptr;};
      inline const vector<string> & getAttachmentKeyList() const { DARABONBA_PTR_GET_CONST(attachmentKeyList_, vector<string>) };
      inline vector<string> getAttachmentKeyList() { DARABONBA_PTR_GET(attachmentKeyList_, vector<string>) };
      inline Param& setAttachmentKeyList(const vector<string> & attachmentKeyList) { DARABONBA_PTR_SET_VALUE(attachmentKeyList_, attachmentKeyList) };
      inline Param& setAttachmentKeyList(vector<string> && attachmentKeyList) { DARABONBA_PTR_SET_RVALUE(attachmentKeyList_, attachmentKeyList) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline Param& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Param& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      // The files to be reviewed. Multiple files can be reviewed at a time.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> attachmentKeyList_ {};
      // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
      // 
      // >  You can call this operation to query only physical databases. This operation is unavailable to query logical databases.
      // 
      // This parameter is required.
      shared_ptr<int64_t> dbId_ {};
      // The name of the project.
      // 
      // This parameter is required.
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->param_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateSQLReviewOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateSQLReviewOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateSQLReviewOrderRequest::Param) };
    inline CreateSQLReviewOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateSQLReviewOrderRequest::Param) };
    inline CreateSQLReviewOrderRequest& setParam(const CreateSQLReviewOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateSQLReviewOrderRequest& setParam(CreateSQLReviewOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateSQLReviewOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateSQLReviewOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateSQLReviewOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The purpose or objective of the SQL review. This reduces unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateSQLReviewOrderRequest::Param> param_ {};
    // The stakeholders involved in this operation. All the specified stakeholders can view the ticket details and take part in the approval process. Irrelevant users other than DMS administrators and database administrators (DBAs) are not allowed to view the ticket details.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
