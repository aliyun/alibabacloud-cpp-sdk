// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesClusterStateClusterStage.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterState& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterStage, clusterStage_);
      DARABONBA_PTR_TO_JSON(CreateTimeout, createTimeout_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserSlbDto, userSlbDto_);
      DARABONBA_PTR_TO_JSON(VpcCidr, vpcCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterState& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterStage, clusterStage_);
      DARABONBA_PTR_FROM_JSON(CreateTimeout, createTimeout_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(UserSlbDto, userSlbDto_);
      DARABONBA_PTR_FROM_JSON(VpcCidr, vpcCidr_);
    };
    DescribeInstancesResponseBodyInstancesClusterState() = default ;
    DescribeInstancesResponseBodyInstancesClusterState(const DescribeInstancesResponseBodyInstancesClusterState &) = default ;
    DescribeInstancesResponseBodyInstancesClusterState(DescribeInstancesResponseBodyInstancesClusterState &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterState() = default ;
    DescribeInstancesResponseBodyInstancesClusterState& operator=(const DescribeInstancesResponseBodyInstancesClusterState &) = default ;
    DescribeInstancesResponseBodyInstancesClusterState& operator=(DescribeInstancesResponseBodyInstancesClusterState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterStage_ != nullptr && this->createTimeout_ != nullptr && this->status_ != nullptr && this->subStatus_ != nullptr && this->url_ != nullptr
        && this->userSlbDto_ != nullptr && this->vpcCidr_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterState& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterStage Field Functions 
    bool hasClusterStage() const { return this->clusterStage_ != nullptr;};
    void deleteClusterStage() { this->clusterStage_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage & clusterStage() const { DARABONBA_PTR_GET_CONST(clusterStage_, Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage) };
    inline Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage clusterStage() { DARABONBA_PTR_GET(clusterStage_, Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage) };
    inline DescribeInstancesResponseBodyInstancesClusterState& setClusterStage(const Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage & clusterStage) { DARABONBA_PTR_SET_VALUE(clusterStage_, clusterStage) };
    inline DescribeInstancesResponseBodyInstancesClusterState& setClusterStage(Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage && clusterStage) { DARABONBA_PTR_SET_RVALUE(clusterStage_, clusterStage) };


    // createTimeout Field Functions 
    bool hasCreateTimeout() const { return this->createTimeout_ != nullptr;};
    void deleteCreateTimeout() { this->createTimeout_ = nullptr;};
    inline bool createTimeout() const { DARABONBA_PTR_GET_DEFAULT(createTimeout_, false) };
    inline DescribeInstancesResponseBodyInstancesClusterState& setCreateTimeout(bool createTimeout) { DARABONBA_PTR_SET_VALUE(createTimeout_, createTimeout) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterState& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterState& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userSlbDto Field Functions 
    bool hasUserSlbDto() const { return this->userSlbDto_ != nullptr;};
    void deleteUserSlbDto() { this->userSlbDto_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto & userSlbDto() const { DARABONBA_PTR_GET_CONST(userSlbDto_, Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto) };
    inline Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto userSlbDto() { DARABONBA_PTR_GET(userSlbDto_, Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto) };
    inline DescribeInstancesResponseBodyInstancesClusterState& setUserSlbDto(const Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto & userSlbDto) { DARABONBA_PTR_SET_VALUE(userSlbDto_, userSlbDto) };
    inline DescribeInstancesResponseBodyInstancesClusterState& setUserSlbDto(Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto && userSlbDto) { DARABONBA_PTR_SET_RVALUE(userSlbDto_, userSlbDto) };


    // vpcCidr Field Functions 
    bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
    void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
    inline string vpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterState& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStage> clusterStage_ = nullptr;
    std::shared_ptr<bool> createTimeout_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subStatus_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto> userSlbDto_ = nullptr;
    std::shared_ptr<string> vpcCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
