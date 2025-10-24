// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceModel, instanceModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceModel, instanceModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAndroidInstancesResponseBody() = default ;
    DescribeAndroidInstancesResponseBody(const DescribeAndroidInstancesResponseBody &) = default ;
    DescribeAndroidInstancesResponseBody(DescribeAndroidInstancesResponseBody &&) = default ;
    DescribeAndroidInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesResponseBody() = default ;
    DescribeAndroidInstancesResponseBody& operator=(const DescribeAndroidInstancesResponseBody &) = default ;
    DescribeAndroidInstancesResponseBody& operator=(DescribeAndroidInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceModel_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceModel Field Functions 
    bool hasInstanceModel() const { return this->instanceModel_ != nullptr;};
    void deleteInstanceModel() { this->instanceModel_ = nullptr;};
    inline const vector<DescribeAndroidInstancesResponseBodyInstanceModel> & instanceModel() const { DARABONBA_PTR_GET_CONST(instanceModel_, vector<DescribeAndroidInstancesResponseBodyInstanceModel>) };
    inline vector<DescribeAndroidInstancesResponseBodyInstanceModel> instanceModel() { DARABONBA_PTR_GET(instanceModel_, vector<DescribeAndroidInstancesResponseBodyInstanceModel>) };
    inline DescribeAndroidInstancesResponseBody& setInstanceModel(const vector<DescribeAndroidInstancesResponseBodyInstanceModel> & instanceModel) { DARABONBA_PTR_SET_VALUE(instanceModel_, instanceModel) };
    inline DescribeAndroidInstancesResponseBody& setInstanceModel(vector<DescribeAndroidInstancesResponseBodyInstanceModel> && instanceModel) { DARABONBA_PTR_SET_RVALUE(instanceModel_, instanceModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAndroidInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAndroidInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud phone instances.
    std::shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModel>> instanceModel_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
