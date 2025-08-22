// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODYDASHBOARDVOS_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODYDASHBOARDVOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDashboardsResponseBodyDashboardVosI18nChild.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDashboardsResponseBodyDashboardVos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsResponseBodyDashboardVos& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDashboardsResponseBodyDashboardVos& obj) { 
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
    ListDashboardsResponseBodyDashboardVos() = default ;
    ListDashboardsResponseBodyDashboardVos(const ListDashboardsResponseBodyDashboardVos &) = default ;
    ListDashboardsResponseBodyDashboardVos(ListDashboardsResponseBodyDashboardVos &&) = default ;
    ListDashboardsResponseBodyDashboardVos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsResponseBodyDashboardVos() = default ;
    ListDashboardsResponseBodyDashboardVos& operator=(const ListDashboardsResponseBodyDashboardVos &) = default ;
    ListDashboardsResponseBodyDashboardVos& operator=(ListDashboardsResponseBodyDashboardVos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboardType_ != nullptr
        && this->exporter_ != nullptr && this->httpUrl_ != nullptr && this->httpsUrl_ != nullptr && this->i18nChild_ != nullptr && this->id_ != nullptr
        && this->isArmsExporter_ != nullptr && this->kind_ != nullptr && this->language_ != nullptr && this->name_ != nullptr && this->needUpdate_ != nullptr
        && this->tags_ != nullptr && this->time_ != nullptr && this->title_ != nullptr && this->type_ != nullptr && this->uid_ != nullptr
        && this->url_ != nullptr && this->version_ != nullptr; };
    // dashboardType Field Functions 
    bool hasDashboardType() const { return this->dashboardType_ != nullptr;};
    void deleteDashboardType() { this->dashboardType_ = nullptr;};
    inline string dashboardType() const { DARABONBA_PTR_GET_DEFAULT(dashboardType_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setDashboardType(string dashboardType) { DARABONBA_PTR_SET_VALUE(dashboardType_, dashboardType) };


    // exporter Field Functions 
    bool hasExporter() const { return this->exporter_ != nullptr;};
    void deleteExporter() { this->exporter_ = nullptr;};
    inline string exporter() const { DARABONBA_PTR_GET_DEFAULT(exporter_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setExporter(string exporter) { DARABONBA_PTR_SET_VALUE(exporter_, exporter) };


    // httpUrl Field Functions 
    bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
    void deleteHttpUrl() { this->httpUrl_ = nullptr;};
    inline string httpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


    // httpsUrl Field Functions 
    bool hasHttpsUrl() const { return this->httpsUrl_ != nullptr;};
    void deleteHttpsUrl() { this->httpsUrl_ = nullptr;};
    inline string httpsUrl() const { DARABONBA_PTR_GET_DEFAULT(httpsUrl_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setHttpsUrl(string httpsUrl) { DARABONBA_PTR_SET_VALUE(httpsUrl_, httpsUrl) };


    // i18nChild Field Functions 
    bool hasI18nChild() const { return this->i18nChild_ != nullptr;};
    void deleteI18nChild() { this->i18nChild_ = nullptr;};
    inline const Models::ListDashboardsResponseBodyDashboardVosI18nChild & i18nChild() const { DARABONBA_PTR_GET_CONST(i18nChild_, Models::ListDashboardsResponseBodyDashboardVosI18nChild) };
    inline Models::ListDashboardsResponseBodyDashboardVosI18nChild i18nChild() { DARABONBA_PTR_GET(i18nChild_, Models::ListDashboardsResponseBodyDashboardVosI18nChild) };
    inline ListDashboardsResponseBodyDashboardVos& setI18nChild(const Models::ListDashboardsResponseBodyDashboardVosI18nChild & i18nChild) { DARABONBA_PTR_SET_VALUE(i18nChild_, i18nChild) };
    inline ListDashboardsResponseBodyDashboardVos& setI18nChild(Models::ListDashboardsResponseBodyDashboardVosI18nChild && i18nChild) { DARABONBA_PTR_SET_RVALUE(i18nChild_, i18nChild) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isArmsExporter Field Functions 
    bool hasIsArmsExporter() const { return this->isArmsExporter_ != nullptr;};
    void deleteIsArmsExporter() { this->isArmsExporter_ = nullptr;};
    inline bool isArmsExporter() const { DARABONBA_PTR_GET_DEFAULT(isArmsExporter_, false) };
    inline ListDashboardsResponseBodyDashboardVos& setIsArmsExporter(bool isArmsExporter) { DARABONBA_PTR_SET_VALUE(isArmsExporter_, isArmsExporter) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needUpdate Field Functions 
    bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
    void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
    inline bool needUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
    inline ListDashboardsResponseBodyDashboardVos& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListDashboardsResponseBodyDashboardVos& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListDashboardsResponseBodyDashboardVos& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListDashboardsResponseBodyDashboardVos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the Grafana dashboard. This parameter has the same effect as the Exporter parameter whereas provides clearer implication.
    std::shared_ptr<string> dashboardType_ = nullptr;
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
    std::shared_ptr<string> exporter_ = nullptr;
    // The URL of the Grafana dashboard.
    std::shared_ptr<string> httpUrl_ = nullptr;
    // The URL of the Grafana dashboard.
    std::shared_ptr<string> httpsUrl_ = nullptr;
    // The information about the Grafana dashboard.
    std::shared_ptr<Models::ListDashboardsResponseBodyDashboardVosI18nChild> i18nChild_ = nullptr;
    // The ID of the Grafana dashboard. The value is unique only when you install the Grafana dashboard.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether the exporter is provided by Application Real-Time Monitoring Service (ARMS).
    // 
    // *   `true:` The exporter is provided by ARMS.
    // *   `false:`: The exporter is not provided by ARMS.
    std::shared_ptr<bool> isArmsExporter_ = nullptr;
    // The category of the Grafana dashboard. Valid values: BASIC, THIRD, LIMIT, and CUSTOM.
    std::shared_ptr<string> kind_ = nullptr;
    // The language of the Grafana dashboard.
    std::shared_ptr<string> language_ = nullptr;
    // The name of the Grafana dashboard. This parameter is different from the **Title** parameter as this parameter cannot be changed.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the Grafana dashboard has a new version that is available for upgrade.
    std::shared_ptr<bool> needUpdate_ = nullptr;
    // The tags of the Grafana dashboard.
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // The time when the Grafana dashboard was created. The value is a timestamp. Unit: seconds.
    std::shared_ptr<string> time_ = nullptr;
    // The title of the Grafana dashboard.
    std::shared_ptr<string> title_ = nullptr;
    // The type of the Grafana dashboard. Valid values:
    // 
    // *   `dash-db`: a dashboard
    // *   `dash-folder`: a folder that can include a dashboard
    std::shared_ptr<string> type_ = nullptr;
    // The unique identifier of the Grafana dashboard.
    std::shared_ptr<string> uid_ = nullptr;
    // The complete URL of the Grafana dashboard.
    std::shared_ptr<string> url_ = nullptr;
    // The version of the Grafana dashboard. The combination of version and name uniquely identifies a dashboard.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
