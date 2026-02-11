// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardVos, dashboardVos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardVos, dashboardVos_);
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
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsArmsExporter, isArmsExporter_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
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
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsArmsExporter, isArmsExporter_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
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
      virtual bool empty() const override { return this->dashboardType_ == nullptr
        && this->exporter_ == nullptr && this->id_ == nullptr && this->isArmsExporter_ == nullptr && this->kind_ == nullptr && this->name_ == nullptr
        && this->needUpdate_ == nullptr && this->tags_ == nullptr && this->time_ == nullptr && this->title_ == nullptr && this->type_ == nullptr
        && this->uid_ == nullptr && this->url_ == nullptr && this->version_ == nullptr; };
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
      shared_ptr<string> dashboardType_ {};
      shared_ptr<string> exporter_ {};
      shared_ptr<string> id_ {};
      shared_ptr<bool> isArmsExporter_ {};
      shared_ptr<string> kind_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> needUpdate_ {};
      shared_ptr<vector<string>> tags_ {};
      shared_ptr<string> time_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->dashboardVos_ == nullptr
        && this->requestId_ == nullptr; };
    // dashboardVos Field Functions 
    bool hasDashboardVos() const { return this->dashboardVos_ != nullptr;};
    void deleteDashboardVos() { this->dashboardVos_ = nullptr;};
    inline const vector<ListDashboardsResponseBody::DashboardVos> & getDashboardVos() const { DARABONBA_PTR_GET_CONST(dashboardVos_, vector<ListDashboardsResponseBody::DashboardVos>) };
    inline vector<ListDashboardsResponseBody::DashboardVos> getDashboardVos() { DARABONBA_PTR_GET(dashboardVos_, vector<ListDashboardsResponseBody::DashboardVos>) };
    inline ListDashboardsResponseBody& setDashboardVos(const vector<ListDashboardsResponseBody::DashboardVos> & dashboardVos) { DARABONBA_PTR_SET_VALUE(dashboardVos_, dashboardVos) };
    inline ListDashboardsResponseBody& setDashboardVos(vector<ListDashboardsResponseBody::DashboardVos> && dashboardVos) { DARABONBA_PTR_SET_RVALUE(dashboardVos_, dashboardVos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDashboardsResponseBody::DashboardVos>> dashboardVos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
