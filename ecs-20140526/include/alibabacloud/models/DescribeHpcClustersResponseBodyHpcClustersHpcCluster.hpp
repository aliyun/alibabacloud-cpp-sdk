// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODYHPCCLUSTERSHPCCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODYHPCCLUSTERSHPCCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHpcClustersResponseBodyHpcClustersHpcCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHpcClustersResponseBodyHpcClustersHpcCluster& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHpcClustersResponseBodyHpcClustersHpcCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster() = default ;
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster(const DescribeHpcClustersResponseBodyHpcClustersHpcCluster &) = default ;
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster(DescribeHpcClustersResponseBodyHpcClustersHpcCluster &&) = default ;
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHpcClustersResponseBodyHpcClustersHpcCluster() = default ;
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster& operator=(const DescribeHpcClustersResponseBodyHpcClustersHpcCluster &) = default ;
    DescribeHpcClustersResponseBodyHpcClustersHpcCluster& operator=(DescribeHpcClustersResponseBodyHpcClustersHpcCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->hpcClusterId_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHpcClustersResponseBodyHpcClustersHpcCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string hpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline DescribeHpcClustersResponseBodyHpcClustersHpcCluster& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHpcClustersResponseBodyHpcClustersHpcCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the HPC cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the HPC cluster.
    std::shared_ptr<string> hpcClusterId_ = nullptr;
    // The name of the HPC cluster.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
