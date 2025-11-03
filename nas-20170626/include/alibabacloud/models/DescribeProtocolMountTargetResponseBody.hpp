// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProtocolMountTargetResponseBodyProtocolMountTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolMountTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolMountTargets, protocolMountTargets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolMountTargets, protocolMountTargets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProtocolMountTargetResponseBody() = default ;
    DescribeProtocolMountTargetResponseBody(const DescribeProtocolMountTargetResponseBody &) = default ;
    DescribeProtocolMountTargetResponseBody(DescribeProtocolMountTargetResponseBody &&) = default ;
    DescribeProtocolMountTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolMountTargetResponseBody() = default ;
    DescribeProtocolMountTargetResponseBody& operator=(const DescribeProtocolMountTargetResponseBody &) = default ;
    DescribeProtocolMountTargetResponseBody& operator=(DescribeProtocolMountTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->protocolMountTargets_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolMountTargetResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolMountTargets Field Functions 
    bool hasProtocolMountTargets() const { return this->protocolMountTargets_ != nullptr;};
    void deleteProtocolMountTargets() { this->protocolMountTargets_ = nullptr;};
    inline const vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets> & protocolMountTargets() const { DARABONBA_PTR_GET_CONST(protocolMountTargets_, vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets>) };
    inline vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets> protocolMountTargets() { DARABONBA_PTR_GET(protocolMountTargets_, vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets>) };
    inline DescribeProtocolMountTargetResponseBody& setProtocolMountTargets(const vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets> & protocolMountTargets) { DARABONBA_PTR_SET_VALUE(protocolMountTargets_, protocolMountTargets) };
    inline DescribeProtocolMountTargetResponseBody& setProtocolMountTargets(vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets> && protocolMountTargets) { DARABONBA_PTR_SET_RVALUE(protocolMountTargets_, protocolMountTargets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProtocolMountTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The export directories of the protocol service.
    std::shared_ptr<vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets>> protocolMountTargets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
