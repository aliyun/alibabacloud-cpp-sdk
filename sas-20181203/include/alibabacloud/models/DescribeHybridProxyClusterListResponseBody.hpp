// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridProxyClusterListResponseBodyClusterList.hpp>
#include <alibabacloud/models/DescribeHybridProxyClusterListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyClusterListResponseBody() = default ;
    DescribeHybridProxyClusterListResponseBody(const DescribeHybridProxyClusterListResponseBody &) = default ;
    DescribeHybridProxyClusterListResponseBody(DescribeHybridProxyClusterListResponseBody &&) = default ;
    DescribeHybridProxyClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyClusterListResponseBody() = default ;
    DescribeHybridProxyClusterListResponseBody& operator=(const DescribeHybridProxyClusterListResponseBody &) = default ;
    DescribeHybridProxyClusterListResponseBody& operator=(DescribeHybridProxyClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const vector<DescribeHybridProxyClusterListResponseBodyClusterList> & clusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<DescribeHybridProxyClusterListResponseBodyClusterList>) };
    inline vector<DescribeHybridProxyClusterListResponseBodyClusterList> clusterList() { DARABONBA_PTR_GET(clusterList_, vector<DescribeHybridProxyClusterListResponseBodyClusterList>) };
    inline DescribeHybridProxyClusterListResponseBody& setClusterList(const vector<DescribeHybridProxyClusterListResponseBodyClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline DescribeHybridProxyClusterListResponseBody& setClusterList(vector<DescribeHybridProxyClusterListResponseBodyClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeHybridProxyClusterListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeHybridProxyClusterListResponseBodyPageInfo) };
    inline DescribeHybridProxyClusterListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeHybridProxyClusterListResponseBodyPageInfo) };
    inline DescribeHybridProxyClusterListResponseBody& setPageInfo(const DescribeHybridProxyClusterListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeHybridProxyClusterListResponseBody& setPageInfo(DescribeHybridProxyClusterListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The proxy clusters.
    std::shared_ptr<vector<DescribeHybridProxyClusterListResponseBodyClusterList>> clusterList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeHybridProxyClusterListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
