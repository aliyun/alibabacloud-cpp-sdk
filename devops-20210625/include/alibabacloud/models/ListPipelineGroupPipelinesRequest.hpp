// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEGROUPPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEGROUPPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineGroupPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineGroupPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(executeEndTime, executeEndTime_);
      DARABONBA_PTR_TO_JSON(executeStartTime, executeStartTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(resultStatusList, resultStatusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineGroupPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(executeEndTime, executeEndTime_);
      DARABONBA_PTR_FROM_JSON(executeStartTime, executeStartTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(resultStatusList, resultStatusList_);
    };
    ListPipelineGroupPipelinesRequest() = default ;
    ListPipelineGroupPipelinesRequest(const ListPipelineGroupPipelinesRequest &) = default ;
    ListPipelineGroupPipelinesRequest(ListPipelineGroupPipelinesRequest &&) = default ;
    ListPipelineGroupPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineGroupPipelinesRequest() = default ;
    ListPipelineGroupPipelinesRequest& operator=(const ListPipelineGroupPipelinesRequest &) = default ;
    ListPipelineGroupPipelinesRequest& operator=(ListPipelineGroupPipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createEndTime_ == nullptr
        && return this->createStartTime_ == nullptr && return this->executeEndTime_ == nullptr && return this->executeStartTime_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->pipelineName_ == nullptr && return this->resultStatusList_ == nullptr; };
    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline int64_t createEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
    inline ListPipelineGroupPipelinesRequest& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline int64_t createStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, 0L) };
    inline ListPipelineGroupPipelinesRequest& setCreateStartTime(int64_t createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // executeEndTime Field Functions 
    bool hasExecuteEndTime() const { return this->executeEndTime_ != nullptr;};
    void deleteExecuteEndTime() { this->executeEndTime_ = nullptr;};
    inline int64_t executeEndTime() const { DARABONBA_PTR_GET_DEFAULT(executeEndTime_, 0L) };
    inline ListPipelineGroupPipelinesRequest& setExecuteEndTime(int64_t executeEndTime) { DARABONBA_PTR_SET_VALUE(executeEndTime_, executeEndTime) };


    // executeStartTime Field Functions 
    bool hasExecuteStartTime() const { return this->executeStartTime_ != nullptr;};
    void deleteExecuteStartTime() { this->executeStartTime_ = nullptr;};
    inline int64_t executeStartTime() const { DARABONBA_PTR_GET_DEFAULT(executeStartTime_, 0L) };
    inline ListPipelineGroupPipelinesRequest& setExecuteStartTime(int64_t executeStartTime) { DARABONBA_PTR_SET_VALUE(executeStartTime_, executeStartTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListPipelineGroupPipelinesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelineGroupPipelinesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ListPipelineGroupPipelinesRequest& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // resultStatusList Field Functions 
    bool hasResultStatusList() const { return this->resultStatusList_ != nullptr;};
    void deleteResultStatusList() { this->resultStatusList_ = nullptr;};
    inline string resultStatusList() const { DARABONBA_PTR_GET_DEFAULT(resultStatusList_, "") };
    inline ListPipelineGroupPipelinesRequest& setResultStatusList(string resultStatusList) { DARABONBA_PTR_SET_VALUE(resultStatusList_, resultStatusList) };


  protected:
    std::shared_ptr<int64_t> createEndTime_ = nullptr;
    std::shared_ptr<int64_t> createStartTime_ = nullptr;
    std::shared_ptr<int64_t> executeEndTime_ = nullptr;
    std::shared_ptr<int64_t> executeStartTime_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> resultStatusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
