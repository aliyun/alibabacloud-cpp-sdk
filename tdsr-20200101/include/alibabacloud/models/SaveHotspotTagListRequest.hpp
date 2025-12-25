// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEHOTSPOTTAGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEHOTSPOTTAGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class SaveHotspotTagListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveHotspotTagListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotspotListJson, hotspotListJson_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveHotspotTagListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotspotListJson, hotspotListJson_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    SaveHotspotTagListRequest() = default ;
    SaveHotspotTagListRequest(const SaveHotspotTagListRequest &) = default ;
    SaveHotspotTagListRequest(SaveHotspotTagListRequest &&) = default ;
    SaveHotspotTagListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveHotspotTagListRequest() = default ;
    SaveHotspotTagListRequest& operator=(const SaveHotspotTagListRequest &) = default ;
    SaveHotspotTagListRequest& operator=(SaveHotspotTagListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotspotListJson_ == nullptr
        && return this->sceneId_ == nullptr; };
    // hotspotListJson Field Functions 
    bool hasHotspotListJson() const { return this->hotspotListJson_ != nullptr;};
    void deleteHotspotListJson() { this->hotspotListJson_ = nullptr;};
    inline string hotspotListJson() const { DARABONBA_PTR_GET_DEFAULT(hotspotListJson_, "") };
    inline SaveHotspotTagListRequest& setHotspotListJson(string hotspotListJson) { DARABONBA_PTR_SET_VALUE(hotspotListJson_, hotspotListJson) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline SaveHotspotTagListRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> hotspotListJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
