// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveOpenJMeterSceneRequestOpenJMeterScene.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenJMeterScene, openJMeterScene_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenJMeterScene, openJMeterScene_);
    };
    SaveOpenJMeterSceneRequest() = default ;
    SaveOpenJMeterSceneRequest(const SaveOpenJMeterSceneRequest &) = default ;
    SaveOpenJMeterSceneRequest(SaveOpenJMeterSceneRequest &&) = default ;
    SaveOpenJMeterSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneRequest() = default ;
    SaveOpenJMeterSceneRequest& operator=(const SaveOpenJMeterSceneRequest &) = default ;
    SaveOpenJMeterSceneRequest& operator=(SaveOpenJMeterSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openJMeterScene_ == nullptr; };
    // openJMeterScene Field Functions 
    bool hasOpenJMeterScene() const { return this->openJMeterScene_ != nullptr;};
    void deleteOpenJMeterScene() { this->openJMeterScene_ = nullptr;};
    inline const SaveOpenJMeterSceneRequestOpenJMeterScene & openJMeterScene() const { DARABONBA_PTR_GET_CONST(openJMeterScene_, SaveOpenJMeterSceneRequestOpenJMeterScene) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene openJMeterScene() { DARABONBA_PTR_GET(openJMeterScene_, SaveOpenJMeterSceneRequestOpenJMeterScene) };
    inline SaveOpenJMeterSceneRequest& setOpenJMeterScene(const SaveOpenJMeterSceneRequestOpenJMeterScene & openJMeterScene) { DARABONBA_PTR_SET_VALUE(openJMeterScene_, openJMeterScene) };
    inline SaveOpenJMeterSceneRequest& setOpenJMeterScene(SaveOpenJMeterSceneRequestOpenJMeterScene && openJMeterScene) { DARABONBA_PTR_SET_RVALUE(openJMeterScene_, openJMeterScene) };


  protected:
    // The details of the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<SaveOpenJMeterSceneRequestOpenJMeterScene> openJMeterScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
