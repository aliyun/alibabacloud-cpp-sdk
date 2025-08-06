// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCloudPhoneNodesRequest() = default ;
    DescribeCloudPhoneNodesRequest(const DescribeCloudPhoneNodesRequest &) = default ;
    DescribeCloudPhoneNodesRequest(DescribeCloudPhoneNodesRequest &&) = default ;
    DescribeCloudPhoneNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesRequest() = default ;
    DescribeCloudPhoneNodesRequest& operator=(const DescribeCloudPhoneNodesRequest &) = default ;
    DescribeCloudPhoneNodesRequest& operator=(DescribeCloudPhoneNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageId_ != nullptr
        && this->bizRegionId_ != nullptr && this->chargeType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->nodeIds_ != nullptr
        && this->nodeName_ != nullptr && this->serverType_ != nullptr && this->status_ != nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeCloudPhoneNodesRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeCloudPhoneNodesRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCloudPhoneNodesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeCloudPhoneNodesRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudPhoneNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DescribeCloudPhoneNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DescribeCloudPhoneNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeCloudPhoneNodesRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline DescribeCloudPhoneNodesRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudPhoneNodesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method. Only the subscription billing method is supported.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If a query doesn\\"t return all results, the response includes a NextToken value for pagination. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The matrix IDs.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The matrix name.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The matrix specification.
    // 
    // Valid values:
    // 
    // *   cpm.gn6.gx1
    std::shared_ptr<string> serverType_ = nullptr;
    // The matrix status.
    // 
    // Valid values:
    // 
    // *   FAILED: The matrix failed to be created.
    // *   RUNNING: The matrix is available.
    // *   DELETING: The matrix is being deleted.
    // *   NODE_READY: The matrix is ready, and cloud phone instances are being created.
    // *   DELETED: The matrix is deleted.
    // *   CREATING: The matrix is being created.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
