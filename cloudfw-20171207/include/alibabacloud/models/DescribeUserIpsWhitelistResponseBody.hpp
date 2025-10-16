// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserIPSWhitelistResponseBodyIpv6Whitelists.hpp>
#include <alibabacloud/models/DescribeUserIPSWhitelistResponseBodyWhitelists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserIPSWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Whitelists, ipv6Whitelists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Whitelists, ipv6Whitelists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
    };
    DescribeUserIPSWhitelistResponseBody() = default ;
    DescribeUserIPSWhitelistResponseBody(const DescribeUserIPSWhitelistResponseBody &) = default ;
    DescribeUserIPSWhitelistResponseBody(DescribeUserIPSWhitelistResponseBody &&) = default ;
    DescribeUserIPSWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserIPSWhitelistResponseBody() = default ;
    DescribeUserIPSWhitelistResponseBody& operator=(const DescribeUserIPSWhitelistResponseBody &) = default ;
    DescribeUserIPSWhitelistResponseBody& operator=(DescribeUserIPSWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Whitelists_ == nullptr
        && return this->requestId_ == nullptr && return this->whitelists_ == nullptr; };
    // ipv6Whitelists Field Functions 
    bool hasIpv6Whitelists() const { return this->ipv6Whitelists_ != nullptr;};
    void deleteIpv6Whitelists() { this->ipv6Whitelists_ = nullptr;};
    inline const vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists> & ipv6Whitelists() const { DARABONBA_PTR_GET_CONST(ipv6Whitelists_, vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists>) };
    inline vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists> ipv6Whitelists() { DARABONBA_PTR_GET(ipv6Whitelists_, vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists>) };
    inline DescribeUserIPSWhitelistResponseBody& setIpv6Whitelists(const vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists> & ipv6Whitelists) { DARABONBA_PTR_SET_VALUE(ipv6Whitelists_, ipv6Whitelists) };
    inline DescribeUserIPSWhitelistResponseBody& setIpv6Whitelists(vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists> && ipv6Whitelists) { DARABONBA_PTR_SET_RVALUE(ipv6Whitelists_, ipv6Whitelists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserIPSWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whitelists Field Functions 
    bool hasWhitelists() const { return this->whitelists_ != nullptr;};
    void deleteWhitelists() { this->whitelists_ = nullptr;};
    inline const vector<DescribeUserIPSWhitelistResponseBodyWhitelists> & whitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<DescribeUserIPSWhitelistResponseBodyWhitelists>) };
    inline vector<DescribeUserIPSWhitelistResponseBodyWhitelists> whitelists() { DARABONBA_PTR_GET(whitelists_, vector<DescribeUserIPSWhitelistResponseBodyWhitelists>) };
    inline DescribeUserIPSWhitelistResponseBody& setWhitelists(const vector<DescribeUserIPSWhitelistResponseBodyWhitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
    inline DescribeUserIPSWhitelistResponseBody& setWhitelists(vector<DescribeUserIPSWhitelistResponseBodyWhitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


  protected:
    std::shared_ptr<vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists>> ipv6Whitelists_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUserIPSWhitelistResponseBodyWhitelists>> whitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
