// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERREQUESTPARAM_HPP_
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
  class CreateSQLReviewOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSQLReviewOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKeyList, attachmentKeyList_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSQLReviewOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKeyList, attachmentKeyList_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CreateSQLReviewOrderRequestParam() = default ;
    CreateSQLReviewOrderRequestParam(const CreateSQLReviewOrderRequestParam &) = default ;
    CreateSQLReviewOrderRequestParam(CreateSQLReviewOrderRequestParam &&) = default ;
    CreateSQLReviewOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSQLReviewOrderRequestParam() = default ;
    CreateSQLReviewOrderRequestParam& operator=(const CreateSQLReviewOrderRequestParam &) = default ;
    CreateSQLReviewOrderRequestParam& operator=(CreateSQLReviewOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKeyList_ == nullptr
        && return this->dbId_ == nullptr && return this->projectName_ == nullptr; };
    // attachmentKeyList Field Functions 
    bool hasAttachmentKeyList() const { return this->attachmentKeyList_ != nullptr;};
    void deleteAttachmentKeyList() { this->attachmentKeyList_ = nullptr;};
    inline const vector<string> & attachmentKeyList() const { DARABONBA_PTR_GET_CONST(attachmentKeyList_, vector<string>) };
    inline vector<string> attachmentKeyList() { DARABONBA_PTR_GET(attachmentKeyList_, vector<string>) };
    inline CreateSQLReviewOrderRequestParam& setAttachmentKeyList(const vector<string> & attachmentKeyList) { DARABONBA_PTR_SET_VALUE(attachmentKeyList_, attachmentKeyList) };
    inline CreateSQLReviewOrderRequestParam& setAttachmentKeyList(vector<string> && attachmentKeyList) { DARABONBA_PTR_SET_RVALUE(attachmentKeyList_, attachmentKeyList) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateSQLReviewOrderRequestParam& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateSQLReviewOrderRequestParam& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The files to be reviewed. Multiple files can be reviewed at a time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> attachmentKeyList_ = nullptr;
    // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
    // 
    // >  You can call this operation to query only physical databases. This operation is unavailable to query logical databases.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
