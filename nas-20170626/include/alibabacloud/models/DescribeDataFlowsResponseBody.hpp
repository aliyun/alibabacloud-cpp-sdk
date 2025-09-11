// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataFlowsResponseBodyDataFlowInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowInfo, dataFlowInfo_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowInfo, dataFlowInfo_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataFlowsResponseBody() = default ;
    DescribeDataFlowsResponseBody(const DescribeDataFlowsResponseBody &) = default ;
    DescribeDataFlowsResponseBody(DescribeDataFlowsResponseBody &&) = default ;
    DescribeDataFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsResponseBody() = default ;
    DescribeDataFlowsResponseBody& operator=(const DescribeDataFlowsResponseBody &) = default ;
    DescribeDataFlowsResponseBody& operator=(DescribeDataFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataFlowInfo_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // dataFlowInfo Field Functions 
    bool hasDataFlowInfo() const { return this->dataFlowInfo_ != nullptr;};
    void deleteDataFlowInfo() { this->dataFlowInfo_ = nullptr;};
    inline const DescribeDataFlowsResponseBodyDataFlowInfo & dataFlowInfo() const { DARABONBA_PTR_GET_CONST(dataFlowInfo_, DescribeDataFlowsResponseBodyDataFlowInfo) };
    inline DescribeDataFlowsResponseBodyDataFlowInfo dataFlowInfo() { DARABONBA_PTR_GET(dataFlowInfo_, DescribeDataFlowsResponseBodyDataFlowInfo) };
    inline DescribeDataFlowsResponseBody& setDataFlowInfo(const DescribeDataFlowsResponseBodyDataFlowInfo & dataFlowInfo) { DARABONBA_PTR_SET_VALUE(dataFlowInfo_, dataFlowInfo) };
    inline DescribeDataFlowsResponseBody& setDataFlowInfo(DescribeDataFlowsResponseBodyDataFlowInfo && dataFlowInfo) { DARABONBA_PTR_SET_RVALUE(dataFlowInfo_, dataFlowInfo) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about data flows.
    std::shared_ptr<DescribeDataFlowsResponseBodyDataFlowInfo> dataFlowInfo_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
