// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridProxyListResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridProxyListResponseBodyProxyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyListResponseBody() = default ;
    DescribeHybridProxyListResponseBody(const DescribeHybridProxyListResponseBody &) = default ;
    DescribeHybridProxyListResponseBody(DescribeHybridProxyListResponseBody &&) = default ;
    DescribeHybridProxyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyListResponseBody() = default ;
    DescribeHybridProxyListResponseBody& operator=(const DescribeHybridProxyListResponseBody &) = default ;
    DescribeHybridProxyListResponseBody& operator=(DescribeHybridProxyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->proxyList_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeHybridProxyListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeHybridProxyListResponseBodyPageInfo) };
    inline DescribeHybridProxyListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeHybridProxyListResponseBodyPageInfo) };
    inline DescribeHybridProxyListResponseBody& setPageInfo(const DescribeHybridProxyListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeHybridProxyListResponseBody& setPageInfo(DescribeHybridProxyListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // proxyList Field Functions 
    bool hasProxyList() const { return this->proxyList_ != nullptr;};
    void deleteProxyList() { this->proxyList_ = nullptr;};
    inline const vector<DescribeHybridProxyListResponseBodyProxyList> & proxyList() const { DARABONBA_PTR_GET_CONST(proxyList_, vector<DescribeHybridProxyListResponseBodyProxyList>) };
    inline vector<DescribeHybridProxyListResponseBodyProxyList> proxyList() { DARABONBA_PTR_GET(proxyList_, vector<DescribeHybridProxyListResponseBodyProxyList>) };
    inline DescribeHybridProxyListResponseBody& setProxyList(const vector<DescribeHybridProxyListResponseBodyProxyList> & proxyList) { DARABONBA_PTR_SET_VALUE(proxyList_, proxyList) };
    inline DescribeHybridProxyListResponseBody& setProxyList(vector<DescribeHybridProxyListResponseBodyProxyList> && proxyList) { DARABONBA_PTR_SET_RVALUE(proxyList_, proxyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeHybridProxyListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The information about the proxy clusters.
    std::shared_ptr<vector<DescribeHybridProxyListResponseBodyProxyList>> proxyList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
