// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceByCenterPolicyIdResponseBodyResourceModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceByCenterPolicyIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceByCenterPolicyIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceModelList, resourceModelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceByCenterPolicyIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceModelList, resourceModelList_);
    };
    DescribeResourceByCenterPolicyIdResponseBody() = default ;
    DescribeResourceByCenterPolicyIdResponseBody(const DescribeResourceByCenterPolicyIdResponseBody &) = default ;
    DescribeResourceByCenterPolicyIdResponseBody(DescribeResourceByCenterPolicyIdResponseBody &&) = default ;
    DescribeResourceByCenterPolicyIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceByCenterPolicyIdResponseBody() = default ;
    DescribeResourceByCenterPolicyIdResponseBody& operator=(const DescribeResourceByCenterPolicyIdResponseBody &) = default ;
    DescribeResourceByCenterPolicyIdResponseBody& operator=(DescribeResourceByCenterPolicyIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->resourceModelList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceModelList Field Functions 
    bool hasResourceModelList() const { return this->resourceModelList_ != nullptr;};
    void deleteResourceModelList() { this->resourceModelList_ = nullptr;};
    inline const vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList> & resourceModelList() const { DARABONBA_PTR_GET_CONST(resourceModelList_, vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList>) };
    inline vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList> resourceModelList() { DARABONBA_PTR_GET(resourceModelList_, vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList>) };
    inline DescribeResourceByCenterPolicyIdResponseBody& setResourceModelList(const vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList> & resourceModelList) { DARABONBA_PTR_SET_VALUE(resourceModelList_, resourceModelList) };
    inline DescribeResourceByCenterPolicyIdResponseBody& setResourceModelList(vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList> && resourceModelList) { DARABONBA_PTR_SET_RVALUE(resourceModelList_, resourceModelList) };


  protected:
    // The total number of resources.
    std::shared_ptr<string> count_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources.
    std::shared_ptr<vector<DescribeResourceByCenterPolicyIdResponseBodyResourceModelList>> resourceModelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
