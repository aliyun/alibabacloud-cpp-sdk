// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLINKEDCLIENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLINKEDCLIENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyLinkedClientListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyLinkedClientListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProxyUuid, proxyUuid_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyLinkedClientListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProxyUuid, proxyUuid_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeHybridProxyLinkedClientListRequest() = default ;
    DescribeHybridProxyLinkedClientListRequest(const DescribeHybridProxyLinkedClientListRequest &) = default ;
    DescribeHybridProxyLinkedClientListRequest(DescribeHybridProxyLinkedClientListRequest &&) = default ;
    DescribeHybridProxyLinkedClientListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyLinkedClientListRequest() = default ;
    DescribeHybridProxyLinkedClientListRequest& operator=(const DescribeHybridProxyLinkedClientListRequest &) = default ;
    DescribeHybridProxyLinkedClientListRequest& operator=(DescribeHybridProxyLinkedClientListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->proxyUuid_ == nullptr && return this->remark_ == nullptr && return this->uuid_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeHybridProxyLinkedClientListRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeHybridProxyLinkedClientListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridProxyLinkedClientListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proxyUuid Field Functions 
    bool hasProxyUuid() const { return this->proxyUuid_ != nullptr;};
    void deleteProxyUuid() { this->proxyUuid_ = nullptr;};
    inline string proxyUuid() const { DARABONBA_PTR_GET_DEFAULT(proxyUuid_, "") };
    inline DescribeHybridProxyLinkedClientListRequest& setProxyUuid(string proxyUuid) { DARABONBA_PTR_SET_VALUE(proxyUuid_, proxyUuid) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeHybridProxyLinkedClientListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeHybridProxyLinkedClientListRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the proxy cluster. You can query the name of the proxy cluster in the Security Center console.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The UUID of the proxy node. You can call the DescribeHybridProxyList operation to query the UUID of the proxy node.
    std::shared_ptr<string> proxyUuid_ = nullptr;
    // The description of the proxy cluster.
    std::shared_ptr<string> remark_ = nullptr;
    // The UUID of the server on which the Security Center agent is installed. You can query the UUID by querying asset information.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
