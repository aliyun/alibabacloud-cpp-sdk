// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListResourceExecutionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExecutionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExecutionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListResourceExecutionStatusRequest() = default ;
    ListResourceExecutionStatusRequest(const ListResourceExecutionStatusRequest &) = default ;
    ListResourceExecutionStatusRequest(ListResourceExecutionStatusRequest &&) = default ;
    ListResourceExecutionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExecutionStatusRequest() = default ;
    ListResourceExecutionStatusRequest& operator=(const ListResourceExecutionStatusRequest &) = default ;
    ListResourceExecutionStatusRequest& operator=(ListResourceExecutionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListResourceExecutionStatusRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceExecutionStatusRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceExecutionStatusRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceExecutionStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the execution.
    // 
    // This parameter is required.
    shared_ptr<string> executionId_ {};
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
