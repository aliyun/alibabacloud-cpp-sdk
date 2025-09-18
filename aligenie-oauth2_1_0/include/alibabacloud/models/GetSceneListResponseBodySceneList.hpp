// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENELISTRESPONSEBODYSCENELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENELISTRESPONSEBODYSCENELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetSceneListResponseBodySceneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSceneListResponseBodySceneList& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSceneListResponseBodySceneList& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
    };
    GetSceneListResponseBodySceneList() = default ;
    GetSceneListResponseBodySceneList(const GetSceneListResponseBodySceneList &) = default ;
    GetSceneListResponseBodySceneList(GetSceneListResponseBodySceneList &&) = default ;
    GetSceneListResponseBodySceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSceneListResponseBodySceneList() = default ;
    GetSceneListResponseBodySceneList& operator=(const GetSceneListResponseBodySceneList &) = default ;
    GetSceneListResponseBodySceneList& operator=(GetSceneListResponseBodySceneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneId_ != nullptr
        && this->sceneName_ != nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetSceneListResponseBodySceneList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetSceneListResponseBodySceneList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


  protected:
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
