// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_log, clusterLog_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_log, clusterLog_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeClusterLogsResponseBody() = default ;
    DescribeClusterLogsResponseBody(const DescribeClusterLogsResponseBody &) = default ;
    DescribeClusterLogsResponseBody(DescribeClusterLogsResponseBody &&) = default ;
    DescribeClusterLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterLogsResponseBody() = default ;
    DescribeClusterLogsResponseBody& operator=(const DescribeClusterLogsResponseBody &) = default ;
    DescribeClusterLogsResponseBody& operator=(DescribeClusterLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ID_ != nullptr
        && this->clusterId_ != nullptr && this->clusterLog_ != nullptr && this->created_ != nullptr && this->updated_ != nullptr; };
    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline int64_t ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, 0L) };
    inline DescribeClusterLogsResponseBody& setID(int64_t ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterLogsResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterLog Field Functions 
    bool hasClusterLog() const { return this->clusterLog_ != nullptr;};
    void deleteClusterLog() { this->clusterLog_ = nullptr;};
    inline string clusterLog() const { DARABONBA_PTR_GET_DEFAULT(clusterLog_, "") };
    inline DescribeClusterLogsResponseBody& setClusterLog(string clusterLog) { DARABONBA_PTR_SET_VALUE(clusterLog_, clusterLog) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterLogsResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClusterLogsResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The ID of the log entry.
    std::shared_ptr<int64_t> ID_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The log content.
    std::shared_ptr<string> clusterLog_ = nullptr;
    // The time when the log entry was generated.
    std::shared_ptr<string> created_ = nullptr;
    // The time when the log entry was updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
