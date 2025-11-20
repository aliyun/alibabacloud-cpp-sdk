// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTAINERCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTAINERCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateContainerClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContainerClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RenewToken, renewToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContainerClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RenewToken, renewToken_);
    };
    UpdateContainerClusterRequest() = default ;
    UpdateContainerClusterRequest(const UpdateContainerClusterRequest &) = default ;
    UpdateContainerClusterRequest(UpdateContainerClusterRequest &&) = default ;
    UpdateContainerClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContainerClusterRequest() = default ;
    UpdateContainerClusterRequest& operator=(const UpdateContainerClusterRequest &) = default ;
    UpdateContainerClusterRequest& operator=(UpdateContainerClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->networkType_ == nullptr && return this->renewToken_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateContainerClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateContainerClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateContainerClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateContainerClusterRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // renewToken Field Functions 
    bool hasRenewToken() const { return this->renewToken_ != nullptr;};
    void deleteRenewToken() { this->renewToken_ = nullptr;};
    inline bool renewToken() const { DARABONBA_PTR_GET_DEFAULT(renewToken_, false) };
    inline UpdateContainerClusterRequest& setRenewToken(bool renewToken) { DARABONBA_PTR_SET_VALUE(renewToken_, renewToken) };


  protected:
    // Cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Cluster description.
    std::shared_ptr<string> description_ = nullptr;
    // Cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // Network type, with possible values including:
    // * **CLASSIC**: Classic Network.
    // * **VPC**: Virtual Private Cloud.
    std::shared_ptr<string> networkType_ = nullptr;
    // Whether to regenerate the token.
    std::shared_ptr<bool> renewToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
