// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCreatedNatFirewallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreatedNatFirewallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedNatFirewalls, createdNatFirewalls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreatedNatFirewallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedNatFirewalls, createdNatFirewalls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreatedNatFirewallResponseBody() = default ;
    DescribeCreatedNatFirewallResponseBody(const DescribeCreatedNatFirewallResponseBody &) = default ;
    DescribeCreatedNatFirewallResponseBody(DescribeCreatedNatFirewallResponseBody &&) = default ;
    DescribeCreatedNatFirewallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreatedNatFirewallResponseBody() = default ;
    DescribeCreatedNatFirewallResponseBody& operator=(const DescribeCreatedNatFirewallResponseBody &) = default ;
    DescribeCreatedNatFirewallResponseBody& operator=(DescribeCreatedNatFirewallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdNatFirewalls_ == nullptr
        && return this->requestId_ == nullptr; };
    // createdNatFirewalls Field Functions 
    bool hasCreatedNatFirewalls() const { return this->createdNatFirewalls_ != nullptr;};
    void deleteCreatedNatFirewalls() { this->createdNatFirewalls_ = nullptr;};
    inline const vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls> & createdNatFirewalls() const { DARABONBA_PTR_GET_CONST(createdNatFirewalls_, vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls>) };
    inline vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls> createdNatFirewalls() { DARABONBA_PTR_GET(createdNatFirewalls_, vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls>) };
    inline DescribeCreatedNatFirewallResponseBody& setCreatedNatFirewalls(const vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls> & createdNatFirewalls) { DARABONBA_PTR_SET_VALUE(createdNatFirewalls_, createdNatFirewalls) };
    inline DescribeCreatedNatFirewallResponseBody& setCreatedNatFirewalls(vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls> && createdNatFirewalls) { DARABONBA_PTR_SET_RVALUE(createdNatFirewalls_, createdNatFirewalls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreatedNatFirewallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls>> createdNatFirewalls_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
