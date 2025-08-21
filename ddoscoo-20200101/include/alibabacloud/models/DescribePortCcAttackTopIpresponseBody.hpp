// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortCcAttackTopIPResponseBodyTopIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortCcAttackTopIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortCcAttackTopIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopIp, topIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortCcAttackTopIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopIp, topIp_);
    };
    DescribePortCcAttackTopIPResponseBody() = default ;
    DescribePortCcAttackTopIPResponseBody(const DescribePortCcAttackTopIPResponseBody &) = default ;
    DescribePortCcAttackTopIPResponseBody(DescribePortCcAttackTopIPResponseBody &&) = default ;
    DescribePortCcAttackTopIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortCcAttackTopIPResponseBody() = default ;
    DescribePortCcAttackTopIPResponseBody& operator=(const DescribePortCcAttackTopIPResponseBody &) = default ;
    DescribePortCcAttackTopIPResponseBody& operator=(DescribePortCcAttackTopIPResponseBody &&) = default ;
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
    inline DescribePortCcAttackTopIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topIp Field Functions 
    bool hasTopIp() const { return this->topIp_ != nullptr;};
    void deleteTopIp() { this->topIp_ = nullptr;};
    inline const vector<DescribePortCcAttackTopIPResponseBodyTopIp> & topIp() const { DARABONBA_PTR_GET_CONST(topIp_, vector<DescribePortCcAttackTopIPResponseBodyTopIp>) };
    inline vector<DescribePortCcAttackTopIPResponseBodyTopIp> topIp() { DARABONBA_PTR_GET(topIp_, vector<DescribePortCcAttackTopIPResponseBodyTopIp>) };
    inline DescribePortCcAttackTopIPResponseBody& setTopIp(const vector<DescribePortCcAttackTopIPResponseBodyTopIp> & topIp) { DARABONBA_PTR_SET_VALUE(topIp_, topIp) };
    inline DescribePortCcAttackTopIPResponseBody& setTopIp(vector<DescribePortCcAttackTopIPResponseBodyTopIp> && topIp) { DARABONBA_PTR_SET_RVALUE(topIp_, topIp) };


  protected:
    // The request ID, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The top IP addresses from which most attacks are initiated.
    std::shared_ptr<vector<DescribePortCcAttackTopIPResponseBodyTopIp>> topIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
