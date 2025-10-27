// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterInfoListResponseBodyClusterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterInfoListResponseBody() = default ;
    DescribeClusterInfoListResponseBody(const DescribeClusterInfoListResponseBody &) = default ;
    DescribeClusterInfoListResponseBody(DescribeClusterInfoListResponseBody &&) = default ;
    DescribeClusterInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterInfoListResponseBody() = default ;
    DescribeClusterInfoListResponseBody& operator=(const DescribeClusterInfoListResponseBody &) = default ;
    DescribeClusterInfoListResponseBody& operator=(DescribeClusterInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterList_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const vector<DescribeClusterInfoListResponseBodyClusterList> & clusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<DescribeClusterInfoListResponseBodyClusterList>) };
    inline vector<DescribeClusterInfoListResponseBodyClusterList> clusterList() { DARABONBA_PTR_GET(clusterList_, vector<DescribeClusterInfoListResponseBodyClusterList>) };
    inline DescribeClusterInfoListResponseBody& setClusterList(const vector<DescribeClusterInfoListResponseBodyClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline DescribeClusterInfoListResponseBody& setClusterList(vector<DescribeClusterInfoListResponseBodyClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about clusters.
    std::shared_ptr<vector<DescribeClusterInfoListResponseBodyClusterList>> clusterList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
