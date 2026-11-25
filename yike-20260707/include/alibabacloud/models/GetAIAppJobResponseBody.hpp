// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetAIAppJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIAppJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIAppJob, AIAppJob_);
      DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIAppJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAppJob, AIAppJob_);
      DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIAppJobResponseBody() = default ;
    GetAIAppJobResponseBody(const GetAIAppJobResponseBody &) = default ;
    GetAIAppJobResponseBody(GetAIAppJobResponseBody &&) = default ;
    GetAIAppJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIAppJobResponseBody() = default ;
    GetAIAppJobResponseBody& operator=(const GetAIAppJobResponseBody &) = default ;
    GetAIAppJobResponseBody& operator=(GetAIAppJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
        DARABONBA_PTR_TO_JSON(AssetId, assetId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetId_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
      // assetId Field Functions 
      bool hasAssetId() const { return this->assetId_ != nullptr;};
      void deleteAssetId() { this->assetId_ = nullptr;};
      inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
      inline Artifacts& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Artifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Artifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Artifacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Artifacts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The asset ID, which is the media asset ID obtained after registration.
      shared_ptr<string> assetId_ {};
      // The asset name.
      shared_ptr<string> name_ {};
      // The asset status.
      shared_ptr<string> status_ {};
      // The asset type. Valid values: image, audio, video, document, and text.
      shared_ptr<string> type_ {};
      // The asset URL.
      shared_ptr<string> url_ {};
    };

    class AIAppJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIAppJob& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(NodeResults, nodeResults_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, AIAppJob& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(NodeResults, nodeResults_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      AIAppJob() = default ;
      AIAppJob(const AIAppJob &) = default ;
      AIAppJob(AIAppJob &&) = default ;
      AIAppJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIAppJob() = default ;
      AIAppJob& operator=(const AIAppJob &) = default ;
      AIAppJob& operator=(AIAppJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->jobId_ == nullptr && this->nodeResults_ == nullptr && this->outputs_ == nullptr && this->status_ == nullptr
        && this->userData_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AIAppJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline AIAppJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AIAppJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // nodeResults Field Functions 
      bool hasNodeResults() const { return this->nodeResults_ != nullptr;};
      void deleteNodeResults() { this->nodeResults_ = nullptr;};
      inline string getNodeResults() const { DARABONBA_PTR_GET_DEFAULT(nodeResults_, "") };
      inline AIAppJob& setNodeResults(string nodeResults) { DARABONBA_PTR_SET_VALUE(nodeResults_, nodeResults) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline AIAppJob& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AIAppJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline AIAppJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline AIAppJob& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The time when the task was completed.
      shared_ptr<string> finishTime_ {};
      // The task ID.
      shared_ptr<string> jobId_ {};
      // The node results of the workflow task. The results are in JSON format and vary based on the workflow configuration.
      shared_ptr<string> nodeResults_ {};
      // The task outputs.
      shared_ptr<string> outputs_ {};
      // The task status. Valid values:
      // - init: The task is created.
      // - running: The task is running.
      // - succeeded: The task succeeded.
      // - failed: The task failed.
      // - stopped: The task is stopped.
      shared_ptr<string> status_ {};
      // The custom information.
      shared_ptr<string> userData_ {};
      // The application version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->AIAppJob_ == nullptr
        && this->artifacts_ == nullptr && this->requestId_ == nullptr; };
    // AIAppJob Field Functions 
    bool hasAIAppJob() const { return this->AIAppJob_ != nullptr;};
    void deleteAIAppJob() { this->AIAppJob_ = nullptr;};
    inline const GetAIAppJobResponseBody::AIAppJob & getAIAppJob() const { DARABONBA_PTR_GET_CONST(AIAppJob_, GetAIAppJobResponseBody::AIAppJob) };
    inline GetAIAppJobResponseBody::AIAppJob getAIAppJob() { DARABONBA_PTR_GET(AIAppJob_, GetAIAppJobResponseBody::AIAppJob) };
    inline GetAIAppJobResponseBody& setAIAppJob(const GetAIAppJobResponseBody::AIAppJob & aIAppJob) { DARABONBA_PTR_SET_VALUE(AIAppJob_, aIAppJob) };
    inline GetAIAppJobResponseBody& setAIAppJob(GetAIAppJobResponseBody::AIAppJob && aIAppJob) { DARABONBA_PTR_SET_RVALUE(AIAppJob_, aIAppJob) };


    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const vector<GetAIAppJobResponseBody::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<GetAIAppJobResponseBody::Artifacts>) };
    inline vector<GetAIAppJobResponseBody::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<GetAIAppJobResponseBody::Artifacts>) };
    inline GetAIAppJobResponseBody& setArtifacts(const vector<GetAIAppJobResponseBody::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline GetAIAppJobResponseBody& setArtifacts(vector<GetAIAppJobResponseBody::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIAppJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task information.
    shared_ptr<GetAIAppJobResponseBody::AIAppJob> AIAppJob_ {};
    // The output assets.
    shared_ptr<vector<GetAIAppJobResponseBody::Artifacts>> artifacts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
