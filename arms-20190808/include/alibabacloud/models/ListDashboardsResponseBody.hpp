// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardVos, dashboardVos_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(GrafanaServiceOpened, grafanaServiceOpened_);
      DARABONBA_PTR_TO_JSON(PrometheusServiceOpened, prometheusServiceOpened_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardVos, dashboardVos_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(GrafanaServiceOpened, grafanaServiceOpened_);
      DARABONBA_PTR_FROM_JSON(PrometheusServiceOpened, prometheusServiceOpened_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDashboardsResponseBody() = default ;
    ListDashboardsResponseBody(const ListDashboardsResponseBody &) = default ;
    ListDashboardsResponseBody(ListDashboardsResponseBody &&) = default ;
    ListDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsResponseBody() = default ;
    ListDashboardsResponseBody& operator=(const ListDashboardsResponseBody &) = default ;
    ListDashboardsResponseBody& operator=(ListDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DashboardVos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DashboardVos& obj) { 
        DARABONBA_PTR_TO_JSON(DashboardType, dashboardType_);
        DARABONBA_PTR_TO_JSON(Exporter, exporter_);
        DARABONBA_PTR_TO_JSON(HttpUrl, httpUrl_);
        DARABONBA_PTR_TO_JSON(HttpsUrl, httpsUrl_);
        DARABONBA_PTR_TO_JSON(I18nChild, i18nChild_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsArmsExporter, isArmsExporter_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, DashboardVos& obj) { 
        DARABONBA_PTR_FROM_JSON(DashboardType, dashboardType_);
        DARABONBA_PTR_FROM_JSON(Exporter, exporter_);
        DARABONBA_PTR_FROM_JSON(HttpUrl, httpUrl_);
        DARABONBA_PTR_FROM_JSON(HttpsUrl, httpsUrl_);
        DARABONBA_PTR_FROM_JSON(I18nChild, i18nChild_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsArmsExporter, isArmsExporter_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      DashboardVos() = default ;
      DashboardVos(const DashboardVos &) = default ;
      DashboardVos(DashboardVos &&) = default ;
      DashboardVos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DashboardVos() = default ;
      DashboardVos& operator=(const DashboardVos &) = default ;
      DashboardVos& operator=(DashboardVos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class I18nChild : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const I18nChild& obj) { 
          DARABONBA_PTR_TO_JSON(DashboardType, dashboardType_);
          DARABONBA_PTR_TO_JSON(Exporter, exporter_);
          DARABONBA_PTR_TO_JSON(HttpUrl, httpUrl_);
          DARABONBA_PTR_TO_JSON(HttpsUrl, httpsUrl_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsArmsExporter, isArmsExporter_);
          DARABONBA_PTR_TO_JSON(Kind, kind_);
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, I18nChild& obj) { 
          DARABONBA_PTR_FROM_JSON(DashboardType, dashboardType_);
          DARABONBA_PTR_FROM_JSON(Exporter, exporter_);
          DARABONBA_PTR_FROM_JSON(HttpUrl, httpUrl_);
          DARABONBA_PTR_FROM_JSON(HttpsUrl, httpsUrl_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsArmsExporter, isArmsExporter_);
          DARABONBA_PTR_FROM_JSON(Kind, kind_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        I18nChild() = default ;
        I18nChild(const I18nChild &) = default ;
        I18nChild(I18nChild &&) = default ;
        I18nChild(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~I18nChild() = default ;
        I18nChild& operator=(const I18nChild &) = default ;
        I18nChild& operator=(I18nChild &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dashboardType_ == nullptr
        && this->exporter_ == nullptr && this->httpUrl_ == nullptr && this->httpsUrl_ == nullptr && this->id_ == nullptr && this->isArmsExporter_ == nullptr
        && this->kind_ == nullptr && this->language_ == nullptr && this->name_ == nullptr && this->needUpdate_ == nullptr && this->tags_ == nullptr
        && this->time_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->uid_ == nullptr && this->url_ == nullptr
        && this->version_ == nullptr; };
        // dashboardType Field Functions 
        bool hasDashboardType() const { return this->dashboardType_ != nullptr;};
        void deleteDashboardType() { this->dashboardType_ = nullptr;};
        inline string getDashboardType() const { DARABONBA_PTR_GET_DEFAULT(dashboardType_, "") };
        inline I18nChild& setDashboardType(string dashboardType) { DARABONBA_PTR_SET_VALUE(dashboardType_, dashboardType) };


        // exporter Field Functions 
        bool hasExporter() const { return this->exporter_ != nullptr;};
        void deleteExporter() { this->exporter_ = nullptr;};
        inline string getExporter() const { DARABONBA_PTR_GET_DEFAULT(exporter_, "") };
        inline I18nChild& setExporter(string exporter) { DARABONBA_PTR_SET_VALUE(exporter_, exporter) };


        // httpUrl Field Functions 
        bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
        void deleteHttpUrl() { this->httpUrl_ = nullptr;};
        inline string getHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
        inline I18nChild& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


        // httpsUrl Field Functions 
        bool hasHttpsUrl() const { return this->httpsUrl_ != nullptr;};
        void deleteHttpsUrl() { this->httpsUrl_ = nullptr;};
        inline string getHttpsUrl() const { DARABONBA_PTR_GET_DEFAULT(httpsUrl_, "") };
        inline I18nChild& setHttpsUrl(string httpsUrl) { DARABONBA_PTR_SET_VALUE(httpsUrl_, httpsUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline I18nChild& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isArmsExporter Field Functions 
        bool hasIsArmsExporter() const { return this->isArmsExporter_ != nullptr;};
        void deleteIsArmsExporter() { this->isArmsExporter_ = nullptr;};
        inline bool getIsArmsExporter() const { DARABONBA_PTR_GET_DEFAULT(isArmsExporter_, false) };
        inline I18nChild& setIsArmsExporter(bool isArmsExporter) { DARABONBA_PTR_SET_VALUE(isArmsExporter_, isArmsExporter) };


        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline I18nChild& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline I18nChild& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline I18nChild& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // needUpdate Field Functions 
        bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
        void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
        inline bool getNeedUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
        inline I18nChild& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline I18nChild& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline I18nChild& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline I18nChild& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline I18nChild& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline I18nChild& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline I18nChild& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline I18nChild& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline I18nChild& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The type of the Grafana dashboard. This parameter has the same effect as the Exporter parameter whereas provides clearer implication.
        shared_ptr<string> dashboardType_ {};
        // The type of the exporter access source. Valid values:
        // 
        // *   Prometheus
        // *   Node
        // *   GPU
        // *   Redis
        // *   MySQL
        // *   Kafka
        // *   NGINX V2
        // *   Nginx
        // *   ZooKeeper
        // *   MongoDB
        // *   RabbitMQ
        // *   PostgreSQL
        // *   Kubernetes
        // *   Client Library
        // *   Elasticsearch
        // *   RocketMQ
        shared_ptr<string> exporter_ {};
        // The URL of the Grafana dashboard.
        shared_ptr<string> httpUrl_ {};
        // The URL of the Grafana dashboard.
        shared_ptr<string> httpsUrl_ {};
        // The ID of the Grafana dashboard. The value is unique only when you install the Grafana dashboard.
        shared_ptr<string> id_ {};
        // Indicates whether the exporter is provided by ARMS.
        // 
        // *   `true:` The exporter is provided by ARMS.
        // *   `false:`: The exporter is not provided by ARMS.
        shared_ptr<bool> isArmsExporter_ {};
        // The category of the Grafana dashboard. Valid values: BASIC, THIRD, LIMIT, and CUSTOM.
        shared_ptr<string> kind_ {};
        // The language of the Grafana dashboard.
        shared_ptr<string> language_ {};
        // The name of the Grafana dashboard. This parameter is different from the **Title** parameter as this parameter cannot be changed.
        shared_ptr<string> name_ {};
        // Indicates whether the Grafana dashboard has a new version that is available for upgrade.
        shared_ptr<bool> needUpdate_ {};
        // The tags of the Grafana dashboard.
        shared_ptr<vector<string>> tags_ {};
        // The time when the Grafana dashboard was created. The value is a timestamp.
        shared_ptr<string> time_ {};
        // The title of the Grafana dashboard.
        shared_ptr<string> title_ {};
        // The type of the Grafana dashboard. Valid values:
        // 
        // *   `dash-db`: a dashboard
        // *   `dash-folder`: a folder that can include a dashboard
        shared_ptr<string> type_ {};
        // The unique identifier of the Grafana dashboard.
        shared_ptr<string> uid_ {};
        // The complete URL of the Grafana dashboard.
        shared_ptr<string> url_ {};
        // The version of the Grafana dashboard. The combination of version and name uniquely identifies a dashboard.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->dashboardType_ == nullptr
        && this->exporter_ == nullptr && this->httpUrl_ == nullptr && this->httpsUrl_ == nullptr && this->i18nChild_ == nullptr && this->id_ == nullptr
        && this->isArmsExporter_ == nullptr && this->kind_ == nullptr && this->language_ == nullptr && this->name_ == nullptr && this->needUpdate_ == nullptr
        && this->tags_ == nullptr && this->time_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->uid_ == nullptr
        && this->url_ == nullptr && this->version_ == nullptr; };
      // dashboardType Field Functions 
      bool hasDashboardType() const { return this->dashboardType_ != nullptr;};
      void deleteDashboardType() { this->dashboardType_ = nullptr;};
      inline string getDashboardType() const { DARABONBA_PTR_GET_DEFAULT(dashboardType_, "") };
      inline DashboardVos& setDashboardType(string dashboardType) { DARABONBA_PTR_SET_VALUE(dashboardType_, dashboardType) };


      // exporter Field Functions 
      bool hasExporter() const { return this->exporter_ != nullptr;};
      void deleteExporter() { this->exporter_ = nullptr;};
      inline string getExporter() const { DARABONBA_PTR_GET_DEFAULT(exporter_, "") };
      inline DashboardVos& setExporter(string exporter) { DARABONBA_PTR_SET_VALUE(exporter_, exporter) };


      // httpUrl Field Functions 
      bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
      void deleteHttpUrl() { this->httpUrl_ = nullptr;};
      inline string getHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
      inline DashboardVos& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


      // httpsUrl Field Functions 
      bool hasHttpsUrl() const { return this->httpsUrl_ != nullptr;};
      void deleteHttpsUrl() { this->httpsUrl_ = nullptr;};
      inline string getHttpsUrl() const { DARABONBA_PTR_GET_DEFAULT(httpsUrl_, "") };
      inline DashboardVos& setHttpsUrl(string httpsUrl) { DARABONBA_PTR_SET_VALUE(httpsUrl_, httpsUrl) };


      // i18nChild Field Functions 
      bool hasI18nChild() const { return this->i18nChild_ != nullptr;};
      void deleteI18nChild() { this->i18nChild_ = nullptr;};
      inline const DashboardVos::I18nChild & getI18nChild() const { DARABONBA_PTR_GET_CONST(i18nChild_, DashboardVos::I18nChild) };
      inline DashboardVos::I18nChild getI18nChild() { DARABONBA_PTR_GET(i18nChild_, DashboardVos::I18nChild) };
      inline DashboardVos& setI18nChild(const DashboardVos::I18nChild & i18nChild) { DARABONBA_PTR_SET_VALUE(i18nChild_, i18nChild) };
      inline DashboardVos& setI18nChild(DashboardVos::I18nChild && i18nChild) { DARABONBA_PTR_SET_RVALUE(i18nChild_, i18nChild) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DashboardVos& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isArmsExporter Field Functions 
      bool hasIsArmsExporter() const { return this->isArmsExporter_ != nullptr;};
      void deleteIsArmsExporter() { this->isArmsExporter_ = nullptr;};
      inline bool getIsArmsExporter() const { DARABONBA_PTR_GET_DEFAULT(isArmsExporter_, false) };
      inline DashboardVos& setIsArmsExporter(bool isArmsExporter) { DARABONBA_PTR_SET_VALUE(isArmsExporter_, isArmsExporter) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline DashboardVos& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline DashboardVos& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DashboardVos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // needUpdate Field Functions 
      bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
      void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
      inline bool getNeedUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
      inline DashboardVos& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline DashboardVos& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DashboardVos& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline DashboardVos& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline DashboardVos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DashboardVos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline DashboardVos& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline DashboardVos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline DashboardVos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the Grafana dashboard. This parameter has the same effect as the Exporter parameter whereas provides clearer implication.
      shared_ptr<string> dashboardType_ {};
      // The type of the exporter access source. Valid values:
      // 
      // *   Prometheus
      // *   Node
      // *   GPU
      // *   Redis
      // *   MySQL
      // *   Kafka
      // *   NGINX V2
      // *   Nginx
      // *   ZooKeeper
      // *   MongoDB
      // *   RabbitMQ
      // *   PostgreSQL
      // *   Kubernetes
      // *   Client Library
      // *   Elasticsearch
      // *   RocketMQ
      shared_ptr<string> exporter_ {};
      // The URL of the Grafana dashboard.
      shared_ptr<string> httpUrl_ {};
      // The URL of the Grafana dashboard.
      shared_ptr<string> httpsUrl_ {};
      // The information about the Grafana dashboard.
      shared_ptr<DashboardVos::I18nChild> i18nChild_ {};
      // The ID of the Grafana dashboard. The value is unique only when you install the Grafana dashboard.
      shared_ptr<string> id_ {};
      // Indicates whether the exporter is provided by Application Real-Time Monitoring Service (ARMS).
      // 
      // *   `true:` The exporter is provided by ARMS.
      // *   `false:`: The exporter is not provided by ARMS.
      shared_ptr<bool> isArmsExporter_ {};
      // The category of the Grafana dashboard. Valid values: BASIC, THIRD, LIMIT, and CUSTOM.
      shared_ptr<string> kind_ {};
      // The language of the Grafana dashboard.
      shared_ptr<string> language_ {};
      // The name of the Grafana dashboard. This parameter is different from the **Title** parameter as this parameter cannot be changed.
      shared_ptr<string> name_ {};
      // Indicates whether the Grafana dashboard has a new version that is available for upgrade.
      shared_ptr<bool> needUpdate_ {};
      // The tags of the Grafana dashboard.
      shared_ptr<vector<string>> tags_ {};
      // The time when the Grafana dashboard was created. The value is a timestamp. Unit: seconds.
      shared_ptr<string> time_ {};
      // The title of the Grafana dashboard.
      shared_ptr<string> title_ {};
      // The type of the Grafana dashboard. Valid values:
      // 
      // *   `dash-db`: a dashboard
      // *   `dash-folder`: a folder that can include a dashboard
      shared_ptr<string> type_ {};
      // The unique identifier of the Grafana dashboard.
      shared_ptr<string> uid_ {};
      // The complete URL of the Grafana dashboard.
      shared_ptr<string> url_ {};
      // The version of the Grafana dashboard. The combination of version and name uniquely identifies a dashboard.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->dashboardVos_ == nullptr
        && this->environmentId_ == nullptr && this->grafanaServiceOpened_ == nullptr && this->prometheusServiceOpened_ == nullptr && this->requestId_ == nullptr; };
    // dashboardVos Field Functions 
    bool hasDashboardVos() const { return this->dashboardVos_ != nullptr;};
    void deleteDashboardVos() { this->dashboardVos_ = nullptr;};
    inline const vector<ListDashboardsResponseBody::DashboardVos> & getDashboardVos() const { DARABONBA_PTR_GET_CONST(dashboardVos_, vector<ListDashboardsResponseBody::DashboardVos>) };
    inline vector<ListDashboardsResponseBody::DashboardVos> getDashboardVos() { DARABONBA_PTR_GET(dashboardVos_, vector<ListDashboardsResponseBody::DashboardVos>) };
    inline ListDashboardsResponseBody& setDashboardVos(const vector<ListDashboardsResponseBody::DashboardVos> & dashboardVos) { DARABONBA_PTR_SET_VALUE(dashboardVos_, dashboardVos) };
    inline ListDashboardsResponseBody& setDashboardVos(vector<ListDashboardsResponseBody::DashboardVos> && dashboardVos) { DARABONBA_PTR_SET_RVALUE(dashboardVos_, dashboardVos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListDashboardsResponseBody& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // grafanaServiceOpened Field Functions 
    bool hasGrafanaServiceOpened() const { return this->grafanaServiceOpened_ != nullptr;};
    void deleteGrafanaServiceOpened() { this->grafanaServiceOpened_ = nullptr;};
    inline string getGrafanaServiceOpened() const { DARABONBA_PTR_GET_DEFAULT(grafanaServiceOpened_, "") };
    inline ListDashboardsResponseBody& setGrafanaServiceOpened(string grafanaServiceOpened) { DARABONBA_PTR_SET_VALUE(grafanaServiceOpened_, grafanaServiceOpened) };


    // prometheusServiceOpened Field Functions 
    bool hasPrometheusServiceOpened() const { return this->prometheusServiceOpened_ != nullptr;};
    void deletePrometheusServiceOpened() { this->prometheusServiceOpened_ = nullptr;};
    inline string getPrometheusServiceOpened() const { DARABONBA_PTR_GET_DEFAULT(prometheusServiceOpened_, "") };
    inline ListDashboardsResponseBody& setPrometheusServiceOpened(string prometheusServiceOpened) { DARABONBA_PTR_SET_VALUE(prometheusServiceOpened_, prometheusServiceOpened) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the Grafana dashboard.
    shared_ptr<vector<ListDashboardsResponseBody::DashboardVos>> dashboardVos_ {};
    // The ID of the environment instance.
    shared_ptr<string> environmentId_ {};
    // Indicates whether Managed Service for Grafana is activated.
    shared_ptr<string> grafanaServiceOpened_ {};
    // Whether or not to turn on Prometheus service.
    shared_ptr<string> prometheusServiceOpened_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
