// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvServiceMonitorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvServiceMonitorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvServiceMonitorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEnvServiceMonitorsRequest() = default ;
    ListEnvServiceMonitorsRequest(const ListEnvServiceMonitorsRequest &) = default ;
    ListEnvServiceMonitorsRequest(ListEnvServiceMonitorsRequest &&) = default ;
    ListEnvServiceMonitorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvServiceMonitorsRequest() = default ;
    ListEnvServiceMonitorsRequest& operator=(const ListEnvServiceMonitorsRequest &) = default ;
    ListEnvServiceMonitorsRequest& operator=(ListEnvServiceMonitorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvServiceMonitorsRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvServiceMonitorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
