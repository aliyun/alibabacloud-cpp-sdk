// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPTSSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPTSSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class StartPtsSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPtsSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPtsSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    StartPtsSceneRequest() = default ;
    StartPtsSceneRequest(const StartPtsSceneRequest &) = default ;
    StartPtsSceneRequest(StartPtsSceneRequest &&) = default ;
    StartPtsSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPtsSceneRequest() = default ;
    StartPtsSceneRequest& operator=(const StartPtsSceneRequest &) = default ;
    StartPtsSceneRequest& operator=(StartPtsSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline StartPtsSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the scenario that you want to start, which is the ID that is returned after the scenario is created. You can view scenario IDs on the scenario list page.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
