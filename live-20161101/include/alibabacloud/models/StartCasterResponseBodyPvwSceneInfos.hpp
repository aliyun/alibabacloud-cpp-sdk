// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPVWSCENEINFOS_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPVWSCENEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCasterResponseBodyPvwSceneInfosSceneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBodyPvwSceneInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBodyPvwSceneInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SceneInfo, sceneInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBodyPvwSceneInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneInfo, sceneInfo_);
    };
    StartCasterResponseBodyPvwSceneInfos() = default ;
    StartCasterResponseBodyPvwSceneInfos(const StartCasterResponseBodyPvwSceneInfos &) = default ;
    StartCasterResponseBodyPvwSceneInfos(StartCasterResponseBodyPvwSceneInfos &&) = default ;
    StartCasterResponseBodyPvwSceneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBodyPvwSceneInfos() = default ;
    StartCasterResponseBodyPvwSceneInfos& operator=(const StartCasterResponseBodyPvwSceneInfos &) = default ;
    StartCasterResponseBodyPvwSceneInfos& operator=(StartCasterResponseBodyPvwSceneInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneInfo_ == nullptr; };
    // sceneInfo Field Functions 
    bool hasSceneInfo() const { return this->sceneInfo_ != nullptr;};
    void deleteSceneInfo() { this->sceneInfo_ = nullptr;};
    inline const vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo> & sceneInfo() const { DARABONBA_PTR_GET_CONST(sceneInfo_, vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo>) };
    inline vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo> sceneInfo() { DARABONBA_PTR_GET(sceneInfo_, vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo>) };
    inline StartCasterResponseBodyPvwSceneInfos& setSceneInfo(const vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo> & sceneInfo) { DARABONBA_PTR_SET_VALUE(sceneInfo_, sceneInfo) };
    inline StartCasterResponseBodyPvwSceneInfos& setSceneInfo(vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo> && sceneInfo) { DARABONBA_PTR_SET_RVALUE(sceneInfo_, sceneInfo) };


  protected:
    std::shared_ptr<vector<Models::StartCasterResponseBodyPvwSceneInfosSceneInfo>> sceneInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
