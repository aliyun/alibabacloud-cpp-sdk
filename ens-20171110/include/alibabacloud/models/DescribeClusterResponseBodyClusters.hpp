// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeClusterResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextVersion, nextVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextVersion, nextVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeClusterResponseBodyClusters() = default ;
    DescribeClusterResponseBodyClusters(const DescribeClusterResponseBodyClusters &) = default ;
    DescribeClusterResponseBodyClusters(DescribeClusterResponseBodyClusters &&) = default ;
    DescribeClusterResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBodyClusters() = default ;
    DescribeClusterResponseBodyClusters& operator=(const DescribeClusterResponseBodyClusters &) = default ;
    DescribeClusterResponseBodyClusters& operator=(DescribeClusterResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->currentVersion_ != nullptr && this->name_ != nullptr && this->nextVersion_ != nullptr && this->status_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClusterResponseBodyClusters& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline DescribeClusterResponseBodyClusters& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClusterResponseBodyClusters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The version of the cluster.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The next version of the cluster.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The health status of the instance.
    // 
    // Valid values:
    // 
    // *   healthy
    // *   unhealthy
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
