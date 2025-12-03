// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYXPACKRELATEDDBRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYXPACKRELATEDDBRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QueryXpackRelatedDBResponseBodyClusterListCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryXpackRelatedDBResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(IsRelated, isRelated_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryXpackRelatedDBResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(IsRelated, isRelated_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryXpackRelatedDBResponseBodyClusterListCluster() = default ;
    QueryXpackRelatedDBResponseBodyClusterListCluster(const QueryXpackRelatedDBResponseBodyClusterListCluster &) = default ;
    QueryXpackRelatedDBResponseBodyClusterListCluster(QueryXpackRelatedDBResponseBodyClusterListCluster &&) = default ;
    QueryXpackRelatedDBResponseBodyClusterListCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryXpackRelatedDBResponseBodyClusterListCluster() = default ;
    QueryXpackRelatedDBResponseBodyClusterListCluster& operator=(const QueryXpackRelatedDBResponseBodyClusterListCluster &) = default ;
    QueryXpackRelatedDBResponseBodyClusterListCluster& operator=(QueryXpackRelatedDBResponseBodyClusterListCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->isRelated_ == nullptr && return this->status_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // isRelated Field Functions 
    bool hasIsRelated() const { return this->isRelated_ != nullptr;};
    void deleteIsRelated() { this->isRelated_ = nullptr;};
    inline bool isRelated() const { DARABONBA_PTR_GET_DEFAULT(isRelated_, false) };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setIsRelated(bool isRelated) { DARABONBA_PTR_SET_VALUE(isRelated_, isRelated) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryXpackRelatedDBResponseBodyClusterListCluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<bool> isRelated_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
