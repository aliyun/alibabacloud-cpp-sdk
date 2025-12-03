// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountIds, creatorAccountIds_);
      DARABONBA_PTR_TO_JSON(executeAccountIds, executeAccountIds_);
      DARABONBA_PTR_TO_JSON(executeEndTime, executeEndTime_);
      DARABONBA_PTR_TO_JSON(executeStartTime, executeStartTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(statusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountIds, creatorAccountIds_);
      DARABONBA_PTR_FROM_JSON(executeAccountIds, executeAccountIds_);
      DARABONBA_PTR_FROM_JSON(executeEndTime, executeEndTime_);
      DARABONBA_PTR_FROM_JSON(executeStartTime, executeStartTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(statusList, statusList_);
    };
    ListPipelinesRequest() = default ;
    ListPipelinesRequest(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest(ListPipelinesRequest &&) = default ;
    ListPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesRequest() = default ;
    ListPipelinesRequest& operator=(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest& operator=(ListPipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createEndTime_ == nullptr
        && return this->createStartTime_ == nullptr && return this->creatorAccountIds_ == nullptr && return this->executeAccountIds_ == nullptr && return this->executeEndTime_ == nullptr && return this->executeStartTime_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->pipelineName_ == nullptr && return this->statusList_ == nullptr; };
    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline int64_t createEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
    inline ListPipelinesRequest& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline int64_t createStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, 0L) };
    inline ListPipelinesRequest& setCreateStartTime(int64_t createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // creatorAccountIds Field Functions 
    bool hasCreatorAccountIds() const { return this->creatorAccountIds_ != nullptr;};
    void deleteCreatorAccountIds() { this->creatorAccountIds_ = nullptr;};
    inline string creatorAccountIds() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountIds_, "") };
    inline ListPipelinesRequest& setCreatorAccountIds(string creatorAccountIds) { DARABONBA_PTR_SET_VALUE(creatorAccountIds_, creatorAccountIds) };


    // executeAccountIds Field Functions 
    bool hasExecuteAccountIds() const { return this->executeAccountIds_ != nullptr;};
    void deleteExecuteAccountIds() { this->executeAccountIds_ = nullptr;};
    inline string executeAccountIds() const { DARABONBA_PTR_GET_DEFAULT(executeAccountIds_, "") };
    inline ListPipelinesRequest& setExecuteAccountIds(string executeAccountIds) { DARABONBA_PTR_SET_VALUE(executeAccountIds_, executeAccountIds) };


    // executeEndTime Field Functions 
    bool hasExecuteEndTime() const { return this->executeEndTime_ != nullptr;};
    void deleteExecuteEndTime() { this->executeEndTime_ = nullptr;};
    inline int64_t executeEndTime() const { DARABONBA_PTR_GET_DEFAULT(executeEndTime_, 0L) };
    inline ListPipelinesRequest& setExecuteEndTime(int64_t executeEndTime) { DARABONBA_PTR_SET_VALUE(executeEndTime_, executeEndTime) };


    // executeStartTime Field Functions 
    bool hasExecuteStartTime() const { return this->executeStartTime_ != nullptr;};
    void deleteExecuteStartTime() { this->executeStartTime_ = nullptr;};
    inline int64_t executeStartTime() const { DARABONBA_PTR_GET_DEFAULT(executeStartTime_, 0L) };
    inline ListPipelinesRequest& setExecuteStartTime(int64_t executeStartTime) { DARABONBA_PTR_SET_VALUE(executeStartTime_, executeStartTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListPipelinesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelinesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ListPipelinesRequest& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline ListPipelinesRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<int64_t> createEndTime_ = nullptr;
    std::shared_ptr<int64_t> createStartTime_ = nullptr;
    std::shared_ptr<string> creatorAccountIds_ = nullptr;
    std::shared_ptr<string> executeAccountIds_ = nullptr;
    std::shared_ptr<int64_t> executeEndTime_ = nullptr;
    std::shared_ptr<int64_t> executeStartTime_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
