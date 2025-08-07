// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVisitTopIpResponseBodyTopIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitTopIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitTopIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopIp, topIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitTopIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopIp, topIp_);
    };
    DescribeVisitTopIpResponseBody() = default ;
    DescribeVisitTopIpResponseBody(const DescribeVisitTopIpResponseBody &) = default ;
    DescribeVisitTopIpResponseBody(DescribeVisitTopIpResponseBody &&) = default ;
    DescribeVisitTopIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitTopIpResponseBody() = default ;
    DescribeVisitTopIpResponseBody& operator=(const DescribeVisitTopIpResponseBody &) = default ;
    DescribeVisitTopIpResponseBody& operator=(DescribeVisitTopIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->topIp_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVisitTopIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topIp Field Functions 
    bool hasTopIp() const { return this->topIp_ != nullptr;};
    void deleteTopIp() { this->topIp_ = nullptr;};
    inline const vector<DescribeVisitTopIpResponseBodyTopIp> & topIp() const { DARABONBA_PTR_GET_CONST(topIp_, vector<DescribeVisitTopIpResponseBodyTopIp>) };
    inline vector<DescribeVisitTopIpResponseBodyTopIp> topIp() { DARABONBA_PTR_GET(topIp_, vector<DescribeVisitTopIpResponseBodyTopIp>) };
    inline DescribeVisitTopIpResponseBody& setTopIp(const vector<DescribeVisitTopIpResponseBodyTopIp> & topIp) { DARABONBA_PTR_SET_VALUE(topIp_, topIp) };
    inline DescribeVisitTopIpResponseBody& setTopIp(vector<DescribeVisitTopIpResponseBodyTopIp> && topIp) { DARABONBA_PTR_SET_RVALUE(topIp_, topIp) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 IP addresses from which requests are sent.
    std::shared_ptr<vector<DescribeVisitTopIpResponseBodyTopIp>> topIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
