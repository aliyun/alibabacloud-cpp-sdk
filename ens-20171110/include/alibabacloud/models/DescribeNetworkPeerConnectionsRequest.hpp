// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPEERCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPEERCONNECTIONSREQUEST_HPP_
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
  class DescribeNetworkPeerConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPeerConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkIds, networkIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPeerConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkIds, networkIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeNetworkPeerConnectionsRequest() = default ;
    DescribeNetworkPeerConnectionsRequest(const DescribeNetworkPeerConnectionsRequest &) = default ;
    DescribeNetworkPeerConnectionsRequest(DescribeNetworkPeerConnectionsRequest &&) = default ;
    DescribeNetworkPeerConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPeerConnectionsRequest() = default ;
    DescribeNetworkPeerConnectionsRequest& operator=(const DescribeNetworkPeerConnectionsRequest &) = default ;
    DescribeNetworkPeerConnectionsRequest& operator=(DescribeNetworkPeerConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->networkIds_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkPeerConnectionsRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkPeerConnectionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNetworkPeerConnectionsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkIds Field Functions 
    bool hasNetworkIds() const { return this->networkIds_ != nullptr;};
    void deleteNetworkIds() { this->networkIds_ = nullptr;};
    inline const vector<string> & getNetworkIds() const { DARABONBA_PTR_GET_CONST(networkIds_, vector<string>) };
    inline vector<string> getNetworkIds() { DARABONBA_PTR_GET(networkIds_, vector<string>) };
    inline DescribeNetworkPeerConnectionsRequest& setNetworkIds(const vector<string> & networkIds) { DARABONBA_PTR_SET_VALUE(networkIds_, networkIds) };
    inline DescribeNetworkPeerConnectionsRequest& setNetworkIds(vector<string> && networkIds) { DARABONBA_PTR_SET_RVALUE(networkIds_, networkIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworkPeerConnectionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworkPeerConnectionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> networkIds_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
