// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODYDATADASHBOARDS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODYDATADASHBOARDS_HPP_
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
  class ListEnvironmentDashboardsResponseBodyDataDashboards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentDashboardsResponseBodyDataDashboards& obj) { 
      DARABONBA_PTR_TO_JSON(FolderUid, folderUid_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentDashboardsResponseBodyDataDashboards& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderUid, folderUid_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListEnvironmentDashboardsResponseBodyDataDashboards() = default ;
    ListEnvironmentDashboardsResponseBodyDataDashboards(const ListEnvironmentDashboardsResponseBodyDataDashboards &) = default ;
    ListEnvironmentDashboardsResponseBodyDataDashboards(ListEnvironmentDashboardsResponseBodyDataDashboards &&) = default ;
    ListEnvironmentDashboardsResponseBodyDataDashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentDashboardsResponseBodyDataDashboards() = default ;
    ListEnvironmentDashboardsResponseBodyDataDashboards& operator=(const ListEnvironmentDashboardsResponseBodyDataDashboards &) = default ;
    ListEnvironmentDashboardsResponseBodyDataDashboards& operator=(ListEnvironmentDashboardsResponseBodyDataDashboards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderUid_ != nullptr
        && this->region_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->uid_ != nullptr && this->url_ != nullptr; };
    // folderUid Field Functions 
    bool hasFolderUid() const { return this->folderUid_ != nullptr;};
    void deleteFolderUid() { this->folderUid_ = nullptr;};
    inline string folderUid() const { DARABONBA_PTR_GET_DEFAULT(folderUid_, "") };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setFolderUid(string folderUid) { DARABONBA_PTR_SET_VALUE(folderUid_, folderUid) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListEnvironmentDashboardsResponseBodyDataDashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The UID of the folder.
    std::shared_ptr<string> folderUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The keyword.
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // The title of the Grafana dashboard.
    std::shared_ptr<string> title_ = nullptr;
    // The unique identifier of the dashboard.
    std::shared_ptr<string> uid_ = nullptr;
    // The complete URL of the dashboard.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
