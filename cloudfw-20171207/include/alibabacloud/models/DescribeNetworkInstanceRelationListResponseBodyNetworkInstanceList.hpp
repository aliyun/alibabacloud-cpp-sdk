// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen.hpp>
#include <alibabacloud/models/DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(PeerNetworkInstanceList, peerNetworkInstanceList_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(PeerNetworkInstanceList, peerNetworkInstanceList_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList &&) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& operator=(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& operator=(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedCen_ == nullptr
        && return this->connectType_ == nullptr && return this->networkInstanceId_ == nullptr && return this->networkInstanceName_ == nullptr && return this->networkInstanceType_ == nullptr && return this->peerNetworkInstanceList_ == nullptr
        && return this->regionNo_ == nullptr; };
    // associatedCen Field Functions 
    bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
    void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
    inline const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen> & associatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen>) };
    inline vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen> associatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen>) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setAssociatedCen(const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setAssociatedCen(vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string networkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // peerNetworkInstanceList Field Functions 
    bool hasPeerNetworkInstanceList() const { return this->peerNetworkInstanceList_ != nullptr;};
    void deletePeerNetworkInstanceList() { this->peerNetworkInstanceList_ = nullptr;};
    inline const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList> & peerNetworkInstanceList() const { DARABONBA_PTR_GET_CONST(peerNetworkInstanceList_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList>) };
    inline vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList> peerNetworkInstanceList() { DARABONBA_PTR_GET(peerNetworkInstanceList_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList>) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setPeerNetworkInstanceList(const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList> & peerNetworkInstanceList) { DARABONBA_PTR_SET_VALUE(peerNetworkInstanceList_, peerNetworkInstanceList) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setPeerNetworkInstanceList(vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList> && peerNetworkInstanceList) { DARABONBA_PTR_SET_RVALUE(peerNetworkInstanceList_, peerNetworkInstanceList) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen>> associatedCen_ = nullptr;
    std::shared_ptr<string> connectType_ = nullptr;
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    std::shared_ptr<string> networkInstanceType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList>> peerNetworkInstanceList_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
