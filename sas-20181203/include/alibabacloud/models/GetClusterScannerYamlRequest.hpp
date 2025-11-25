// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSCANNERYAMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSCANNERYAMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterScannerYamlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterScannerYamlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterScannerYamlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    GetClusterScannerYamlRequest() = default ;
    GetClusterScannerYamlRequest(const GetClusterScannerYamlRequest &) = default ;
    GetClusterScannerYamlRequest(GetClusterScannerYamlRequest &&) = default ;
    GetClusterScannerYamlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterScannerYamlRequest() = default ;
    GetClusterScannerYamlRequest& operator=(const GetClusterScannerYamlRequest &) = default ;
    GetClusterScannerYamlRequest& operator=(GetClusterScannerYamlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterScannerYamlRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the cluster that you want to query.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
