// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODYK8SCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODYK8SCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClustersResponseBodyK8sClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClustersResponseBodyK8sClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClustersResponseBodyK8sClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters() = default ;
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters(const DescribeContainerServiceK8sClustersResponseBodyK8sClusters &) = default ;
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters(DescribeContainerServiceK8sClustersResponseBodyK8sClusters &&) = default ;
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClustersResponseBodyK8sClusters() = default ;
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters& operator=(const DescribeContainerServiceK8sClustersResponseBodyK8sClusters &) = default ;
    DescribeContainerServiceK8sClustersResponseBodyK8sClusters& operator=(DescribeContainerServiceK8sClustersResponseBodyK8sClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->name_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeContainerServiceK8sClustersResponseBodyK8sClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeContainerServiceK8sClustersResponseBodyK8sClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
