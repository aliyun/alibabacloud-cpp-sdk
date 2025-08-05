// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class AddContainerClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
    };
    AddContainerClusterRequest() = default ;
    AddContainerClusterRequest(const AddContainerClusterRequest &) = default ;
    AddContainerClusterRequest(AddContainerClusterRequest &&) = default ;
    AddContainerClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerClusterRequest() = default ;
    AddContainerClusterRequest& operator=(const AddContainerClusterRequest &) = default ;
    AddContainerClusterRequest& operator=(AddContainerClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->description_ != nullptr && this->identifier_ != nullptr && this->name_ != nullptr && this->networkType_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline AddContainerClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddContainerClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline AddContainerClusterRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddContainerClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline AddContainerClusterRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // The type of the cluster. Only Container Service for Kubernetes (ACK) clusters are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the cluster that you want to register.
    // 
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   **CLASSIC**: the classic network
    // *   **VPC**: a virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<string> networkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
