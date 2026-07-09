// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelines, pipelines_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelines, pipelines_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody(ListPipelinesResponseBody &&) = default ;
    ListPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody& operator=(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody& operator=(ListPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipelines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipelines& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Pipelines& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Pipelines() = default ;
      Pipelines(const Pipelines &) = default ;
      Pipelines(Pipelines &&) = default ;
      Pipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipelines() = default ;
      Pipelines& operator=(const Pipelines &) = default ;
      Pipelines& operator=(Pipelines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->pipelineName_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Pipelines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Pipelines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline Pipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Pipelines& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Pipelines& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Pipelines& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The creation time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The name of the pipeline.
      shared_ptr<string> pipelineName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The update time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
      // The workspace ID.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pipelines_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPipelinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelines Field Functions 
    bool hasPipelines() const { return this->pipelines_ != nullptr;};
    void deletePipelines() { this->pipelines_ = nullptr;};
    inline const vector<ListPipelinesResponseBody::Pipelines> & getPipelines() const { DARABONBA_PTR_GET_CONST(pipelines_, vector<ListPipelinesResponseBody::Pipelines>) };
    inline vector<ListPipelinesResponseBody::Pipelines> getPipelines() { DARABONBA_PTR_GET(pipelines_, vector<ListPipelinesResponseBody::Pipelines>) };
    inline ListPipelinesResponseBody& setPipelines(const vector<ListPipelinesResponseBody::Pipelines> & pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };
    inline ListPipelinesResponseBody& setPipelines(vector<ListPipelinesResponseBody::Pipelines> && pipelines) { DARABONBA_PTR_SET_RVALUE(pipelines_, pipelines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The pipelines.
    shared_ptr<vector<ListPipelinesResponseBody::Pipelines>> pipelines_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
