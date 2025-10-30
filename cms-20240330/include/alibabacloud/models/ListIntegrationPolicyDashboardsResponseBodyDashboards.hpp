// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODYDASHBOARDS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODYDASHBOARDS_HPP_
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
  class ListIntegrationPolicyDashboardsResponseBodyDashboards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyDashboardsResponseBodyDashboards& obj) { 
      DARABONBA_PTR_TO_JSON(engine, engine_);
      DARABONBA_PTR_TO_JSON(folderUid, folderUid_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyDashboardsResponseBodyDashboards& obj) { 
      DARABONBA_PTR_FROM_JSON(engine, engine_);
      DARABONBA_PTR_FROM_JSON(folderUid, folderUid_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListIntegrationPolicyDashboardsResponseBodyDashboards() = default ;
    ListIntegrationPolicyDashboardsResponseBodyDashboards(const ListIntegrationPolicyDashboardsResponseBodyDashboards &) = default ;
    ListIntegrationPolicyDashboardsResponseBodyDashboards(ListIntegrationPolicyDashboardsResponseBodyDashboards &&) = default ;
    ListIntegrationPolicyDashboardsResponseBodyDashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyDashboardsResponseBodyDashboards() = default ;
    ListIntegrationPolicyDashboardsResponseBodyDashboards& operator=(const ListIntegrationPolicyDashboardsResponseBodyDashboards &) = default ;
    ListIntegrationPolicyDashboardsResponseBodyDashboards& operator=(ListIntegrationPolicyDashboardsResponseBodyDashboards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && return this->folderUid_ == nullptr && return this->name_ == nullptr && return this->region_ == nullptr && return this->tags_ == nullptr && return this->title_ == nullptr
        && return this->uid_ == nullptr && return this->url_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // folderUid Field Functions 
    bool hasFolderUid() const { return this->folderUid_ != nullptr;};
    void deleteFolderUid() { this->folderUid_ = nullptr;};
    inline string folderUid() const { DARABONBA_PTR_GET_DEFAULT(folderUid_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setFolderUid(string folderUid) { DARABONBA_PTR_SET_VALUE(folderUid_, folderUid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListIntegrationPolicyDashboardsResponseBodyDashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Dashboard engine:
    // grafana: shared grafana.
    // cms: cms self-developed dashboard engine.
    std::shared_ptr<string> engine_ = nullptr;
    // UID of the dashboard folder.
    std::shared_ptr<string> folderUid_ = nullptr;
    // Dashboard name
    std::shared_ptr<string> name_ = nullptr;
    // Region
    std::shared_ptr<string> region_ = nullptr;
    // List of tags.
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // Title of the UI module (not name)
    std::shared_ptr<string> title_ = nullptr;
    // ID of the current Alibaba Cloud primary account, read-only
    std::shared_ptr<string> uid_ = nullptr;
    // pagerDuty integration webhook. Supports V1 and V2 versions
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
