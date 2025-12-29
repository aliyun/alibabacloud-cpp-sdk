// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QuerySceneConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneConfigs, sceneConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneConfigs, sceneConfigs_);
    };
    QuerySceneConfigsResponseBody() = default ;
    QuerySceneConfigsResponseBody(const QuerySceneConfigsResponseBody &) = default ;
    QuerySceneConfigsResponseBody(QuerySceneConfigsResponseBody &&) = default ;
    QuerySceneConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneConfigsResponseBody() = default ;
    QuerySceneConfigsResponseBody& operator=(const QuerySceneConfigsResponseBody &) = default ;
    QuerySceneConfigsResponseBody& operator=(QuerySceneConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SceneConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, SceneConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      SceneConfigs() = default ;
      SceneConfigs(const SceneConfigs &) = default ;
      SceneConfigs(SceneConfigs &&) = default ;
      SceneConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneConfigs() = default ;
      SceneConfigs& operator=(const SceneConfigs &) = default ;
      SceneConfigs& operator=(SceneConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->sceneId_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline SceneConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline SceneConfigs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline SceneConfigs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SceneConfigs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline SceneConfigs& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SceneConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline SceneConfigs& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Specific configuration content, in JSON string format.
      shared_ptr<string> config_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Configuration ID.
      shared_ptr<int64_t> id_ {};
      // Scene ID.
      shared_ptr<int64_t> sceneId_ {};
      // Configuration type.
      shared_ptr<string> type_ {};
      // Scene configuration version number.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sceneConfigs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySceneConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneConfigs Field Functions 
    bool hasSceneConfigs() const { return this->sceneConfigs_ != nullptr;};
    void deleteSceneConfigs() { this->sceneConfigs_ = nullptr;};
    inline const vector<QuerySceneConfigsResponseBody::SceneConfigs> & getSceneConfigs() const { DARABONBA_PTR_GET_CONST(sceneConfigs_, vector<QuerySceneConfigsResponseBody::SceneConfigs>) };
    inline vector<QuerySceneConfigsResponseBody::SceneConfigs> getSceneConfigs() { DARABONBA_PTR_GET(sceneConfigs_, vector<QuerySceneConfigsResponseBody::SceneConfigs>) };
    inline QuerySceneConfigsResponseBody& setSceneConfigs(const vector<QuerySceneConfigsResponseBody::SceneConfigs> & sceneConfigs) { DARABONBA_PTR_SET_VALUE(sceneConfigs_, sceneConfigs) };
    inline QuerySceneConfigsResponseBody& setSceneConfigs(vector<QuerySceneConfigsResponseBody::SceneConfigs> && sceneConfigs) { DARABONBA_PTR_SET_RVALUE(sceneConfigs_, sceneConfigs) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Willingness configuration list.
    shared_ptr<vector<QuerySceneConfigsResponseBody::SceneConfigs>> sceneConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
