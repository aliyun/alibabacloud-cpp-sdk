// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceResourcesResponseBody() = default ;
    ListInstanceResourcesResponseBody(const ListInstanceResourcesResponseBody &) = default ;
    ListInstanceResourcesResponseBody(ListInstanceResourcesResponseBody &&) = default ;
    ListInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourcesResponseBody() = default ;
    ListInstanceResourcesResponseBody& operator=(const ListInstanceResourcesResponseBody &) = default ;
    ListInstanceResourcesResponseBody& operator=(ListInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(GmtCreateAt, gmtCreateAt_);
        DARABONBA_PTR_TO_JSON(GmtModifiedAt, gmtModifiedAt_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(GmtCreateAt, gmtCreateAt_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedAt, gmtModifiedAt_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->config_ == nullptr && this->gmtCreateAt_ == nullptr && this->gmtModifiedAt_ == nullptr && this->group_ == nullptr && this->resourceId_ == nullptr
        && this->type_ == nullptr && this->uri_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Resources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Resources& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // gmtCreateAt Field Functions 
      bool hasGmtCreateAt() const { return this->gmtCreateAt_ != nullptr;};
      void deleteGmtCreateAt() { this->gmtCreateAt_ = nullptr;};
      inline string getGmtCreateAt() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateAt_, "") };
      inline Resources& setGmtCreateAt(string gmtCreateAt) { DARABONBA_PTR_SET_VALUE(gmtCreateAt_, gmtCreateAt) };


      // gmtModifiedAt Field Functions 
      bool hasGmtModifiedAt() const { return this->gmtModifiedAt_ != nullptr;};
      void deleteGmtModifiedAt() { this->gmtModifiedAt_ = nullptr;};
      inline string getGmtModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedAt_, "") };
      inline Resources& setGmtModifiedAt(string gmtModifiedAt) { DARABONBA_PTR_SET_VALUE(gmtModifiedAt_, gmtModifiedAt) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Resources& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Resources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Resources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> gmtCreateAt_ {};
      shared_ptr<string> gmtModifiedAt_ {};
      shared_ptr<string> group_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListInstanceResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListInstanceResourcesResponseBody::Resources>) };
    inline vector<ListInstanceResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListInstanceResourcesResponseBody::Resources>) };
    inline ListInstanceResourcesResponseBody& setResources(const vector<ListInstanceResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListInstanceResourcesResponseBody& setResources(vector<ListInstanceResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstanceResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListInstanceResourcesResponseBody::Resources>> resources_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
