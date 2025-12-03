// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYUIPROXYCONNADDRINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYUIPROXYCONNADDRINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
      DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
      DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
    };
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo() = default ;
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo(const DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo &) = default ;
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo(DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo &&) = default ;
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo() = default ;
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& operator=(const DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo &) = default ;
    DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& operator=(DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connAddr_ == nullptr
        && return this->connAddrPort_ == nullptr && return this->netType_ == nullptr; };
    // connAddr Field Functions 
    bool hasConnAddr() const { return this->connAddr_ != nullptr;};
    void deleteConnAddr() { this->connAddr_ = nullptr;};
    inline string connAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
    inline DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


    // connAddrPort Field Functions 
    bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
    void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
    inline string connAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
    inline DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


  protected:
    std::shared_ptr<string> connAddr_ = nullptr;
    std::shared_ptr<string> connAddrPort_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
