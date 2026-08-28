// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterNamespace, clusterNamespace_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(slbId, slbId_);
      DARABONBA_PTR_TO_JSON(switchType, switchType_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(virtualServices, virtualServices_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterNamespace, clusterNamespace_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(slbId, slbId_);
      DARABONBA_PTR_FROM_JSON(switchType, switchType_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(virtualServices, virtualServices_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    UpdateMigrationTaskRequest() = default ;
    UpdateMigrationTaskRequest(const UpdateMigrationTaskRequest &) = default ;
    UpdateMigrationTaskRequest(UpdateMigrationTaskRequest &&) = default ;
    UpdateMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMigrationTaskRequest() = default ;
    UpdateMigrationTaskRequest& operator=(const UpdateMigrationTaskRequest &) = default ;
    UpdateMigrationTaskRequest& operator=(UpdateMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualServices& obj) { 
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(virtualServiceGroupId, virtualServiceGroupId_);
        DARABONBA_PTR_TO_JSON(virtualServiceGroupName, virtualServiceGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualServices& obj) { 
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(virtualServiceGroupId, virtualServiceGroupId_);
        DARABONBA_PTR_FROM_JSON(virtualServiceGroupName, virtualServiceGroupName_);
      };
      VirtualServices() = default ;
      VirtualServices(const VirtualServices &) = default ;
      VirtualServices(VirtualServices &&) = default ;
      VirtualServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualServices() = default ;
      VirtualServices& operator=(const VirtualServices &) = default ;
      VirtualServices& operator=(VirtualServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->virtualServiceGroupId_ == nullptr && this->virtualServiceGroupName_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline VirtualServices& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline VirtualServices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // virtualServiceGroupId Field Functions 
      bool hasVirtualServiceGroupId() const { return this->virtualServiceGroupId_ != nullptr;};
      void deleteVirtualServiceGroupId() { this->virtualServiceGroupId_ = nullptr;};
      inline string getVirtualServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupId_, "") };
      inline VirtualServices& setVirtualServiceGroupId(string virtualServiceGroupId) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupId_, virtualServiceGroupId) };


      // virtualServiceGroupName Field Functions 
      bool hasVirtualServiceGroupName() const { return this->virtualServiceGroupName_ != nullptr;};
      void deleteVirtualServiceGroupName() { this->virtualServiceGroupName_ = nullptr;};
      inline string getVirtualServiceGroupName() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupName_, "") };
      inline VirtualServices& setVirtualServiceGroupName(string virtualServiceGroupName) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupName_, virtualServiceGroupName) };


    protected:
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> virtualServiceGroupId_ {};
      shared_ptr<string> virtualServiceGroupName_ {};
    };

    virtual bool empty() const override { return this->clusterNamespace_ == nullptr
        && this->description_ == nullptr && this->serviceName_ == nullptr && this->slbId_ == nullptr && this->switchType_ == nullptr && this->target_ == nullptr
        && this->virtualServices_ == nullptr && this->weight_ == nullptr; };
    // clusterNamespace Field Functions 
    bool hasClusterNamespace() const { return this->clusterNamespace_ != nullptr;};
    void deleteClusterNamespace() { this->clusterNamespace_ = nullptr;};
    inline string getClusterNamespace() const { DARABONBA_PTR_GET_DEFAULT(clusterNamespace_, "") };
    inline UpdateMigrationTaskRequest& setClusterNamespace(string clusterNamespace) { DARABONBA_PTR_SET_VALUE(clusterNamespace_, clusterNamespace) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMigrationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateMigrationTaskRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline UpdateMigrationTaskRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline UpdateMigrationTaskRequest& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline UpdateMigrationTaskRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // virtualServices Field Functions 
    bool hasVirtualServices() const { return this->virtualServices_ != nullptr;};
    void deleteVirtualServices() { this->virtualServices_ = nullptr;};
    inline const vector<UpdateMigrationTaskRequest::VirtualServices> & getVirtualServices() const { DARABONBA_PTR_GET_CONST(virtualServices_, vector<UpdateMigrationTaskRequest::VirtualServices>) };
    inline vector<UpdateMigrationTaskRequest::VirtualServices> getVirtualServices() { DARABONBA_PTR_GET(virtualServices_, vector<UpdateMigrationTaskRequest::VirtualServices>) };
    inline UpdateMigrationTaskRequest& setVirtualServices(const vector<UpdateMigrationTaskRequest::VirtualServices> & virtualServices) { DARABONBA_PTR_SET_VALUE(virtualServices_, virtualServices) };
    inline UpdateMigrationTaskRequest& setVirtualServices(vector<UpdateMigrationTaskRequest::VirtualServices> && virtualServices) { DARABONBA_PTR_SET_RVALUE(virtualServices_, virtualServices) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateMigrationTaskRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    shared_ptr<string> clusterNamespace_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> slbId_ {};
    shared_ptr<string> switchType_ {};
    shared_ptr<string> target_ {};
    shared_ptr<vector<UpdateMigrationTaskRequest::VirtualServices>> virtualServices_ {};
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
