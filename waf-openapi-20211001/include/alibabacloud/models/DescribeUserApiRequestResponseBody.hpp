// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERAPIREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERAPIREQUESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserApiRequestResponseBodyRequests.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserApiRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserApiRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Requests, requests_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserApiRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Requests, requests_);
    };
    DescribeUserApiRequestResponseBody() = default ;
    DescribeUserApiRequestResponseBody(const DescribeUserApiRequestResponseBody &) = default ;
    DescribeUserApiRequestResponseBody(DescribeUserApiRequestResponseBody &&) = default ;
    DescribeUserApiRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserApiRequestResponseBody() = default ;
    DescribeUserApiRequestResponseBody& operator=(const DescribeUserApiRequestResponseBody &) = default ;
    DescribeUserApiRequestResponseBody& operator=(DescribeUserApiRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->requests_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserApiRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requests Field Functions 
    bool hasRequests() const { return this->requests_ != nullptr;};
    void deleteRequests() { this->requests_ = nullptr;};
    inline const vector<DescribeUserApiRequestResponseBodyRequests> & requests() const { DARABONBA_PTR_GET_CONST(requests_, vector<DescribeUserApiRequestResponseBodyRequests>) };
    inline vector<DescribeUserApiRequestResponseBodyRequests> requests() { DARABONBA_PTR_GET(requests_, vector<DescribeUserApiRequestResponseBodyRequests>) };
    inline DescribeUserApiRequestResponseBody& setRequests(const vector<DescribeUserApiRequestResponseBodyRequests> & requests) { DARABONBA_PTR_SET_VALUE(requests_, requests) };
    inline DescribeUserApiRequestResponseBody& setRequests(vector<DescribeUserApiRequestResponseBodyRequests> && requests) { DARABONBA_PTR_SET_RVALUE(requests_, requests) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics.
    std::shared_ptr<vector<DescribeUserApiRequestResponseBodyRequests>> requests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
