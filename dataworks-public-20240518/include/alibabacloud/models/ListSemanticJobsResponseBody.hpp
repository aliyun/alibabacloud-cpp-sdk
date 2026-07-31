// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEMANTICJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEMANTICJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListSemanticJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSemanticJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSemanticJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSemanticJobsResponseBody() = default ;
    ListSemanticJobsResponseBody(const ListSemanticJobsResponseBody &) = default ;
    ListSemanticJobsResponseBody(ListSemanticJobsResponseBody &&) = default ;
    ListSemanticJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSemanticJobsResponseBody() = default ;
    ListSemanticJobsResponseBody& operator=(const ListSemanticJobsResponseBody &) = default ;
    ListSemanticJobsResponseBody& operator=(ListSemanticJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SemanticJobs, semanticJobs_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(SemanticJobs, semanticJobs_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SemanticJobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SemanticJobs& obj) { 
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ReferenceFileIds, referenceFileIds_);
          DARABONBA_PTR_TO_JSON(ReferenceFileUris, referenceFileUris_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_ANY_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, SemanticJobs& obj) { 
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ReferenceFileIds, referenceFileIds_);
          DARABONBA_PTR_FROM_JSON(ReferenceFileUris, referenceFileUris_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_ANY_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        SemanticJobs() = default ;
        SemanticJobs(const SemanticJobs &) = default ;
        SemanticJobs(SemanticJobs &&) = default ;
        SemanticJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SemanticJobs() = default ;
        SemanticJobs& operator=(const SemanticJobs &) = default ;
        SemanticJobs& operator=(SemanticJobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr
        && this->referenceFileIds_ == nullptr && this->referenceFileUris_ == nullptr && this->resourceGroupId_ == nullptr && this->source_ == nullptr && this->type_ == nullptr
        && this->userId_ == nullptr; };
        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline SemanticJobs& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline SemanticJobs& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline SemanticJobs& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SemanticJobs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SemanticJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline SemanticJobs& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // referenceFileIds Field Functions 
        bool hasReferenceFileIds() const { return this->referenceFileIds_ != nullptr;};
        void deleteReferenceFileIds() { this->referenceFileIds_ = nullptr;};
        inline const vector<string> & getReferenceFileIds() const { DARABONBA_PTR_GET_CONST(referenceFileIds_, vector<string>) };
        inline vector<string> getReferenceFileIds() { DARABONBA_PTR_GET(referenceFileIds_, vector<string>) };
        inline SemanticJobs& setReferenceFileIds(const vector<string> & referenceFileIds) { DARABONBA_PTR_SET_VALUE(referenceFileIds_, referenceFileIds) };
        inline SemanticJobs& setReferenceFileIds(vector<string> && referenceFileIds) { DARABONBA_PTR_SET_RVALUE(referenceFileIds_, referenceFileIds) };


        // referenceFileUris Field Functions 
        bool hasReferenceFileUris() const { return this->referenceFileUris_ != nullptr;};
        void deleteReferenceFileUris() { this->referenceFileUris_ = nullptr;};
        inline const vector<string> & getReferenceFileUris() const { DARABONBA_PTR_GET_CONST(referenceFileUris_, vector<string>) };
        inline vector<string> getReferenceFileUris() { DARABONBA_PTR_GET(referenceFileUris_, vector<string>) };
        inline SemanticJobs& setReferenceFileUris(const vector<string> & referenceFileUris) { DARABONBA_PTR_SET_VALUE(referenceFileUris_, referenceFileUris) };
        inline SemanticJobs& setReferenceFileUris(vector<string> && referenceFileUris) { DARABONBA_PTR_SET_RVALUE(referenceFileUris_, referenceFileUris) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SemanticJobs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline         const Darabonba::Json & getSource() const { DARABONBA_GET(source_) };
        Darabonba::Json & getSource() { DARABONBA_GET(source_) };
        inline SemanticJobs& setSource(const Darabonba::Json & source) { DARABONBA_SET_VALUE(source_, source) };
        inline SemanticJobs& setSource(Darabonba::Json && source) { DARABONBA_SET_RVALUE(source_, source) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SemanticJobs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SemanticJobs& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The user ID of the semantic task creator.
        shared_ptr<string> creator_ {};
        // The creation time, expressed as a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The last modification time, expressed as a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> gmtModified_ {};
        // The internal unique ID of the task definition.
        shared_ptr<int64_t> id_ {};
        // The task name. Used for RunSemanticJob, DeleteSemanticJob, ListSemanticJobRuns, and DownloadSemanticResults.
        shared_ptr<string> name_ {};
        // The workspace ID to which the task belongs. Used for GetSemanticJobDetail, GetSemanticJobLog, and KillSemanticJob.
        shared_ptr<int64_t> projectId_ {};
        // The list of uploaded file IDs associated with the task.
        shared_ptr<vector<string>> referenceFileIds_ {};
        // The list of external reference file URIs associated with the task.
        shared_ptr<vector<string>> referenceFileUris_ {};
        // The ID of the resource group used to run this task.
        shared_ptr<string> resourceGroupId_ {};
        // The input datasource config saved in the node. This configuration determines the analysis scope at runtime.
        Darabonba::Json source_ {};
        // The Source.type data source type saved in the task.
        shared_ptr<string> type_ {};
        // The user ID of the semantic task creator.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->semanticJobs_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // semanticJobs Field Functions 
      bool hasSemanticJobs() const { return this->semanticJobs_ != nullptr;};
      void deleteSemanticJobs() { this->semanticJobs_ = nullptr;};
      inline const vector<Data::SemanticJobs> & getSemanticJobs() const { DARABONBA_PTR_GET_CONST(semanticJobs_, vector<Data::SemanticJobs>) };
      inline vector<Data::SemanticJobs> getSemanticJobs() { DARABONBA_PTR_GET(semanticJobs_, vector<Data::SemanticJobs>) };
      inline Data& setSemanticJobs(const vector<Data::SemanticJobs> & semanticJobs) { DARABONBA_PTR_SET_VALUE(semanticJobs_, semanticJobs) };
      inline Data& setSemanticJobs(vector<Data::SemanticJobs> && semanticJobs) { DARABONBA_PTR_SET_RVALUE(semanticJobs_, semanticJobs) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page, starting from 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of task definitions per page in the current response.
      shared_ptr<int32_t> pageSize_ {};
      // The list of task definitions.
      shared_ptr<vector<Data::SemanticJobs>> semanticJobs_ {};
      // The total number of task definitions that meet the conditions within the current tenant.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSemanticJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSemanticJobsResponseBody::Data) };
    inline ListSemanticJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSemanticJobsResponseBody::Data) };
    inline ListSemanticJobsResponseBody& setData(const ListSemanticJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSemanticJobsResponseBody& setData(ListSemanticJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSemanticJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSemanticJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The paginated result of task definitions. Use the Name field of a list item to run, delete, query run records, or download results. Use the ProjectId field to query run details, view logs, or stop a run.
    shared_ptr<ListSemanticJobsResponseBody::Data> data_ {};
    // The request ID. Used for locating logs and troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
