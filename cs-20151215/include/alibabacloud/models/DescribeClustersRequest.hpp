// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
    };
    DescribeClustersRequest() = default ;
    DescribeClustersRequest(const DescribeClustersRequest &) = default ;
    DescribeClustersRequest(DescribeClustersRequest &&) = default ;
    DescribeClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersRequest() = default ;
    DescribeClustersRequest& operator=(const DescribeClustersRequest &) = default ;
    DescribeClustersRequest& operator=(DescribeClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->name_ == nullptr && this->resourceGroupId_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The cluster type.
    shared_ptr<string> clusterType_ {};
    // The cluster name based on which the system performs fuzzy searches among the clusters that belong to the current Alibaba Cloud account.
    shared_ptr<string> name_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
