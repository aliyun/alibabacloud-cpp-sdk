// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkIds, networkIds_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkIds, networkIds_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeNetworksRequest() = default ;
    DescribeNetworksRequest(const DescribeNetworksRequest &) = default ;
    DescribeNetworksRequest(DescribeNetworksRequest &&) = default ;
    DescribeNetworksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksRequest() = default ;
    DescribeNetworksRequest& operator=(const DescribeNetworksRequest &) = default ;
    DescribeNetworksRequest& operator=(DescribeNetworksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->ensRegionIds_ == nullptr && this->networkId_ == nullptr && this->networkIds_ == nullptr && this->networkName_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworksRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeNetworksRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeNetworksRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworksRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkIds Field Functions 
    bool hasNetworkIds() const { return this->networkIds_ != nullptr;};
    void deleteNetworkIds() { this->networkIds_ = nullptr;};
    inline const vector<string> & getNetworkIds() const { DARABONBA_PTR_GET_CONST(networkIds_, vector<string>) };
    inline vector<string> getNetworkIds() { DARABONBA_PTR_GET(networkIds_, vector<string>) };
    inline DescribeNetworksRequest& setNetworkIds(const vector<string> & networkIds) { DARABONBA_PTR_SET_VALUE(networkIds_, networkIds) };
    inline DescribeNetworksRequest& setNetworkIds(vector<string> && networkIds) { DARABONBA_PTR_SET_RVALUE(networkIds_, networkIds) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string getNetworkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline DescribeNetworksRequest& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the edge node.
    shared_ptr<string> ensRegionId_ {};
    // The IDs of edge nodes. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> ensRegionIds_ {};
    // The ID of the network.
    shared_ptr<string> networkId_ {};
    // The IDs of VPCs You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> networkIds_ {};
    // The name of the network.
    shared_ptr<string> networkName_ {};
    // The page number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
