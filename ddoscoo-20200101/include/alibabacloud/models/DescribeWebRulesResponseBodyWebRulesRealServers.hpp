// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULESREALSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULESREALSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebRulesResponseBodyWebRulesRealServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesResponseBodyWebRulesRealServers& obj) { 
      DARABONBA_PTR_TO_JSON(RealServer, realServer_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesResponseBodyWebRulesRealServers& obj) { 
      DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    DescribeWebRulesResponseBodyWebRulesRealServers() = default ;
    DescribeWebRulesResponseBodyWebRulesRealServers(const DescribeWebRulesResponseBodyWebRulesRealServers &) = default ;
    DescribeWebRulesResponseBodyWebRulesRealServers(DescribeWebRulesResponseBodyWebRulesRealServers &&) = default ;
    DescribeWebRulesResponseBodyWebRulesRealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesResponseBodyWebRulesRealServers() = default ;
    DescribeWebRulesResponseBodyWebRulesRealServers& operator=(const DescribeWebRulesResponseBodyWebRulesRealServers &) = default ;
    DescribeWebRulesResponseBodyWebRulesRealServers& operator=(DescribeWebRulesResponseBodyWebRulesRealServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->realServer_ == nullptr
        && return this->rsType_ == nullptr; };
    // realServer Field Functions 
    bool hasRealServer() const { return this->realServer_ != nullptr;};
    void deleteRealServer() { this->realServer_ = nullptr;};
    inline string realServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
    inline DescribeWebRulesResponseBodyWebRulesRealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline DescribeWebRulesResponseBodyWebRulesRealServers& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    // The address of the origin server.
    std::shared_ptr<string> realServer_ = nullptr;
    // The type of the origin server address. Valid values:
    // 
    // *   **0**: IP address
    // *   **1**: domain name The domain name of the origin server is returned if you deploy proxies, such as Web Application Firewall (WAF), between the origin server and the instance. In this case, the address of the proxy, such as the CNAME provided by WAF, is returned.
    std::shared_ptr<int32_t> rsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
