// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELISTPEERNETWORKINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELISTPEERNETWORKINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList &&) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& operator=(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& operator=(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedCen_ == nullptr
        && return this->networkInstanceId_ == nullptr && return this->networkInstanceName_ == nullptr && return this->networkInstanceType_ == nullptr && return this->regionNo_ == nullptr; };
    // associatedCen Field Functions 
    bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
    void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
    inline const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen> & associatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen>) };
    inline vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen> associatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen>) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setAssociatedCen(const vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setAssociatedCen(vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string networkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListPeerNetworkInstanceListAssociatedCen>> associatedCen_ = nullptr;
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    std::shared_ptr<string> networkInstanceType_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
