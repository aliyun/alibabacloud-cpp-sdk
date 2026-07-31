// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEMANTICJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESEMANTICJOBRESPONSEBODY_HPP_
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
  class CreateSemanticJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSemanticJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSemanticJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSemanticJobResponseBody() = default ;
    CreateSemanticJobResponseBody(const CreateSemanticJobResponseBody &) = default ;
    CreateSemanticJobResponseBody(CreateSemanticJobResponseBody &&) = default ;
    CreateSemanticJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSemanticJobResponseBody() = default ;
    CreateSemanticJobResponseBody& operator=(const CreateSemanticJobResponseBody &) = default ;
    CreateSemanticJobResponseBody& operator=(CreateSemanticJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr
        && this->referenceFileIds_ == nullptr && this->referenceFileUris_ == nullptr && this->resourceGroupId_ == nullptr && this->source_ == nullptr && this->type_ == nullptr
        && this->userId_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // referenceFileIds Field Functions 
      bool hasReferenceFileIds() const { return this->referenceFileIds_ != nullptr;};
      void deleteReferenceFileIds() { this->referenceFileIds_ = nullptr;};
      inline const vector<string> & getReferenceFileIds() const { DARABONBA_PTR_GET_CONST(referenceFileIds_, vector<string>) };
      inline vector<string> getReferenceFileIds() { DARABONBA_PTR_GET(referenceFileIds_, vector<string>) };
      inline Data& setReferenceFileIds(const vector<string> & referenceFileIds) { DARABONBA_PTR_SET_VALUE(referenceFileIds_, referenceFileIds) };
      inline Data& setReferenceFileIds(vector<string> && referenceFileIds) { DARABONBA_PTR_SET_RVALUE(referenceFileIds_, referenceFileIds) };


      // referenceFileUris Field Functions 
      bool hasReferenceFileUris() const { return this->referenceFileUris_ != nullptr;};
      void deleteReferenceFileUris() { this->referenceFileUris_ = nullptr;};
      inline const vector<string> & getReferenceFileUris() const { DARABONBA_PTR_GET_CONST(referenceFileUris_, vector<string>) };
      inline vector<string> getReferenceFileUris() { DARABONBA_PTR_GET(referenceFileUris_, vector<string>) };
      inline Data& setReferenceFileUris(const vector<string> & referenceFileUris) { DARABONBA_PTR_SET_VALUE(referenceFileUris_, referenceFileUris) };
      inline Data& setReferenceFileUris(vector<string> && referenceFileUris) { DARABONBA_PTR_SET_RVALUE(referenceFileUris_, referenceFileUris) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline       const Darabonba::Json & getSource() const { DARABONBA_GET(source_) };
      Darabonba::Json & getSource() { DARABONBA_GET(source_) };
      inline Data& setSource(const Darabonba::Json & source) { DARABONBA_SET_VALUE(source_, source) };
      inline Data& setSource(Darabonba::Json && source) { DARABONBA_SET_RVALUE(source_, source) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The task creator identifier, equivalent to UserId, used to display creation ownership.
      shared_ptr<string> creator_ {};
      // The creation time of the task definition, as a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time of the task definition, as a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The internal unique ID of the task definition, which identifies the task created by this call.
      shared_ptr<int64_t> id_ {};
      // The saved task name. Use this value for subsequent run, delete, list runs, and download results operations.
      shared_ptr<string> name_ {};
      // The DataWorks workspace ID to which the task belongs. Use this value as the ProjectId for GetSemanticJobDetail, GetSemanticJobLog, and KillSemanticJob.
      shared_ptr<int64_t> projectId_ {};
      // The list of associated uploaded file IDs. For singleTableFile, the single file in this list is read at runtime.
      shared_ptr<vector<string>> referenceFileIds_ {};
      // The list of associated external reference file URIs. For singleTableFile, the single file in this list is read at runtime.
      shared_ptr<vector<string>> referenceFileUris_ {};
      // The ID of the resource group that will be used when running this task.
      shared_ptr<string> resourceGroupId_ {};
      // The saved input datasource config, corresponding to the Source in the creation request. The data scope to be analyzed is determined based on this configuration at runtime.
      Darabonba::Json source_ {};
      // The saved Source.type data source type, used to quickly identify the task input type.
      shared_ptr<string> type_ {};
      // The identifier of the user who created the task.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSemanticJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSemanticJobResponseBody::Data) };
    inline CreateSemanticJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSemanticJobResponseBody::Data) };
    inline CreateSemanticJobResponseBody& setData(const CreateSemanticJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSemanticJobResponseBody& setData(CreateSemanticJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSemanticJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateSemanticJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The saved semantic task definition. Use Data.Name to call RunSemanticJob, DeleteSemanticJob, ListSemanticJobRuns, and DownloadSemanticResults.
    shared_ptr<CreateSemanticJobResponseBody::Data> data_ {};
    // The request ID. Used for locating logs and troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
