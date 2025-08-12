// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOS_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCasterResponseBodyPgmSceneInfosSceneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBodyPgmSceneInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBodyPgmSceneInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SceneInfo, sceneInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBodyPgmSceneInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneInfo, sceneInfo_);
    };
    StartCasterResponseBodyPgmSceneInfos() = default ;
    StartCasterResponseBodyPgmSceneInfos(const StartCasterResponseBodyPgmSceneInfos &) = default ;
    StartCasterResponseBodyPgmSceneInfos(StartCasterResponseBodyPgmSceneInfos &&) = default ;
    StartCasterResponseBodyPgmSceneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBodyPgmSceneInfos() = default ;
    StartCasterResponseBodyPgmSceneInfos& operator=(const StartCasterResponseBodyPgmSceneInfos &) = default ;
    StartCasterResponseBodyPgmSceneInfos& operator=(StartCasterResponseBodyPgmSceneInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneInfo_ != nullptr; };
    // sceneInfo Field Functions 
    bool hasSceneInfo() const { return this->sceneInfo_ != nullptr;};
    void deleteSceneInfo() { this->sceneInfo_ = nullptr;};
    inline const vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo> & sceneInfo() const { DARABONBA_PTR_GET_CONST(sceneInfo_, vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo>) };
    inline vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo> sceneInfo() { DARABONBA_PTR_GET(sceneInfo_, vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo>) };
    inline StartCasterResponseBodyPgmSceneInfos& setSceneInfo(const vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo> & sceneInfo) { DARABONBA_PTR_SET_VALUE(sceneInfo_, sceneInfo) };
    inline StartCasterResponseBodyPgmSceneInfos& setSceneInfo(vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo> && sceneInfo) { DARABONBA_PTR_SET_RVALUE(sceneInfo_, sceneInfo) };


  protected:
    std::shared_ptr<vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfo>> sceneInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
