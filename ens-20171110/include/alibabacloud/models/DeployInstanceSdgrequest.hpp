// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYINSTANCESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYINSTANCESDGREQUEST_HPP_
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
  class DeployInstanceSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployInstanceSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployInstanceSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    DeployInstanceSDGRequest() = default ;
    DeployInstanceSDGRequest(const DeployInstanceSDGRequest &) = default ;
    DeployInstanceSDGRequest(DeployInstanceSDGRequest &&) = default ;
    DeployInstanceSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployInstanceSDGRequest() = default ;
    DeployInstanceSDGRequest& operator=(const DeployInstanceSDGRequest &) = default ;
    DeployInstanceSDGRequest& operator=(DeployInstanceSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deploymentType_ != nullptr
        && this->diskAccessProtocol_ != nullptr && this->diskType_ != nullptr && this->instanceIds_ != nullptr && this->SDGId_ != nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string deploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DeployInstanceSDGRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string diskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline DeployInstanceSDGRequest& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DeployInstanceSDGRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DeployInstanceSDGRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DeployInstanceSDGRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DeployInstanceSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The deployment type of the SDG. shared: shared read/write splitting deployment. The content of the SDG is read-only, and data updates are written to the local storage of the instance.
    std::shared_ptr<string> deploymentType_ = nullptr;
    std::shared_ptr<string> diskAccessProtocol_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The IDs of the instances. The value is a JSON array that consists of up to 100 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the SDG.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
