// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASHBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDASHBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDashboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDashboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(apiId, apiId_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(upstreamCluster, upstreamCluster_);
    };
    friend void from_json(const Darabonba::Json& j, GetDashboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(apiId, apiId_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(upstreamCluster, upstreamCluster_);
    };
    GetDashboardRequest() = default ;
    GetDashboardRequest(const GetDashboardRequest &) = default ;
    GetDashboardRequest(GetDashboardRequest &&) = default ;
    GetDashboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDashboardRequest() = default ;
    GetDashboardRequest& operator=(const GetDashboardRequest &) = default ;
    GetDashboardRequest& operator=(GetDashboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(routeName, routeName_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(routeName, routeName_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->routeName_ == nullptr; };
      // routeName Field Functions 
      bool hasRouteName() const { return this->routeName_ != nullptr;};
      void deleteRouteName() { this->routeName_ = nullptr;};
      inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
      inline Filter& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    protected:
      // The route name.
      shared_ptr<string> routeName_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->apiId_ == nullptr && this->filter_ == nullptr && this->name_ == nullptr && this->pluginClassId_ == nullptr && this->pluginId_ == nullptr
        && this->routeId_ == nullptr && this->source_ == nullptr && this->upstreamCluster_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetDashboardRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline GetDashboardRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetDashboardRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetDashboardRequest::Filter) };
    inline GetDashboardRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetDashboardRequest::Filter) };
    inline GetDashboardRequest& setFilter(const GetDashboardRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetDashboardRequest& setFilter(GetDashboardRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDashboardRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pluginClassId Field Functions 
    bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
    void deletePluginClassId() { this->pluginClassId_ = nullptr;};
    inline string getPluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
    inline GetDashboardRequest& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline GetDashboardRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline GetDashboardRequest& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetDashboardRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // upstreamCluster Field Functions 
    bool hasUpstreamCluster() const { return this->upstreamCluster_ != nullptr;};
    void deleteUpstreamCluster() { this->upstreamCluster_ = nullptr;};
    inline string getUpstreamCluster() const { DARABONBA_PTR_GET_DEFAULT(upstreamCluster_, "") };
    inline GetDashboardRequest& setUpstreamCluster(string upstreamCluster) { DARABONBA_PTR_SET_VALUE(upstreamCluster_, upstreamCluster) };


  protected:
    // The language. Valid values: zh (Chinese) and en (English).
    shared_ptr<string> acceptLanguage_ {};
    // API ID
    shared_ptr<string> apiId_ {};
    // The filter configurations.
    shared_ptr<GetDashboardRequest::Filter> filter_ {};
    // The dashboard name.
    // 
    // *   LOG: access logs
    // *   PLUGIN: plug-in logs
    shared_ptr<string> name_ {};
    // The plug-in ID.
    shared_ptr<string> pluginClassId_ {};
    shared_ptr<string> pluginId_ {};
    shared_ptr<string> routeId_ {};
    // The dashboard source. Valid values:
    // 
    // *   SLS: Simple Log Service
    shared_ptr<string> source_ {};
    shared_ptr<string> upstreamCluster_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
