// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODYPROMETHEUSDASHBOARDS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODYPROMETHEUSDASHBOARDS_HPP_
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
  class ListPrometheusDashboardsResponseBodyPrometheusDashboards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusDashboardsResponseBodyPrometheusDashboards& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusDashboardsResponseBodyPrometheusDashboards& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListPrometheusDashboardsResponseBodyPrometheusDashboards() = default ;
    ListPrometheusDashboardsResponseBodyPrometheusDashboards(const ListPrometheusDashboardsResponseBodyPrometheusDashboards &) = default ;
    ListPrometheusDashboardsResponseBodyPrometheusDashboards(ListPrometheusDashboardsResponseBodyPrometheusDashboards &&) = default ;
    ListPrometheusDashboardsResponseBodyPrometheusDashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusDashboardsResponseBodyPrometheusDashboards() = default ;
    ListPrometheusDashboardsResponseBodyPrometheusDashboards& operator=(const ListPrometheusDashboardsResponseBodyPrometheusDashboards &) = default ;
    ListPrometheusDashboardsResponseBodyPrometheusDashboards& operator=(ListPrometheusDashboardsResponseBodyPrometheusDashboards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->uid_ != nullptr && this->url_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListPrometheusDashboardsResponseBodyPrometheusDashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
