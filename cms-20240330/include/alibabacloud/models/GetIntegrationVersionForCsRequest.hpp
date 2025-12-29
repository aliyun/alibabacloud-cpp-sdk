// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONVERSIONFORCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONVERSIONFORCSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationVersionForCSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationVersionForCSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationVersionForCSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
    };
    GetIntegrationVersionForCSRequest() = default ;
    GetIntegrationVersionForCSRequest(const GetIntegrationVersionForCSRequest &) = default ;
    GetIntegrationVersionForCSRequest(GetIntegrationVersionForCSRequest &&) = default ;
    GetIntegrationVersionForCSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationVersionForCSRequest() = default ;
    GetIntegrationVersionForCSRequest& operator=(const GetIntegrationVersionForCSRequest &) = default ;
    GetIntegrationVersionForCSRequest& operator=(GetIntegrationVersionForCSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetIntegrationVersionForCSRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetIntegrationVersionForCSRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
