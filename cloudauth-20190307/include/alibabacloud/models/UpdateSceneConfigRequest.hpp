// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class UpdateSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
    };
    UpdateSceneConfigRequest() = default ;
    UpdateSceneConfigRequest(const UpdateSceneConfigRequest &) = default ;
    UpdateSceneConfigRequest(UpdateSceneConfigRequest &&) = default ;
    UpdateSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSceneConfigRequest() = default ;
    UpdateSceneConfigRequest& operator=(const UpdateSceneConfigRequest &) = default ;
    UpdateSceneConfigRequest& operator=(UpdateSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->id_ == nullptr && return this->sceneId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateSceneConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSceneConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline UpdateSceneConfigRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // Scene configuration information, in JSON format. For the specific structure definition, please refer to more information about the configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // Willingness configuration ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Selected authentication scene.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
