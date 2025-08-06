// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PortRangeListAssociations, portRangeListAssociations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PortRangeListAssociations, portRangeListAssociations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortRangeListAssociationsResponseBody() = default ;
    DescribePortRangeListAssociationsResponseBody(const DescribePortRangeListAssociationsResponseBody &) = default ;
    DescribePortRangeListAssociationsResponseBody(DescribePortRangeListAssociationsResponseBody &&) = default ;
    DescribePortRangeListAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListAssociationsResponseBody() = default ;
    DescribePortRangeListAssociationsResponseBody& operator=(const DescribePortRangeListAssociationsResponseBody &) = default ;
    DescribePortRangeListAssociationsResponseBody& operator=(DescribePortRangeListAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->portRangeListAssociations_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePortRangeListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // portRangeListAssociations Field Functions 
    bool hasPortRangeListAssociations() const { return this->portRangeListAssociations_ != nullptr;};
    void deletePortRangeListAssociations() { this->portRangeListAssociations_ = nullptr;};
    inline const vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations> & portRangeListAssociations() const { DARABONBA_PTR_GET_CONST(portRangeListAssociations_, vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations>) };
    inline vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations> portRangeListAssociations() { DARABONBA_PTR_GET(portRangeListAssociations_, vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations>) };
    inline DescribePortRangeListAssociationsResponseBody& setPortRangeListAssociations(const vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations> & portRangeListAssociations) { DARABONBA_PTR_SET_VALUE(portRangeListAssociations_, portRangeListAssociations) };
    inline DescribePortRangeListAssociationsResponseBody& setPortRangeListAssociations(vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations> && portRangeListAssociations) { DARABONBA_PTR_SET_RVALUE(portRangeListAssociations_, portRangeListAssociations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If the return value is empty, no more data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The resources that are associated with the port list.
    std::shared_ptr<vector<DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations>> portRangeListAssociations_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
