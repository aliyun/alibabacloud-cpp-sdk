// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUEST_HPP_
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
  class CreateDataTrackOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataTrackOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataTrackOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataTrackOrderRequest() = default ;
    CreateDataTrackOrderRequest(const CreateDataTrackOrderRequest &) = default ;
    CreateDataTrackOrderRequest(CreateDataTrackOrderRequest &&) = default ;
    CreateDataTrackOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataTrackOrderRequest() = default ;
    CreateDataTrackOrderRequest& operator=(const CreateDataTrackOrderRequest &) = default ;
    CreateDataTrackOrderRequest& operator=(CreateDataTrackOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(JobEndTime, jobEndTime_);
        DARABONBA_PTR_TO_JSON(JobStartTime, jobStartTime_);
        DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
        DARABONBA_PTR_TO_JSON(TrackTypes, trackTypes_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(JobEndTime, jobEndTime_);
        DARABONBA_PTR_FROM_JSON(JobStartTime, jobStartTime_);
        DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
        DARABONBA_PTR_FROM_JSON(TrackTypes, trackTypes_);
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
      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->jobEndTime_ == nullptr && this->jobStartTime_ == nullptr && this->tableNames_ == nullptr && this->trackTypes_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
      inline Param& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // jobEndTime Field Functions 
      bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
      void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
      inline string getJobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
      inline Param& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


      // jobStartTime Field Functions 
      bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
      void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
      inline string getJobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
      inline Param& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


      // tableNames Field Functions 
      bool hasTableNames() const { return this->tableNames_ != nullptr;};
      void deleteTableNames() { this->tableNames_ = nullptr;};
      inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
      inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
      inline Param& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
      inline Param& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


      // trackTypes Field Functions 
      bool hasTrackTypes() const { return this->trackTypes_ != nullptr;};
      void deleteTrackTypes() { this->trackTypes_ = nullptr;};
      inline const vector<string> & getTrackTypes() const { DARABONBA_PTR_GET_CONST(trackTypes_, vector<string>) };
      inline vector<string> getTrackTypes() { DARABONBA_PTR_GET(trackTypes_, vector<string>) };
      inline Param& setTrackTypes(const vector<string> & trackTypes) { DARABONBA_PTR_SET_VALUE(trackTypes_, trackTypes) };
      inline Param& setTrackTypes(vector<string> && trackTypes) { DARABONBA_PTR_SET_RVALUE(trackTypes_, trackTypes) };


    protected:
      // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
      // 
      // > You can call this operation to create a data tracking ticket for only physical databases. This operation is not applicable to logical databases.
      // 
      // This parameter is required.
      shared_ptr<string> dbId_ {};
      // The end time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
      // 
      // This parameter is required.
      shared_ptr<string> jobEndTime_ {};
      // The start time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
      // 
      // This parameter is required.
      shared_ptr<string> jobStartTime_ {};
      // The names of the tables for which you want to track data operations.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> tableNames_ {};
      // The types of data operations that you want to track.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> trackTypes_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->param_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataTrackOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataTrackOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateDataTrackOrderRequest::Param) };
    inline CreateDataTrackOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateDataTrackOrderRequest::Param) };
    inline CreateDataTrackOrderRequest& setParam(const CreateDataTrackOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataTrackOrderRequest& setParam(CreateDataTrackOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<string> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<string>) };
    inline vector<string> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<string>) };
    inline CreateDataTrackOrderRequest& setRelatedUserList(const vector<string> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataTrackOrderRequest& setRelatedUserList(vector<string> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataTrackOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The purpose or objective of the data tracking ticket. This parameter is used to help reduce unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateDataTrackOrderRequest::Param> param_ {};
    // The IDs of the operators that are related to the ticket.
    shared_ptr<vector<string>> relatedUserList_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
