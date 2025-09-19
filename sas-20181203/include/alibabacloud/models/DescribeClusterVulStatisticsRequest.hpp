// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterVulStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    DescribeClusterVulStatisticsRequest() = default ;
    DescribeClusterVulStatisticsRequest(const DescribeClusterVulStatisticsRequest &) = default ;
    DescribeClusterVulStatisticsRequest(DescribeClusterVulStatisticsRequest &&) = default ;
    DescribeClusterVulStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulStatisticsRequest() = default ;
    DescribeClusterVulStatisticsRequest& operator=(const DescribeClusterVulStatisticsRequest &) = default ;
    DescribeClusterVulStatisticsRequest& operator=(DescribeClusterVulStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->types_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterVulStatisticsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string types() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline DescribeClusterVulStatisticsRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


  protected:
    // The ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the vulnerabilities. Valid values:
    // 
    // *   **cve**: Linux software vulnerabilities
    // *   **app**: application vulnerabilities
    // *   **sca**: vulnerabilities that are detected based on software component analysis
    std::shared_ptr<string> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
