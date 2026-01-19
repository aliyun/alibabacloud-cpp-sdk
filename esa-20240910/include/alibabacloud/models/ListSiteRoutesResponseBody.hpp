// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITEROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSITEROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSiteRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSiteRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListSiteRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListSiteRoutesResponseBody() = default ;
    ListSiteRoutesResponseBody(const ListSiteRoutesResponseBody &) = default ;
    ListSiteRoutesResponseBody(ListSiteRoutesResponseBody &&) = default ;
    ListSiteRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSiteRoutesResponseBody() = default ;
    ListSiteRoutesResponseBody& operator=(const ListSiteRoutesResponseBody &) = default ;
    ListSiteRoutesResponseBody& operator=(ListSiteRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(Bypass, bypass_);
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(Fallback, fallback_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(RouteEnable, routeEnable_);
        DARABONBA_PTR_TO_JSON(RouteName, routeName_);
        DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(RouteEnable, routeEnable_);
        DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
        DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bypass_ == nullptr
        && this->configId_ == nullptr && this->configType_ == nullptr && this->fallback_ == nullptr && this->mode_ == nullptr && this->routeEnable_ == nullptr
        && this->routeName_ == nullptr && this->routineName_ == nullptr && this->rule_ == nullptr && this->sequence_ == nullptr && this->siteVersion_ == nullptr; };
      // bypass Field Functions 
      bool hasBypass() const { return this->bypass_ != nullptr;};
      void deleteBypass() { this->bypass_ = nullptr;};
      inline string getBypass() const { DARABONBA_PTR_GET_DEFAULT(bypass_, "") };
      inline Configs& setBypass(string bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };


      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // fallback Field Functions 
      bool hasFallback() const { return this->fallback_ != nullptr;};
      void deleteFallback() { this->fallback_ = nullptr;};
      inline string getFallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, "") };
      inline Configs& setFallback(string fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Configs& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // routeEnable Field Functions 
      bool hasRouteEnable() const { return this->routeEnable_ != nullptr;};
      void deleteRouteEnable() { this->routeEnable_ = nullptr;};
      inline string getRouteEnable() const { DARABONBA_PTR_GET_DEFAULT(routeEnable_, "") };
      inline Configs& setRouteEnable(string routeEnable) { DARABONBA_PTR_SET_VALUE(routeEnable_, routeEnable) };


      // routeName Field Functions 
      bool hasRouteName() const { return this->routeName_ != nullptr;};
      void deleteRouteName() { this->routeName_ = nullptr;};
      inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
      inline Configs& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


      // routineName Field Functions 
      bool hasRoutineName() const { return this->routineName_ != nullptr;};
      void deleteRoutineName() { this->routineName_ = nullptr;};
      inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
      inline Configs& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Configs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Configs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    protected:
      // The bypass mode. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> bypass_ {};
      // The configuration ID.
      shared_ptr<int64_t> configId_ {};
      // The configuration type to query. Valid values:
      // 
      // *   global: global configurations.
      // *   rule: queries rule configurations.
      shared_ptr<string> configType_ {};
      shared_ptr<string> fallback_ {};
      // The configuration mode. Specifies whether to check the image used by the instance supports hot migration. Valid values:
      // 
      // *   simple: Simple Mode
      // *   custom: Custom Mode
      shared_ptr<string> mode_ {};
      // The route switch. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> routeEnable_ {};
      // The route name.
      shared_ptr<string> routeName_ {};
      // The function name.
      shared_ptr<string> routineName_ {};
      // The rule content.
      shared_ptr<string> rule_ {};
      // The order in which the rule is executed.
      shared_ptr<int32_t> sequence_ {};
      // The version number of the website.
      shared_ptr<int32_t> siteVersion_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListSiteRoutesResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListSiteRoutesResponseBody::Configs>) };
    inline vector<ListSiteRoutesResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListSiteRoutesResponseBody::Configs>) };
    inline ListSiteRoutesResponseBody& setConfigs(const vector<ListSiteRoutesResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListSiteRoutesResponseBody& setConfigs(vector<ListSiteRoutesResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSiteRoutesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSiteRoutesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSiteRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSiteRoutesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListSiteRoutesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The returned configurations.
    shared_ptr<vector<ListSiteRoutesResponseBody::Configs>> configs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
