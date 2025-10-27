// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityProxyResponseBodyProxyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecurityProxyResponseBody() = default ;
    DescribeSecurityProxyResponseBody(const DescribeSecurityProxyResponseBody &) = default ;
    DescribeSecurityProxyResponseBody(DescribeSecurityProxyResponseBody &&) = default ;
    DescribeSecurityProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResponseBody() = default ;
    DescribeSecurityProxyResponseBody& operator=(const DescribeSecurityProxyResponseBody &) = default ;
    DescribeSecurityProxyResponseBody& operator=(DescribeSecurityProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // proxyList Field Functions 
    bool hasProxyList() const { return this->proxyList_ != nullptr;};
    void deleteProxyList() { this->proxyList_ = nullptr;};
    inline const vector<DescribeSecurityProxyResponseBodyProxyList> & proxyList() const { DARABONBA_PTR_GET_CONST(proxyList_, vector<DescribeSecurityProxyResponseBodyProxyList>) };
    inline vector<DescribeSecurityProxyResponseBodyProxyList> proxyList() { DARABONBA_PTR_GET(proxyList_, vector<DescribeSecurityProxyResponseBodyProxyList>) };
    inline DescribeSecurityProxyResponseBody& setProxyList(const vector<DescribeSecurityProxyResponseBodyProxyList> & proxyList) { DARABONBA_PTR_SET_VALUE(proxyList_, proxyList) };
    inline DescribeSecurityProxyResponseBody& setProxyList(vector<DescribeSecurityProxyResponseBodyProxyList> && proxyList) { DARABONBA_PTR_SET_RVALUE(proxyList_, proxyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityProxyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeSecurityProxyResponseBodyProxyList>> proxyList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
