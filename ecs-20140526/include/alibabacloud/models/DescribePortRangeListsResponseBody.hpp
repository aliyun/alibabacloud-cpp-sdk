// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortRangeListsResponseBodyPortRangeLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PortRangeLists, portRangeLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PortRangeLists, portRangeLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortRangeListsResponseBody() = default ;
    DescribePortRangeListsResponseBody(const DescribePortRangeListsResponseBody &) = default ;
    DescribePortRangeListsResponseBody(DescribePortRangeListsResponseBody &&) = default ;
    DescribePortRangeListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListsResponseBody() = default ;
    DescribePortRangeListsResponseBody& operator=(const DescribePortRangeListsResponseBody &) = default ;
    DescribePortRangeListsResponseBody& operator=(DescribePortRangeListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->portRangeLists_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePortRangeListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // portRangeLists Field Functions 
    bool hasPortRangeLists() const { return this->portRangeLists_ != nullptr;};
    void deletePortRangeLists() { this->portRangeLists_ = nullptr;};
    inline const vector<DescribePortRangeListsResponseBodyPortRangeLists> & portRangeLists() const { DARABONBA_PTR_GET_CONST(portRangeLists_, vector<DescribePortRangeListsResponseBodyPortRangeLists>) };
    inline vector<DescribePortRangeListsResponseBodyPortRangeLists> portRangeLists() { DARABONBA_PTR_GET(portRangeLists_, vector<DescribePortRangeListsResponseBodyPortRangeLists>) };
    inline DescribePortRangeListsResponseBody& setPortRangeLists(const vector<DescribePortRangeListsResponseBodyPortRangeLists> & portRangeLists) { DARABONBA_PTR_SET_VALUE(portRangeLists_, portRangeLists) };
    inline DescribePortRangeListsResponseBody& setPortRangeLists(vector<DescribePortRangeListsResponseBodyPortRangeLists> && portRangeLists) { DARABONBA_PTR_SET_RVALUE(portRangeLists_, portRangeLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. If the return value is empty, no more data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Details of the port lists.
    std::shared_ptr<vector<DescribePortRangeListsResponseBodyPortRangeLists>> portRangeLists_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
