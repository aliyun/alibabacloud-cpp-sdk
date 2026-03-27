// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODY_HPP_
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
  class ListPrometheusDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusDashboards, prometheusDashboards_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusDashboards, prometheusDashboards_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPrometheusDashboardsResponseBody() = default ;
    ListPrometheusDashboardsResponseBody(const ListPrometheusDashboardsResponseBody &) = default ;
    ListPrometheusDashboardsResponseBody(ListPrometheusDashboardsResponseBody &&) = default ;
    ListPrometheusDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusDashboardsResponseBody() = default ;
    ListPrometheusDashboardsResponseBody& operator=(const ListPrometheusDashboardsResponseBody &) = default ;
    ListPrometheusDashboardsResponseBody& operator=(ListPrometheusDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusDashboards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusDashboards& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusDashboards& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      PrometheusDashboards() = default ;
      PrometheusDashboards(const PrometheusDashboards &) = default ;
      PrometheusDashboards(PrometheusDashboards &&) = default ;
      PrometheusDashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusDashboards() = default ;
      PrometheusDashboards& operator=(const PrometheusDashboards &) = default ;
      PrometheusDashboards& operator=(PrometheusDashboards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->uid_ == nullptr && this->url_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PrometheusDashboards& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PrometheusDashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline PrometheusDashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PrometheusDashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline PrometheusDashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline PrometheusDashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline PrometheusDashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Dashboard ID.
      shared_ptr<string> id_ {};
      // Dashboard name.
      shared_ptr<string> name_ {};
      // Tags.
      shared_ptr<vector<string>> tags_ {};
      // Dashboard title.
      shared_ptr<string> title_ {};
      // Dashboard UID.
      shared_ptr<string> uid_ {};
      // Dashboard URL address.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->prometheusDashboards_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // prometheusDashboards Field Functions 
    bool hasPrometheusDashboards() const { return this->prometheusDashboards_ != nullptr;};
    void deletePrometheusDashboards() { this->prometheusDashboards_ = nullptr;};
    inline const vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards> & getPrometheusDashboards() const { DARABONBA_PTR_GET_CONST(prometheusDashboards_, vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards>) };
    inline vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards> getPrometheusDashboards() { DARABONBA_PTR_GET(prometheusDashboards_, vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards>) };
    inline ListPrometheusDashboardsResponseBody& setPrometheusDashboards(const vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards> & prometheusDashboards) { DARABONBA_PTR_SET_VALUE(prometheusDashboards_, prometheusDashboards) };
    inline ListPrometheusDashboardsResponseBody& setPrometheusDashboards(vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards> && prometheusDashboards) { DARABONBA_PTR_SET_RVALUE(prometheusDashboards_, prometheusDashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrometheusDashboardsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of Prometheus instance dashboards.
    shared_ptr<vector<ListPrometheusDashboardsResponseBody::PrometheusDashboards>> prometheusDashboards_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Total number of instances
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
