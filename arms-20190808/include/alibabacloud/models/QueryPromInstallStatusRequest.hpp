// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryPromInstallStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPromInstallStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPromInstallStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryPromInstallStatusRequest() = default ;
    QueryPromInstallStatusRequest(const QueryPromInstallStatusRequest &) = default ;
    QueryPromInstallStatusRequest(QueryPromInstallStatusRequest &&) = default ;
    QueryPromInstallStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPromInstallStatusRequest() = default ;
    QueryPromInstallStatusRequest& operator=(const QueryPromInstallStatusRequest &) = default ;
    QueryPromInstallStatusRequest& operator=(QueryPromInstallStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryPromInstallStatusRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryPromInstallStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
