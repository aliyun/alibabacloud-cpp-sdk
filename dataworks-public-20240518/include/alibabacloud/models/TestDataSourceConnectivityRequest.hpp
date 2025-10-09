// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TestDataSourceConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    TestDataSourceConnectivityRequest() = default ;
    TestDataSourceConnectivityRequest(const TestDataSourceConnectivityRequest &) = default ;
    TestDataSourceConnectivityRequest(TestDataSourceConnectivityRequest &&) = default ;
    TestDataSourceConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataSourceConnectivityRequest() = default ;
    TestDataSourceConnectivityRequest& operator=(const TestDataSourceConnectivityRequest &) = default ;
    TestDataSourceConnectivityRequest& operator=(TestDataSourceConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->projectId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline TestDataSourceConnectivityRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TestDataSourceConnectivityRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline TestDataSourceConnectivityRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the data source for which you want to test the network connectivity.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
