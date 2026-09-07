// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEHTTPAPIPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEHTTPAPIPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceHttpApiProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceHttpApiProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyStr, bodyStr_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceHttpApiProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyStr, bodyStr_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GrafanaWorkspaceHttpApiProxyRequest() = default ;
    GrafanaWorkspaceHttpApiProxyRequest(const GrafanaWorkspaceHttpApiProxyRequest &) = default ;
    GrafanaWorkspaceHttpApiProxyRequest(GrafanaWorkspaceHttpApiProxyRequest &&) = default ;
    GrafanaWorkspaceHttpApiProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceHttpApiProxyRequest() = default ;
    GrafanaWorkspaceHttpApiProxyRequest& operator=(const GrafanaWorkspaceHttpApiProxyRequest &) = default ;
    GrafanaWorkspaceHttpApiProxyRequest& operator=(GrafanaWorkspaceHttpApiProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyStr_ == nullptr
        && this->grafanaWorkspaceId_ == nullptr && this->orgId_ == nullptr && this->regionId_ == nullptr; };
    // bodyStr Field Functions 
    bool hasBodyStr() const { return this->bodyStr_ != nullptr;};
    void deleteBodyStr() { this->bodyStr_ = nullptr;};
    inline string getBodyStr() const { DARABONBA_PTR_GET_DEFAULT(bodyStr_, "") };
    inline GrafanaWorkspaceHttpApiProxyRequest& setBodyStr(string bodyStr) { DARABONBA_PTR_SET_VALUE(bodyStr_, bodyStr) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceHttpApiProxyRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GrafanaWorkspaceHttpApiProxyRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspaceHttpApiProxyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> bodyStr_ {};
    // This parameter is required.
    shared_ptr<string> grafanaWorkspaceId_ {};
    shared_ptr<int64_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
