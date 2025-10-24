// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupModel, instanceGroupModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupModel, instanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAndroidInstanceGroupsResponseBody() = default ;
    DescribeAndroidInstanceGroupsResponseBody(const DescribeAndroidInstanceGroupsResponseBody &) = default ;
    DescribeAndroidInstanceGroupsResponseBody(DescribeAndroidInstanceGroupsResponseBody &&) = default ;
    DescribeAndroidInstanceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsResponseBody() = default ;
    DescribeAndroidInstanceGroupsResponseBody& operator=(const DescribeAndroidInstanceGroupsResponseBody &) = default ;
    DescribeAndroidInstanceGroupsResponseBody& operator=(DescribeAndroidInstanceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceGroupModel_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceGroupModel Field Functions 
    bool hasInstanceGroupModel() const { return this->instanceGroupModel_ != nullptr;};
    void deleteInstanceGroupModel() { this->instanceGroupModel_ = nullptr;};
    inline const vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel> & instanceGroupModel() const { DARABONBA_PTR_GET_CONST(instanceGroupModel_, vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel>) };
    inline vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel> instanceGroupModel() { DARABONBA_PTR_GET(instanceGroupModel_, vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel>) };
    inline DescribeAndroidInstanceGroupsResponseBody& setInstanceGroupModel(const vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel> & instanceGroupModel) { DARABONBA_PTR_SET_VALUE(instanceGroupModel_, instanceGroupModel) };
    inline DescribeAndroidInstanceGroupsResponseBody& setInstanceGroupModel(vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel> && instanceGroupModel) { DARABONBA_PTR_SET_RVALUE(instanceGroupModel_, instanceGroupModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstanceGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance group.
    std::shared_ptr<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel>> instanceGroupModel_ = nullptr;
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
