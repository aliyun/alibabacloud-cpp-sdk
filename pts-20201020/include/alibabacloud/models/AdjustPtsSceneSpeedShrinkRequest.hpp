// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class AdjustPtsSceneSpeedShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdjustPtsSceneSpeedShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSpeedList, apiSpeedListShrink_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, AdjustPtsSceneSpeedShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSpeedList, apiSpeedListShrink_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    AdjustPtsSceneSpeedShrinkRequest() = default ;
    AdjustPtsSceneSpeedShrinkRequest(const AdjustPtsSceneSpeedShrinkRequest &) = default ;
    AdjustPtsSceneSpeedShrinkRequest(AdjustPtsSceneSpeedShrinkRequest &&) = default ;
    AdjustPtsSceneSpeedShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdjustPtsSceneSpeedShrinkRequest() = default ;
    AdjustPtsSceneSpeedShrinkRequest& operator=(const AdjustPtsSceneSpeedShrinkRequest &) = default ;
    AdjustPtsSceneSpeedShrinkRequest& operator=(AdjustPtsSceneSpeedShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSpeedListShrink_ == nullptr
        && return this->sceneId_ == nullptr; };
    // apiSpeedListShrink Field Functions 
    bool hasApiSpeedListShrink() const { return this->apiSpeedListShrink_ != nullptr;};
    void deleteApiSpeedListShrink() { this->apiSpeedListShrink_ = nullptr;};
    inline string apiSpeedListShrink() const { DARABONBA_PTR_GET_DEFAULT(apiSpeedListShrink_, "") };
    inline AdjustPtsSceneSpeedShrinkRequest& setApiSpeedListShrink(string apiSpeedListShrink) { DARABONBA_PTR_SET_VALUE(apiSpeedListShrink_, apiSpeedListShrink) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline AdjustPtsSceneSpeedShrinkRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The stress testing speed in the PTS scenario.
    std::shared_ptr<string> apiSpeedListShrink_ = nullptr;
    // The scenario ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
