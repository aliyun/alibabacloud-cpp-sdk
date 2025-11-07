// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODYSCENECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODYSCENECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QuerySceneConfigsResponseBodySceneConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneConfigsResponseBodySceneConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneConfigsResponseBodySceneConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    QuerySceneConfigsResponseBodySceneConfigs() = default ;
    QuerySceneConfigsResponseBodySceneConfigs(const QuerySceneConfigsResponseBodySceneConfigs &) = default ;
    QuerySceneConfigsResponseBodySceneConfigs(QuerySceneConfigsResponseBodySceneConfigs &&) = default ;
    QuerySceneConfigsResponseBodySceneConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneConfigsResponseBodySceneConfigs() = default ;
    QuerySceneConfigsResponseBodySceneConfigs& operator=(const QuerySceneConfigsResponseBodySceneConfigs &) = default ;
    QuerySceneConfigsResponseBodySceneConfigs& operator=(QuerySceneConfigsResponseBodySceneConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->sceneId_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline QuerySceneConfigsResponseBodySceneConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QuerySceneConfigsResponseBodySceneConfigs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QuerySceneConfigsResponseBodySceneConfigs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QuerySceneConfigsResponseBodySceneConfigs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline QuerySceneConfigsResponseBodySceneConfigs& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySceneConfigsResponseBodySceneConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline QuerySceneConfigsResponseBodySceneConfigs& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specific configuration content, in JSON string format.
    std::shared_ptr<string> config_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Configuration ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Configuration type.
    std::shared_ptr<string> type_ = nullptr;
    // Scene configuration version number.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
