// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListIntegrationPolicyDashboardsResponseBody() = default ;
    ListIntegrationPolicyDashboardsResponseBody(const ListIntegrationPolicyDashboardsResponseBody &) = default ;
    ListIntegrationPolicyDashboardsResponseBody(ListIntegrationPolicyDashboardsResponseBody &&) = default ;
    ListIntegrationPolicyDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyDashboardsResponseBody() = default ;
    ListIntegrationPolicyDashboardsResponseBody& operator=(const ListIntegrationPolicyDashboardsResponseBody &) = default ;
    ListIntegrationPolicyDashboardsResponseBody& operator=(ListIntegrationPolicyDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dashboards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dashboards& obj) { 
        DARABONBA_PTR_TO_JSON(engine, engine_);
        DARABONBA_PTR_TO_JSON(folderUid, folderUid_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Dashboards& obj) { 
        DARABONBA_PTR_FROM_JSON(engine, engine_);
        DARABONBA_PTR_FROM_JSON(folderUid, folderUid_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      Dashboards() = default ;
      Dashboards(const Dashboards &) = default ;
      Dashboards(Dashboards &&) = default ;
      Dashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dashboards() = default ;
      Dashboards& operator=(const Dashboards &) = default ;
      Dashboards& operator=(Dashboards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->engine_ == nullptr
        && this->folderUid_ == nullptr && this->name_ == nullptr && this->region_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->uid_ == nullptr && this->url_ == nullptr; };
      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Dashboards& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // folderUid Field Functions 
      bool hasFolderUid() const { return this->folderUid_ != nullptr;};
      void deleteFolderUid() { this->folderUid_ = nullptr;};
      inline string getFolderUid() const { DARABONBA_PTR_GET_DEFAULT(folderUid_, "") };
      inline Dashboards& setFolderUid(string folderUid) { DARABONBA_PTR_SET_VALUE(folderUid_, folderUid) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Dashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Dashboards& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Dashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Dashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Dashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Dashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Dashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Dashboard engine:
      // grafana: shared grafana.
      // cms: cms self-developed dashboard engine.
      shared_ptr<string> engine_ {};
      // UID of the dashboard folder.
      shared_ptr<string> folderUid_ {};
      // Dashboard name
      shared_ptr<string> name_ {};
      // Region
      shared_ptr<string> region_ {};
      // List of tags.
      shared_ptr<vector<string>> tags_ {};
      // Title of the UI module (not name)
      shared_ptr<string> title_ {};
      // ID of the current Alibaba Cloud primary account, read-only
      shared_ptr<string> uid_ {};
      // pagerDuty integration webhook. Supports V1 and V2 versions
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->dashboards_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards> & getDashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards>) };
    inline vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards> getDashboards() { DARABONBA_PTR_GET(dashboards_, vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards>) };
    inline ListIntegrationPolicyDashboardsResponseBody& setDashboards(const vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline ListIntegrationPolicyDashboardsResponseBody& setDashboards(vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListIntegrationPolicyDashboardsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // List of dashboards.
    shared_ptr<vector<ListIntegrationPolicyDashboardsResponseBody::Dashboards>> dashboards_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Number of components.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
