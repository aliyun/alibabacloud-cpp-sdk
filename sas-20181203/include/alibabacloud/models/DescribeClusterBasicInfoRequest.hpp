// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeClusterBasicInfoRequest() = default ;
    DescribeClusterBasicInfoRequest(const DescribeClusterBasicInfoRequest &) = default ;
    DescribeClusterBasicInfoRequest(DescribeClusterBasicInfoRequest &&) = default ;
    DescribeClusterBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBasicInfoRequest() = default ;
    DescribeClusterBasicInfoRequest& operator=(const DescribeClusterBasicInfoRequest &) = default ;
    DescribeClusterBasicInfoRequest& operator=(DescribeClusterBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->targetType_ == nullptr && this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterBasicInfoRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeClusterBasicInfoRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterBasicInfoRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the cluster that you want to query.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The dimension from which you want to configure the feature. Valid values:
    // 
    // *   **Cluster**: the ID of the cluster
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The type of the feature. Valid values:
    // 
    // *   **containerNetwork**: container network topology
    // *   **interceptionSwitch**: cluster microsegmentation
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
