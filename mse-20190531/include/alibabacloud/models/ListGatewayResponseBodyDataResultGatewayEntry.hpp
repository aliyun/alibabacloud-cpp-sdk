// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTGATEWAYENTRY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTGATEWAYENTRY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultGatewayEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultGatewayEntry& obj) { 
      DARABONBA_PTR_TO_JSON(EntryDomain, entryDomain_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(Ipv6List, ipv6List_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultGatewayEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryDomain, entryDomain_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(Ipv6List, ipv6List_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListGatewayResponseBodyDataResultGatewayEntry() = default ;
    ListGatewayResponseBodyDataResultGatewayEntry(const ListGatewayResponseBodyDataResultGatewayEntry &) = default ;
    ListGatewayResponseBodyDataResultGatewayEntry(ListGatewayResponseBodyDataResultGatewayEntry &&) = default ;
    ListGatewayResponseBodyDataResultGatewayEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultGatewayEntry() = default ;
    ListGatewayResponseBodyDataResultGatewayEntry& operator=(const ListGatewayResponseBodyDataResultGatewayEntry &) = default ;
    ListGatewayResponseBodyDataResultGatewayEntry& operator=(ListGatewayResponseBodyDataResultGatewayEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entryDomain_ != nullptr
        && this->httpPorts_ != nullptr && this->httpsPorts_ != nullptr && this->ipList_ != nullptr && this->ipv6List_ != nullptr && this->netType_ != nullptr
        && this->status_ != nullptr; };
    // entryDomain Field Functions 
    bool hasEntryDomain() const { return this->entryDomain_ != nullptr;};
    void deleteEntryDomain() { this->entryDomain_ = nullptr;};
    inline string entryDomain() const { DARABONBA_PTR_GET_DEFAULT(entryDomain_, "") };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setEntryDomain(string entryDomain) { DARABONBA_PTR_SET_VALUE(entryDomain_, entryDomain) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline const vector<int32_t> & httpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int32_t>) };
    inline vector<int32_t> httpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int32_t>) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setHttpPorts(const vector<int32_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setHttpPorts(vector<int32_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline const vector<int32_t> & httpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int32_t>) };
    inline vector<int32_t> httpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int32_t>) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setHttpsPorts(const vector<int32_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setHttpsPorts(vector<int32_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> ipList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // ipv6List Field Functions 
    bool hasIpv6List() const { return this->ipv6List_ != nullptr;};
    void deleteIpv6List() { this->ipv6List_ = nullptr;};
    inline const vector<string> & ipv6List() const { DARABONBA_PTR_GET_CONST(ipv6List_, vector<string>) };
    inline vector<string> ipv6List() { DARABONBA_PTR_GET(ipv6List_, vector<string>) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setIpv6List(const vector<string> & ipv6List) { DARABONBA_PTR_SET_VALUE(ipv6List_, ipv6List) };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setIpv6List(vector<string> && ipv6List) { DARABONBA_PTR_SET_RVALUE(ipv6List_, ipv6List) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayResponseBodyDataResultGatewayEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> entryDomain_ = nullptr;
    std::shared_ptr<vector<int32_t>> httpPorts_ = nullptr;
    std::shared_ptr<vector<int32_t>> httpsPorts_ = nullptr;
    std::shared_ptr<vector<string>> ipList_ = nullptr;
    std::shared_ptr<vector<string>> ipv6List_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
