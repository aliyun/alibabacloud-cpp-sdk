// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCreditDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCreditDetailRequest() = default ;
    DescribeCreditDetailRequest(const DescribeCreditDetailRequest &) = default ;
    DescribeCreditDetailRequest(DescribeCreditDetailRequest &&) = default ;
    DescribeCreditDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditDetailRequest() = default ;
    DescribeCreditDetailRequest& operator=(const DescribeCreditDetailRequest &) = default ;
    DescribeCreditDetailRequest& operator=(DescribeCreditDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentTypes_ == nullptr
        && this->endTime_ == nullptr && this->instanceIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->packageIds_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // agentTypes Field Functions 
    bool hasAgentTypes() const { return this->agentTypes_ != nullptr;};
    void deleteAgentTypes() { this->agentTypes_ = nullptr;};
    inline const vector<string> & getAgentTypes() const { DARABONBA_PTR_GET_CONST(agentTypes_, vector<string>) };
    inline vector<string> getAgentTypes() { DARABONBA_PTR_GET(agentTypes_, vector<string>) };
    inline DescribeCreditDetailRequest& setAgentTypes(const vector<string> & agentTypes) { DARABONBA_PTR_SET_VALUE(agentTypes_, agentTypes) };
    inline DescribeCreditDetailRequest& setAgentTypes(vector<string> && agentTypes) { DARABONBA_PTR_SET_RVALUE(agentTypes_, agentTypes) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeCreditDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeCreditDetailRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeCreditDetailRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCreditDetailRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCreditDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline DescribeCreditDetailRequest& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DescribeCreditDetailRequest& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline DescribeCreditDetailRequest& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeCreditDetailRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeCreditDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The list of agent types, used to filter credit change details by specified agent types.
    shared_ptr<vector<string>> agentTypes_ {};
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The maximum number of entries to read in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. If a query does not return all results, the returned NextToken is not empty. You can pass the returned NextToken in the next query to continue retrieving results.
    shared_ptr<string> nextToken_ {};
    // The list of package or credit booster pack IDs.
    shared_ptr<vector<string>> packageIds_ {};
    // The page number for pagination. Default value: 1.
    shared_ptr<string> pageNum_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
