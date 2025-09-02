// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneAddOrUpdateSceneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneAddOrUpdateSceneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scenes, scenesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneAddOrUpdateSceneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scenes, scenesShrink_);
    };
    DsgSceneAddOrUpdateSceneShrinkRequest() = default ;
    DsgSceneAddOrUpdateSceneShrinkRequest(const DsgSceneAddOrUpdateSceneShrinkRequest &) = default ;
    DsgSceneAddOrUpdateSceneShrinkRequest(DsgSceneAddOrUpdateSceneShrinkRequest &&) = default ;
    DsgSceneAddOrUpdateSceneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneAddOrUpdateSceneShrinkRequest() = default ;
    DsgSceneAddOrUpdateSceneShrinkRequest& operator=(const DsgSceneAddOrUpdateSceneShrinkRequest &) = default ;
    DsgSceneAddOrUpdateSceneShrinkRequest& operator=(DsgSceneAddOrUpdateSceneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenesShrink_ != nullptr; };
    // scenesShrink Field Functions 
    bool hasScenesShrink() const { return this->scenesShrink_ != nullptr;};
    void deleteScenesShrink() { this->scenesShrink_ = nullptr;};
    inline string scenesShrink() const { DARABONBA_PTR_GET_DEFAULT(scenesShrink_, "") };
    inline DsgSceneAddOrUpdateSceneShrinkRequest& setScenesShrink(string scenesShrink) { DARABONBA_PTR_SET_VALUE(scenesShrink_, scenesShrink) };


  protected:
    // The information about the level-2 data masking scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> scenesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
