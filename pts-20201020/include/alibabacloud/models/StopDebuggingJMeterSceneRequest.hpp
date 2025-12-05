// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDEBUGGINGJMETERSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPDEBUGGINGJMETERSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class StopDebuggingJMeterSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDebuggingJMeterSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, StopDebuggingJMeterSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    StopDebuggingJMeterSceneRequest() = default ;
    StopDebuggingJMeterSceneRequest(const StopDebuggingJMeterSceneRequest &) = default ;
    StopDebuggingJMeterSceneRequest(StopDebuggingJMeterSceneRequest &&) = default ;
    StopDebuggingJMeterSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDebuggingJMeterSceneRequest() = default ;
    StopDebuggingJMeterSceneRequest& operator=(const StopDebuggingJMeterSceneRequest &) = default ;
    StopDebuggingJMeterSceneRequest& operator=(StopDebuggingJMeterSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline StopDebuggingJMeterSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the scenario that you want to stop debugging.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
