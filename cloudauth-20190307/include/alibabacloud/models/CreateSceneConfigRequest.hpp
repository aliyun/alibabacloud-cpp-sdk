// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateSceneConfigRequest() = default ;
    CreateSceneConfigRequest(const CreateSceneConfigRequest &) = default ;
    CreateSceneConfigRequest(CreateSceneConfigRequest &&) = default ;
    CreateSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSceneConfigRequest() = default ;
    CreateSceneConfigRequest& operator=(const CreateSceneConfigRequest &) = default ;
    CreateSceneConfigRequest& operator=(CreateSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->sceneId_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateSceneConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline CreateSceneConfigRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSceneConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Intention authentication configuration, as a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // Scene ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sceneId_ {};
    // Configuration type.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
