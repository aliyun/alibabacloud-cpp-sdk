// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestNetworkConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestNetworkConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, TestNetworkConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    TestNetworkConnectionRequest() = default ;
    TestNetworkConnectionRequest(const TestNetworkConnectionRequest &) = default ;
    TestNetworkConnectionRequest(TestNetworkConnectionRequest &&) = default ;
    TestNetworkConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestNetworkConnectionRequest() = default ;
    TestNetworkConnectionRequest& operator=(const TestNetworkConnectionRequest &) = default ;
    TestNetworkConnectionRequest& operator=(TestNetworkConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceName_ != nullptr
        && this->envType_ != nullptr && this->projectId_ != nullptr && this->resourceGroup_ != nullptr; };
    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline TestNetworkConnectionRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TestNetworkConnectionRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TestNetworkConnectionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline TestNetworkConnectionRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


  protected:
    // The name of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The environment in which the data source resides. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the DataWorks workspace to which the data source belongs. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The identifier of the resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the identifier of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
