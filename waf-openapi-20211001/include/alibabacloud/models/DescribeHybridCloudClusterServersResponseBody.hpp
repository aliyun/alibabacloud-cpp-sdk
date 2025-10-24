// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudClusterServersResponseBodyClusterServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterServers, clusterServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterServers, clusterServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudClusterServersResponseBody() = default ;
    DescribeHybridCloudClusterServersResponseBody(const DescribeHybridCloudClusterServersResponseBody &) = default ;
    DescribeHybridCloudClusterServersResponseBody(DescribeHybridCloudClusterServersResponseBody &&) = default ;
    DescribeHybridCloudClusterServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterServersResponseBody() = default ;
    DescribeHybridCloudClusterServersResponseBody& operator=(const DescribeHybridCloudClusterServersResponseBody &) = default ;
    DescribeHybridCloudClusterServersResponseBody& operator=(DescribeHybridCloudClusterServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterServers_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // clusterServers Field Functions 
    bool hasClusterServers() const { return this->clusterServers_ != nullptr;};
    void deleteClusterServers() { this->clusterServers_ = nullptr;};
    inline const vector<DescribeHybridCloudClusterServersResponseBodyClusterServers> & clusterServers() const { DARABONBA_PTR_GET_CONST(clusterServers_, vector<DescribeHybridCloudClusterServersResponseBodyClusterServers>) };
    inline vector<DescribeHybridCloudClusterServersResponseBodyClusterServers> clusterServers() { DARABONBA_PTR_GET(clusterServers_, vector<DescribeHybridCloudClusterServersResponseBodyClusterServers>) };
    inline DescribeHybridCloudClusterServersResponseBody& setClusterServers(const vector<DescribeHybridCloudClusterServersResponseBodyClusterServers> & clusterServers) { DARABONBA_PTR_SET_VALUE(clusterServers_, clusterServers) };
    inline DescribeHybridCloudClusterServersResponseBody& setClusterServers(vector<DescribeHybridCloudClusterServersResponseBodyClusterServers> && clusterServers) { DARABONBA_PTR_SET_RVALUE(clusterServers_, clusterServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClusterServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudClusterServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeHybridCloudClusterServersResponseBodyClusterServers>> clusterServers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
