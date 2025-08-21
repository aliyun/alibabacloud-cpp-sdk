// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBlackholeStatusResponseBodyBlackholeStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlackholeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlackholeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlackholeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBlackholeStatusResponseBody() = default ;
    DescribeBlackholeStatusResponseBody(const DescribeBlackholeStatusResponseBody &) = default ;
    DescribeBlackholeStatusResponseBody(DescribeBlackholeStatusResponseBody &&) = default ;
    DescribeBlackholeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlackholeStatusResponseBody() = default ;
    DescribeBlackholeStatusResponseBody& operator=(const DescribeBlackholeStatusResponseBody &) = default ;
    DescribeBlackholeStatusResponseBody& operator=(DescribeBlackholeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackholeStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // blackholeStatus Field Functions 
    bool hasBlackholeStatus() const { return this->blackholeStatus_ != nullptr;};
    void deleteBlackholeStatus() { this->blackholeStatus_ = nullptr;};
    inline const vector<DescribeBlackholeStatusResponseBodyBlackholeStatus> & blackholeStatus() const { DARABONBA_PTR_GET_CONST(blackholeStatus_, vector<DescribeBlackholeStatusResponseBodyBlackholeStatus>) };
    inline vector<DescribeBlackholeStatusResponseBodyBlackholeStatus> blackholeStatus() { DARABONBA_PTR_GET(blackholeStatus_, vector<DescribeBlackholeStatusResponseBodyBlackholeStatus>) };
    inline DescribeBlackholeStatusResponseBody& setBlackholeStatus(const vector<DescribeBlackholeStatusResponseBodyBlackholeStatus> & blackholeStatus) { DARABONBA_PTR_SET_VALUE(blackholeStatus_, blackholeStatus) };
    inline DescribeBlackholeStatusResponseBody& setBlackholeStatus(vector<DescribeBlackholeStatusResponseBodyBlackholeStatus> && blackholeStatus) { DARABONBA_PTR_SET_RVALUE(blackholeStatus_, blackholeStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlackholeStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the blackhole filtering status of the instance.
    std::shared_ptr<vector<DescribeBlackholeStatusResponseBodyBlackholeStatus>> blackholeStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
