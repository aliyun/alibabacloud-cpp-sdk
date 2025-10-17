// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobExecutorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(executorType, executorType_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(executorType, executorType_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListJobExecutorsRequest() = default ;
    ListJobExecutorsRequest(const ListJobExecutorsRequest &) = default ;
    ListJobExecutorsRequest(ListJobExecutorsRequest &&) = default ;
    ListJobExecutorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsRequest() = default ;
    ListJobExecutorsRequest& operator=(const ListJobExecutorsRequest &) = default ;
    ListJobExecutorsRequest& operator=(ListJobExecutorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorType_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // executorType Field Functions 
    bool hasExecutorType() const { return this->executorType_ != nullptr;};
    void deleteExecutorType() { this->executorType_ = nullptr;};
    inline string executorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, "") };
    inline ListJobExecutorsRequest& setExecutorType(string executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobExecutorsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobExecutorsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListJobExecutorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobExecutorsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> executorType_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
