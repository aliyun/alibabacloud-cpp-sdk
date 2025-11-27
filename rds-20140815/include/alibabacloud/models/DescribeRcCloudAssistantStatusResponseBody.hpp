// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCCloudAssistantStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCloudAssistantStatusSet, instanceCloudAssistantStatusSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCloudAssistantStatusSet, instanceCloudAssistantStatusSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCCloudAssistantStatusResponseBody() = default ;
    DescribeRCCloudAssistantStatusResponseBody(const DescribeRCCloudAssistantStatusResponseBody &) = default ;
    DescribeRCCloudAssistantStatusResponseBody(DescribeRCCloudAssistantStatusResponseBody &&) = default ;
    DescribeRCCloudAssistantStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCCloudAssistantStatusResponseBody() = default ;
    DescribeRCCloudAssistantStatusResponseBody& operator=(const DescribeRCCloudAssistantStatusResponseBody &) = default ;
    DescribeRCCloudAssistantStatusResponseBody& operator=(DescribeRCCloudAssistantStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCloudAssistantStatusSet_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceCloudAssistantStatusSet Field Functions 
    bool hasInstanceCloudAssistantStatusSet() const { return this->instanceCloudAssistantStatusSet_ != nullptr;};
    void deleteInstanceCloudAssistantStatusSet() { this->instanceCloudAssistantStatusSet_ = nullptr;};
    inline const vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet> & instanceCloudAssistantStatusSet() const { DARABONBA_PTR_GET_CONST(instanceCloudAssistantStatusSet_, vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet>) };
    inline vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet> instanceCloudAssistantStatusSet() { DARABONBA_PTR_GET(instanceCloudAssistantStatusSet_, vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet>) };
    inline DescribeRCCloudAssistantStatusResponseBody& setInstanceCloudAssistantStatusSet(const vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet> & instanceCloudAssistantStatusSet) { DARABONBA_PTR_SET_VALUE(instanceCloudAssistantStatusSet_, instanceCloudAssistantStatusSet) };
    inline DescribeRCCloudAssistantStatusResponseBody& setInstanceCloudAssistantStatusSet(vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet> && instanceCloudAssistantStatusSet) { DARABONBA_PTR_SET_RVALUE(instanceCloudAssistantStatusSet_, instanceCloudAssistantStatusSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRCCloudAssistantStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeRCCloudAssistantStatusResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRCCloudAssistantStatusResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCCloudAssistantStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCCloudAssistantStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the installation status of Cloud Assistant on the instances.
    std::shared_ptr<vector<DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet>> instanceCloudAssistantStatusSet_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instances.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
